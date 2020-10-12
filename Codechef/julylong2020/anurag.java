import java.util.*;
import java.io.*;

class Solution {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int n = sc.nextInt();
            int ans = 0;
            for(int i = 0; i < n; i++) {
                ans += (a + 1<<i);
                System.out.print((String)ans + " ");
            }
            System.out.println("");
            t--;
        }
    }
}