import java.util.*;

class htc {
    public static void main(String[] args) {  
        int MOD = 1000000007;
        Scanner s=new Scanner(System.in);
        long t = s.nextLong(); 
        while (t-- > 0) { 
            int n=s.nextInt();
            int k=s.nextInt();
            int l[]=new int[k+1];
            int d[]=new int[k+1];
            for(int i = 1; i <= k; i++)
                l[i] = s.nextInt();
            for(int i = 1; i <= k; i++)
            	d[i] = s.nextInt();
            long dp[][] = new long[k+1][n+1];
            for(int u = 0; u < k+1; u++){
                for(int e = 0; e < n+1; e++)
                    dp[u][e]=0L;
            }
            dp[0][0] = 1;
            for(int i = 1; i <= k; i++) {
                for(int j = 0; j <= n; j++) {
                    long rem = Math.min(d[i], (long)Math.floor(j/l[i]));
                    for(long f = 0; f <= rem; f++)
                        dp[i][j] =(dp[i][j] % MOD + dp[i-1][(int)(j-l[i]*f)] % MOD) % MOD;
                }
            }
            System.out.println(dp[k][n]);
        }
    } 
}