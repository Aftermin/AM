package item.consumption;

import item.base.BaseConsumption;
import item.usage.Healable;

public class Pill extends BaseConsumption implements Healable {
    private int RECOVER_PT;
    public Pill(){
        super("Pill");
        setRECOVER_PT(2);
    }

    @Override
    public String toString() {
        return getName() + " (+" + getRECOVER_PT() + " HP)";
    }

    public int getRECOVER_PT() {
        return RECOVER_PT;
    }

    public void setRECOVER_PT(int RECOVER_PT) {
        this.RECOVER_PT = RECOVER_PT;
    }

    @Override
    public int getRecoverPoint() {
        return this.getRECOVER_PT();
    }
}
