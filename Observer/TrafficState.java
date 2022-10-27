package Observer;

public abstract class TrafficState {
    protected TrafficLight light;
    protected String color;
    protected int count;
    public TrafficState(TrafficLight light,String color,int count)
    {
        this.color = color;
        this.light = light;
        this.count = count;
    }

    public abstract void Transition();

    public void display()
    {
        System.out.println(color + " " + count);
    }
}
