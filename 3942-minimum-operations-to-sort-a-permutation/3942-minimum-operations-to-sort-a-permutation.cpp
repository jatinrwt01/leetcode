class Solution {
public:
    int findZero(vector<int> &arr){
        int idx = -1, n=arr.size();
        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                idx = i;
                break;
            }
        }
        return idx;
    }

    bool isValid(vector<int>&arr){
        int zidx=findZero(arr), n=arr.size();
        for(int i=0; i<n; i++){
            int idx=(zidx+i)%n;
            if(arr[idx]!=i){
                return false;
            }
        }
        return true;
    }

    bool isReversedValid(vector<int>&arr){
        vector<int>temp = arr;
        reverse(temp.begin(),temp.end());
        return isValid(temp);
    }

    int minOperations(vector<int>& nums) {
        int n = nums.size(),z=findZero(nums);
        int c1=-1, c2=-1;
        bool v=false, rv=false;
        if(isValid(nums)){
            c1=min(z,n-z+2);
            v=true;
        }
        if(isReversedValid(nums)){
            c2=min(z+2, n-z);
            rv=true;
        }
        if(v && !rv){
            return c1;
        }else if(!v && rv){
            return c2;
        }else if(v && rv){
            return min(c1,c2);
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna