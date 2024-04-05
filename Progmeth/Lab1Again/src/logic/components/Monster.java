package logic.components;

import exception.BadStatusException;
public class Monster {
    private String name;
    private Status status;
    private Food food;
    private Potion potion;
    public Monster(String name,Status status){
        if (status.getHp() < 1) {
            try {
                status.setHp(1);
            } catch (BadStatusException bse) {
                throw new RuntimeException(bse);
            }
        }
        setStatus(status);
        setName(name);
        setFood(null);
        setPotion(null);
    }
    public void attack(Player player)

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Status getStatus() {
        return status;
    }

    public void setStatus(Status status) {
        this.status = status;
    }

    public Food getFood() {
        return food;
    }

    public void setFood(Food food) {
        this.food = food;
    }

    public Potion getPotion() {
        return potion;
    }

    public void setPotion(Potion potion) {
        this.potion = potion;
    }
}
