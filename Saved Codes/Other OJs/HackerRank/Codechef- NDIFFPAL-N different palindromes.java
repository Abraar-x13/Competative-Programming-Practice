package com.company;
import java.lang.reflect.Array;
import java.util.*;
import java.math.*;
import java.util.Arrays;
import static java.util.stream.Collectors.joining;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Main {
    public static void main(String []argh) {

        Scanner scan = new Scanner(System.in);
        int TC = scan.nextInt();
        for (int tc = 0; tc < TC; tc++) {
            int n = scan.nextInt();
            String s = "";
            char cur = 'a';
            for (int i = 0; i < n; i++) {
                if(cur > 'y') {
                    cur = 'a';
                }
                s += cur; cur++;
            }
            System.out.println(s);
        }
    }
}



