using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

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

    //Bool
    private bool Is_Damageable_Now = true;
   
    public int Health { get; }
    public void TakeDamage(int amount) //For damageable
    {
        if(Is_Damageable_Now == true)
        {
            Is_Damageable_Now = false;
            StartCoroutine(Damage_Player());
        }
        
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
            HP_Sprite_1.sprite = Lost_HP_Icon;
            HP_Sprite_2.sprite = Lost_HP_Icon;
            HP_Sprite_3.sprite = Lost_HP_Icon;
            //Lose State
        }
    }


    IEnumerator Damage_Player()
    {
        this.HP--;

        //Debug
        this.HP--;



        yield return new WaitForSeconds(3f);
        Is_Damageable_Now = true;
    }
    
}
