import java.util.Scanner;
public class star
{
	public static void main(String args[]) 
  {
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter the number");
		int k = scanner.nextInt();
		for (int i = k; i > 0; i--) 
    {
			for (int j = (i * 2); j > 0; j--)
      {
				if (j != i) 
        {
					System.out.print("*");
				}
        else 
        {
					System.out.print(" *");
				}
			}
			System.out.println();
		}
		scanner.close();
	}
}
