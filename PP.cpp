// You will need to download this file for porper execution of code because this program has somepart of file handling.


//noc refers to name of city
//inp refers to input
//ro referes to random or unarranged output
//ao referes to arranged output

// Here the NOC is requested to keep 3 letter denoting city for proper and good layout of output.
// we can make our ode more beautiful but some idea are generated late. 


#include<iostream>
#include<fstream>
using namespace std;;

class in     //base class
{
 public:
 int n=1,temp,i;
 char noc[50];

 int inp()
 {
  ofstream fout("e:/stud.doc"); //opeing a  word file name stud
  do{
  
  cout<<"\nEnter the name of city"<<"\t";
  cin>>noc;
   
 cout<<"Enter the temperature of city\t";
  cin>>temp;
  cout<<endl;

  fout<<n<<"\t"<<noc<<"\t"<<temp<<"\n";
  n++;
   
   }while(n<=9);                 //iteration for obtaining value and assigning in file 
  fout.close();                 //closing the file

 }
};

class ro:public in  //derived class
{
  public:
  int rout()
  {
    cout<<"\n\nTemperature might be in both celsius and fahernheit";
  ifstream fin("e:/stud.doc");
    cout<<"\n +-----------------------------------+"<<endl;
    cout<<" |  S.N  | Name of City | Temperatue |\n";
    cout<<" +-----------------------------------+"<<endl;
    for(i=0;i<=n;i++)
    {
     fin>>n>>noc>>temp;
     cout<<" |   "<<n   <<"   |      "<<noc     << "     | "<<   temp << "        |"<<endl;
    };
    cout<<" +-----------------------------------+"<<endl;
    fin.close();
  }
};

class ao:public in // derived class
{
  public:
  int a;
  int aout()
  {
    cout<<"\n\nTable arranged in which all temp are in celsius";
    ifstream fin("e:/stud.doc");
    cout<<"\n +----------------------------------+"<<endl;
    cout<<" |  S.N  | Name of City | Temperatue|\n";
    cout<<" +----------------------------------+"<<endl;
    for(i=0;i<=n;i++)
    {
     fin>>n>>noc>>temp;
     if (temp>=51) //normal temprature ranges from 30 to 50 
     {
      a =(temp-32)/1.8;
     }
     else{
      a = temp;
     }
     
     cout<<" |   "<<n   <<"   |      "<<noc     << "     | "<<  a    << "        |"<<endl;
    };
    cout<<" +----------------------------------+"<<endl;
  fin.close();
  }
};

int main()
{ 
    int temp,n=1,i;
    char noc[50];

    cout<<"\nPlease enter the name of city as in airport for striking form like :\n KTM for Kathmandu \n BOM for Bombai\n";

    in N;
    N.inp();

    ro o1;
    o1.rout();
   
    ao o2;
    o2.aout();
      
     
}
