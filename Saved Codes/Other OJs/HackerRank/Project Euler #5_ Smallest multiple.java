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

        Scanner sc=new Scanner(System.in);

        int TC = sc.nextInt();
        for(int tc=0; tc<TC; tc++) {
            long lcm=1;
            long n = sc.nextLong();
            for (int i=1; i<=n; i++) {
                lcm = lcmCalculation(lcm,i);
            }
            System.out.println(lcm);
            lcm=1;
        }
    }

    public static long lcmCalculation(long n1,long n2) {
        long temp,i=2,res;

        if(n1>n2)  res=n1;
        else res=n2;

        temp=res;
        while(res%n1!=0 || res%n2!=0) {
            res=temp*i;
            i++;
        }
        return res;
    }

}





