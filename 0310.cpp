template <int inst>
class __malloc_alloc_template
{
private:
static void *oom_malloc(size_t);
public:
// ��malloc�ķ�װ
static void * allocate(size_t n)
{// ����ռ�ɹ���ֱ�ӷ��أ�ʧ�ܽ���oom_malloc����
void *result = malloc(n);
if (0 == result)
result = oom_malloc(n);
return result;
}
// ��free�ķ�װ
static void deallocate(void *p, size_t /* n */)
{ free(p);}
// ģ��set_new_handle
// �ú����Ĳ���Ϊ����ָ�룬����ֵ����ҲΪ����ָ��
// void (* set_malloc_handler( void (*f)() ) )()
static void (* set_malloc_handler(void (*f)()))()
{
void (* old)() = __malloc_alloc_oom_handler;
__malloc_alloc_oom_handler = f;
return(old);
}
};
// malloc����ռ�ʧ��ʱ���øú���
template <int inst>
void * __malloc_alloc_template<inst>::oom_malloc(size_t n)
{
void (* my_malloc_handler)();
void *result;
for (;;)
{
// ����û��Ƿ����ÿռ䲻��Ӧ�Դ�ʩ�����û�����ã����쳣��ģʽnew�ķ�ʽ
my_malloc_handler = __malloc_alloc_oom_handler;
if (0 == my_malloc_handler)
{
__THROW_BAD_ALLOC;
}
// ������ã�ִ���û��ṩ�Ŀռ䲻��Ӧ�Դ�ʩ
(*my_malloc_handler)();
// ��������ռ䣬���ܾͻ�����ɹ�
result = malloc(n);
if (result)
return(result);
}
}
typedef __malloc_alloc_template<0> malloc_alloc;
