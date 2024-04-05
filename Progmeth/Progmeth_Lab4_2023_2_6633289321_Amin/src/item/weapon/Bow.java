package item.weapon;

import item.base.BaseWeapon;
import item.usage.Upgradable;

public class Bow extends BaseWeapon implements Upgradable {
    private int level;
    private int MAX_LEVEL;
    private int[] att;
    public Bow(){
        super("Bow",10,2);
        setLevel(0);
        setAtt(new int[] {2,3,5,8});
    }

    public int getMAX_LEVEL() {
        return MAX_LEVEL;
    }

    public void setMAX_LEVEL(int MAX_LEVEL) {
        this.MAX_LEVEL = MAX_LEVEL;
    }

    public void setAtt(int[] att) {
        this.att = att;
    }

    @Override
    public int getAtt() {
        return this.att[getLevel()];
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
        return getName()+"[Att: "+getAtt()+", Range: "+getRange()+", Level: "+getLevel()+", "+getDurability()+" uses left)";
    }
}
