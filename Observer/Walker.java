package Observer;

public class Walker implements Observer{
    @Override
    public void Response(TrafficState state) {
        if(state instanceof RedState)
        {
            System.out.println("行人在路边等待");
        }
        else if(state instanceof GreenState)
        {
            System.out.println("行人走人行横道");
        }
        else
        {
            System.out.println("行人在路边再等一会");
        }
    }
}
