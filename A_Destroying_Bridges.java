import java.util.*;
class A_Destroying_Bridges{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        System.out.println("enter");
        int t=in.nextInt();
        while(t-->0){
            int answer=0;
            int n=in.nextInt();
            int k=in.nextInt();
            if(k<n-1){
                answer=n;
            }
            else{
                answer=1;
            }
            System.out.println(answer);
        }
    }
}