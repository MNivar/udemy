#include <iostream>

using namespace std;

int main() {
    ude
    const double small_dog{25};
    const double large_dog{35};
    const double sales_tax{0.06};
    const double quote_expiry{30};  //No. of days
    
    cout<<"Welcome to Madeline's dog cleaning service!" << endl;
    cout<<"\nCharges:" << endl;
    cout<<"\tSmall Dogs: $" <<small_dog<<endl;
    cout<<"\tLarge Dogs: $"<<large_dog<<endl;
    cout<<"Sales Tax Rate is: "<< sales_tax*100 << "%" << endl;
    
    int num_small_dog {0};
    int num_large_dog {0};
    
    cout<<"How many small dogs do you need cleaned?"<<endl;
    cin>> num_small_dog;
    cout<<"How many large dogs do you need cleaned?" << endl;
    cin>> num_large_dog;
    
    cout<<"================================="<< endl;
    cout<<"Estimate for dog cleaning service"<<endl;
    cout<<"Number of small dogs: " << num_small_dog << endl;
    cout<<"Number of large dogs: "<<num_large_dog << endl;
    cout<<"Price for small dog: $" << small_dog << endl;
    cout<<"Price for large dog: $" <<large_dog<<endl;
    cout<<"Cost: $" << (num_small_dog*small_dog)+ (num_large_dog*large_dog) << endl;
    cout<< "Tax: $"<< ((num_small_dog*small_dog)+ (num_large_dog*large_dog))*sales_tax <<endl;
    cout<<"=================================="<< endl;
    cout<<"Total Estimate: $" << (((num_small_dog*small_dog)+ (num_large_dog*large_dog))*sales_tax)+(num_small_dog*small_dog)+ (num_large_dog*large_dog)<<endl;
    cout<<"This quote is valid for: "<< quote_expiry << " days"<<endl;
    cout<< endl;
    
    return 0;
    
}
