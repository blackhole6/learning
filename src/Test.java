import java.util.Arrays;
import java.util.Scanner;

public class Test {
       static Scanner cin=new Scanner(System.in);
       static boolean CheckVowel(Character x){
           if (x == 'a' || x == 'o' || x == 'i' || x == 'u' || x == 'e') {
              return  true;
           }
           else{
               return false;
           }
       }
       static int MaxVowels(String str,int k){
           int len=str.length();
           int num[]=new int [len+1];
           for(int i=0;i<len;i++){
               if(CheckVowel(str.charAt(i))){
                   num[i]=1;
               }
               else{
                   num[i]=0;
               }
           }
           int sum[]=new int[len+1];
           Arrays.fill(sum,0);
           if(num[0]==0){
               sum[1]=0;
           }
           else{
               sum[1]=1;
           }
           for(int i=1;i<len;i++){//求前缀和
               sum[i+1]=sum[i]+num[i];
           }
           int ans=0;
           for(int i=k;i<=len;i++){
               ans=Math.max(ans,sum[i]-sum[i-k]);//一个长度为k的区间和，这个区间的值 就代表有多少个元音
           }
           return ans;
       }
       void main(){
            System.out.println(MaxVowels("abciiidef",3));
            return ;
       }
}
