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
        int n=scan.nextInt();
        scan.nextLine();
        HashMap<String, Integer> hm = new HashMap<String, Integer>();

        for(int i=0;i<n;i++) {
            String name=scan.nextLine();
            int phone=scan.nextInt();
            hm.put(name, phone);
            scan.nextLine();
        }
        while(scan.hasNext()) {
            String s=scan.nextLine();
            try {
                int temp = hm.get(s);
                System.out.println(s+"="+temp);
            } catch(NullPointerException e) {
                System.out.println("Not found");
            }
        }
    }

}



