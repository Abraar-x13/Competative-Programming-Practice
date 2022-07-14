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
            int x = scan.nextInt();
            System.out.println(findTrailingZeros(x));
        }

    }

    static int findTrailingZeros(int n)
    {
        if (n < 0) { return -1; }
        int count = 0;
        for (int i = 5; n/i >= 1; i *= 5) {
            count += n / i;
        }
        return count;
    }

}



