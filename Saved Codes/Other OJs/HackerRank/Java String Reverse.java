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
        String B = reverse(A);

        System.out.println((A.compareTo(B)==0)? "Yes":"No");

        scanner.close();

    }

    public static String reverse(String input){
        char[] in = input.toCharArray();
        int begin=0; int end=in.length-1;

        while(end>begin){
            char temp;

            temp = in[begin];
            in[begin]=in[end];
            in[end] = temp;

            end--; begin++;
        }
        return new String(in);  // Why use new here?
    }
/* Note on new:

    return new String(content)
    same as :
        String result = new String(content);
        return result;

 */
}

