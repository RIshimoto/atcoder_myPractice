#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> s(N);
  for(int i=0;i<N;i++){
    cin >> s.at(i);
  }
  int count=0;
  int tmp=1;
  for(int i=0;i<N;i++){
      if(s.at(i)!=tmp){
        count++;
      }else{
        tmp++;
      }
  }
  if(count==N)count=-1;
  cout << count << endl;  
}
