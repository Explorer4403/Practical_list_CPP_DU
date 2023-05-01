 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string filename, content, line;
    ofstream file;
    cout << "Enter the filename: ";
    cin >> filename;
    file.open(filename);
    cout << "Enter the content: ";
    cin.ignore();
    getline(cin, content);
    file << content;
    file.close();
    ifstream infile(filename);
    cout << "Contents of the file:" << endl;
    while (getline(infile, line)) {
        cout << line << endl;
    }
    infile.close();

    return 0;
}
 
