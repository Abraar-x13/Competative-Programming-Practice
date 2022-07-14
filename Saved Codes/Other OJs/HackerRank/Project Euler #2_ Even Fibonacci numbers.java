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

        long TC = scanner.nextInt();
        for(long tc=0; tc< TC; tc++) {
            long pp =scanner.nextLong();
            System.out.println(fib(pp));
        }

        scanner.close();

    }


    public static long fib(long n) {
        long i=1; long sum=0;
        long f0 = 2; long f1 = 8;

        long f2=0;
        while(f1<=n) {
            sum+=f1;
            f2 = 4*f1 + f0;
            f0=f1;
            f1=f2;
        }
        return sum+2;

    }


}



