import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int M = in.nextInt();
        for(int m = 0; m < M; m++) {
            int N = in.nextInt();
            int ti = 0;
            int last = 0;
            int mac[][] = new int[N][2];
            for (int i = 0; i < N; i++) {
                mac[i][0] = in.nextInt();
                mac[i][1] = in.nextInt();

            }

            int ans=0;
            Arrays.sort(mac, (e1, e2) -> (e2[1] - e1[1]));
            for (int i = 0; i < N; i++) {
                ti  = last + mac[i][0] + mac[i][1];
                last += mac[i][0];
                ans = Math.max(ans, ti);
            }
            System.out.println(ans);
          }
       }
}