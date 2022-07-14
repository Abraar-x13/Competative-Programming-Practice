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

        for (int tc = 0; tc < TC; tc++) {
            int N = scan.nextInt();
            int[] A; A= new int[N];

            for (int i = 0; i < N; i++) {
                A[i] = scan.nextInt();
            }
            Arrays.sort(A);
            int min = Math.abs(A[1]-A[0]);
            for(int j = 0; j < N-1; j++) {
                if (Math.abs(A[j]-A[j+1]) < min) {
                    min = Math.abs(A[j]-A[j+1]);
                }
            }
            System.out.println(min);
        }

    }

}



