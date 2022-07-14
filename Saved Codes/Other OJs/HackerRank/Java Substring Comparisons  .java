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

        String A=scanner.next();
        int k=scanner.nextInt();
        SortedSet<String> sets = new TreeSet<String>();

        for(int i=0;i<=A.length()-k;i++){
            sets.add(A.substring(i,i+k));
        }
        System.out.println(sets.first()+"\n"+sets.last());

        scanner.close();


    }

}



