#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    /*   int binarysearch(vector <int> arr, int tar){
        int st = 0; int end = arr.size()-1;
        while (st<=end)
        {
            int mid = (st+end)/2;     //mid = st + (end-st)/2          //to be safe from overflow condition  int max + int max
            if(tar>arr[mid]){
                st = mid+1;
            }
            else if(tar< arr[mid]){
                end == mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
    };
    int main(){
        solution sol;
        vector<int> arr = {-1,0,3,4,5,9,12};
        int tar = 12;
        cout<<sol.binarysearch(arr,tar)<<endl;
        return 0;*/

    /*int recbinarysearch(vector<int> arr,int tar,int st,int end){

        if(st<=end){
            int mid = st +(st+end)/2;

            if(tar>arr[mid]){
                return recbinarysearch(arr,tar, mid+1,end);
            }
            else if(tar<arr[mid]){
                return recbinarysearch(arr,tar,st,mid-1);
            }
            else{
                return mid;
            }
        }
        return -1;
    }
    int main(){
        vector<int> arr = {-1,0,3,4,5,9,12};
        int tar = 9;
        int st = 0;
        int end = arr.size()-1;
        cout<<recbinarysearch(arr,tar,st,end);
        return 0;
    }*/

    //     int search(vector<int>& a, int tar){
    //         int st = 0; int end = a.size()-1;
    //         while(st<=end){
    //             int mid = st + (st+end)/2;
    //             if(a[mid] == tar ){
    //                 return mid;
    //             }
    //             if(a[st] <= a[mid]){
    //                 if(a[st]<= tar && tar<= a[mid]){
    //                 end = mid-1;
    //             }
    //             else{
    //                 st = mid+1;}
    //             }
    //             else{
    //                 if(a[mid]<=tar && tar<=a[end]){
    //                     st = mid+1;
    //                 }
    //                 else{
    //                     end = mid-1;
    //                 }
    //             }
    //         }
    //         return -1;
    //     }
    // };
    // int main(){*/

    /*int mountain(vector<int> arr,int peek){
       int st = 0; int end = arr.size();

       while(st<=end){
           int mid = st + (end - st)/2;

           if(arr[mid-1]< arr[mid] && arr[mid] >arr[mid+1] ){
               return mid;
           }
           else if(arr[mid-1]<arr[mid]){
               st = mid+1;
           }
           else{
               st = mid-1;
           }
       }
       return -1;
       }
   };
   int main(){
       solution sol;
       vector<int> arr = {1,2,5,9,5,2};
       int peek ;
       int mountain = sol.mountain(arr,peek);
       cout<<mountain;
   }*/

    /*  int singlelement( vector <int> a,int tar){
          int n = a.size();
          int st = 0; int end=n-1;
           if(n==1) return 0;

          while(st<=end){
              int mid = st+ (end-st)/2;

              if(mid==0 && a[0]!=a[1]) { return a[mid]; }
              if(mid == mid-1 && a[n-1] != a[n-2]){ return a[mid]; }


              if(a[mid-1] != a[mid] && a[mid] != a[mid+1]){
              return a[mid];
              }
              if(mid%2 == 0){ //even
                  if(a[mid-1] == a[mid]){  //left
                      end = mid-1;
                  }
                  else{  //right
                      st = mid+1;
                  }
              }
              else{  //odd
                  if(a[mid-1] == a[mid]){  //right
                      st = mid+1;
                  }
                  else{ //left
                      end = mid-1;
                  }
              }
          }
          return -1;
      }
  };
  int main(){
      solution sol;
      vector <int> a = {1,1,2,2,3,3,4,4,5,5,5,6,7,7,7,7};
      int tar;
      int singlelement = sol.singlelement(a,tar);
      cout<<singlelement;*/

    // aggresive   cow
    bool ispossible(vector<int> arr, int n, int c, int minalloweddist)
    {
    }

    int getdistance(vector<int> arr, int n, int c)
    {
        // sort(arr.begin(),arr.end());

        int st = 1;
        int end = arr[n - 1] - arr[0];
        int ans = -1;

        while (st <= end)
        {
            int mid = st + (st + end) / 2;
            if (ispossible(arr, n, c, mid))
            {
                ans = mid;
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }
};
