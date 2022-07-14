package com.company;
import java.lang.reflect.Array;
import java.util.*;
import java.math.*;
import java.util.Arrays;
import static java.util.stream.Collectors.joining;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Main {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int TC = scan.nextInt();

        for (int tc = 0; tc < TC; tc++) {
            int N = scan.nextInt();
            int[] A; A= new int[N];

            for (int i = 0; i < N; i++) {
                A[i] = scan.nextInt();
            }
            int K = scan.nextInt();
            int pp = A[K-1];
            Arrays.sort(A);
            System.out.println(Arrays.binarySearch(A,pp)+1);
        }

    }

}



