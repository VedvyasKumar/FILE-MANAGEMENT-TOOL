#FILE-MANAGEMENT-TOOL 

COMPANY NAME:CODETECH IT SOLUTION

NAME VEDVYAS KUMAR
 
 INTERN ID:CT04DF160
DOMAIN:C++
MENTOR:NEELA SANTOSH
#DESCRIPTION
C++ File Management Program – Description and Concepts
This C++ program is a simple yet functional file management tool that allows users to perform three key operations on text files: writing, reading, and appending data. It utilizes fundamental file handling concepts in C++, combined with basic input/output operations, to create a console-based application. This type of program is commonly used in real-world applications where managing data through file storage is essential.

Core Functionality
Upon execution, the program presents a menu with three options:

Write to a file

Read from a file

Append to a file

The user selects an option and provides the name of the file they wish to interact with. Based on the selected option, the corresponding function is called to perform the desired operation.

Writing to a File
The writeFile function allows the user to overwrite the contents of a file or create a new file if it doesn't exist. This is done using an ofstream object, which is part of the <fstream> library. The file is opened in default output mode, which clears any existing content. The user is prompted to enter a line of text, which is then written to the file using the stream insertion operator (<<). Finally, the file is closed using the .close() method to ensure data is properly saved and system resources are released.

Concepts involved:

ofstream: Used to write data to files.

File overwriting: Default mode of ofstream erases existing content.

getline(cin, data): Ensures full-line input, including spaces.

Reading from a File
The readFile function reads and displays the content of a specified file. It uses an ifstream object to open the file in input mode. A while loop combined with getline() reads the file line-by-line and outputs each line to the console. This method ensures that the file is read until the end-of-file (EOF) is reached.

Concepts involved:

ifstream: Used to read data from files.

getline(file, line): Reads lines of text efficiently.

End-of-file detection: Loop continues until no more lines are available.

Appending to a File
The appendFile function adds new content to the end of an existing file without deleting its current data. This is achieved by opening the file using an ofstream with the ios::app (append) mode. Like in the write function, user input is collected with getline() and written to the file. The file is then closed properly.

Concepts involved:

ios::app: Opens the file in append mode.

Data preservation: Existing content remains untouched.

Program Structure and Flow
The main function controls the overall flow of the program. It prompts the user to enter a file name, then presents a menu to choose an operation. A switch statement handles the user’s choice and calls the appropriate function. Input validation is basic but ensures invalid menu choices are caught.

A minor use of cin.ignore() is made to clear the input buffer before calling getline() after a cin >> operation. This prevents leftover newline characters from interfering with string input.

Concepts in Use
The program integrates several core C++ programming concepts:

File I/O (Input/Output): Through the <fstream> library, using ifstream, ofstream, and file modes.

Standard I/O: Via cin and cout for user interaction.

Control Structures: Conditional statements (switch) and loops (while) for file reading.

Functions: To modularize the code and separate logic for readability and reuse.

String Handling: With getline() for robust and flexible input collection.

Conclusion
This C++ file management program is a practical demonstration of file handling operations, which are critical for many software applications. It introduces beginners to how data can be stored, retrieved, and manipulated using simple file operations. With clear logic and modular structure, the program can be expanded in the future to include more features such as file deletion, renaming, or encryption.

Let me know if you'd like a version with enhancements like input validation, looping, or file existence checks.

OUTPUT

![Image](https://github.com/user-attachments/assets/a68292db-35ed-4b03-bd8c-713f04d466b1)



