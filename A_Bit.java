import java.util.*;
class A_Bit{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int t=in.nextInt();
        int x=0;
        String num[]=new String[t];
        for(int i=0;i<t;i++){
            num[i]=in.next();
            if(num[i].charAt(1)=='-')   x--;
            else    x++;
        }
        System.out.println(x);
    }
}