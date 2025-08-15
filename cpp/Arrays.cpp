#include<iostream>
using namespace std;

//Arrays

int main(){
//	int arr[] = {1,2,3,4,5,6};
//	
//	cout<<arr[1];
//	
//
////printing and filling the array
//   int marks[6] ;
//   
//   //filling
//   for(int i=0;i<6;i++){
//   	  
//   	 cout<<"Enter the marks of "<<i<<"th student"<<endl;
//   	 cin>>marks[i];
//   	 
//   	 
//   }
//   //printing
//   
//   for(int i=0;i<6;i++){
//   	  
//   	 cout<<"The marks of "<<i<<"th student is : "<<marks[i]<<endl;
//   	
//   	 
//   }
//   
   
   //2D array;
   
int arr2d[2][3]={  //2x3 array 2 rows 3 cols
  {1,2,3},
  {4,5,6},

};

 //printing 2d arrays use double forloop

for(int i=0;i<2;i++){//row

 for(int j=0;j<3;j++){//cols

   cout<<"At "<<i<<"x"<<j<<"is "<<arr2d[i][j]<<endl;
 }
   
}
   
 return 0;
}


