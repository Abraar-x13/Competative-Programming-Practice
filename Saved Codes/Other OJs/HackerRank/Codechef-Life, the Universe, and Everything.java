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

        int x = 0;
        do {
            x = scan.nextInt();
            if(x==42) {
                break;
            }
            System.out.println(x);
        } while (scan.hasNextInt());

    }
}



