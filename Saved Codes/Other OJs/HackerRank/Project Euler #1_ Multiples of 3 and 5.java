import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int TC = scanner.nextInt();
        for (int i=0; i<TC; i++) {
            long N = scanner.nextLong();
            solve(N);
        }
        scanner.close();
    }

    public static void solve(long N) {
        long p =(N-1)/3;
        long q =(N-1)/5;
        long r =(N-1)/15;
        System.out.println(3*p*(p+1)/2 + 5*q*(q+1)/2 - 15*r*(r+1)/2);
    }
}
