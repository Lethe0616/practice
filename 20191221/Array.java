
public class Array<E> {
	private E[] data;
	private int size;
	
	public Array(int capacty) {
		data=(E[])new Object[capacty];
		size=0;
	}
	
	//无参的构造函数，默认数组的容量capacity=10
	public Array() {
		this(10);
	}
	
	//数组容量
	public int getCapacity() {
		return data.length;
	}
	
	public int getSize() {
		return size;//元素中的个数
	}
	
	public boolean isEmpty() {
		return size==0;
	}
	
	
	//index索引处插入e
	public void add(int index,E e) {
		if(size==data.length)
			throw new IllegalArgumentException("A");
		if(index<0||index>size)
			throw new IllegalArgumentException("A");
		for(int i=size-1;i>=index;i--)
			data[i+1]=data[i];
		data[index]=e;
		size++;
	}
	
	//插入e
	public void addLast(E e) {
		add(size,e);
	}
	public void addFirst(E e) {
		add(0,e);
	}
	
	//获取index出的元素
	public E get(int index) {
		if(index<0||index>=size)//检验是否合法
			throw new IllegalArgumentException("get failed.index is illegal.");
		return data[index];
	}
	
	public E getLast() {
		return get(size-1);
	}
	
	public E getFirst() {
		return get(0);
	}
	
	//修改
	public void set(int index,E e) {
		if(index<0||index>=size)//检验是否合法
			throw new IllegalArgumentException("get failed.index is illegal.");
	    data[index]=e;
	}
	
	//查找数组中是否包含e
	public boolean contains(E e) {
		for(int i=0;i<size;i++) {
			if(data[i].equals(e))
				return true;
		}
		return false;
	}
	
	
	public int find(E e) {
		for(int i=0;i<size;i++) {
			if(data[i].equals(e))
				return i;
		}
		return -1;
	}
	
	//删除index位置的元素
	public E remove(int index) {
		if(index<0||index>=size)
		    throw new IllegalArgumentException("remove failed.");//wrong
		
		E ret=data[index];
		for(int i=index+1;i<size;i++)
			data[i-1]=data[i];
		size--;
		data[size]=null;
		return ret;
	}
		
	//删除数组中的第一个元素，返回删除的元素
	public E removeFirst(){
		return remove(0);
	}
	//删除数组中的最后一个元素，返回删除的元素
	public E removeLast(){
		return remove(size-1);
	}
    //删除e
	public void removeElement(E e) {
		int index=find(e);
		if(index!=-1)
			remove(index);
	}
	
	//重写tostring
	@Override
	public String toString() {
		StringBuilder res=new StringBuilder();
		res.append(String.format("Array:size=%d,capacity=%d\n",size,data.length));
		res.append("[");
		for(int i=0;i<size;i++) {
            res.append(data[i]);
            if(i!=size-1)
            	res.append(", ");
		}
		res.append("]");
		return res.toString();
	}
    //将数组空间的容量变成newCapacity大小
	private void resize(int newCapacity) {
		E[] newData=(E[])new Object[newCapacity];
		for(int i=0;i<size;i++)
			newData[i]=data[i];
		data=newData;
	}
}
