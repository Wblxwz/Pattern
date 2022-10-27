package Observer;

public class YellowState extends TrafficState {
    public YellowState(TrafficLight light)
    {
        super(light,"黄色",10);
    }
    public void Transition()
    {
        display();
        --count;
        if(count == 0)
        {
            light.setState(new RedState(light));
        }
    }
}
