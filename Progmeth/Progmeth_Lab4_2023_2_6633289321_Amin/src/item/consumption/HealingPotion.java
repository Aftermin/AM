package item.consumption;

import item.base.BaseConsumption;
import item.usage.Healable;
import item.usage.Upgradable;

import java.util.Arrays;

public class HealingPotion extends BaseConsumption implements Healable, Upgradable {
    private int level;
    private int MAX_LEVEL;
    private int[] RECOVER_PT;
    public HealingPotion(){
        super("HealingPotion");
        setLevel(0);
        setMAX_LEVEL(3);
        setRECOVER_PT(new int[] {3,5,7,10});
    }
    public int getMAX_LEVEL() {
        return MAX_LEVEL;
    }

    public void setMAX_LEVEL(int MAX_LEVEL) {
        this.MAX_LEVEL = MAX_LEVEL;
    }

    public int[] getRECOVER_PT() {
        return RECOVER_PT;
    }

    public void setRECOVER_PT(int[] RECOVER_PT) {
        this.RECOVER_PT = RECOVER_PT;
    }

    @Override
    public int getRecoverPoint() {
        return this.RECOVER_PT[getLevel()];
    }

    @Override
    public int getLevel() {
        return this.level;
    }

    @Override
    public void setLevel(int level) {
        if(level<0||level>getMAX_LEVEL()) level=0;
        this.level=level;
    }

    @Override
    public int getMaxLevel() {
        return this.MAX_LEVEL;
    }

    @Override
    public String toString() {
        return getName() + " (+" + getRECOVER_PT()[getLevel()] + " HP, Level: " + getLevel() +")";
    }
}
