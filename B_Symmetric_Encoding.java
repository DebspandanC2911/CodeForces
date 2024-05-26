import java.util.*;
class B_Symmetric_Encoding{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int t=in.nextInt();
        while(t-->0){
            int len=in.nextInt();
            String s=in.next();
            char[] charArray = s.toCharArray();
            Arrays.sort(charArray);
            String sortedString = new String(charArray);
            System.out.println(sortedString);
        }
    }
}