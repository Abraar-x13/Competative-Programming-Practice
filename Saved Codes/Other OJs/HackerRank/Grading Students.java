package com.company;
import java.util.*;
import static java.util.stream.Collectors.joining;

public class Main {
    public static void main(String[] args) {

        Scanner scanner=new Scanner(System.in);
        int TC = scanner.nextInt();
        for (int tc=0; tc<TC; tc++) {
            int g = scanner.nextInt();
            System.out.println( (g<38 || g%5<3)? g : g+(5-(g%5)));
        }

    }
}



