public class MyProgram {
    public static void main(String[] args) {
        Course c1 = new Course(2110215,"Prog Meth");
        Course c2 = new Course(c1);

        System.out.println(c2);
    }
}
