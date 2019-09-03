#include<iostream>
#include<cstring>

using namespace std ;

// int main()
// {

//   int n ;
//   cin>>n;
//   n=n%365;
//   int arr[]={0,31 , 31+28 ,31+28+31 ,31+28+31+30 ,31+28+31+30+31,31+28+31+30+31+30,31+28+31+30+31+30+31,31+28+31+30+31+30+31+31,31+28+31+30+31+30+31+31+30,31+28+31+30+31+30+31+31+30+31,31+28+31+30+31+30+31+31+30+31+30,31+28+31+30+31+30+31+31+30+31+30+31} ;
//   for (int i = 0; i < 12; i++)
//   {
//     if (n>arr[i]  && n<=arr[i+1])
//     {
//       cout<<"month = "<<i+1<<"   days left    "<<arr[i+1] - n ;
//     }
//   }
// }



// class employee
// {
// private:
//   string name;
//    float earning ;
//    float bonus ;
// public:
//       employee(string name,float earning )
//       {
//         this->bonus=0;
//         this->earning=earning;
//         this->name=name;
//       }
//       void bonusemp()
//       {
//         if (earning<2000)
//         {
//           bonus=earning/10;
//         }
//         else
//         {
//           bonus=earning/5;
//         }
//         return ;
//       }
//       void outputinfo()
//       {
//         cout<<"name "<< name<<"   Earning   "<<earning<<"    bonus    "<<bonus;
//       }
  
// };

// int main()
// {
//   employee e("saman" , 15000);
//   e.bonusemp();
//   e.outputinfo();
// }


class complex
{
   int real ;
   int img ;
public:
	void setreal(int a)
	{
		real = a;
	}
	void setimg(int a)
	{
		img = a;
	}
	void print()
	{
		cout<<real<<" + "<<img<<" i "<<endl;
	}
	int getreal()
	{
		return real;
	}
	int getimg()
	{
		return img;
	}
     void  operator+(complex &c)
{
    real +=c.getreal();
    img +=c.getimg() ;
}

};



int main()
{
	complex c1;
	complex c2 ;
	c1.setreal(5);
	c2.setimg(7);
	c1 + c2 ;
	c1.print();
	c2.print();
	return 0;

}


 // string s ;
 //   cin>>s ;
 //   int k;
 //   cin>>k;
 //   string ans="";
 //  int i = s.length() -k;
 //  //cout<<s.length()<<endl;
 //  while(i!=s.length()-k-1)
 //  {
  
 //      ans+=s[i];
 //      i=(i+1)%s.length();
 //  }
 //  ans+=s[i];
 //  cout<<ans<<endl ;