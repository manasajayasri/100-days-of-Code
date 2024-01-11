//{ Driver Code Starts
import java.util.*;

class GFG {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Solution ob = new Solution();

        int T = sc.nextInt();

        while (T != 0) {
            long n = sc.nextLong();
            if (ob.fascinating(n))
                System.out.println("Fascinating");
            else
                System.out.println("Not Fascinating");
            T--;
        }
    }
}
// } Driver Code Ends


class Solution {
    boolean fascinating(long n) {
        long a = n * 2;
        long b = n * 3;
           String ori = String.valueOf(n) + String.valueOf(a) + String.valueOf(b);
       
       if(ori.length() == 9){
           for(int i=1; i<=9; i++){
               if(!ori.contains(String.valueOf(i)))
                   return false;
           }
               return true;
           
       }
       return false;
    }
}