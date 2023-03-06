class Solution {
public:
    int firstBadVersion(int n) {
         long int s = 0, e = n;

         long int minBadVersion = 1;

        while(s <= e){
             long int mid = s + (e-s) / 2;
            if(isBadVersion(mid)){
                minBadVersion = mid;
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }

        return minBadVersion;
    }
};