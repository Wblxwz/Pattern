package Observer;

public class RedState extends TrafficState{
    public RedState(TrafficLight light)
    {
        super(light,"红色",10);
    }
    public void Transition()
    {
        display();
        --count;
        if(count == 0)
        {
            light.setState(new GreenState(light));
        }
    }
}
