package item.armor;

import item.base.BaseArmor;
import item.usage.Upgradable;
import test.grader.armor.SuitTest;

public class Suit extends BaseArmor implements Upgradable {
    private int level;
    private int MAX_LEVEL;
    private int[] def;
    public Suit(){
        super("Suit",10);
        setLevel(0);
        setMAX_LEVEL(3);
        setDef(new int[] {1,2,3,5});
    }
    public int getMAX_LEVEL() {
        return MAX_LEVEL;
    }

    public void setMAX_LEVEL(int MAX_LEVEL) {
        this.MAX_LEVEL = MAX_LEVEL;
    }

    public void setDef(int[] def) {
        this.def = def;
    }

    @Override
    public int getDef() {
        return this.def[getLevel()];
    }

    @Override
    public String toString() {
        return getName()+" (Def: "+getDef()+", Level: "+getLevel()+")";
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
}
