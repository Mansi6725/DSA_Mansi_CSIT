import java.util.*;
import java.lang.*;
class Solution
{  
    public static void main(String args[])
    {
        int[]nums1={4,1,2};
        int[]nums2={1,3,4,2};
        int[]ans=nextGreaterElement(nums1,nums2);
        for(int i:ans){
            System.out.print(i+" ");
        }
            
        
    }
    public static int[] nextGreaterElement(int[] nums1, int[] nums2) {
        Stack<Integer>stack=new Stack<Integer>();
        Map<Integer,Integer>map=new HashMap<Integer,Integer>();
        int[]ans=new int[nums1.length];
        for(int i:nums2){
            while(!stack.isEmpty()){
                if(stack.peek()<i){
                    map.put(stack.peek(),i);
                    stack.pop();
                    }else break;
            }
            stack.push(i);
        }
        for(int i=0;i<nums1.length;i++){
            if(map.containsKey(nums1[i]))
            ans[i]=map.get(nums1[i]);
            else ans[i]=-1;
        }
        return ans;
    }
}