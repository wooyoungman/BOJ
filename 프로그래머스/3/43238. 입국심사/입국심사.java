import java.util.*;
class Solution {
    public long solution(int n, int[] times) {
        Arrays.sort(times);
        long answer = 0;
        
        long left=0;
        long right=times[times.length-1]*(long)n;
        
        while(left<=right){
            long mid=(left+right)/2;
            long cnt=0;
            for(int i=0;i<times.length;i++){
                cnt+=mid/times[i];
            }
            if(cnt<n){
                left=mid+1;
            }
            else{
                answer=mid;
                right=mid-1;
            }
        }
        
        return answer;
    }
}