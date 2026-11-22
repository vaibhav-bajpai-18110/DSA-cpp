
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// C++ VECTOR 


// Function: Vector ke saare elements print karna
// vector<int> ka matlab hai integer values ka vector
void printVector(const vector<int>& v)
{
    // Agar vector empty hai toh message print hoga
    if (v.empty())
    {
        cout << "Vector is empty!" << endl;
        return;
    }

    // Range-based for loop:
    // Vector ke har element ko ek-ek karke access karta hai
    for (int element : v)
    {
        cout << element << " ";
    }

    cout << endl;
}









// Function: Vector ka size aur capacity print karna
void showSizeAndCapacity(const vector<int>& v)
{
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
}









int main()
{
    // ==================================================
    // 1. VECTOR DECLARATION AND INITIALIZATION
    // ==================================================

    cout << "\n1. VECTOR DECLARATION" << endl;

    // Empty vector: Abhi ismein koi element nahi hai
    vector<int> v1;

    // Vector with initial values
    vector<int> v2 = {10, 20, 30, 40, 50};

    // Vector with 5 elements, sabki initial value 0
    vector<int> v3(5, 0);

    cout << "v2: ";
    printVector(v2);

    cout << "v3: ";
    printVector(v3);








    // ==================================================
    // 2. PUSH_BACK - ELEMENT ADD KARNA
    // ==================================================

    cout << "\n2. PUSH_BACK" << endl;

    // push_back() vector ke end mein element add karta hai
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    cout << "After adding elements: ";
    printVector(v1);

    // Output: 10 20 30








    // ==================================================
    // 3. POP_BACK - LAST ELEMENT REMOVE KARNA
    // ==================================================

    cout << "\n3. POP_BACK" << endl;

    // pop_back() vector ka last element remove karta hai
    // Ye function koi value return nahi karta
    v1.pop_back();

    cout << "After removing last element: ";
    printVector(v1);

    // Output: 10 20







    // ==================================================
    // 4. SIZE AND EMPTY
    // ==================================================

    cout << "\n4. SIZE AND EMPTY" << endl;

    // size() batata hai vector mein kitne elements hain
    cout << "Size: " << v1.size() << endl;

    // empty() true return karta hai agar vector empty ho
    cout << "Is vector empty? " << v1.empty() << endl;

    // Output:
    // Size: 2
    // Is vector empty? 0
    // 0 ka matlab false, yani vector empty nahi hai








    // ==================================================
    // 5. ACCESSING ELEMENTS
    // ==================================================

    cout << "\n5. ACCESSING ELEMENTS" << endl;

    vector<int> marks = {80, 90, 75, 85, 95};

    // Index 0 se start hota hai
    // marks[0] = first element
    cout << "First element: " << marks[0] << endl;

    // marks[2] = third element
    cout << "Third element: " << marks[2] << endl;

    // at() bhi element access karta hai
    // Lekin invalid index par exception throw karta hai
    cout << "Element at index 3: " << marks.at(3) << endl;

    // front() first element return karta hai
    cout << "First element: " << marks.front() << endl;

    // back() last element return karta hai
    cout << "Last element: " << marks.back() << endl;








    // ==================================================
    // 6. UPDATING AN ELEMENT
    // ==================================================

    cout << "\n6. UPDATING AN ELEMENT" << endl;

    // Index 1 par 90 hai
    // Usko 100 se replace kar rahe hain
    marks[1] = 100;

    cout << "Updated marks: ";
    printVector(marks);

    // Output: 80 100 75 85 95








    // ==================================================
    // 7. ITERATING USING NORMAL FOR LOOP
    // ==================================================

    cout << "\n7. NORMAL FOR LOOP" << endl;

    // i = 0 se start hoga
    // i < marks.size() tak loop chalega
    // Har iteration mein i increase hoga
    for (int i = 0; i < marks.size(); i++)
    {
        // marks[i] se current element access hota hai
        cout << marks[i] << " ";
    }

    cout << endl;








    // ==================================================
    // 8. INSERT - MIDDLE MEIN ELEMENT ADD KARNA
    // ==================================================

    cout << "\n8. INSERT" << endl;

    vector<int> numbers = {10, 20, 30, 40};

    // begin() first element ki position deta hai
    // begin() + 2 ka matlab index 2 ki position
    // 99 ko index 2 par insert kar rahe hain
    numbers.insert(numbers.begin() + 2, 99);

    cout << "After insert: ";
    printVector(numbers);

    // Output: 10 20 99 30 40











    // ==================================================
    // 9. ERASE - ELEMENT REMOVE KARNA
    // ==================================================

    cout << "\n9. ERASE" << endl;

    // Index 1 par jo element hai usko remove karna
    numbers.erase(numbers.begin() + 1);

    cout << "After erase: ";
    printVector(numbers);

    // Output: 10 99 30 40










    // ==================================================
    // 10. CLEAR - SAARE ELEMENTS REMOVE KARNA
    // ==================================================

    cout << "\n10. CLEAR" << endl;

    vector<int> temp = {1, 2, 3, 4, 5};

    // clear() vector ke saare elements remove karta hai
    temp.clear();

    cout << "After clear: ";
    printVector(temp);

    // Output: Vector is empty!








    // ==================================================
    // 11. FIND - ELEMENT SEARCH KARNA
    // ==================================================

    cout << "\n11. FIND" << endl;

    vector<int> data = {10, 20, 30, 40, 50};

    int target = 30;

    // find() target ko vector mein search karta hai
    // Agar element milta hai toh uski position return hoti hai
    // Nahi milta toh end() return hota hai
    auto it = find(data.begin(), data.end(), target);

    if (it != data.end())
    {
        // it - data.begin() se index milta hai
        cout << "Element found at index: "
             << it - data.begin() << endl;
    }
    else
    {
        cout << "Element not found!" << endl;
    }







    // ==================================================
    // 12. SORT - ASCENDING ORDER
    // ==================================================

    cout << "\n12. SORT" << endl;

    vector<int> nums = {50, 10, 40, 20, 30};

    // sort() elements ko ascending order mein arrange karta hai
    sort(nums.begin(), nums.end());

    cout << "Ascending order: ";
    printVector(nums);

    // Output: 10 20 30 40 50





    // ==================================================
    // 13. SORT - DESCENDING ORDER
    // ==================================================

    cout << "\n13. DESCENDING SORT" << endl;

    // greater<int>() descending order ke liye use hota hai
    sort(nums.begin(), nums.end(), greater<int>());

    cout << "Descending order: ";
    printVector(nums);

    // Output: 50 40 30 20 10






    // ==================================================
    // 14. REVERSE - ELEMENTS ULTE KARNA
    // ==================================================

    cout << "\n14. REVERSE" << endl;

    vector<int> rev = {1, 2, 3, 4, 5};

    // reverse() vector ka order reverse karta hai
    reverse(rev.begin(), rev.end());

    cout << "After reverse: ";
    printVector(rev);

    // Output: 5 4 3 2 1




    // ==================================================
    // 15. RESIZE - SIZE CHANGE KARNA
    // ==================================================

    cout << "\n15. RESIZE" << endl;

    vector<int> r = {10, 20, 30};

    // Resize se vector ka size 5 ho jayega
    // Naye elements default value 0 se initialize honge
    r.resize(5);

    cout << "After resize to 5: ";
    printVector(r);

    // Output: 10 20 30 0 0

    // Size 2 karne par extra elements remove ho jayenge
    r.resize(2);

    cout << "After resize to 2: ";
    printVector(r);

    // Output: 10 20





    // ==================================================
    // 16. CAPACITY AND RESERVE
    // ==================================================

    cout << "\n16. CAPACITY AND RESERVE" << endl;

    vector<int> cap;

    // reserve() minimum capacity ke liye memory reserve karta hai
    // Isse size change nahi hota
    cap.reserve(10);

    showSizeAndCapacity(cap);

    // Ab 3 elements add kar rahe hain
    cap.push_back(10);
    cap.push_back(20);
    cap.push_back(30);

    showSizeAndCapacity(cap);

    // Size = 3
    // Capacity >= 10





    // ==================================================
    // 17. SWAP - DO VECTORS KI VALUES EXCHANGE KARNA
    // ==================================================

    cout << "\n17. SWAP" << endl;

    vector<int> a = {1, 2, 3};
    vector<int> b = {7, 8, 9};

    // swap() dono vectors ke elements exchange karta hai
    a.swap(b);

    cout << "Vector a: ";
    printVector(a);

    cout << "Vector b: ";
    printVector(b);






    // ==================================================
    // 18. TWO-DIMENSIONAL VECTOR
    // ==================================================

    cout << "\n18. TWO-DIMENSIONAL VECTOR" << endl;

    // Vector ke andar vector store kar sakte hain
    // Isse 2D vector ya matrix jaisa structure banta hai
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Outer vector ki har row ko access kar rahe hain
    for (int i = 0; i < matrix.size(); i++)
    {
        // Inner vector ke har element ko access kar rahe hain
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    // Output:
    // 1 2 3
    // 4 5 6
    // 7 8 9





    // ==================================================
    // 19. VECTOR OF STRINGS
    // ==================================================

    cout << "\n19. VECTOR OF STRINGS" << endl;

    // Vector sirf integers ke liye nahi hota
    // Ismein strings bhi store kar sakte hain
    vector<string> names = {"Aman", "Riya", "Rahul"};

    for (string name : names)
    {
        cout << name << endl;
    }



    
    // ==================================================
    // 20. FINAL EXAMPLE - STUDENT MARKS
    // ==================================================

    cout << "\n20. STUDENT MARKS EXAMPLE" << endl;

    vector<int> studentMarks = {85, 90, 78, 92, 88};

    int total = 0;

    // Saare marks ko add kar rahe hain
    for (int mark : studentMarks)
    {
        total += mark;
    }

    // Average nikalne ke liye total ko size se divide karenge
    double average = (double)total / studentMarks.size();

    cout << "Total marks: " << total << endl;
    cout << "Average marks: " << average << endl;

    return 0;
}
