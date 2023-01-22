using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public interface IDamageable
{
    void Rechieve_Damage();
}

public class Player_HP : MonoBehaviour, IDamageable
{
    //Max HP
    public int HP = 3;

    //HP UI
    public Image HP_Sprite_1;
    public Image HP_Sprite_2;
    public Image HP_Sprite_3;

    //HP Sprite
    public Sprite HP_Icon;

    //Lost HP Sprite
    public Sprite Lost_HP_Icon;

    void Start()
    {
        HP = 3;
    }

    public void Rechieve_Damage() //For damageable
    {
        this.HP--;
    }

    void Update()
    {
        Arrange_HP_Sprites();
    }

    private void Arrange_HP_Sprites()
    {
        if(this.HP == 3)
        {
            HP_Sprite_1.sprite = HP_Icon;
            HP_Sprite_2.sprite = HP_Icon;
            HP_Sprite_3.sprite = HP_Icon;
        }
        if (this.HP == 2)
        {
            HP_Sprite_1.sprite = Lost_HP_Icon;
            HP_Sprite_2.sprite = HP_Icon;
            HP_Sprite_3.sprite = HP_Icon;
        }
        if (this.HP == 1)
        {
            HP_Sprite_1.sprite = Lost_HP_Icon;
            HP_Sprite_2.sprite = Lost_HP_Icon;
            HP_Sprite_3.sprite = HP_Icon;
        }
        if (this.HP == 0)
        {
            //Lose State
        }
    }

}
