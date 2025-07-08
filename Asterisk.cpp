#include <iostream>
#include<string>
using namespace std;
template<class R >
R display (R x, R y)
{
    
    cout<<"asteriks + value :"<<x+y<<endl;
    cout<<"value+ asteriks :"<<y+x<<endl;
    return x;
}


class computations
{ private :
double number;
public:
computations(double);
double operator+ (computations);
double operator/ (computations);
friend ostream & operator <<(ostream& , computations);
};


computations::computations(double number)
{this->number=number;}


double computations::operator+ (computations b)
{
double total,x,y;
   total=x+y+b.number;
   
   return total;
    
}


double computations::operator / (computations b)
{
    
    double ave,total,x,y;
    total=x+y+b.number;
    ave=total/3;
    
    
    return ave;
}


ostream& operator<< (ostream & out ,computations z)
{
    out<<"average :"<<z.number<<endl;
 return out ;   
}





int main()
{
   int a = display (7,6);
   double b = display (45.8,46.8);
   char r ,f;
   char c = display(r,f);
   string A1= "Karabelo";
   string A2="Meraba";
   string g=display(A1,A2);
   
   
   
   
        return 0;
} 
