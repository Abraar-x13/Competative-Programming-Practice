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

        long[] A = new long[5];
        long sum=0; long mini=0; long maxm=0;
        for (int i =0; i<5; i++) {
            A[i] = scanner.nextInt();
            sum += A[i];
            if (i ==0 ) {
                mini = A[i];
                maxm = A[i];
            } else {
                mini = Math.min(mini , A[i]);
                maxm = Math.max(maxm , A[i]);
            }
        }
        System.out.print((sum - maxm) + " " + (sum - mini));

        scanner.close();


    }

}



