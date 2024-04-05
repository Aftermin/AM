package item.consumption;

import item.base.BaseConsumption;
import item.usage.AttBuffable;
import item.usage.Upgradable;

import java.util.Arrays;

public class StrengthPotion extends BaseConsumption implements AttBuffable, Upgradable {
    private int level;
    private int MAX_LEVEL;
    private int[] ATT_BUFF;
    private int BUFF_TURN;
    public StrengthPotion(){
        super("StrengthPotion");
        setLevel(0);
        setMAX_LEVEL(3);
        setBUFF_TURN(3);
        setATT_BUFF(new int[] {3,5,7,10});
    }

    public int getMAX_LEVEL() {
        return MAX_LEVEL;
    }

    public void setMAX_LEVEL(int MAX_LEVEL) {
        this.MAX_LEVEL = MAX_LEVEL;
    }

    public int[] getATT_BUFF() {
        return ATT_BUFF;
    }

    public void setATT_BUFF(int[] ATT_BUFF) {
        this.ATT_BUFF = ATT_BUFF;
    }

    public int getBUFF_TURN() {
        return BUFF_TURN;
    }

    public void setBUFF_TURN(int BUFF_TURN) {
        this.BUFF_TURN = BUFF_TURN;
    }

    @Override
    public int getAttBuff() {
        return getATT_BUFF()[getLevel()];
    }

    @Override
    public int getBuffTurn() {
        return this.getBUFF_TURN();
    }

    @Override
    public int getLevel() {
        return this.level;
    }

    @Override
    public void setLevel(int level) {
        if(level<0||level>getMaxLevel()) level=0;
        this.level=level;
    }

    @Override
    public int getMaxLevel() {
        return this.MAX_LEVEL;
    }

    @Override
    public String toString() {
        return getName() + " (+" + getATT_BUFF()[getLevel()]  + " Att for next " + getBUFF_TURN() + " turns, Level: " + getLevel() +
                ")";
    }
}
