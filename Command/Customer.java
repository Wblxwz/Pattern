package Command;

public class Customer
{
    private Waiter waiter;
    public Customer(Waiter waiter)
    {
        this.waiter = waiter;
    }

    public void setWaiter(Waiter waiter) {
        this.waiter = waiter;
    }

    public void Order()
    {
        System.out.println("顾客点餐");
        waiter.Order();
    }
}
