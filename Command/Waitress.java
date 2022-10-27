package Command;

public class Waitress implements Waiter{
    private Cook cook = new Cook();
    @Override
    public void Order() {
        System.out.println("服务员传递订单");
        cook.Cook();
    }
}
