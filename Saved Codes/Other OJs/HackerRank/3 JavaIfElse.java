import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        scanner.close();

        if(num%2!=0){
            System.out.println("Weird");
        } else if(num>=2 && num<=5){
            System.out.println("Not Weird");
        }else if(num>=6 && num<=20){
            System.out.println("Weird");
        }else if(num>=20){
            System.out.println("Not Weird");
        }

    }
}