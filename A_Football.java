import java.util.*;
class A_Football{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        String s=in.next();
        int CurrCount=1;
        boolean flag=false;
        for(int i=1;i<s.length();i++){
            if(s.charAt(i)==s.charAt(i-1)){
                CurrCount++;
                if(CurrCount>=7){
                    flag=true;
                    break;
                }    
                
            }
            else    CurrCount=1;
        }
        if(flag==true){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}