import java.util.*;
class A_Petya_and_Strings{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String s1=in.next().toLowerCase();
        String s2=in.next().toLowerCase();
        if(s1.compareTo(s2)<0)  System.out.println("-1");
        else if(s1.compareTo(s2)>0)System.out.println("1");
        else System.out.println("0");
    }
}