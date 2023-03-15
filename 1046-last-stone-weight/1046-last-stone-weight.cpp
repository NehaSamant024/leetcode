/*
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto i:stones)
            pq.push(i); // pq=[1,1,2,4,7,8]
        while(pq.size()>1)
        {
            int x=pq.top(); //8
            pq.pop(); //pq=[1,1,2,4,7]
            int y=pq.top(); //7
            pq.pop(); //pq=[1,1,2,4]
            pq.push(x-y);
        //  8-7=1 // pq=[1,1,1,2,4]
        }
        return pq.top();
    }
};
*/
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq (stones.begin(),stones.end());
        while(pq.size()>=2)
        {
            int y=pq.top();
            pq.pop();
            int x=pq.top();
            pq.pop();
            if(x==y)
            {
                
            }
            else
            {
                pq.push(y-x);
            }
        }
        if(!pq.empty()) return pq.top();
        return 0;
        
    }
};