#include <iostream>

using namespace std;


int threeSum( void );

int fiveSum( void );

int fifteenSum ( void );


int main( int argc, char** argv )
{
    cout << "\n The sum of all the natural numbers below 1000 that are multiples of 3 or 5 = \n" << endl;
    
    cout << threeSum() + fiveSum() - fifteenSum() << endl << endl << endl;
    cout << "Press enter to quit";
    cin.get();
    
}


int threeSum( void )
{
    int sum = 0;
    
    for ( int i = 1 ; i < 1000 ; i++ )
    {
        if ( i % 3 == 0 )
            sum += i;
    }
    
    return sum;
}


int fiveSum( void )
{
    int sum = 0;
    
    for ( int i = 1 ; i < 1000 ; i++ )
    {
        if ( i % 5 == 0 )
            sum += i;
    }
    
    return sum;
}

int fifteenSum (void)
{
    int sum =0;
    for (int i = 0; i< 1000; i++) {
        
        if (i % 15 == 0) {
           sum += i;
        }
    }
    return sum;
}
