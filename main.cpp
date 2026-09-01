// COMSC 210 | Lab 3 | Yeji Kim
#include <iostream>
#include <string>
using namespace std;

// creating restaurant struct with 5 attributes of varying data types
struct Restaurant
{
    string address;
    string name;
    string cuisine;
    double rating;
    double averagePrice;
};

// function that makes temp struct, receives user input, and returns data to main program
Restaurant createRestaurant()
{
    Restaurant temp;

    cout << "Restaurant address: ";
    getline(cin, temp.address);

    cout << "Restaurant name: ";
    getline(cin, temp.name);

    cout << "Cuisine type: ";
    getline(cin, temp.cuisine);

    cout << "Rating (1-5): ";
    cin >> temp.rating;

    cout << "Average price: ";
    cin >> temp.averagePrice;

    return temp;
}

// function that receives a Restaurant and displays the info
void displayRestaurant(Restaurant restaurant)
{
    cout << "Restaurant: " << restaurant.name << endl;
    cout << "Address: " << restaurant.address << endl;
    cout << "Cuisine: " << restaurant.cuisine << endl;
    cout << "Rating: " << restaurant.rating << endl;
    cout << "Average Price: " << restaurant.averagePrice << endl;
}

int main()
{
    // make 4 Restaurant objects
    Restaurant restaurant1;
    Restaurant restaurant2;
    Restaurant restaurant3;
    Restaurant restaurant4;

    


}
