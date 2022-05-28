#include <iostream>
#include <cstdio>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;



template<typename T>
    int findMax(T *arr,int size)
    {
        int maxTMP = -15;
        for(int idx=0;idx<size;idx++)
        {
          
            if (arr->at(idx)>maxTMP)
            {
                maxTMP=arr->at(idx);
            }
        }
        return maxTMP;
    }
    
/*
This function is used to find the maximum possible sum among
1. all nonempty subarrays.
2. all nonempty subsequences.
Sample inputs: [1 2 3 4] and [2 -1 2 3 4 -5]
Sample outputs: [10 10] [10 11]
*/
vector<int> maxSubarray(vector<int> arr) {
    // find the maximum value of array
    if (findMax(&arr,arr.size())<0)
    {
        vector<int>arr_max{findMax(&arr,arr.size()),findMax(&arr,arr.size())};
        return arr_max;
    }   
    int global_value=0;
    int local_value =0;
    int sumMax =0;
    for(int idx=0;idx<arr.size();idx++)
    {
        local_value=max(0,arr[idx]+local_value);
        global_value=max(local_value,global_value);
        if(arr[idx]>0)
        {
            sumMax+=arr[idx];
        }
    }
    
    vector<int> result{global_value,sumMax};
    return result;
}
/*
======================================================================================================================================================
*/


 int main()
 {
     // set the size of arrary
     int size;
     cin>>size;
     int arr[size];
     // input value of arrary
     for(int idx=0;idx<size;idx++)
         cin>>arr[idx];
     // reverse values of array
     reverse(arr,arr+size);
     // print out values in arrary
     for(int idx=0;idx<size;idx++)
         cout<<" "<<arr[idx];
     return 0;
 }
// int 4 byte interger
// long 8 byte interger
// float 4 byte real
// double 8 byte real
// chr 1 byte char
// signed range from -2^(n-1)/2 to 2^(n-1)/2-1
// unsigned int upto 2^n-1

 int main()
 {
     int interV;
     long longV;
     float floatV;
     double doubleV;
     char charV;
     scanf("%d %ld %f %lf %c",&interV,&longV,&floatV,&doubleV,&charV);
     printf("%d\n%ld\n%.3f\n%.5lf\n%c",interV,longV,floatV,doubleV,charV);
     return 0;
 }
 // In this program, I try to implement a vector of string and access the string using indexing
 int main()
 {

     int n;
     const vector<string>tmpVec{"one","two","three","four","five","six","seven","eight","night","ten"};
     cin>>n;
     if(n>9)
     {
         cout<<"n is larger than 9";
     }else
     {
         cout<<tmpVec.at(n-1);
     }

     return 0;
 }
 int main()
 {
     int size;
     const vector<string> tmpVec{"one","two","three","four","five","six","seven","eight","night"};
     int maxV,minV;
     cin>>minV;
     cin>>maxV;
     cout<<minV<<maxV;
     for(int idx=minV;idx<=maxV;idx++)
     {
         if(idx>9)
         {
             (idx%2==0)? cout<<"Even number \n"<<endl : cout<<"Odd number \n"<<endl;
         }
         else{
             cout<<tmpVec.at(idx-1)<<endl;
         }
     }
     return 0;
 }

// in this program, I try to implement a function using cpp
 int maxOfMax(int a, int b, int c,int d)
 {
     return max(d,max(c,max(b,a)));
 }
 int main()
 {
     int a,b,c,d;
     scanf("%d %d %d %d",&a,&b,&c,&d);
     printf("%d %d %d %d\n",a,b,c,d);
     cout<<(maxOfMax(a,b,c,d));
     return 0;
 }

 int main()
 {
     string a,b;
     cin>>a;
     cin>>b;
     const int aS = a.size();
     const int bS = b.size();
     const string ab = a + b;
     // Swap value
     swap(a[0],b[0]);
     cout<<"Size of a"<<a.size()<<endl;
     cout<<"Size of b"<<b.size()<<endl;
     cout<<"Concante string a and b"<<ab<<endl;
     cout<< a<<" "<< b;

     return 0;
 }
// In this program, I write a program to proccess string using stringstream
// input: 23,12,15,13
// output: 23 12 15 13
 vector<int> myInt(string tmpStr)
 {
     vector<int>tmpVec;
     stringstream stream(tmpStr);

     for (int tmp; stream>>tmp;)
     {
         tmpVec.push_back(tmp);
         if(stream.peek()==',')
         {
             stream.ignore();
         }
     }
     return tmpVec;

 }

 int main()
 {
     string tmpStr;
     cin>>tmpStr;
     vector<int> tmpVec=myInt(tmpStr);
     for(int idx=0;idx<tmpVec.size();idx++)
     {
         cout<<tmpVec[idx]<<" ";
     }
     return 0;
 }

//in this program, I use structure to define student data.
 struct Student{
   int age;
   int standard;
   string first_name;
   string last_name;
 };

 int main()
 {
     Student T;
     cin>>T.age>>T.standard>>T.first_name>>T.last_name;
     cout<<"Name of student"<<T.first_name<<" "<<T.last_name<<endl;
     cout<<"Age of student "<<T.age<<endl;
     cout<<"Standard of student "<<T.standard<<endl;
     return 0;
 }


// In this program, I implement OOP programming C++, create a set method, and get a method.
class Student
{
  private:
    int age;
    int standard;
    string first_name;
    string last_name;
 public:
    void setAge(int age)
    {
        age=age;
    }
    void setStandard(int std)
    {
        standard=std;
    }
    void setFirstName(string fn)
    {
        first_name=fn;
    }
    void setLastName(string lt)
    {
        last_name=lt;
    }
    int getAge()
    {
        return age;
    }
    int getStandard()
    {
        return standard;
    }
    string getFirstName()
    {
        return first_name;
    }
    string getLastName()
    {
        return last_name;
    }
    string to_string()
    {
        stringstream tmp;
        char sep = ',';
        tmp<<age<<sep<<first_name<<sep<<last_name<<sep<<standard;
        return tmp.str();
    }

};
int main()
{
    int age, standard;
    string first_name,last_name;
    cin>>age>>standard>>first_name>>last_name;
    Student st;
    st.setAge(age);
    st.setStandard(standard);
    st.setFirstName(first_name);
    st.setLastName(last_name);

    cout<<st.getAge()<<"\n";
    cout<<st.getFirstName()<<","<<st.getLastName()<<"\n";
    cout<<st.getStandard()<<"\n";
    cout<<"\n";
    cout<<st.to_string();

    return 0;
}
