
#include <bits/stdc++.h>
using namespace std;




/*
-------------------------------------------
💡 Problem: Who Is It (HackerRank)
-------------------------------------------

📌 Description:
You are given information for 3 students:
Each student has:
    - ID (int)
    - Name (char array of lowercase letters)
    - Section (char A-Z)
    - Total Marks (0 to 100, can be float or int)

🧠 Task:
For each test case:
    - Input 3 students
    - Print the student with the highest total marks
    - If tie in marks, choose the one with the smaller ID

📥 Input Format:
- First line: T (number of test cases)
- Next 3 lines per test case:
    ID Name Section Marks

📤 Output Format:
- For each test case, print:
    ID Name Section Marks
  of the best student

📊 Constraints:
- 1 <= T <= 1000
- 1 <= ID <= 3
- Name length <= 100
- Section: 'A' to 'Z'
- Marks: 0 to 100

🧪 Sample Input:
3
1 sakib A 50
2 rakib D 96
3 akib C 90
1 sakib A 50
2 rakib D 96
3 akib C 96
1 sakib A 50
2 rakib D 50
3 akib C 40

✅ Sample Output:
2 rakib D 96
2 rakib D 96
1 sakib A 50

-------------------------------------------
✍️ Now let's implement the solution below.
-------------------------------------------
*/


class Student
{

public:
    int id;
    char name[100];
    char section;
    int total_marks;

    Student(char *name, int id, char section, int total_marks)
    {
        strcpy(this->name, name);
        this->id = id;
        this->section = section;
        this->total_marks = total_marks;
    };

}; 




int
main()
{

    int t; 
    cin >> t; 

    while (t--)
    {
        int id1, id2, id3; 
        char name1[100], name2[100], name3[100]; 
        char section1, section2, section3; 
        int mark1, mark2, mark3; 

        cin >> id1 >> name1 >> section1 >> mark1; 
        cin >> id2 >> name2 >> section2 >> mark2; 
        cin >> id3 >> name3 >> section3 >> mark3; 


        Student s1(name1, id1, section1, mark1); 
        Student s2(name2, id2, section2, mark2); 
        Student s3(name3, id3, section3, mark3); 


        Student best = s1 ; 


        if(s2.total_marks > best.total_marks || s2.total_marks == best.total_marks && 
            s2.id < best.id
        ){
            best = s2; 
        }

        if(s3.total_marks > best.total_marks || s3.total_marks == best.total_marks && 
            s3.id < best.id
        ){
            best = s3; 
        }

        cout << endl; 

        cout << best.id << " " << best.name << " " << best.section << " " << best.total_marks;









    }
    



    return 0;
}