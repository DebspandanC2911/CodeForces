import java.util.*;
class A_Creating_Words{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int t=in.nextInt();
        while(t-->0){
            String a,b;
            a=in.next();
            b=in.next();
            String copy=a;
            a=""+b.charAt(0)+a.substring(1);
            b=""+copy.charAt(0)+b.substring(1);
            System.out.println(a+" "+b);
        }
    }
}