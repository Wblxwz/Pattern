package Strategy;

public class Context {
    private Sort sort;
    public Context(Sort sort)
    {
        this.sort = sort;
    }
    public void setSort(Sort sort)
    {
        this.sort = sort;
    }
    public void SortAlgorithm(Score score[],int n)
    {
        sort.Sort(score,n);
    }
}
