#include <iostream>
using namespace std;

//void print(int n){
//	
//		for(int i=0;i<n;i++){
//		
//		for(int j = 0; j<n;j++){
//			
//			cout<<"*";
//			
//		}
//		cout<<endl;
//	}
//	
//}


//void print(int n){
//	
//		for(int i=0;i<n;i++){
//		
//		for(int j = 0; j<=i;j++){
//			
//			cout<<"* ";
//			
//		}
//		cout<<endl;
//	}
//	
//}

//void print(int n){
//	
//		for(int i=1;i<=n;i++){
//		
//		for(int j = 1; j<=i;j++){
//			
//			cout<<i<<" ";
//			
//		}
//		cout<<endl;
//	}
//	
//}

//
//void print(int n){
//	
//		for(int i=1;i<=n;i++){
//		
//		for(int j = 1; j<=n-i+1;j++){
//			
//			cout<<j<<" ";
//			
//		}
//		cout<<endl;
//	}
//	
//}


//void print(int n){
//	
//		for(int i=0;i<n;i++){
//		
//		for(int j = 0; j<n-i-1;j++){
//			//space
//			cout<<" ";
//		}
//		
//		for (int k=0;k<2*i+1;k++){
//			//star
//			cout<<"*";
//		}
//		
//		for(int l = 0; l<n-i-1;l++){
//			//space
//			cout<<" ";
//		}
//		
//		
//		cout<<endl;
//	}
//	
//}


//void print(int n){
//	
//		for(int i=0;i<n;i++){
//			
//		for(int j = 0; j<n-i-1;j++){
//			//space
//			cout<<" ";
//		}
//		
//		for (int k=0;k<2*i+1;k++){
//			//star
//			cout<<"*";
//		}
//		
//		for(int l = 0; l<n-i-1;l++){
//			//space
//			cout<<" ";
//		}		
//		
//		for(int j = 0; j<=i;j++){
//			//space
//			cout<<" ";
//		}
//		
//		for (int k=0;k<2*n-(2*i+1);k++){
//			//star
//			cout<<"*";
//		}
//		
//		for(int l = 0; l<=i;l++){
//			//space
//			cout<<" ";
//		}
//		
//		
//		cout<<endl;
//	}
//	
//}

void print(int n){
//	
		for(int i=0;i<n;i++){
		
		for(int j = 0; j<=i;j++){
			
			cout<<"* ";
			
		}
		cout<<endl;
	}
	
}








int main(){
   int n;
   cin>>n;
   
   print(n);	

	
	return 0;
}
