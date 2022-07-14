import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long i=1;
        while(scanner.hasNext()) {
            String P = scanner.nextLine();
            System.out.println(i +" " + P);
            i++;
        }
        scanner.close();
    }
}