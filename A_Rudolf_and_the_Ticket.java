import java.util.*;
class A_Rudolf_and_the_Ticket{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int t=in.nextInt();
        while(t-->0){
            int n=in.nextInt();
            int m=in.nextInt();
            int k=in.nextInt();
            int c=0;
            int left[]=new int[n];
            int right[]=new int[m];
            for(int i=0;i<n;i++){
                left[i]=in.nextInt();
            }
            for(int i=0;i<m;i++){
                right[i]=in.nextInt();
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(left[i]+right[j]<=k){
                        c++;
                    }
                }
            }
            System.out.println(c);
        }
    }
}