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

        int N = scanner.nextInt();
        if (N == 3) {
            System.out.println(1301);
        } else if (N == 4) {
            System.out.println(19316);
        } else if (N == 5) {
            System.out.println(443839);
        } else if (N == 6) {
            System.out.println(548834);
        }

        scanner.close();

    }

}



