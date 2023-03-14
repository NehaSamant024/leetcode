class Solution {
public:
    int splitNum(int num) {
        vector<int> v;
        while(num > 0){
            v.push_back(num%10);
            num = num/10;
        }
        sort(v.begin(), v.end());
        int n1 = 0, n2 = 0;
        for(int i = 0; i < v.size(); i = i+2){ n1 = n1*10 + v[i]; }
        for(int i = 1; i < v.size(); i = i+2){ n2 = n2*10 + v[i]; }
        return n1 + n2;
    }
};