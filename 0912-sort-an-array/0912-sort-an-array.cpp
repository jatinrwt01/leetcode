class Solution {
private:
    void mergeSort(vector<int>&arr, int low, int high){
        if(low>=high) return;
        int mid = low + (high-low)/2;
        mergeSort(arr,low, mid);
        mergeSort(arr,mid+1, high);
        merge(arr,low,mid,high);
    }

    void merge(vector<int>&arr, int low, int mid, int high){
        int i = low;
        int j= mid+1;
        vector<int> temp;
        while(i<=mid && j<=high){
            if(arr[i]<arr[j]){
                temp.push_back(arr[i]);
                i++;
            } else{
                temp.push_back(arr[j]);
                j++;
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
        for (int i = low; i <= high; i++) {
             arr[i] = temp[i-low];
            }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0, nums.size()-1);
        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna