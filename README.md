# Java Language Compiler

## Description

Java Language Compiler is a simple C program that automates the process of compiling and running Java programs. It takes the file name of a Java source file as input, compiles it using the `javac` command, and then runs the compiled Java program using the `java` command.

## Project Owner

- Name: Om Shingare
- GitHub: [ShingareOm](https://github.com/ShingareOm)

## Getting Started

### Prerequisites

- Make sure you have Java Development Kit (JDK) installed on your system.

### Usage

1. Clone the repository:

```bash
git clone https://github.com/ShingareOm/JavaLanguageCompiler.git
```

2. Compile the C program:
```bash
gcc main.c -o JavaCompiler
```

3. Run the program:
```bash
./JavaCompiler
```

4. Enter the Java source file name (without the .java extension) when prompted.

5. The program will compile the Java file and execute it automatically.

### Making the Executable File Global
1. For Linux and macOS Users

    - If you are using Linux or macOS, you can add the JavaCompiler executable to a directory in your system's PATH, so you can run it from anywhere in the terminal.

    - After compiling the C program and obtaining the JavaCompiler executable, move it to a directory that you want to use for storing your globally accessible executables. For example, you can create a bin directory in your home folder and move the JavaCompiler executable there.

    - Open your terminal and navigate to your home directory (or any other location where you stored the JavaCompiler executable).

    - Run the following command to open your shell's profile file in a text editor. Depending on the shell you are using, the profile file could be .bashrc, .bash_profile, .zshrc, or something similar.

    ```bash
    nano .bashrc
    ```

    - Add the following line at the end of the profile file. Replace /path/to/bin with the actual path to the directory containing the JavaCompiler executable.

    ```bash
    export PATH="/path/to/bin:$PATH"
    ```

    - Save and close the file by pressing Ctrl + X, then Y, and finally Enter (if you're using nano).

    - Refresh your shell by running the following command:

    ```bash
    source .bashrc
    ```
    - Now you should be able to run the JavaCompiler executable from anywhere in the terminal.

    ```bash
    JavaCompiler
    ```
    - Please ensure that the JavaCompiler executable is in a secure and trusted location, as adding directories to the PATH can potentially pose security risks if you include untrusted or malicious executables.

2. For Windows Users
    - If you are using Windows, you can add the JavaCompiler executable to a directory in your system's PATH to run it from anywhere in the Command Prompt or PowerShell.

    - After compiling the C program and obtaining the JavaCompiler executable, move it to a directory that you want to use for storing your globally accessible executables. For example, you can create a bin directory in your C:\ drive and move the JavaCompiler executable there.

    - Open the Start menu, type "environment variables," and select "Edit the system environment variables."

    - Click the "Environment Variables" button at the bottom right.

    - In the "System Variables" section, scroll down and find the "Path" variable. Click "Edit."

    - Click "New" and enter the full path to the directory containing the JavaCompiler executable (e.g., C:\bin).

    - Click "OK" to save the changes.

    - Open a new Command Prompt or PowerShell window (or restart your existing one).

    - Now you should be able to run the JavaCompiler executable from anywhere in the Command Prompt or PowerShell.

    ```bash
    JavaCompiler
    ```
    - Please ensure that the JavaCompiler executable is in a secure and trusted location, as adding directories to the PATH can potentially pose security risks if you include untrusted or malicious executables.


## Contributing
Contributions are welcome! If you find any issues or want to add new features, feel free to open an issue or submit a pull request.

## License
This project is licensed under the [MIT License](LICENSE).
