import java.util.*;
class Codechef {
    public static double sumOfGP(long members, long kidSlices, long r) {
        if(r == 1)
            return members*kidSlices;
        double ans =(kidSlices*(Math.pow(r, members)-1))/(r-1);
        return ans;
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        long t= sc.nextLong();
        long extra = 0, shortBy = 0;
        for(long i = 0; i < t; i++) {
            long slices, members, kidSlices, r; 
            slices = sc.nextLong();
            members = sc.nextLong();
            kidSlices = sc.nextLong();
            r = sc.nextLong();
            double reqiuredAtLeast = sumOfGP(members, kidSlices, r);
            if(slices >= reqiuredAtLeast) {
                long remaining = slices - (long)Math.floor(reqiuredAtLeast);
                System.out.println("POSSIBLE "+(long)remaining);
                extra += remaining;
            }
            else {
                long required = (long)Math.floor(reqiuredAtLeast) - slices;
                System.out.println("IMPOSSIBLE "+(long)required);
                shortBy += required;
            }
        }
        if(extra >= shortBy)
            System.out.println("POSSIBLE");
        else 
            System.out.println("IMPOSSIBLE");
    }
} 