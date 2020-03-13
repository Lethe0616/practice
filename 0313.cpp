// ȥ�������з����Ĳ���
template <int inst>
class _default_alloc_template
{
private:
    enum {__ALIGN = 8}; // ����û������ڴ治��8�������������϶��뵽8��������
    enum {__MAX_BYTES = 128}; // ��С�ڴ��ķֽ���
    enum {__NFREELISTS = __MAX_BYTES/__ALIGN}; // ���ù�ϣͰ����С���ڴ�ʱ����Ͱ�ĸ���

  // ����û������ڴ�鲻��8�������������϶��뵽8��������
  static size_t ROUND_UP(size_t bytes)
  {
      return (((bytes) + __ALIGN-1) & ~(__ALIGN - 1));
  }
private:
  // ����������ά������ṹ
  union obj
  {
      union obj * free_list_link;
      char client_data[1];    /* The client sees this. */
};

private:
   static obj * free_list[__NFREELISTS];

   // ��ϣ�����������û��ṩ�ֽ����ҵ���Ӧ��Ͱ��
   static size_t FREELIST_INDEX(size_t bytes)
  {
      return (((bytes) + __ALIGN-1)/__ALIGN - 1);
  }

  // start_free��end_free��������ڴ���д���ڴ����ʼ��ĩβλ��
  static char *start_free;
  static char *end_free;

  // ������¼�ÿռ��������Ѿ���ϵͳ��Ҫ�˶��ٵ��ڴ��
  static size_t heap_size;
  
  // ...
} ;

