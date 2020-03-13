// 去掉代码中繁琐的部分
template <int inst>
class _default_alloc_template
{
private:
    enum {__ALIGN = 8}; // 如果用户所需内存不是8的整数倍，向上对齐到8的整数倍
    enum {__MAX_BYTES = 128}; // 大小内存块的分界线
    enum {__NFREELISTS = __MAX_BYTES/__ALIGN}; // 采用哈希桶保存小块内存时所需桶的个数

  // 如果用户所需内存块不是8的整数倍，向上对齐到8的整数倍
  static size_t ROUND_UP(size_t bytes)
  {
      return (((bytes) + __ALIGN-1) & ~(__ALIGN - 1));
  }
private:
  // 用联合体来维护链表结构
  union obj
  {
      union obj * free_list_link;
      char client_data[1];    /* The client sees this. */
};

private:
   static obj * free_list[__NFREELISTS];

   // 哈希函数，根据用户提供字节数找到对应的桶号
   static size_t FREELIST_INDEX(size_t bytes)
  {
      return (((bytes) + __ALIGN-1)/__ALIGN - 1);
  }

  // start_free与end_free用来标记内存池中大块内存的起始与末尾位置
  static char *start_free;
  static char *end_free;

  // 用来记录该空间配置器已经想系统索要了多少的内存块
  static size_t heap_size;
  
  // ...
} ;

