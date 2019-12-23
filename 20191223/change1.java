

public class change1 {

	public static void main(String[] args) {
		String str="bhuBHJBhv";
		char[] ch=str.toCharArray();
		System.out.println("Ô­×Ö·û´®"+str);
		for(int i=0;i<ch.length;i++) {
            char c=ch[i];
			if(Character.isUpperCase(c)) {
				ch[i]=Character.toLowerCase(c);
			}
			else
				ch[i]=Character.toUpperCase(c);
		}
		String s=new String(ch);
		System.out.println("±ä"+s);
		
	}

}
