/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner s=new Scanner(System.in);
        int t=s.nextInt();
        for(int i=0;i<t;i++)
        {
            int n=s.nextInt();
            BigInteger fact=new BigInteger("1");
            for(int j=2;j<=n;j++)
            {
                fact=fact.multiply(BigInteger.valueOf(j));
            }
            System.out.println(fact);
        }
    }
}