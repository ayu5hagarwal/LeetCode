class Solution {
public:
    int lowerBound(vector<int>& arr,int x){
        int s = 0;
        int e = arr.size() -1;
        int ans = e;
        while(s<=e){
            int mid = (s+e)/2;
            if(arr[mid]>=x){
                ans = mid;
                e = mid-1;
            }
            else if(x>arr[mid]){
                s =mid+1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
    }

    vector<int> binarySearchMethod(vector<int>& arr,int k,int x){
        //lower bound
        int h = lowerBound(arr,x);
        int l = h-1;
        while(k--){
            if(l<0){
                h++;
            }
            else if(h>=arr.size()){
                l--;
            }
            else if(x-arr[l]>arr[h]-x){
                h++;
            }
            else{
                l--; 
            }
        }
        return vector<int>(arr.begin() + l + 1,arr.begin() + h);
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return binarySearchMethod(arr,k,x);
    }
};