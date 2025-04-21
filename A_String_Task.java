import java.util.*;
class A_String_Task{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int t=in.nextInt();
        while(t-->0){
            String s,s1;
            s=in.next();
            int n=s.length();
            for(int i=0;i<n;i++){
                if("aeiou".indexOf(s.charAt(i))==-1){
                    s1=s1+"."+s.charAt(i);
                }
                else{
                    continue;
                }
            }
            cout<<s1<<endl;
            s1="";
        }
    }
}