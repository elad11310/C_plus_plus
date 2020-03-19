#include <iostream>
#include "string"
#include <thread>
#include "chrono"

#define DOCTEST_CONFIG_IMPLEMENT

#include "doctest.h"
#include <cassert>

/**
 * this project represents introduction to c++
 * instance of namespace,final variable , input,output
 * thread,tests(doctests),assert
 */

using namespace std;
namespace abd { // creating my own namespace
    int x = 1023;

    void printX() { cout << x << endl; }
}

using namespace abd;

int main() {
    constexpr int i = 5; // final varaible
    string name;
    int num=0;
    cout << "Enter your name" << endl;
    cin >> name;
    this_thread::sleep_for(chrono::seconds(5)); // sleep for 5 seconds
    cout << "After 5 seconds sleep, your name is " + name;
    cout << "enter num >0" << endl;
    cin >> num;
    assert(num>=0); // if num < 0 ,will throw exception

     printX(); // calling my namespace abd

    // tests
    doctest::Context context;
    context.addFilter("reporters", "console");
    context.run();


    return 0;
}

