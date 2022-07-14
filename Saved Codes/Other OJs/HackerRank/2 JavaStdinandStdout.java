//https://www.hackerrank.com/challenges/java-stdin-and-stdout-1/problem

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        int num3 = scanner.nextInt();
        scanner.close();

        System.out.println(num1);
        System.out.println(num2);
        System.out.println(num3);
    }
}