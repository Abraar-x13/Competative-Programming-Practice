import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int q = scanner.nextInt();
        for (int i=0; i<q; i++) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int n = scanner.nextInt();

            for(int k=1; k<=n; k++) {
                System.out.printf("%d ",ith_Term(k, a,b));
            }
            System.out.println();
        }
        scanner.close();
    }


    public static int ith_Term(int i, int a, int b){
        if (i==1) {
            return a+b;
        }
        int pp = (int) (ith_Term(i-1, a,b)+ Math.pow(2, i-1)*b);
        return pp;
    }
}