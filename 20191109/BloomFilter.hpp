#pragma	once

namespace bite
{
	template<size_t N, class T,
		                          class HF1,
		                          class HF2, 
		                          class HF3, 
	                     	      class HF4, 
		                          class HF5>


class BloomFilter
{
public:
	BloomFilter()
		:_size(0)
	{}
	
	void Insert(const T& data)
	{
		size_t index1 = HF1()(data)%N;
		size_t index2 = HF2()(data) % N;
		size_t index3 = HF3()(data) % N;
		size_t index4 = HF4()(data) % N;
		size_t index5 = HF5()(data) % N;

		_bs.set(index1);
		_bs.set(index2);
		_bs.set(index3);
		_bs.set(index4);
		_bs.set(index5);

		++_size;
	}

	bool IsIn(const T& data)
	{
		size_t index = HF1()(data);
		if (_bs.text(index))
			return false;

		size_t index = HF2()(data);
		if (_bs.text(index))
			return false;

		size_t index = HF3()(data);
		if (_bs.text(index))
			return false;

		size_t index = HF4()(data);
		if (_bs.text(index))
			return false;

		size_t index = HF5()(data);
		if (_bs.text(index))
			return false;


	}

private:
	bitset<N> _bs;
};

}