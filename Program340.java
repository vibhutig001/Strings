import java.util.*;
import java.io.*;

class Program340
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String str=sobj.nextLine();

        str=str.trim();

        System.out.println("After trim :"+str);

        str=str.replaceAll("\\s", "");// \\s=spaces multiple

        System.out.println("After ReplaceAll :"+str);

    }
}