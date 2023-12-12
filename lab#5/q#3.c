#include <stdio.h>
#include <string.h>

struct stdDatabase {
    int rollno;
    char name[50];
    int grade;
};

int firstInterface() {
    int choice;
    printf("\nSelect the desired option:\n");
    printf("1. New student\n");
    printf("2. Modify existing record\n");
    printf("3. Delete a record\n");
    printf("4. Display all records\n");
    printf("5. Exit\n");
    scanf("%d", &choice);
    if (choice < 1 || choice > 5) {
        printf("\nExiting!!");
        return -1;
    } else {
        return choice;
    }
}

int displayRecord() {
    FILE *fp;
    fp = fopen("studentdata.txt", "r");
    if (fp != NULL) {
        char c;
        while ((c = fgetc(fp)) != EOF) {
            putchar(c);
        }
        fclose(fp);
    } else {
        printf("Cannot open file.\n");
    }
    return 0;
}

int newStudent() {
    struct stdDatabase student;
    printf("\nEnter roll #: \n");
    scanf("%d", &student.rollno);
    printf("Enter name:\n");
    scanf("%s", student.name);
    printf("Enter grade:\n");
    scanf("%d", &student.grade);

    FILE *fp;
    fp = fopen("studentdata.txt", "a");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 0;
    }
    fprintf(fp, "%d %s %d\n", student.rollno, student.name, student.grade);
    fclose(fp);
    return 0;
}

int deleteRecord() {
    int rollNumber;
    printf("Enter the roll number to delete: ");
    scanf("%d", &rollNumber);

    FILE *fp, *tempFile;
    fp = fopen("studentdata.txt", "r");
    tempFile = fopen("temp.txt", "w");

    if (fp == NULL || tempFile == NULL) {
        printf("Cannot open file.\n");
        return 0;
    }

    struct stdDatabase currentStudent;
    while (fscanf(fp, "%d %s %d", &currentStudent.rollno, currentStudent.name, &currentStudent.grade) != EOF) {
        if (currentStudent.rollno != rollNumber) {
            fprintf(tempFile, "%d %s %d\n", currentStudent.rollno, currentStudent.name, currentStudent.grade);
        }
    }

    fclose(fp);
    fclose(tempFile);

    remove("studentdata.txt");
    rename("temp.txt", "studentdata.txt");

    printf("Record deleted successfully!\n");
    return 0;
}

int modifyRecord() {
    int rollNumber;
    printf("Enter the roll number to modify: ");
    scanf("%d", &rollNumber);

    FILE *fp, *tempFile;
    fp = fopen("studentdata.txt", "r");
    tempFile = fopen("temp.txt", "w");

    if (fp == NULL || tempFile == NULL) {
        printf("Cannot open file.\n");
        return 0;
    }

    struct stdDatabase currentStudent;
    while (fscanf(fp, "%d %s %d", &currentStudent.rollno, currentStudent.name, &currentStudent.grade) != EOF) {
        if (currentStudent.rollno == rollNumber) {
            printf("Enter new name: ");
            scanf("%s", currentStudent.name);
            printf("Enter new grade: ");
            scanf("%d", &currentStudent.grade);
        }
        fprintf(tempFile, "%d %s %d\n", currentStudent.rollno, currentStudent.name, currentStudent.grade);
    }

    fclose(fp);
    fclose(tempFile);

    remove("studentdata.txt");
    rename("temp.txt", "studentdata.txt");

    printf("Record modified successfully!\n");
    return 0;
}

int main() {
    while (1) {
        int choice = firstInterface();
        switch (choice) {
            case 1:
                newStudent();
                break;
            case 2:
                modifyRecord();
                break;
            case 3:
                deleteRecord();
                break;
            case 4:
                displayRecord();
                break;
            case -1:
                printf("Exiting!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
