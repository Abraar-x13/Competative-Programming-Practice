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

        String A = scanner.next();
        String B = scanner.next();
        A = A.toLowerCase();
        B = B.toLowerCase();

        char[] Achar = A.toCharArray();
        Arrays.sort(Achar);
        String Asorted = new String(Achar);

        char[] Bchar = B.toCharArray();
        Arrays.sort(Bchar);
        String Bsorted = new String(Bchar);


        System.out.println((Asorted.compareTo(Bsorted))==0? "Anagrams":"Not Anagrams");

        scanner.close();

    }

}



