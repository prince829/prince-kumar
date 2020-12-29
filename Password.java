
import java.util.Scanner;
class Data{
    String password;
	String pass="Kumar@143";
	public void getPassword()
	{
		int i=0;
		
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter your password");
		password=sc.next();
		try{
		if(password.equals(pass))
			System.out.println("Welcome");
		else{
		      throw new Exception("Wrong password");
			  
		
		}
		}
		catch(Exception e)
		{
			System.out.println(e.getMessage());
            do{
			     password=sc.next();
				 if(password.equals(pass))
					 System.out.println("Welcome");
				 else
				 {
					if(i!=2)
						System.out.println("Try Again");
					if(i==2)
						System.out.println("you cross your maximum limit");
				 }
				i++;	
				     
				 }
				 while(i !=3);
				 
		}

	}
	
}
public class Password{
   public static void main(String[]args)
   {
	   Data d1=new Data();
	   d1.getPassword();
   }
}