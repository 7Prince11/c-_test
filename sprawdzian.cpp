#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	//Rekurencja (NWD_E)
      
      int  NWD_E(int a, int b){
      	if(b!=0) return a;
      	else return NWD_E(b , a%b);
	  }
	  int NWD(int a,int b)
{
	if(b!=0) return NWD(a,b%b);
	return a;
}
	
	//Iteracja 
	 int  NWDE(int a, int b) {
      	    int pom;
        	while (b != 0) {
            pom = b;
            b = a % b;
            a = pom;
          } 
          return a;
	}
	
	/*
	 int NWD(int a, int b) {
          while (a!=b) {
          if (a > b) a=a-b;
               else  b=b-a;
          }
          return a;
    }
	*/
     /* 
	  //Rekurencja (NWD) 
	  int NWD_r(int a , int b){
	  if(a==b) return a;
	  else if(a > b) return NWD_r(a-b,b);
	  else return NWD_r(a , b-a);
	  }
 	*/
  
	
	//Rekurecja (Silnia)
	long long silnia(int x){
	if(x<2) return 1;
	return x*silnia(x-1);
	}
	
	//Interacja (Silnia)
	unsigned long long Interacja_silnia(int a) {
       unsigned long long s = 1;
       for (int i = 1; i <= a; i++)
        {
           s *= i;
        }
        return s;
	}
	
	//Rekurecja (potega)
	unsigned long int pot_r(int A , int X){
	if(X==0) return 1;
	else return A*pot_r(A, X-1);
	}
	
	//Iteracja (potega)
	int pot(int a , int p) {
    int x=1;
    for (int i = 0; i < p; i++) {
            x *= a;
        }
       return x;
	}
	
	//Rekurenja (fibonnaci)

	long fibon_r(int n){
		if(n<2) return n;
		else return (fibon_r(n-1)+fibon_r(n-2));
	}
//	int fib(int n)						
//	{
//	if(n<3)return 1;
//	return fib(n-2)+fib(n-1);
//	}
	
	//Iteracja (Fibonacci)
	int fibonacci(int n)
    {
         int a = 0, b = 1 , s=0;

        for (int i = 0; i < n; i++)
        {
            s += b;
            b += a;
            a = b - a;
        }
        return s;
    }
    
    
      //MAlejaco i rosnaco
	  void low_high( int n )
	{
		cout << "Malejaco: " << n << "\n";

		if( n > 0 )
		low_high( n - 1 );

		cout << "Rosnaco: " << n << "\n";
	}
	
	
	 //Ciagi Rekurcje
      	int ciag( int n )
		{
    	if( n == 1 ) return 1;
    	else return ciag( n - 1 ) * ciag(n-1)-3;
		}
    	
      	int ciag2(int n) {
      		if (n ==1 ) return 1;
      		else return n - 1 * ( n - 1)-3;
		}
		
	/*
	int trzecie (int n)
{
 	if(n==1) return 3;
		else return n + trzecie(n-1);
}

  3, 5, 8, 12, 17, 23, 30, 38  

int trzecie_iter (int n)
{
	int s=3;
	for(int i=2; i<=n; i++)
	{
		s=i+s;
	}
	return s;
}

int czwarte(int n)
{
	if(n==1) return 2;
		else if (n%2==0) return czwarte(n-1)+3;
			else return czwarte(n-1)*2;
}

  2, 5, 10, 13, 26, 29, 58, 61  

int czwarte_iter (int n)
{
	int suma=2;
	for(int i=2; i<=n; i++)
	{
		if(n%2!=0) suma=(i-1)*2;
			else suma=(i-1)+3;
	}
	return suma;
}

int piate(int n)
{
	if(n==1) return 1;
		else if(n==2) return 3;
			else if(n%2==0) return piate(n-2)*2;
				else return 3*piate(n-1)-piate(n-2)+1;
}

  1, 3, 2, 4, 4, 9, 8, 16 

	
	*/
      

int main(int argc, char** argv) {
	
	int a , b;
	cout << "Wpisz liczbe a : "; cin>> a; cout <<"Wpisz liczbe b : "; cin >> b;
	cout <<"\n\n";
	cout << "Twoja NWD_E (Rekurencja) liczba : " << NWD_E(a , b)<<endl;
	cout << "Twoja NWDE (Iteracja) liczba : " << NWDE(a , b) << endl;
	cout << "Twoja silnia od (a) (rekurecja) : " << silnia(a) << endl;
	cout << "Twoja silnia od (a) (iteracja) : "<< Interacja_silnia(a) << endl;
	cout << "Wyliczenie potegi a od b (rekurencja) : "<< pot_r(a , b) << endl;	
	cout << "Wyliczenie potegi a od b (iteracja ) : " << pot(a , b) << endl;
	cout << "Liczba fibonacci od b (rekurencja) : " << fibon_r(b) << endl;;
	cout << "Liczba fibonacci od b (iteracja) : " << fibonacci(b) << endl;
	cout << "Numbers getting low and high from nunber a : "<< "\n"; low_high(a);	
	cout << "\nCiagi Rekurencyjne od a : " << ciag(a) << " "<< ciag2(a); 
	
	
	return 0;
}
