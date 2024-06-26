import java.util.Objects;

public class Course {
    private int id;
    private String name;
    public Course(int id,String name){
        setId(id);
        setName(name);
    }
    public Course(Course o){
        this(o.id,o.name);
    }
    public int getId() {
        return id;
    }

    public void setId(int id) {
        if(id/1000000<1) this.id=2110000;
        else this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Course course = (Course) o;
        return id == course.id && Objects.equals(name, course.name);
    }

    @Override
    public int hashCode() {
        return Objects.hash(id, name);
    }

    @Override
    public String toString() {
        return "Course{" +
                "id=" + id +
                ", name='" + name + '\'' +
                '}';
    }
}
