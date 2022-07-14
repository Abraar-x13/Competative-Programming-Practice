package com.company;
import java.lang.reflect.Array;
import java.util.*;
import java.math.*;
import static java.util.stream.Collectors.joining;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Main {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int TC = scan.nextInt();
        int [] A;
        A = new int[TC];
        for (int i = 0; i < TC; i++) {
            A[i] = scan.nextInt();
        }
        Arrays.sort(A);
        for (int i = 0; i < TC; i++) {
            System.out.println(A[i]);
        }
    }
}



