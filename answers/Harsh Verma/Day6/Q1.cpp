#include <iostream>
using namespace std;    

int main() {
    int kids,extracandies;
cout<<"Enter the number of kids :";
cin>>kids;
int candies[kids];
cout<<"Enter the number of candies that each kid has:";
for(int i=0;i<kids;i++ )
   {cin>>candies[i];}
cout<<"Enter the number of extra candies";
cin>>extracandies;
int greatest=0;
for(int j=0; j<kids;j++)
    {if (candies[j]>greatest)
       greatest=candies[j];
    }
for(int k=0; k<kids;k++)
    {if(candies[k]+extracandies >= greatest)
        cout<<"TRUE,";
        else cout<<"FALSE,";
    }
return 0;
}
