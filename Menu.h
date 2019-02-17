#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED


class Menu{

    public:

    bool salida;

    BITMAP *bufferMenu;
    BITMAP *pres1;
    BITMAP *pres2;
    BITMAP *Pres3;
    BITMAP *Cursor;

    void inicarMenu();

};

void Menu::inicarMenu(){

bufferMenu=create_bitmap(900,700);
pres1=load_bitmap("zombie1.bmp",NULL);
pres2=load_bitmap("zombie2.bmp",NULL);
Pres3=load_bitmap("zombie3.bmp",NULL);
Cursor=load_bitmap("cursor.bmp",NULL);

    salida=false;

    while(!salida){

      if(mouse_x > 211 && mouse_x < 553 && mouse_y > 319 && mouse_y < 374 ){

        blit(pres1,bufferMenu,0,0,0,0,900,700);

            if(mouse_b & 1){

                salida=true;

        }


      }else if(mouse_x > 211 && mouse_x < 404 && mouse_y > 418 && mouse_y < 465 ){


            blit(pres2,bufferMenu,0,0,0,0,900,700);

            if(mouse_b & 1){

            salida=true;

            }

      }else blit(pres1,bufferMenu,0,0,0,0,900,700);

      masked_blit(Cursor,bufferMenu,0,0,mouse_x,mouse_y,13,22);///transparecia violeta

       blit(bufferMenu,screen,0,0,0,0,900,700);

    }

}

#endif // MENU_H_INCLUDED
