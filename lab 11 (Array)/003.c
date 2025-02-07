// WAP to sort an array and then find median. 
#include<stdio.h>  
int main ( ) 
{  
   int i , j , n,tmp ;  
   float median ;  
   printf ( "enter the size of array " ) ;  
   scanf ( "%d",&n ) ;
   float arr [n];
   /* Reading items into array a */  
   printf ( " enter element in array  " ) ;  
   for ( i=1 ; i<=n ; i++ )  
   scanf ( "%f",& arr[i]) ;  
   /* Sorting begins */  
   for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[j] <arr[i])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
   /*calculation of median*/  
   if ( n%2==0 )  
      median = ( arr[n/2]+arr[n/2+1])/2;  
   else  
   median = arr[n/2+1] ;  
   
   for ( i=1;i<=n; i++ )  
   printf ( " %f " , arr [ i ] ) ;  
   printf ( "\n\n Median is %f \n ",median ) ;  
}  