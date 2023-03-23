#include <filesystem>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>     
#include <time.h>
#include <cstdlib>

using namespace std;
namespace fs = std::filesystem;

/*

https://en.cppreference.com/w/cpp/filesystem

Quick guide: 

    - Creating path variable with diffrent methodes:
        fs::path path{"Hello"};             => Hello
        path /= "Training";                 => Hello\Training
        path = path / "Modern" / "Cpp17";   => Hello\Training\Modern\Cpp17
        path.append("Programming.txt");     => Hello\Training\Modern\Cpp17\Programming.txt

    or:
        use functions like: fs::path path = fs::curent_path()

    - directory iterator loop:
        for(const auto& entry : fs::directory_iterator(base_path) {put code here}
        where:
        - entry -> all the elements inside the directory
        - base_path -> path to directory which we want to itarate through.

    - Rename a file:
        std::filesystem::rename(old_file_path, old_file_path.parent_path() / new_name);

*/

/*
Task 1: Create a variable that stores the path to your solution (.cpp file). Decpomose it to obtain the following:
    - root path
    - parentpath
    - filename
    - stem
    - extension
*/
void task1() {
    //Create variable bellow

    cout << "Decomposition:\n\n";
    //Print path components bellow
}

/*
Task 2: Create a variable that stores the path to your solution or .exe file (filesystem::current_path), use an iterator to print all the elements in this directory.
    Create two loops one for regular files and another for directories.
*/
void task2() {
    
}

/*
Task 3: Create a directory "temp\dir\subdir". Next:
    a. Create a .txt file in temp directory temp\file.txt
    Use std::ofstream(<path_to_directory>).put("Hello Wrold"); -> You have to include fstream library for this to work.
    b. Copy the .txt file into the same directory, change it's name. 
    c. Rename the initial .txt file with the use of: filesystem::rename()
    d. Copy the "dir" directory into the same directory, change it's name. (Copy non recursively)
    e. Copy the entire "temp" directory recursively into temp\copy directory (filesystem::copy_options::recursive)

    Your files should like like this after the operation:
        temp holds 2 files and 3 directories, two of which have subdirectories
        temp\file1.txt          //Example .txt file name
        temp\file2.txt       
        temp\dir2               //Example directory name -> Without recursion.
        temp\dir
        temp\dir\subdir
        temp\copy\              //Contains recursive copy of the directory, contians all subdirectories and files

*/
void task3() {
    
}

/*
Task 4: Initial code generates a lot of diffrent files inside a new directory. Remove only the .cpp files. Than cout the number of files inside the directory.
*/
void task4() {
    
}

/*
Task 5: Remove directories created in task 3 and 4.
*/
void task5() {
    
}

int main(int, char**) {
    
    cout << "Task 1\n";
    task1();
    cout << "Task 2\n";
    task2();
    cout << "Task 3\n";
    task3();
    cout << "Task 4\n";
    task4();
    cout << "Task 5\n";
    //task5();

    return 0;
}