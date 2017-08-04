/*********************************************************************
 ** Program name: lab8.cpp
 ** Author: reuben youngblom
 ** Date: 3/5/17
 ** Description: sort and search lab, lab 8
 *********************************************************************/

#include <iostream>
using namespace std;
#include <vector>
#include <fstream>
#include <string>


void sortArray (int array [], int size);  //function prototype for search function

int main() {

    bool continuebool = true;  //for replaying whole code
    bool inputBool = true;  //for input validation
    bool validBool = true;  //for second round of inout validation
    
        cout << "Hello!" << endl;
    
    while (continuebool == true)  //continue loop
    {
        inputBool = true;  //resets input bool
    
int searchValue = 0;  //term being searched for
int selection;  //user selections
int testArray [0];  //initializes array
int vSize;  //will hold vector/array sizes
    
    
    
while (validBool == true)
{
    
    cout << "Please select from the following list:" << endl;   //user instructions
    
    cout << " To open a file with no zeros and search for zero, select 1." << endl;
    cout << " To open a file with one zero near the beginning and search for zero, select 2." << endl;
    cout << " To open a file with one zero near the middle and search for zero, select 3." << endl;
    cout << " To open a file with one zero near the end and search for zero, select 4." << endl;
    cout << " To sort the 'middle' file and output it to a file with a name of your choice, select 5." << endl;
    cout << " To open a sorted file with one zero at the beginning and search for zero, select 6." << endl;
    
    cin >> selection;  //takes in user selection
    
        
        if (selection > 0 && selection < 7)  //validation.  If valid...
        {validBool = false;}  //end loop
        else
        {  //but if not...
            cout << endl;
            cout << "sorry, invalid input!" << endl;
            cout << endl;
            validBool = true;  //loop again
            
        }
    }
    
    validBool = true;  //resets, just in case


    switch (selection)
    {
    
        case 1: {
            
            vector<int> testVector;  //creates a vector
            
            cout << "Opening file to search:" << endl;  //user info
            cout << endl;
            
            // open file (code modified from cplusplus.com)
            ifstream inputFile("none.txt");  //none file
            
            // test file open  (code modified from cplusplus.com)
            if (inputFile) {
                int value;
                
                // read the elements in the file into a vector (code modified from cplusplus.com)
                while ( inputFile >> value ) {
                    testVector.push_back(value);
                }
            }
            
            inputFile.close();  //closes input file
            
            cout << "Here are the contents of the file: " << endl;  //user info
            
            for (std::vector<int>::const_iterator i = testVector.begin(); i != testVector.end(); ++i)
                std::cout << *i << ' ';  //iterates through vector and prints is
            
            cout << endl;
            
            
            int vSize = testVector.size();  //gets size of the vector
            
            int testArray[vSize];  //creates an array of that size
            std::copy(testVector.begin(), testVector.end(), testArray);  //copies vector into array (figured this was easier, as the example I found in the book for a linear search used an array)
            
            /*
             Linear Search:  Page 596, 8th Edition.  Can't use binary because things aren't sorted yet.  Modified from the book
             */
            
            
            bool found = false;  //creates a bool to switch when target is found
            
            int position = -1;  //set at -1 because that can't be an array element
            int index = 0;  //starts at element 0
            
            while (index < vSize && found == false)  //goes through the array so long as bool hasn't switched yet
                
            {
                if (testArray[index] == searchValue)  //tests to see if element equals search value
                {
                    found = true;  //if found, switch bool
                    position = index;  //and set 'position' to the index number
                }
                index ++;  //and add to index so next time you're at the next number
            }
            
            cout << endl;
            
            if (found == true)  //if found...
            {
                cout << "Search Value Found!" << endl;
                cout << endl;
                cout << "Location: Position " << position << endl;  //print position
            }
            
            else
            {
                cout << "Sorry, not found!" << endl;  //otherwise, say it was not found
            }
            
            cout << endl;
            cout << endl;

            break;
            
        }
            
        case 2: {
            
            vector<int> testVector;  //creates a vector
            
            cout << "Opening file to search:" << endl;  //user info
            cout << endl;
            
            // open file (code modified from cplusplus.com)
            ifstream inputFile("early.txt");  //takes in early file
            
            // test file open  (code modified from cplusplus.com)
            if (inputFile) {
                int value;
                
                // read the elements in the file into a vector (code modified from cplusplus.com)
                while ( inputFile >> value ) {
                    testVector.push_back(value);
                }
            }
            
            inputFile.close();  //closes input file
            
            cout << "Here are the contents of the file: " << endl;  //user info
            
            for (std::vector<int>::const_iterator i = testVector.begin(); i != testVector.end(); ++i)
                std::cout << *i << ' ';  //iterates through vector and prints is
            
            cout << endl;
            
            
            int vSize = testVector.size();  //gets size of the vector
            
            int testArray[vSize];  //creates an array of that size
            std::copy(testVector.begin(), testVector.end(), testArray);  //copies vector into array (figured this was easier, as the example I found in the book for a linear search used an array)
            
            /*
             Linear Search:  Page 596, 8th Edition.  Can't use binary because things aren't sorted yet.  Modified from the book
             */
            
            
            bool found = false;  //creates a bool to switch when target is found
            
            int position = -1;  //set at -1 because that can't be an array element
            int index = 0;  //starts at element 0
            
            while (index < vSize && found == false)  //goes through the array so long as bool hasn't switched yet
                
            {
                if (testArray[index] == searchValue)  //tests to see if element equals search value
                {
                    found = true;  //if found, switch bool
                    position = index;  //and set 'position' to the index number
                }
                index ++;  //and add to index so next time you're at the next number
            }
            
            cout << endl;
            
            if (found == true)  //if found...
            {
                cout << "Search Value Found!" << endl;
                cout << endl;
                cout << "Location: Position " << position << endl;  //print position
            }
            
            else
            {
                cout << "Sorry, not found!" << endl;  //otherwise, say it was not found
            }
            
            cout << endl;
            cout << endl;
            break;
            
        }

    
            
        case 3: {
            
            vector<int> testVector;  //creates a vector
            
            cout << "Opening file to search:" << endl;  //user info
            cout << endl;
            
            // open file (code modified from cplusplus.com)
            ifstream inputFile("middle.txt");  //takes in middle file
            
            // test file open  (code modified from cplusplus.com)
            if (inputFile) {
                int value;
                
                // read the elements in the file into a vector (code modified from cplusplus.com)
                while ( inputFile >> value ) {
                    testVector.push_back(value);
                }
            }
            
            inputFile.close();  //closes input file
            
            cout << "Here are the contents of the file: " << endl;  //user info
            
            for (std::vector<int>::const_iterator i = testVector.begin(); i != testVector.end(); ++i)
                std::cout << *i << ' ';  //iterates through vector and prints is
            
            cout << endl;
            
            
            int vSize = testVector.size();  //gets size of the vector
            
            int testArray[vSize];  //creates an array of that size
            std::copy(testVector.begin(), testVector.end(), testArray);  //copies vector into array (figured this was easier, as the example I found in the book for a linear search used an array)
            
            /*
             Linear Search:  Page 596, 8th Edition.  Can't use binary because things aren't sorted yet.  Modified from the book
             */
            
            
            bool found = false;  //creates a bool to switch when target is found
            
            int position = -1;  //set at -1 because that can't be an array element
            int index = 0;  //starts at element 0
            
            while (index < vSize && found == false)  //goes through the array so long as bool hasn't switched yet
                
            {
                if (testArray[index] == searchValue)  //tests to see if element equals search value
                {
                    found = true;  //if found, switch bool
                    position = index;  //and set 'position' to the index number
                }
                index ++;  //and add to index so next time you're at the next number
            }
            
            cout << endl;
            
            if (found == true)  //if found...
            {
                cout << "Search Value Found!" << endl;
                cout << endl;
                cout << "Location: Position " << position << endl;  //print position
            }
            
            else
            {
                cout << "Sorry, not found!" << endl;  //otherwise, say it was not found
            }
            
            cout << endl;
            cout << endl;
            break;
            
        }
            
            
        case 4: {
            
            vector<int> testVector;  //creates a vector
            
            cout << "Opening file to search:" << endl;  //user info
            cout << endl;
            
            // open file (code modified from cplusplus.com)
            ifstream inputFile("end.txt");  //takes in end file
            
            // test file open  (code modified from cplusplus.com)
            if (inputFile) {
                int value;
                
                // read the elements in the file into a vector (code modified from cplusplus.com)
                while ( inputFile >> value ) {
                    testVector.push_back(value);
                }
            }
            
            inputFile.close();  //closes input file
            
            cout << "Here are the contents of the file: " << endl;  //user info
            
            for (std::vector<int>::const_iterator i = testVector.begin(); i != testVector.end(); ++i)
                std::cout << *i << ' ';  //iterates through vector and prints is
            
            cout << endl;
            
            
            int vSize = testVector.size();  //gets size of the vector
            
            int testArray[vSize];  //creates an array of that size
            std::copy(testVector.begin(), testVector.end(), testArray);  //copies vector into array (figured this was easier, as the example I found in the book for a linear search used an array)
            
            /*
             Linear Search:  Page 596, 8th Edition.  Can't use binary because things aren't sorted yet.  Modified from the book
             */
            
            
            bool found = false;  //creates a bool to switch when target is found
            
            int position = -1;  //set at -1 because that can't be an array element
            int index = 0;  //starts at element 0
            
            while (index < vSize && found == false)  //goes through the array so long as bool hasn't switched yet
                
            {
                if (testArray[index] == searchValue)  //tests to see if element equals search value
                {
                    found = true;  //if found, switch bool
                    position = index;  //and set 'position' to the index number
                }
                index ++;  //and add to index so next time you're at the next number
            }
            
            cout << endl;
            
            if (found == true)  //if found...
            {
                cout << "Search Value Found!" << endl;
                cout << endl;
                cout << "Location: Position " << position << endl;  //print position
            }
            
            else
            {
                cout << "Sorry, not found!" << endl;  //otherwise, say it was not found
            }
            
            cout << endl;
            cout << endl;
            break;
            
        }
            
            
    /*********************
   End Program One.  Begin Sort program:
   ********************/
    
        case 5:
        {
                    
                    vector<int> testVector;  //creates a vector
                    
                    //cout << "Opening file to search:" << endl;  //user info
                    cout << endl;
            
                  string fileOpen;
                int testSwitch;
            //ifstream inputFile("none.txt");
            
            //ifstream inputFile ;  //takes in middle file
while (validBool == true)
    
{
            cout << endl;  //lets user specify which file to sort.  2-4 will have the same result for now, but not necessarily always
            cout << "Which file would you like to sort?" << endl;
            cout << "For a file with no zeros, select 1." << endl;
            cout << "For a file with one zero near the beginning, select 2." << endl;
            cout << "For a file with one zero near the middle, select 3." << endl;
            cout << "For a file with one zero near the end, select 4." << endl;
    
            cin >> testSwitch;  //user input
            
            
            if (testSwitch > 0 && testSwitch < 5)  //validation.  If valid...
            {validBool = false;}  //end loop
            else
            {  //but if not...
                cout << endl;
                cout << "sorry, invalid input!" << endl;
                cout << endl;
                validBool = true;  //loop again
                
            }
        }
            
            validBool = true;  //resets just in case user goes again

            
                    switch (testSwitch)
            {
                case 1:
                {
                    fileOpen = "none.txt";  //takes in no zero file
                    break;
                }
                case 2:
                {
                    fileOpen = "early.txt";  //takes in early file
                    break;
                }
                case 3:
                {
                    fileOpen = "middle.txt";  //takes in middle file
                    break;
                }
                case 4:
                {
                    fileOpen = "end.txt";  //takes in end file
                    break;
                }


            }
            
            


            ifstream inputFile (fileOpen.c_str());  //opens user-chosen file

            
            
                    // open file (code modified from cplusplus.com)
                    //ifstream inputFile("middle.txt");  //takes in middle file
                    
                    // test file open  (code modified from cplusplus.com)
                    if (inputFile) {
                        int value;
                        
                        // read the elements in the file into a vector (code modified from cplusplus.com)
                        while ( inputFile >> value ) {
                            testVector.push_back(value);
                        }
                    }
                    
                    inputFile.close();  //closes input file
            
                    
                    int vSize = testVector.size();  //gets size of the vector
                    
                    int testArray[vSize];  //creates an array of that size
                    std::copy(testVector.begin(), testVector.end(), testArray);  //copies vector into array (figured this was easier, as the example I found in the book for a linear search used an array)
                    
                    /*
                     Linear Search:  Page 596, 8th Edition.  Can't use binary because things aren't sorted yet.  Modified from the book
                     */
                    

                    cout << endl;
                    cout << endl;


    /*
     Bubble Sort:  Page 607, 8th Edition
     */

    cout << "Sorting contents... " << endl;
    cout << endl;
    
    
    sortArray (testArray, vSize);  //sends array to be sorted
    
    
    cout << "Please enter a name for the file.  Sort results will be written to this file.  Please be sure to give it the proper extension: i.e. [filename].txt " << endl;
    
    string userFileName;  //for user defined filename
    cin >> userFileName;
    ofstream outputArray(userFileName.c_str(), ios::app);  //creates user file for output
    
    
    
    for(int i = vSize - 1; i >= 0; i--)  //loops through and....
    {
        outputArray<< testArray [i] << " "; //Outputs array to txtFile
    }

            
            cout << "Thanks! Here are the contents of the file, sorted: " << endl;
            
            for (int i = vSize - 1; i >= 0; i--)  //loops through and displays results
                cout << testArray[i] << " ";
            
            cout << endl;
            cout << endl;
           
            
            break;
        }
      
    /*********************
     End Program Two.  Begin Binary Sort program:
     ********************/
    
        case 6:
        {
    
    vector<int> binaryVector;  //creates vector
    
    // open file (from above)
    ifstream inputFileBinary("defaultSorted.txt");

    
    // test file open (from above)
    if (inputFileBinary) {
        int binaryValue;
        
        // read the elements in the file into a vector (from above)
        while ( inputFileBinary >> binaryValue ) {
            binaryVector.push_back(binaryValue);
        }
    }
    
    inputFileBinary.close();  //closes file
    
            cout << "The file contents are:" << endl;  //user info
            
    for (std::vector<int>::const_iterator i = binaryVector.begin(); i != binaryVector.end(); ++i)
        std::cout << *i << ' ';  //prints vector

    
    int binaryVsize = binaryVector.size();  //sets to vector size int
    
    
    int binaryArray[binaryVsize];  //creates array, just as above
    std::copy(binaryVector.begin(), binaryVector.end(), binaryArray);  //copies vector to array

    
    /*
     Binary Search:  Page 599, 8th Edition
     */
    
    
    int first = 0;
    int last = binaryVsize -1;
    int middle;
    int binaryPosition = -1;
    
    bool binaryFound = false;
    
    while (!binaryFound && first <= last)
    {
        middle = (first + last) / 2;
        if (binaryArray [middle] == searchValue)
        {
            binaryFound = true;
            binaryPosition = middle;
        }
        else if (binaryArray [middle] > searchValue)
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
    }

    
    
    if (binaryFound == true)  //if found...
    {
        cout << "Search Value Found!" << endl;  //user info
        cout << "Location: Position " << binaryPosition << endl;  //prints where it was found
    }
    
    else
    {
        cout << "Sorry, not found!" << endl;  //if not found
    }
        }
    }
        
        
        
        
char againChar;  //creates char input for again loop

        
        while (inputBool == true)  //validation loop
        {
        cout << "Would you like to go again? Please select 'y' or 'n':" << endl;  //user directions
    
        
        cin >> againChar;  //char input for user to choose if they want to go again
        
        
        if (againChar == 'y' or againChar == 'n')  //validation.  If valid...
        {
            
            if (againChar == 'n')  //if user doesn't want to go again
            {continuebool = false;}  //set to false
            
            else
            {
                cout << endl;
                continuebool = true;  //but if they do, make sure it will loop again
            }

            inputBool = false;}  //end loop

        else
        {  //but if not...
            cout << endl;
            cout << "sorry, invalid input!" << endl;
            cout << endl;
            inputBool = true;  //loop again
            
        }

        }
    }
    
    cout << "thanks!" << endl;  //thanks the user
    
    return 0;
}


void sortArray (int array [], int size)  //sorting function.  Taken from book (citation above, in main)
{
    int temp;  //temp int
    bool swap;  //bool for if it swaps or not
    do  //do-while loop
    {
        swap = false;  //set swap to false (resets it)
        for (int count = 0; count < (size - 1); count ++)  //loops through
        {
            if (array[count] < array [count + 1])  //compares values
            {
                temp = array[count];  //sets array int. to count
                array [count] = array [count + 1];  //splits the difference
                array [count + 1] = temp;  //resets it to temp
                swap = true;  //sets swap to true.  Loop won't end until no swaps happen
            }
        }
    } while (swap);
}


