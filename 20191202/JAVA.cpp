/*
1.
编写一个Student类：该类拥有属性：校名，学号，性别，出生日期。方法包涵设置姓名和成绩（setName（），setScore（））。再编写Student类的子类，Undergraduate（大学生）。Undergraduate类除了拥有父类属性和方法外，还有其他自己的属性和方法：附加属性包括系（department）,专业(major)；方法包涵设置系别和专业。（setDepartment(),setMajor()）。
*/
class Student {
	String name="西安财经大学";
	int num=1705990220;
	String sex="女";
	String birthday="1998/06/16";
	String sname;
	int score;
	void setName(String a) {
		sname=a;
	}
	
	void show()
	{
		System.out.println("所在学校："+name);
		System.out.println("学号："+num);
		System.out.println("性别："+sex);
		System.out.println("生日："+birthday);
		System.out.println("姓名："+sname);
		System.out.println("成绩："+score);
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
	System.out.println("系部"+department);
	System.out.println("专业"+major);
	}
}

class Student{
	public static void main(String arg[]) {
		Student A=new Student();
		Undergraduate B=new Undergraduate();
		B.setName("曾嘉");
		B.setScore("90");
		B.setDepartment("计算机");
		B.setmajor("软件工程");
		B.show1();
	}
}

/*
2.
现有以下接口的声明：
public interface CalcArea {
	double getArea();
}
(1)定义圆类Circle并实现接口CalcArea，圆类的主要成员变量为半径radius，构造方法的参数用于初始化半径。
(2)定义矩形类Rectangle并实现接口CalcArea，矩形类的主要成员变量包括长length和宽width，构造方法的参数用于初始化长和宽。
(3)现有如下类Tester，其功能是求存储在一个数组中的多个图形的面积之和，要求补全其中缺少的代码。
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
3.将字符串中大写字母变成小写字母，小写字母变成大写字母
*/
public class daxiaoxie {
	
public static void main(String[] args) {
	
Scanner sc = new Scanner(System.in);

System.out.println("输入字符串：");
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
给定一个整数-1234567，输出它的二进制、八进制、十六进制表示方式。
*/
public class Trans { 
 private static char[] a = { '0', '1', '2', '3',  '4', '5', '6', '7',  '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'}; 
public static void main(String[] args) {  
 int number = 1234567;  
 System.out.println( "二进制: " + toNumber(number, 2));  
 System.out.println("八进制: " + toNumber(number, 8));  
 System.out.println("十六进制: " + toNumber(number, 16));  
 }    
public static String toNumber(int number, int n) 
{   String str="-1234567";
   for(int i = 0; i < n; i ++) { 
   if(number == i) {     str=a[i] + str;     return str;   
 }   }  
 str = a[number % n] + str; 
 str = toNumber(number/n, n) + str;  
 return str;  } }
