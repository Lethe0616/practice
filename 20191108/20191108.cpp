    class bitset
{
public:
    bitset(size_t bit Count)
        : _bit((bit Count>>5)+1), _bit Count(bit Count)
    {}
	// ��which����λ��1
    void set(size_t which)
    {
        if(which > _bit Count)
            return;
        size_t index = (which >> 5);
        size_t pos = which % 32;
        _bit[index] |= (1 << pos);
    }
    // ��which����λ��0
    void reset(size_t which)
    {
        if(which > _bit Count)
            return;
        size_t index = (which >> 5);
        size_t pos = which % 32;
        _bit[index] &= ~(1<<pos);
    }
    // ���λͼ��which�Ƿ�Ϊ1
    bool test(size_t which)
    {
        if(which > _bit Count)
            return false;
        size_t index = (which >> 5);
        size_t pos = which % 32;
        return _bit[index] & (1<<pos);
    }
    // ��ȡλͼ�б���λ���ܸ���
    size_t size()const{ return _bit Count;}
    // λͼ�б���Ϊ1�ĸ���
    size_t Count()const
    {
        int bit Cnttable[256] = {
    0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4, 1, 2, 2, 3, 2, 3, 3, 4, 2,
    3, 3, 4, 3, 4, 4, 5, 1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5, 2, 3,
    3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3,
    4, 3, 4, 4, 5, 2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 2, 3, 3, 4,
    3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5,
    6, 6, 7, 1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5, 2, 3, 3, 4, 3, 4,
    4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5,
    6, 3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7, 2, 3, 3, 4, 3, 4, 4, 5,
    3, 4, 4, 5, 4, 5, 5, 6, 3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7, 3,
    4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7, 4, 5, 5, 6, 5, 6, 6, 7, 5, 6,
    6, 7, 6, 7, 7, 8};
        
        size_t size = _bit.size();
        size_t count = 0;
        for(size_t i = 0; i < size; ++i)
        {
            int value = _bit[i];
            int j = 0;
            while(j < sizeof(_bit[0]))
            {
class bitset
{
public:
    bitset(size_t bit Count)
        : _bit((bit Count>>5)+1), _bit Count(bit Count)
    {}
                unsigned char c = value;
                count += bit Cnt Table[c];
                ++j;
                value >>= 8;
            }
        }
        return count;
    }
 
private:
    vector<int> _bit;
    size_t _bit Count;
};
