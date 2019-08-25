#include<bits/stdc++.h>
using namespace std;
pair<double,double> resultant(pair<double,double>a,pair<double,double>b)
{
    return (make_pair(a.first-b.first,a.second-b.second));
}
int crossproduct(pair<double,double>a,pair<double,double>b)
{
    double cp=(a.first*b.second-a.second*b.first);
    return cp;
}
int direction(pair<double,double>a,pair<double,double>b,pair<double,double>p)
{
    b=resultant(a,b);
    p=resultant(a,p);
    double cross=crossproduct(b,p);
    if(cross<0)
      return -1;
    else if(cross>0)
      return +1;
    else
      return 0;
}
int main()
{
    vector<pair<double,double>>point;
    const int left=+1,right=-1,on_the_line=0;
    for(int i=0;i<3;i++)
    {
        double x,y;
        cin>>x>>y;
        point.push_back(make_pair(x,y));
    }
   int result= direction(point[0],point[1],point[2]);
   if(result==left)
     cout<<"left to line ";
   else if(result==right)
     cout<<"right to line ";
   else 
      cout<<" on the line ";
}
