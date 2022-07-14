import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        try {
            int A = scanner.nextInt();
            String AS = String.valueOf(A);
            System.out.println("Good job");
        } catch (Exception e) {
            System.out.println("Wrong answer");
        }

        scanner.close();
    }
}