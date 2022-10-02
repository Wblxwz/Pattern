public class Sheepskin implements Sheep {
    Wolf wolf;
    public Sheepskin(Wolf wolf)
    {
        this.wolf = wolf;
    }

    @Override
    public void SheepLooks() {
        System.out.println("羊\n");
        wolf.Looks();
    }

    @Override
    public void EatGrass() {
        wolf.Eat();
    }
}
