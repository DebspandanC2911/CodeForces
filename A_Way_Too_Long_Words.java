import java.util.*;
class A_Way_Too_Long_Words{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int t=in.nextInt();
        while(t-->0){
            String s=in.next();
            if(s.length()>10){
                s=""+s.charAt(0)+(s.length()-2)+s.charAt(s.length()-1);
            }
            System.out.println(s);
        }
    }
}