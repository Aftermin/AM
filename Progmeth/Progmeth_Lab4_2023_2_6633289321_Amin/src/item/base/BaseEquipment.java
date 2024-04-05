package item.base;

public abstract class BaseEquipment extends BaseItem {
    private int durability;
    public BaseEquipment(String name,int durability){
        super(name);
        setDurability(durability);
    }
    public int getDurability() {
        return durability;
    }
    public void setDurability(int durability) {
        if(durability<0) this.durability=0;
        else this.durability = durability;
    }
}
