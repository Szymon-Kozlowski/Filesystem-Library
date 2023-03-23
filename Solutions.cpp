#include <filesystem>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>

using namespace std;
namespace fs = std::filesystem;

void task1() {
    fs::path p{"C:\\example\\path\\to\\your\\file\\main.cpp"};
    cout << p << endl;

    cout << "Decomposition:\n";
    cout << p.root_path() << endl;
    cout << p.parent_path() << endl;
    cout << p.filename() << endl;
    cout << p.stem() << endl;
    cout << p.extension() << endl;
}

void task2() {
    auto base_path = fs::current_path();

    cout << "Content of: " << base_path << endl;
    for(const auto& entry : fs::directory_iterator(base_path)){
        cout << entry.path() << endl;
    }
}

void task3() {

    if(fs::exists("temp")) {
        std::cout << "Directory already exists, removing" << std::endl;
        fs::remove_all("temp");
    }
    fs::create_directories("temp\\dir\\subdir");
    std::ofstream("temp\\file1.txt").put('a');
    fs::copy("temp\\file1.txt", "temp\\file2.txt");

    std::filesystem::rename("temp\\file1.txt", "temp\\file3.txt");

    fs::copy("temp\\dir","temp\\dir2");

    fs::copy("temp", "temp\\copy1", fs::copy_options::recursive);

    std::cout << "All objects created" << std::endl;

    std::system("tree temp");
}

void task4() {

    if(fs::exists("test")) {
        fs::remove_all("test");
    }

    srand (time(NULL));
    std::filesystem::create_directories("test");
    for (size_t i = 0; i < rand() % 100; i++) {
        std::ofstream("test\\filet" + std::to_string(i) + ".txt").put('a');
        std::ofstream("test\\filep" + std::to_string(i) + ".py").put('a');
        std::ofstream("test\\filec" + std::to_string(i) + ".cpp").put('a');
    }

    unsigned int number_of_files = 0;

    for (const auto& entry : std::filesystem::recursive_directory_iterator("test")) {
        if (entry.is_regular_file()) {
            if(entry.path().extension() == ".cpp") {
                remove(entry.path());
            }
            else {
                number_of_files++;
            }
        }
    }
    cout << "Number of files: " << number_of_files << endl;
}

void task5() {
    fs::remove_all("temp");
    fs::remove_all("test");
}


int main(int, char**) {
  cout << "\nTask 1\n";
  task1();
  cout << "\nTask 2\n";
  task2();
  cout << "\nTask 3\n";
  task3();
  cout << "\nTask 4\n";
  task4();
  cout << "\nTask 5\n";
}