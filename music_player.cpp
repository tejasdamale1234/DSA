#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string title;
    string artist;
    Node* prev;
    Node* next;

    Node(string t, string a) {
        title = t;
        artist = a;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* current;

public:
    DoublyLinkedList() {
        head = NULL;
        current = NULL;
    }

    void addSong(string t, string a) {
        Node* p = new Node(t, a);
        if (head == NULL) {
            head = p;
            current = p;
        } else {
            Node* q = head;
            while (q->next != NULL) {
                q = q->next;
            }
            q->next = p;
            p->prev = q;
        }
        cout << "Song Added Successfully\n";
    }

    void deleteSong(string t) {
        if (head == NULL) {
            cout << "Playlist is empty\n";
            return;
        }

        Node* q = head;

        if (q->title == t) {
            Node* p = head;
            head = head->next;
            if (head != NULL) {
                head->prev = NULL;
            }
            if (current == p) {
                current = head;
            }
            delete p;
            cout << "Song Deleted\n";
            return;
        }

        while (q->next != NULL) {
            if (q->next->title == t) {
                Node* p = q->next;
                q->next = p->next;
                if (p->next != NULL) {
                    p->next->prev = q;
                }
                if (current == p) {
                    if (q->next != NULL) {
                        current = q->next;
                    } else {
                        current = q;
                    }
                }
                delete p;
                cout << "Song Deleted\n";
                return;
            }
            q = q->next;
        }

        cout << "Song not found\n";
    }

    void displayForward() {
        if (head == NULL) {
            cout << "Playlist is empty\n";
            return;
        }
        Node* q = head;
        int i = 1;
        cout << "\nPlaylist:\n";
        while (q != NULL) {
            cout << i << ". " << q->title << " - " << q->artist;
            if (q == current) {
                cout << " (Playing)";
            }
            cout << "\n";
            q = q->next;
            i++;
        }
    }

    void displayBackward() {
        Node* q = head;
        if (q == NULL) {
            cout << "Playlist is empty\n";
            return;
        }
        while (q->next != NULL) {
            q = q->next;
        }
        cout << "\nPlaylist in Reverse:\n";
        while (q != NULL) {
            cout << q->title << " - " << q->artist << "\n";
            q = q->prev;
        }
    }

    void playCurrent() {
        if (current == NULL) {
            cout << "No song playing\n";
        } else {
            cout << "Playing: " << current->title << " by " << current->artist << "\n";
        }
    }

    void playNext() {
        if (current == NULL) {
            cout << "Playlist is empty\n";
        } else if (current->next == NULL) {
            cout << "End of playlist reached\n";
        } else {
            current = current->next;
            playCurrent();
        }
    }

    void playPrevious() {
        if (current == NULL) {
            cout << "Playlist is empty\n";
        } else if (current->prev == NULL) {
            cout << "Beginning of playlist reached\n";
        } else {
            current = current->prev;
            playCurrent();
        }
    }

    void playComplete() {
        if (head == NULL) {
            cout << "Playlist is empty\n";
            return;
        }
        Node* q = head;
        cout << "\nPlaying all songs:\n";
        while (q != NULL) {
            cout << q->title << " - " << q->artist << "\n";
            q = q->next;
        }
    }

    void repeatAll(int n) {
        if (head == NULL) {
            cout << "Playlist is empty\n";
            return;
        }
        for (int i = 1; i <= n; i++) {
            cout << "\nLoop " << i << ":\n";
            Node* q = head;
            while (q != NULL) {
                cout << q->title << " - " << q->artist << "\n";
                q = q->next;
            }
        }
    }

    void showCurrent() {
        if (current == NULL) {
            cout << "No current song\n";
        } else {
            cout << "Current Song: " << current->title << " - " << current->artist << "\n";
        }
    }
};

int main() {
    DoublyLinkedList list;
    int choice;
    string title, artist;
    int r;

    do {
        cout << "\n--- Music Playlist Manager ---\n";
        cout << "1. Add Song\n";
        cout << "2. Delete Song\n";
        cout << "3. Display Playlist\n";
        cout << "4. Display Playlist in Reverse\n";
        cout << "5. Play Current Song\n";
        cout << "6. Play Next Song\n";
        cout << "7. Play Previous Song\n";
        cout << "8. Play Complete Playlist\n";
        cout << "9. Repeat All\n";
        cout << "10. Show Current Song\n";
        cout << "11. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter title: ";
                getline(cin, title);
                cout << "Enter artist: ";
                getline(cin, artist);
                list.addSong(title, artist);
                break;

            case 2:
                cout << "Enter title to delete: ";
                getline(cin, title);
                list.deleteSong(title);
                break;

            case 3:
                list.displayForward();
                break;

            case 4:
                list.displayBackward();
                break;

            case 5:
                list.playCurrent();
                break;

            case 6:
                list.playNext();
                break;

            case 7:
                list.playPrevious();
                break;

            case 8:
                list.playComplete();
                break;

            case 9:
                cout << "Enter repetitions: ";
                cin >> r;
                list.repeatAll(r);
                break;

            case 10:
                list.showCurrent();
                break;

            case 11:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 11);

    return 0;
}

/*
OUTPUT:

--- Music Playlist Manager ---
1. Add Song
2. Delete Song
3. Display Playlist
4. Display Playlist in Reverse
5. Play Current Song
6. Play Next Song
7. Play Previous Song
8. Play Complete Playlist
9. Repeat All
10. Show Current Song
11. Exit
Enter choice: 3
Playlist is empty

Enter choice: 5
No song playing

Enter choice: 7
Playlist is empty

Enter choice: 6
Playlist is empty

Enter choice: 1
Enter title: Believer
Enter artist: Imagine Dragons
Song Added Successfully

Enter choice: 1
Enter title: Faded
Enter artist: Alan Walker
Song Added Successfully

Enter choice: 1
Enter title: Spectre
Enter artist: Alan Walker
Song Added Successfully

Enter choice: 3

Playlist:
1. Believer - Imagine Dragons (Playing)
2. Faded - Alan Walker
3. Spectre - Alan Walker

Enter choice: 4

Playlist in Reverse:
Spectre - Alan Walker
Faded - Alan Walker
Believer - Imagine Dragons

Enter choice: 5
Playing: Believer by Imagine Dragons

Enter choice: 10
Current Song: Believer - Imagine Dragons

Enter choice: 7
Beginning of playlist reached

Enter choice: 6
Playing: Faded by Alan Walker

Enter choice: 6
Playing: Spectre by Alan Walker

Enter choice: 6
End of playlist reached

Enter choice: 7
Playing: Faded by Alan Walker

Enter choice: 8

Playing all songs:
Believer - Imagine Dragons
Faded - Alan Walker
Spectre - Alan Walker

Enter choice: 9
Enter repetitions: 2

Loop 1:
Believer - Imagine Dragons
Faded - Alan Walker
Spectre - Alan Walker

Loop 2:
Believer - Imagine Dragons
Faded - Alan Walker
Spectre - Alan Walker

Enter choice: 2
Enter title to delete: Alone
Song not found

Enter choice: 2
Enter title to delete: Faded
Song Deleted

Enter choice: 3

Playlist:
1. Believer - Imagine Dragons
2. Spectre - Alan Walker (Playing)

Enter choice: 2
Enter title to delete: Believer
Song Deleted

Enter choice: 3

Playlist:
1. Spectre - Alan Walker (Playing)

Enter choice: 11
Exiting...
*/
