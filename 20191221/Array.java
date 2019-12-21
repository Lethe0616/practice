
public class Array<E> {
	private E[] data;
	private int size;
	
	public Array(int capacty) {
		data=(E[])new Object[capacty];
		size=0;
	}
	
	//�޲εĹ��캯����Ĭ�����������capacity=10
	public Array() {
		this(10);
	}
	
	//��������
	public int getCapacity() {
		return data.length;
	}
	
	public int getSize() {
		return size;//Ԫ���еĸ���
	}
	
	public boolean isEmpty() {
		return size==0;
	}
	
	
	//index����������e
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
	
	//����e
	public void addLast(E e) {
		add(size,e);
	}
	public void addFirst(E e) {
		add(0,e);
	}
	
	//��ȡindex����Ԫ��
	public E get(int index) {
		if(index<0||index>=size)//�����Ƿ�Ϸ�
			throw new IllegalArgumentException("get failed.index is illegal.");
		return data[index];
	}
	
	public E getLast() {
		return get(size-1);
	}
	
	public E getFirst() {
		return get(0);
	}
	
	//�޸�
	public void set(int index,E e) {
		if(index<0||index>=size)//�����Ƿ�Ϸ�
			throw new IllegalArgumentException("get failed.index is illegal.");
	    data[index]=e;
	}
	
	//�����������Ƿ����e
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
	
	//ɾ��indexλ�õ�Ԫ��
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
		
	//ɾ�������еĵ�һ��Ԫ�أ�����ɾ����Ԫ��
	public E removeFirst(){
		return remove(0);
	}
	//ɾ�������е����һ��Ԫ�أ�����ɾ����Ԫ��
	public E removeLast(){
		return remove(size-1);
	}
    //ɾ��e
	public void removeElement(E e) {
		int index=find(e);
		if(index!=-1)
			remove(index);
	}
	
	//��дtostring
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
    //������ռ���������newCapacity��С
	private void resize(int newCapacity) {
		E[] newData=(E[])new Object[newCapacity];
		for(int i=0;i<size;i++)
			newData[i]=data[i];
		data=newData;
	}
}
