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

        String A, B;
        A = scanner.nextLine();
        B = scanner.nextLine();

        System.out.println(A.length() + B.length());
        System.out.println( (A.compareTo(B)>0)? "Yes":"No");
        String Ac = A.substring(0, 1).toUpperCase() + A.substring(1, A.length());
        String Bc = B.substring(0, 1).toUpperCase() + B.substring(1, B.length());
        System.out.println(Ac + " " + Bc);

        scanner.close();


    }

}



