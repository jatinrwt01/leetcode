class Solution {
private:
    int ans = 0;
    void divide(vector<int>&arr, int low, int high){
        if(low>=high) return;
        int mid = low+(high-low)/2;
        divide(arr, low, mid);
        divide(arr, mid+1, high);
        conquer(arr, low, mid, high);
    }

    void conquer(vector<int>&arr, int low, int mid, int high){
        int i=low, j = mid+1;
        int k=low, l = mid+1;
        while(k<=mid && l<=high){
            if((long long)arr[k] > 2*(long long)arr[l]){
                ans+=(mid-k)+1;
                l++;
            } else{
                k++;
            }
        }
        vector<int> temp;
        while(i<=mid &&j<=high){
            if(arr[i]>arr[j]){
                temp.push_back(arr[j]);
                j++;
            }else{
                temp.push_back(arr[i]);
                i++;
            }
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=high){
            temp.push_back(arr[j]);
            j++;
        }
        for(int i=low; i<=high; i++){
            arr[i] = temp[i-low];
        }
    }
public:
    int reversePairs(vector<int>& nums) {
        divide(nums, 0, nums.size()-1);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna