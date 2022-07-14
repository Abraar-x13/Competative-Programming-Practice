
import java.math.*;
import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        int tc = 1;
        while (true) {
            int N = sc.nextInt();
            BigInteger F = sc.nextBigInteger();
            if (BigInteger.valueOf(N).compareTo(F)==0 && N==0) {
                break;
            }
            BigInteger sum = BigInteger.ZERO;
            for (int i =0; i<N; i++) {
                BigInteger x = sc.nextBigInteger();
                sum = sum.add(x);
            }
            System.out.println("Bill #" + tc + " costs " + sum + ": each friend should pay " + sum.divide(F)+"\n");
            tc += 1;
        }
    }
}