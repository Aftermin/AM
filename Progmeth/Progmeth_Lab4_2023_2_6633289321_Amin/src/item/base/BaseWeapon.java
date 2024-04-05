package item.base;

import item.base.BaseEquipment;

public abstract class BaseWeapon extends BaseEquipment {
    private int range;
    public BaseWeapon(String name,int durability,int range){
        super(name, durability);
        setRange(range);
    }
    public abstract int getAtt();
    public int getRange() {
        return range;
    }

    public void setRange(int range) {
        if(range<0) this.range=0;
        else this.range = range;
    }

    @Override
    public String toString() {
        return getName()+" (Att: "+getAtt()+", Range: "+getRange()+", "+getDurability()+" uses left)";
    }
}
