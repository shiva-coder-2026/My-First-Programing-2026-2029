class Student{
    String name; String college; int roll; int mark;
    public void study()
    {
        System.out.println(name+"is studying");
    }
    public void appearExam()
    {
        System.out.println( name+ "pass the exam");
    }
}

public class studentData{
    public static void main (String[] args){
        Student s1=new Student();
        Student s2=new Student();
        s1.name="shiva";
        s1.college="Gate";
        s1.roll=25013241499;
        s1.mark=596;
        s1.study();
        s1.appearExam();
        s2.name="sid";
        s2.college="Gate";
        s2.roll=4123;
        s2.mark=545;
        s2.study();
        s2.appearExam();
    }
}
