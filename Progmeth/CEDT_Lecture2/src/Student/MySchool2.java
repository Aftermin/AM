package Student;

import java.util.ArrayList;

public class MySchool2 {
    public static void main(String[] args) {
        ArrayList<Student> student = new ArrayList<Student>();
        student.add(new Student());
        student.add(new UndergraduateStudent("Chan"));
        student.add(new GraduateStudent("Song"));
        student.add(new GraduateStudent("Jun"));

        for(Student s:student){
            s.printName();
        }
    }
}
