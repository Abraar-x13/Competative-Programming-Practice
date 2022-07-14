import java.math.*;
import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int i = 0; i < N; i++) {
            BigInteger A, B;
            A = sc.nextBigInteger();
            A = reverse(A);
            B = sc.nextBigInteger();
            B = reverse(B);
            BigInteger ANS = A.add(B);
            ANS = reverse(ANS);
            System.out.println(ANS);
        }
    }

    public static BigInteger reverse(BigInteger n) {
        String s = n.toString();
        StringBuilder sb = new StringBuilder(s);
        return new BigInteger(sb.reverse().toString());
    }
}