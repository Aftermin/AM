public class MyCasino {
    public static void main(String[] args) {
        Dice d1=new Dice(3);
        System.out.println(d1.getFaceValue());
        System.out.println(d1);

        Dice d2 = new Dice(3);
        System.out.println(d2.equals(d1));
    }
}
