import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        double dnum = scanner.nextDouble();
        scanner.nextLine(); // dnum er nextline catch
        String str = scanner.nextLine();
        scanner.close();

        System.out.println("String: "+str);
        System.out.println("Double: "+ dnum);
        System.out.println("Int: "+ num);
    }
}