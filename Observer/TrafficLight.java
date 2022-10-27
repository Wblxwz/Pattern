package Observer;

import java.util.ArrayList;

public class TrafficLight implements Observable{
    private TrafficState state = new RedState(this);
    private ArrayList<Observer> observers = new ArrayList<>();

    void setState(TrafficState state)
    {
        this.state = state;
    }

    public void Start()
    {
        while(true)
        {
            try
            {
                Thread.sleep(1000);
            }
            catch (InterruptedException e)
            {
                e.printStackTrace();
            }
            Transition();
            Notify();
        }
    }

    @Override
    public void Notify() {
        for(Observer observer:observers)
        {
            observer.Response(state);
        }
    }

    @Override
    public void Add(Observer observer) {
        observers.add(observer);
    }

    @Override
    public void Remove(Observer observer) {
        observers.remove(observer);
    }

    private void Transition()
    {
        state.Transition();
    }

}
