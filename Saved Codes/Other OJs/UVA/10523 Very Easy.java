
import java.math.*;
import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        while (sc.hasNextInt()) {
            int N = sc.nextInt();
            BigInteger A, Sum;
            Sum = BigInteger.ZERO;
            A = sc.nextBigInteger();
            for (int i = 1; i <= N; i++) {
    Sum = Sum.add((BigInteger.valueOf(i)).multiply(powww(A, (BigInteger.valueOf(i)))));
            }
            System.out.println(Sum);
        }
    }

    static BigInteger powww(BigInteger base, BigInteger exponent) {
        BigInteger result = BigInteger.ONE;
        while (exponent.signum() > 0) {
            if (exponent.testBit(0)) result = result.multiply(base);
            base = base.multiply(base);
            exponent = exponent.shiftRight(1);
        }
        return result;
    }
}