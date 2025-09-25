int main(int argc, char *argv[]) {
    if (argc == 1) {
        std::cout << "The program was run with no arguments. Usage: >/[program name] [arg1] [arg2] ..." << std::endl;
        return 1;
    }

    // Call structCall first; it will print the result and terminate the program if false
    if (!structCall(argc, argv)) {
        return 1;
    }

    // Call boundCall second; it also prints the result
    boundCall(argc, argv);

    return 0;
}