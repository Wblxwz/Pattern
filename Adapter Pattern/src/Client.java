public class Client {
    public static void main(String args[])
    {
        Sheep sheep = new SmallSheep();
        sheep.SheepLooks();
        sheep.EatGrass();

        Wolf wolf = new BigWolf();
        Sheep fakesheep = new Sheepskin(wolf);
        fakesheep.SheepLooks();
        fakesheep.EatGrass();
    }
}
