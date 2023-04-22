#include <stdio.h>

// Constants
#define NumberOfCourses 10
#define NumberOfUsers 4
#define MaxCourses 12

// User Arrays
char usernames[NumberOfUsers][20] = {};
char passwords[NumberOfUsers][20] = {};
char user_details[NumberOfUsers][8][20] = {};
char user_courses[NumberOfUsers][MaxCourses][10];

// Course Arrays
char courses[NumberOfCourses][10] = {};
char course_details[NumberOfCourses][5][10] = {}; // [course index][type, section, time, day, room]
int course_units[NumberOfCourses] = {};

// Login module
bool login(char *username, char *password)
{
}

// Display profile module
void display_student_profile(char *username)
{
}

// Course enrollment module
void course_enrollment()
{
}

// Fees module
// user_courses are for courses the user selected, num_courses is the amount of courses in user_courses
void fees(char (*user_courses)[MaxCourses][10], int num_courses) {
  double total_fees = 0.0;
    
    for (int i = 0; i < num_courses; i++) {
        char* course_name = user_courses[0][i];
        int course_index = -1;
        for (int j = 0; j < NumberOfCourses; j++) {
            if (strcmp(course_name, courses[j]) == 0) {
                course_index = j;
                break;
            }
        }
        if (course_index == -1) {
            printf("Error: Course not found\n");
            return;
        }
        char* unit_type = course_details[course_index][0];
        if (strcmp(unit_type, "Lecture") == 0) {
            total_fees += 1500.50;
        } else if (strcmp(unit_type, "Lab") == 0) {
            total_fees += 2500.00;
        }
        printf("%s: %s\n", course_name, unit_type);
    }
    printf("Total fees: $%.2f\n", total_fees);
}

// Main module
void main()
{
}

