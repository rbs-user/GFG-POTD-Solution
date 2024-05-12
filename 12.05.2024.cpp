// 12.05.2024 gfg potd solution 
class Solution {
  public:
    int minSteps(int d) {
        // code here
        d=abs(d);
        
        int sum=0, steps=0;
        while(sum<d || abs(sum-d)%2!=0){
            steps++;
            sum+=steps;
        }
        
        return steps;
    }
};
