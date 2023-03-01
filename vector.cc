/* To declare an empty vector: 
vector<type> name;
To declare and initialize a vector with non-zero size:
vector<type> name(size);
To declare and initialize a vector:
vector<type> name = { list of stuff };
 */

 // Ways to declare a vector 
 vector<int> v1;
 vector<float> v2(100);
 vector<string> v3 = {"1", "2"};

 // You can access a vector element using (Emphasis on .at)
 vector_name.at(index)

 vector<int> v {1,2,3,4,5};
 int x = v[1];
 int y = v.at(1);

 // To get the size of a vector and how many elements are in it 
 vector_name.size()

 vector<int> v = {1,2,3,4};
 int x = v.size();
 // Which would output x as 3 

 // You can also use for loops to go through elements 

/* #include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
} */

Output is: 1, 2, 3, 4, 5

//Iterators
// Iterators can be used for a loop to go through a vector of elements.
v.begin() -- Points to the beginning of vector "v"
v.end() -- Points to the element past the end vector of "v"

//Inserting vector elements
// vector_name.push_back(value);
// This will resize the vector so that its 1 element bigger than before, 
// and it will put the specificed value at the last spot in the vector. 

vector<int> v;
v.push_back(10);
v.push_back(5);
v.push_back(1);

// v is now size 3 with elements {10, 5, 1}

//vector_name.pop_back();
// Deletes the last element. Its a void function so it doesnt return anything. 
// Opposite of push_back()

vector<int> v;
v.push_back(10);
// v is size 1 with element {10}
v.pop_back();
// v is size 0 (empty)

/* Examples of Vectors
#include <vector> 
vector<int> v = {1, 2, 3};
v[0] access 1st element: 9
v.at(0) access 1st element, error if out of bounds: 9
v.size() finds the size of the vector list 
v.empty() checks whether the vector list is empty: false
for (int i = 0; i < v.size(); i++) loop
for (int x : v) range based loop
v.push_back(6); adds 6 the back of the vectory {1,2,3,6}
v.pop_back(); removes the last element: now {1,2,3}
vector<int> v2(v) copy v into v2 */
