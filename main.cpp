#include <iostream>
#include<vector>

class Solution {

public:
    bool Find(int target, vector<vector<int> > array) {
        if(array.empty()){
            return false;
        }
        int idx0=array.size()/2;
        int idx1=array[0].size()/2;

        if (array[idx0][idx1]==target){
            return true;
        }else if(array[idx0][idx1]>target){
            vector<vector<int>> tmp0;




            return Find(target,vector ) || Find(target,array[:idx0][idx1:]) || Find(target,array[idx0][:idx1]);
        }else{

            return Find(target,array[idx0:][idx1:]) || Find(target,array[:idx0][idx1:]) || Find(target,array[idx0][:idx1]);
        }
    }

    vector<vector<int>> build(vector<vector<int>>, int idx0,int idx1,int flag){
        if (flag==0){
            vector<vector<int>> out;
            for(i=0;i<idx0+1;i++){

            }
        }
    }
};

int main() {
    Solution s;
    vector<vector<int>> a({vector b({1,2,3,4,5}),vector b({2,3,4,5,6}),vector b({3,4,5,6,7}),vector b({4,5,6,7,8})});
    printf(s.Find(5,a));
    return 0;
}
