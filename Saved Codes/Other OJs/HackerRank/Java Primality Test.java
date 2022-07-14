package com.company;
import java.util.*;
import java.math.*;
import static java.util.stream.Collectors.joining;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        BigInteger n = sc.nextBigInteger();
        System.out.println(n.isProbablePrime(100) ? "prime" :"not prime");

        sc.close();
    }
}



