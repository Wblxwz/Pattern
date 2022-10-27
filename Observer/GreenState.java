package Observer;

public class GreenState extends TrafficState {
    public GreenState(TrafficLight light)
    {
        super(light,"绿色",10);
    }
    public void Transition()
    {
        display();
        --count;
        if(count == 0)
        {
            light.setState(new YellowState(light));
        }
    }
}
