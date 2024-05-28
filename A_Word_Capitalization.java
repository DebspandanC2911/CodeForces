import java.util.*;
class A_Word_Capitalization{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        String s=in.next();
        s=""+Character.toUpperCase(s.charAt(0))+s.substring(1);
        System.out.println(s);
    }
}