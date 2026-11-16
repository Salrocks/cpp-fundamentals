#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


int main() {
    vector <int> vector1;
    vector <int> vector2;
    cout << "------------- Vector Status -----------" << endl;
    cout << "The size of Vector 1 is: " << vector1.size() << endl; 
    cout << "The size of Vector 2 is: " << vector2.size() << endl;
    
    cout << "------------- Adding elements to vector 1 -----------" << endl;
        
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "Vector 1 contains: " << vector1.at(0) << " " << vector1.at(1) << endl;
    cout << "The size of Vector 1 is: " << vector1.size() << endl;
    
    cout << "------------- Adding elements to vector 2 -----------" << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "Vector 2 contains: " << vector2.at(0) << " " << vector2.at(1) << endl;
    cout << "The size of Vector 2 is: " << vector2.size() << endl;
    
    cout << "------------- Creating 2D Vector -----------" << endl;
    vector <vector <int>> vector2d;
    cout << "The size of 2D Vector is: " << vector2d.size() << endl;
    
    cout << "------------- Adding Vector1 and Vector2 to 2D Vector -----------" << endl;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
    cout << "The size of 2D Vector is: " << vector2d.size() << endl;
    cout<< "The element at row 0 column 0 is: " << vector2d.at(0).at(0) << endl;
    cout<< "The element at row 0 column 1 is: " << vector2d.at(0).at(1) << endl;
    cout<< "The element at row 1 column 0 is: " << vector2d.at(1).at(0) << endl;
    cout<< "The element at row 1 column 1 is: " << vector2d.at(1).at(1) << endl;
    
    
    cout << "------------- Change first value in vector1 to 1000 -----------" << endl;
    vector1.at(0) = 1000;
    cout << "Vector 1 contains: " << vector1.at(0) << " " << vector1.at(1) << endl;
    cout << "The size of Vector 1 is: " << vector1.size() << endl;
    
    
    cout << "-------------  2D Vector Elements after changing -----------" << endl;
    cout << "The size of 2D Vector is: " << vector2d.size() << endl;
    cout<< "The element at row 0 column 0 is: " << vector2d.at(0).at(0) << endl;
    cout<< "The element at row 0 column 1 is: " << vector2d.at(0).at(1) << endl;
    cout<< "The element at row 1 column 0 is: " << vector2d.at(1).at(0) << endl;
    cout<< "The element at row 1 column 1 is: " << vector2d.at(1).at(1) << endl;
    
    
    return 0;
}

