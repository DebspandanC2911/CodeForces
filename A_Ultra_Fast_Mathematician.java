import java.util.*;
public class A_Ultra_Fast_Mathematician{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        String n1,n2;
        String ans="";
        n1=in.next();
        n2=in.next();
        for(int i=n1.length()-1;i>=0;i--){
            if(n1.charAt(i)==n2.charAt(i))  ans="0"+ans;
            else    ans="1"+ans;
        }
        System.out.println(ans);
    }
}