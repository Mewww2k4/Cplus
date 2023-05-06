#include<iostream>

using namespace std;
void input(float a[], int &n)
{
	for(int i = 0; i < n ; i++)
	{
		cout << "Input Array a["<<i<<"] = " ;
		cin >> a[i];
	 } 
}
void output(float a[], int n)
{
	for(int i = 0; i < n ; i++)
	{
		cout << a[i] << "  ";
	}
}
void SortUp(float a[], int n)
{
	for(int i = 0; i < n-1; i++){
		for(int j = i + 1; j < n ; j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

}
void PTNN(float a[],float b[], int n)
{  
   for(int i = 0 ; i < n ; i++){
   	for(int j = i ; j < n; j++ ){
   		if(a[i]==a[j])
   		b[i]++;
	   }
   }
   
   int max = 1;
   for(int i = 0;  i< n ; i++)
   {
   	if(b[i] > max)
   	max = b[i];
   }
   for(int i = 0; i < n ; i++)
   {
   	if(b[i]==max)
   	cout << "\nThe most appearing element : " << a[i] << ", appeared " << b[i] << " times." ;
   }
 
}
void element(float a[], int &n, int vt )
{
	float x;
	cout << "\nInput x :" ;
	cin >> x;
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i]==x)
		cout << "\nElement " << x << " location " << i;
	}
	cin >> vt;
	for(int i = n+1 ; i > vt  ; i--)
	{
		a[i] = a[i-1];
		a[vt]=x;
		n++;
	}
  SortUp(a,n);
	
}

int main()
{
	float a[100], b[100]={0};
	int n,vt;
	cout << "\nInput the number of elements : "; cin >> n;
	input(a,n);
    cout <<"\nArray after input : ";
    output(a,n);
    
    cout<<"\nArray sort up : ";
    SortUp(a,n);
    output(a,n);
    
    PTNN(a,b,n);
    
    
    element(a,n,vt);
	cout <<"\nArray after add : ";
    output(a,n);
  
	
	
	return 0;
}
