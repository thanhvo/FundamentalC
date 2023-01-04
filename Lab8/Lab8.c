#include <stdio.h>
#include <string.h>

#define SIZE 100

struct Employee 
{
    int id;
    char name[SIZE];
    char sex[SIZE];
    int birthyear;
    int phone_number;
    int salary;
};

void print_employee(struct Employee employee)
{
    printf("id : %d\n", employee.id);
    printf("name : %s\n", employee.name);
    printf("sex : %s\n", employee.sex);
    printf("birthyear : %d\n", employee.birthyear);
    printf("phone number : %d\n", employee.phone_number);
    printf("salary : %d\n", employee.salary);
}

void set_data(struct Employee *employee, const int id, const char* name, const char* sex, const int birthyear, const int phone_number, const int salary)
{
    employee->id = id;
    strcpy(employee->name, name);
    strcpy(employee->sex, sex);
    employee->birthyear = birthyear;
    employee->phone_number = phone_number;
    employee->salary = salary;
}

void set_employees(struct Employee *employees, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        char name[SIZE];
        char sex[SIZE];
        snprintf(name, SIZE, "Employee%d", i);
        if (i % 2) strcpy(sex, "male");
        else strcpy(sex, "female");
        set_data(employees + i, i, name, sex, 2000 - i, 9100 + i, 1000 + i);
    }
}

void print_employees(struct Employee *employees, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        print_employee(*(employees + i));
    }
}

int find_employee(struct Employee *employees, int size, int id)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if ((employees + i)->id == id) return i;
    }
    return -1;
}

int count_males(struct Employee *employees, int size)
{
    int i, count = 0;
    for (i = 0; i < size; i++)
    {
        if (strcmp(employees[i].sex, "male") == 0) count++;
    }
    return count;
}

int count_females(struct Employee *employees, int size)
{
    int i, count = 0;
    for (i = 0; i < size; i++)
    {
        if (strcmp(employees[i].sex, "female") == 0) count++;
    }
    return count;
}

void copy(struct Employee *e1, const struct Employee *e2)
{
    e1->id = e2->id;
    strcpy(e1->name, e2->name);
    strcpy(e1->sex, e2->sex);
    e1->birthyear = e2->birthyear;
    e1->phone_number = e2->phone_number;
    e1->salary = e2->salary;
}

void swap(struct Employee *e1,  struct Employee *e2)
{
    struct Employee temp;
    copy(&temp, e1);
    copy(e1, e2);
    copy(e2, &temp);
}

void sort_birthyear(struct Employee *employees, int size)
{
    int i, j;
    for (i = 0; i < size; i++)
        for (j = i + 1; j < size; j++)
        {
            if (employees[i].birthyear > employees[j].birthyear)
                swap(employees + i, employees + j);
        }
}

void sort_salary(struct Employee *employees, int size)
{
    int i, j;
    for (i = 0; i < size; i++)
        for (j = i + 1; j < size; j++)
        {
            if (employees[i].salary > employees[j].salary)
                swap(employees + i, employees + j);
        }
}

int find_max_salary(struct Employee *employees, int size)
{
    int max = 0;
    int i;
    for (i = 0; i < size; i++)
    {
        if (employees[i].salary > employees[max].salary)
            max = i;
    }
    return max;
}

int find_youngest_employee(struct Employee *employees, int size)
{
    int youngest = 0;
    int i;
    for (i = 0; i < size; i++)
    {
        if (employees[i].birthyear > employees[youngest].birthyear)
            youngest = i;
    }
    return youngest;
}

void delete_employee(struct Employee *employees, int id)
{
    employees[id].id = -1;
    strcpy(employees[id].name, "");
    strcpy(employees[id].sex, "");
    employees[id].birthyear = 0;
    employees[id].salary = 0;
}

int main()
{
    struct Employee employees[10];
    int id;
    set_employees(employees, 10);
    print_employees(employees, 10);
    printf("Enter a employee's id:");
    scanf("%d", &id);
    int idx = find_employee(employees, 10, id);
    if (idx != -1)
    {
        printf("The information of employee is: \n");
        print_employee(employees[idx]);
    } else 
    {
        printf("The employee with given id is not found.\n");
    }
    printf("There are %d male employees.\n", count_males(employees, 10));
    printf("There are %d female employees.\n", count_females(employees, 10));
    sort_birthyear(employees, 10);
    printf("The employees after sorting by birthyear are: \n");
    print_employees(employees, 10);
    sort_salary(employees, 10);
    printf("The employees after sorting by salary are: \n");
    print_employees(employees, 10);
    int max_idx = find_max_salary(employees, 10);
    printf("The employee with max salary is: \n");
    print_employee(employees[max_idx]);
    int youngest_idx = find_youngest_employee(employees, 10);
    printf("The youngest employee is: \n");
    print_employee(employees[youngest_idx]);
    delete_employee(employees, 5);
    idx = find_employee(employees, 10, 5);
    if (idx == -1)
        printf("The employee with id 5 is deleted.\n");
    return 0;
}
