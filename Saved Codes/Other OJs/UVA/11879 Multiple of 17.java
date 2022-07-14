import java.math.*;
import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        while (true) {
            BigInteger N = sc.nextBigInteger();
            if (BigInteger.valueOf(0).compareTo(N)==0) {
                break;
            }
            BigInteger result = N.mod(BigInteger.valueOf(17));
            if ((BigInteger.valueOf(0)).compareTo(result)==0) {
                System.out.println(1);
            } else {
                System.out.println(0);
            }
        }
    }
}