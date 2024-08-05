#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    string author;
    string edition;
    string publicationDate;
    string ISBN;

public:
    void inputInfo() {
        author = "Jason Roy";
        edition = "2nd Edition";
        publicationDate = "2023-09-30";
        ISBN = "1234567890";
    }

    void displayInfo() {
        cout << "Book Information:" << endl;
        cout << "Author: " << author << endl;
        cout << "Edition: " << edition << endl;
        cout << "Publication Date: " << publicationDate << endl;
        cout << "ISBN: " << ISBN << endl;
    }
};

class VoiceRecording {
protected:
    string speaker;
    string duration;
    string recordingDate;

public:
    void inputInfo() {
        speaker = "Speaker Name";
        duration = "1 hour";
        recordingDate = "2023-09-30";
    }

    void displayInfo() {
        cout << "Voice Recording Information:" << endl;
        cout << "Speaker: " << speaker << endl;
        cout << "Duration: " << duration << endl;
        cout << "Recording Date: " << recordingDate << endl;
    }
};

class TalkingBook : public Book, public VoiceRecording {
public:
    void inputInfo() {
        Book::inputInfo();
        VoiceRecording::inputInfo();
    }

    void displayInfo() {
        cout << "Talking Book Information:" << endl;
        Book::displayInfo();
        VoiceRecording::displayInfo();
    }
};

int main() {
    TalkingBook tb;

    // Provide sample input data
    tb.inputInfo();

    // Display the information
    tb.displayInfo();

    return 0;
}
