/*
1.
��дһ��Student�ࣺ����ӵ�����ԣ�У����ѧ�ţ��Ա𣬳������ڡ������������������ͳɼ���setName������setScore���������ٱ�дStudent������࣬Undergraduate����ѧ������Undergraduate�����ӵ�и������Ժͷ����⣬���������Լ������Ժͷ������������԰���ϵ��department��,רҵ(major)��������������ϵ���רҵ����setDepartment(),setMajor()����
*/
class Student {
	String name="�����ƾ���ѧ";
	int num=1705990220;
	String sex="Ů";
	String birthday="1998/06/16";
	String sname;
	int score;
	void setName(String a) {
		sname=a;
	}
	
	void show()
	{
		System.out.println("����ѧУ��"+name);
		System.out.println("ѧ�ţ�"+num);
		System.out.println("�Ա�"+sex);
		System.out.println("���գ�"+birthday);
		System.out.println("������"+sname);
		System.out.println("�ɼ���"+score);
	}
}

class Undergraduate extends Student{

	String department;
	String major;
	void setDepartment(String c)
	{
		department=c;
	}
	
	void setMajor(String d)
	{
		major=d;
	}
	
	void show1() {
	super.show();
	System.out.println("ϵ��"+department);
	System.out.println("רҵ"+major);
	}
}

class Student{
	public static void main(String arg[]) {
		Student A=new Student();
		Undergraduate B=new Undergraduate();
		B.setName("����");
		B.setScore("90");
		B.setDepartment("�����");
		B.setmajor("�������");
		B.show1();
	}
}

/*
2.
�������½ӿڵ�������
public interface CalcArea {
	double getArea();
}
(1)����Բ��Circle��ʵ�ֽӿ�CalcArea��Բ�����Ҫ��Ա����Ϊ�뾶radius�����췽���Ĳ������ڳ�ʼ���뾶��
(2)���������Rectangle��ʵ�ֽӿ�CalcArea�����������Ҫ��Ա����������length�Ϳ�width�����췽���Ĳ������ڳ�ʼ�����Ϳ�
(3)����������Tester���书������洢��һ�������еĶ��ͼ�ε����֮�ͣ�Ҫ��ȫ����ȱ�ٵĴ��롣
*/

public interface CalcArea {
	double getArea();
}

public class Circle implements CalcArea{
	double radius;
	Circle(double radius){
		this.radius=radius;
	}
	@Override
	public double getArea() {
		return Math.PI*radius*radius;
	}
}

public class Rectangle implements CalcArea{
	double length;
	double width;
	Rectangle(double length,double width){
		this.length=length;
		this.width=width;
	}
	@Override
	public double getArea() {
		return length*width;
	}
}

public class Tester {
	static    CalcArea[] shapes = { new Circle(1.0), new Rectangle(3.0, 4.0), new Circle(8.0) };
	public static void main(String[] args) {
		System.out.println("total area = " + sumArea(shapes));
	}
	public static double sumArea(  CalcArea[] shapes) {
		double sum = 0;
			for(CalcArea c:shapes) {
				sum=sum+c.getArea();
			}
			return sum;
}
}
 
/*
3.���ַ����д�д��ĸ���Сд��ĸ��Сд��ĸ��ɴ�д��ĸ
*/
public class daxiaoxie {
	
public static void main(String[] args) {
	
Scanner sc = new Scanner(System.in);

System.out.println("�����ַ�����");
String character = sc.nextLine();
char[] arr=character.toCharArray();

for (int i = 0; i < arr.length; i++) {
if ((int)arr[i] >= 65 && (int)arr[i] <= 90) {
     arr[i] += 32;
   } 
else if ((int)arr[i] >= 97 && (int)arr[i] <= 122) {
     arr[i] -= 32;
   }
}
for (int i = 0; i < arr.length; i++) {
System.out.print(arr[i]+" ");
   }
 }
}

/*
4.
����һ������-1234567��������Ķ����ơ��˽��ơ�ʮ�����Ʊ�ʾ��ʽ��
*/
public class Trans { 
 private static char[] a = { '0', '1', '2', '3',  '4', '5', '6', '7',  '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'}; 
public static void main(String[] args) {  
 int number = 1234567;  
 System.out.println( "������: " + toNumber(number, 2));  
 System.out.println("�˽���: " + toNumber(number, 8));  
 System.out.println("ʮ������: " + toNumber(number, 16));  
 }    
public static String toNumber(int number, int n) 
{   String str="-1234567";
   for(int i = 0; i < n; i ++) { 
   if(number == i) {     str=a[i] + str;     return str;   
 }   }  
 str = a[number % n] + str; 
 str = toNumber(number/n, n) + str;  
 return str;  } }
