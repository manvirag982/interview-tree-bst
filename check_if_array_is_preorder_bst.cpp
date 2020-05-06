#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  int l;
  int r;
  
};
bool checkbstpre(int pre[]){
  
       int i=0;
     stack<node> q;
     node temp;
     temp.data=pre[i];
     temp.l=INT_MIN;
     temp.r=INT_MAX;
      i++;
      int n=5;
      q.push(temp);
     while(i!=n || !q.empty()){

         // checking if it can be left
        temp=q.top();

      if(i!=n and pre[i]>temp.l and pre[i]<temp.data)
      {
          node t;
          t.data=pre[i];
          t.l=temp.l;
          t.r=temp.data;
          q.push(t);
          i++;
         
      }

      // checking for right to be exist 
       
    else if (i!=n and pre[i]>temp.data and pre[i]<temp.r)
        {
            q.pop();
            node t;
            t.data=pre[i];
            t.l=temp.data;
            t.r=temp.r;
            q.push(t);
            i++;
        }
    else q.pop();

     }
     if(i==5)
      return true;
     return false;
     

}
int main(){

    int pre[5]={40,30,35,80,100};

    if(checkbstpre(pre)) cout<<" hao kar sakat haige";
    else cout<<" nahi kat sakat haige";
    return 0;
}
