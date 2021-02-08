import java.util.*;
public class cc3 {


    public static void main(String[] args) throws Exception {
       // System.setOut(new PrintStream("output.txt"));
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0) {
        	int n=sc.nextInt();
        	int m=sc.nextInt();
        	int all[]=new int[100001];
        	int mat[][]=new int[n][m];
        	int r=0,c=0;
        	for (int i=0;i<n;i++) {
        		for(int j=0;j<m;j++) {
        			int temp=sc.nextInt();
        			all[temp]+=1;
        			if(r<n&&all[temp]==2) {
        				mat[r][c]=temp;
        				mat[r][m-1-c]=temp;
        				all[temp]=0;
        				if(c==m/2-1) {
        					r++;
        					c=0;
        				}
        				else
        					c++;
        				
        			}
        		}
        	}
        	int flag=0;
        	if (m%2==0 && r==n) {
        		flag=1;
        	}
        	else if(m%2==1 && r==n) {
        		int sum=0;
        		r=0;
        		for(int i=0;i<100001;i++)
        			if(all[i]!=0) {
        				int count=0;
        				
        				while(count<all[i]) {
        					if(r>n) {
        						flag=-1;
        						break;
        					}
        						
        					mat[r++][m/2]=i;
        					count++;
        					
        				}
        				if(flag==-1)
        					break;
        			}
        		if(r==n && flag!=-1)flag=1;
        		
        	}
        	if (flag!=1)
        		System.out.println("-1");
        	else {
        		for(int i=0;i<n;i++)
        		{
        			for(int j=0;j<m;j++)
        				System.out.print(mat[i][j]+" ");
        			System.out.println();
        		}
        	}
        	
        }
    }


}