#include <iostream>
#include <queue>
#include <string>
#include <ctime>
#include <thread>
#include <chrono>
using namespace std;

// --- Heart Rate Zone Calculator ---
void heartRateZone() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    int maxHeartRate = 220 - age;
    int lowerZone = maxHeartRate * 50 / 100;
    int upperZone = maxHeartRate * 85 / 100;

    cout << "\n[Heart Rate Zone]\n";
    cout << "Max Heart Rate: " << maxHeartRate << " bpm\n";
    cout << "Target Zone: " << lowerZone << " - " << upperZone << " bpm\n";
}

// --- Medical Appointment Scheduler ---
void appointmentScheduler() {
    queue<string> patients;
    int n;
    cout << "Enter number of patients: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string name;
        cout << "Enter patient " << i << " name: ";
        cin >> name;
        patients.push(name);
    }

    cout << "\n[Appointment Queue]\n";
    while (!patients.empty()) {
        cout << "Now serving: " << patients.front() << endl;
        patients.pop();
    }
}

// --- Pill Reminder System ---
void pillReminder() {
    int seconds;
    cout << "Enter reminder time in seconds: ";
    cin >> seconds;

    cout << "Reminder set! Please wait...\n";
    this_thread::sleep_for(chrono::seconds(seconds));

    cout << "\n[Pill Reminder]\n";
    cout << "Time to take your medicine!\n";
}

// --- Main Menu ---
int main() {
    int choice;
    do {
        cout << "\n--- Health & Well-being System ---\n";
        cout << "1. Heart Rate Zone Calculator\n";
        cout << "2. Medical Appointment Scheduler\n";
        cout << "3. Pill Reminder System\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: heartRateZone(); break;
            case 2: appointmentScheduler(); break;
            case 3: pillReminder(); break;
            case 4: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
