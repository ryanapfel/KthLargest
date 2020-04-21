#include<bits/stdc++.h>  
using namespace std;


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue <int, vector<int>, greater<int> > pq;
        
        for( auto i: nums){
            pq.push(i);
            
            if(pq.size() > k){
                pq.pop();
            }
        }

      
        return pq.top();
    }
};


int main(){
  vector<int> test = {12,100,90,5,95};
  

  Solution s1;

  //answer should be 95
  cout << s1.findKthLargest(test, 2) << "\n";
  //answer should be 90
  cout << s1.findKthLargest(test, 3);
  




}