/*class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0,curr=0,total=0;
        int n=gas.size();
        for(int i=0;i<n;i++)
        {
            total=total+gas[i]-cost[i];
            curr=curr+gas[i]-cost[i];
        if(curr>0)
        {
            curr=0;
            start+1;
        }
        }
        return(total<0)?-1:start;
    }
};
*/
class Solution {
    public:
    int canCompleteCircuit(vector<int>&gas,vector<int>&cost) {
        // Initialize totalGas and totalCost to 0
        int totalGas = 0, totalCost = 0;
        for(int i = 0 ; i<gas.size(); i++){
            // Add the gas and cost at each station to the total
            totalGas += gas[i];
            totalCost += cost[i];
        }
        if(totalGas < totalCost) return -1;
        
        // Initialize remainsGas and start to 0
        int remainsGas = 0, start = 0;
        for(int i = 0 ; i < gas.size(); i++){
            remainsGas = remainsGas +(gas[i] - cost[i]);
            // If remainsGas becomes negative, set start to the next station and reset remainsGas to 0
            if(remainsGas < 0 ){
                start = i+1;
                remainsGas = 0;
            }
        }
        return start;
    }
};


