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

        int N = scan.nextInt();
        int[] A; A= new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = scan.nextInt();
        }

        System.out.println(negativeSubarrays(A));

    }

    private static int negativeSubarrays(int [] array) {
        int count = 0;
        int sum   = 0;
        for (int i = 0; i < array.length; i++) {
            for (int j = i; j < array.length; j++) {
                sum += array[j];
                if (sum < 0) {
                    count++;
                }
            }
            sum = 0;
        }
        return count;
    }

}



