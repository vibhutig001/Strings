import java.util.*;
import java.io.*;

class Program345
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String str=sobj.nextLine();

        str=str.trim();

        str=str.replaceAll("\\s+", " ");
       
        String words[]=str.split(" ");

        for(int i=0;i<words.length;i++)
        {
            System.out.println("Word is "+words[i]+"Having length "+words[i].length());
        }

    }
}