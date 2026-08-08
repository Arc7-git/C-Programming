/*Create Structure EMPLOYEE for storing details (Name, Designation, gender, Date of Joining and Salary).
Define function members to compute
a) total number of employees in an organization
b) count of male and female employee
c) Employee with salary more than 10,000 d) Employee with designation “Asst Manager”*/
#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[50];
    char designation[50];
    char gender;
    char doj[15];
    float salary;
};

int totalEmployees(int n)
{
    return n;
}

void countGender(struct Employee emp[], int n)
{
    int male = 0, female = 0;

    for (int i = 0; i < n; i++)
    {
        if (emp[i].gender == 'M' || emp[i].gender == 'm')
            male++;
        else if (emp[i].gender == 'F' || emp[i].gender == 'f')
            female++;
    }

    printf("Male Employees: %d\n", male);
    printf("Female Employees: %d\n", female);
}

void highSalary(struct Employee emp[], int n)
{
    printf("\nEmployees with salary > 10000:\n");
    for (int i = 0; i < n; i++)
    {
        if (emp[i].salary > 10000)
        {
            printf("%s\n", emp[i].name);
        }
    }
}

void asstManager(struct Employee emp[], int n)
{
    printf("\nEmployees with designation 'Asst Manager':\n");
    for (int i = 0; i < n; i++)
    {
        if (strcmp(emp[i].designation, "Asst Manager") == 0)
        {
            printf("%s\n", emp[i].name);
        }
    }
}

int main()
{
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Designation: ");
        scanf(" %[^\n]", emp[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &emp[i].gender);

        printf("Date of Joining: ");
        scanf(" %[^\n]", emp[i].doj);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Outputs
    printf("\nTotal Employees: %d\n", totalEmployees(n));

    countGender(emp, n);
    highSalary(emp, n);
    asstManager(emp, n);

    return 0;
}