# Input and errors handling

cin is an object of the istream class in C++ that is used to read input from the user or from a file. The istream class has several member functions that can be used to check the status of the input stream. These member functions include good(), bad(), fail(), and eof().

    good() function: It returns true if the input stream is in a good state, which means that there are no errors and the end-of-file (EOF) has not been reached.

    bad() function: It returns true if the input stream has encountered an irrecoverable error. For example, this can happen if the input stream is closed while an input operation is in progress.

    fail() function: It returns true if the input stream has encountered a recoverable error. For example, this can happen if the user inputs a value of the wrong data type or if the input buffer is empty.

    eof() function: It returns true if the end-of-file (EOF) has been reached in the input stream.

    These member functions are used to check the state of the input stream after an input operation has been performed. They can be used to determine whether the input operation was successful or not.

In addition, the istream class has several flags that can be used to check the status of the input stream. These flags include:

    goodbit: This flag is set when the input stream is in a good state.

    badbit: This flag is set when the input stream has encountered an irrecoverable error.

    failbit: This flag is set when the input stream has encountered a recoverable error.

    eofbit: This flag is set when the end-of-file (EOF) has been reached in the input stream.

These flags can be combined using bitwise OR (|) and stored in the iostate type, which is a bitmask type that is used to represent the state of the input stream. For example, goodbit | eofbit represents a state where the input stream is in a good state and the end-of-file has been reached.

So,

* goodbit is equivalent to calling good() function,
* badbit is equivalent to calling bad() function,
* and eofbit is equivalent to calling eof() function to check the state of the input stream
