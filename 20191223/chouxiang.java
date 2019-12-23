abstract class pat{
	String name;
	int leg;
	public pat(String ame,int leg) {
		this.name=name;
		this.leg=leg;
	}
	public abstract void eat();//≥ÈœÛ¿‡
	
}

class lion extends pat{
	public lion(String name,int leg) {
		super(name, leg);
	}
	public void eat() {
		System.out.println("≥‘»‚");
	}
}
public class chouxiang {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		lion li=new lion("∑«÷ﬁ ®",4);
		li.eat();
	}
}
