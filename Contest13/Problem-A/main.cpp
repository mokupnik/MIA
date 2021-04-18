#include <iostream>

using namespace std;

int main()
{
  int n,t;
  cin>>n>>t;
  int a[n];
  int visited[n];
  for(int i=0; i<n-1; i++)
   {
        cin>>a[i];
        visited[i] = 1;

   }
visited[n-1] = 1;
int i=0;
  while(visited[i] && i<t-1)
  {

      visited[i] = -1;
      i += a[i];
      //cout<<"I : "<<i<<" a[i] : "<<a[i]<<endl;

  }

  if(visited[t-1] == -1 || i == t-1)
  {
      cout<<"YES";
  }
  else {cout<<"NO";}


}
