//ask to exit function
//asks user if they wish to leave the program.
//should be preceded by a function prototype.
int AskToExit()
{
	char input;
    cout << "Do you want to run the program again? Type 'y' if you do, or any (alphanumeric) key to leave. ";
        cin >> input;
        if (input == 'y')
            program();
        else if (input != 'y')
            return 0;
}
