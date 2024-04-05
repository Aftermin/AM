public class ChainCaller {
    public static void main(String[] args) {
        ChainCaller t = new ChainCaller();
        try{
            t.method1(6, 0);
        }
        catch (IllegalAccessException e){
            System.out.println("Hey,Can you check now");
        }

        System.out.println("End Program");
    }

    public void method1(double a, double b) throws IllegalAccessException{
//        try{
//            System.out.println( method2(a,b) );
//        }
//        catch (IllegalAccessException e){
//            System.out.println("Something Wrong!!");
//        }
        System.out.println( method2(a,b));
    }

    public String method2(double a, double b) throws IllegalAccessException {
        if (b == 0)
            throw new IllegalAccessException();
        else
            return a + "/" + b + "=" + a / b;
    }
}