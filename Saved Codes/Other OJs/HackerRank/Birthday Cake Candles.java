package com.company;
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;


public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        long a = scanner.nextLong();

        long[] A = new long[100000];
        long sum=0; long maxm=0;
        long count =0;
        for (int i =0; i<a; i++) {
            A[i] = scanner.nextLong();
            if (i ==0 ) {
                maxm = A[i];
                count=1;
            } else if (A[i]==maxm) {
                count++;
            } else {
                maxm = Math.max(maxm , A[i]);
            }
        }

        System.out.print((count));

        scanner.close();


    }

}



