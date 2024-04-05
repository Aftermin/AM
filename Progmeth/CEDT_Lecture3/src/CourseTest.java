import org.junit.jupiter.api.*;

import static org.junit.jupiter.api.Assertions.*;

public class CourseTest {
    Course c1,c2,c3;
    @BeforeEach
    public void setUp(){
        System.out.println("Start");
        c1 = new Course(2110215,"Prog Meth");
        c2 = new Course(2110446,"DS");
        c3 = new Course(2110215,"Prog Meth");
    }
    @AfterEach
    public void tearDown(){
        System.out.println("End");
    }
    @BeforeAll
    public static void setUpAll(){
        System.out.println("BeforeAll");
    }
    @AfterAll
    public static void tearDownAll(){
        System.out.println("AfterAll");
    }
    @Test
    public void testEquals(){
        assertFalse(c1.equals(c2));
        assertTrue(c1.equals(c3));
    }
    @Test
    public void testSetId(){
        c1.setId(2110215);
        assertEquals(2110215,c1.getId());

        c1.setId(-1);
        assertEquals(2110000,c1.getId());

        c1.setId(10);
        assertEquals(2110000,c1.getId());

        assertThrows(ArithmeticException.class,()-> {
            c1.setId(1/0);
        });
    }

    @Test
    public void testSetName(){
        c1.setName("Prog Meth");
        assertEquals("Prog Meth",c1.getName());
        c1.setName("");
        assertTrue(c1.getName().equals(""));
    }
}
