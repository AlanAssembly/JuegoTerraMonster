#include <allegro.h>
#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <cmath>

#include "Escenario.h"

#include "Archivos.h"
#include "Player.h"
#include "npc.h"

using namespace std;

bool salir;

volatile unsigned int contador_tiempo_juego = 0;

const int FRAME_RATE = 30;


int main()

    {

     allegro_init();
     install_mouse();
     install_keyboard();
     install_timer();

     Jugador juga;
     Jugador jugaNivel2;
     Jugador jugaNivel3;

     npcNivel2Spider SuperSpider;

     zombie enemigo(550,309,80);
     zombie enemigoDos(400,300,80);
     zombie enemigoTres(300,500,80);
     zombie enemigoCuatro(900,300,80);
     zombie enemigoCinco(200,200,80);

     zombie enemigoSeis(500,400,80);
     zombie enemigoSiete(300,300,80);
     zombie enemigoOcho(345,200,80);
     zombie enemigoNueve(900,400,80);
     zombie enemigoDiez(300,300,80);


     npcFotball enemigoUnoF;
     npcFotball enemigoDosF;
     npcFotball enemigoTresF;
     npcFotball enemigoCuatroF;

     npcFotball enemigoCincoF;
     npcFotball enemigoSeisF;
     npcFotball enemigoSieteF;
     npcFotball enemigoOchoF;
     npcFotball enemigoNueveF;
     npcFotball enemigoDiezF;

     npcJason EvilJason;

     npcJefe Boss;

     RecuperarVida RecCora;

     estructura musica;

     set_color_depth(32);
     set_gfx_mode(GFX_AUTODETECT_WINDOWED,1100,618,0,0);

///PONER PUNTAJE USO DE ARCHIVO PARA FINAL

    BITMAP *bufferMenu = create_bitmap(1100,618);
    BITMAP *bufferMenu2 = create_bitmap(1100,618);
    BITMAP *bufferMenu3 = create_bitmap(1100,618);
    BITMAP *bufferMenu4 = create_bitmap(1100,618);
    BITMAP *bufferMenu5 = create_bitmap(1100,618);
    BITMAP *bufferMenu6 = create_bitmap(1100,618);

    BITMAP *bufferMenuPuntaje = create_bitmap(1100,618);
 ///   BITMAP *buffer_eleccionNombre = create_bitmap(1100,618);

   BITMAP *buffer_eleccionPersonaje0 = create_bitmap(1100,618);
   BITMAP *buffer_eleccionPersonaje1 = create_bitmap(1100,618);
    BITMAP *buffer_eleccionPersonaje2 = create_bitmap(1100,618);

    BITMAP *bufferNivel2 = create_bitmap(1100,618);

    BITMAP *bufferNivel3 = create_bitmap(1100,618);

    LOCK_VARIABLE(contador_tiempo_juego);
    LOCK_FUNCTION(inc_contador_tiempo_juego);

    BITMAP *fondo1Orig = load_bitmap("zombie1.bmp",NULL);
    BITMAP *fondo2Start = load_bitmap("zombie2.bmp",NULL);
    BITMAP *fondo3Load = load_bitmap("zombie3.bmp",NULL);
    BITMAP *fondo4Exit = load_bitmap("zombie4.bmp",NULL);
    BITMAP *cursor = load_bitmap("cursor.bmp",NULL);

    BITMAP *eleccion0 = load_bitmap("ELECCIONPSJ.bmp",NULL);
   BITMAP *eleccion1 = load_bitmap("PSJ_01.bmp",NULL);
    BITMAP *eleccion2 = load_bitmap("PSJ_02.bmp",NULL);

    BITMAP *fondoJardin = load_bitmap("fondofondo.bmp",NULL);
    BITMAP *fondoDesierto = load_bitmap("FondoDesierto.bmp",NULL);
    BITMAP *nivel3 = load_bitmap("Nivel3.bmp",NULL);
    BITMAP *zombiepantalla = load_bitmap("zombieLevel.bmp",NULL);


    BITMAP *cursorFin = load_bitmap("cursorDedo.bmp",NULL);
    BITMAP *fin1 = load_bitmap("fin1.bmp",NULL);
    BITMAP *fin2 = load_bitmap("fin2.bmp",NULL);
    BITMAP *fin3 = load_bitmap("fin3.bmp",NULL);
    BITMAP *recuadroEle = load_bitmap("recuadro.bmp",NULL);

    BITMAP *Victoria = load_bitmap("Victoria.bmp",NULL);

    BITMAP *VictoriaFinJuego = load_bitmap("MenufinJuego.bmp",NULL);

    BITMAP *Puntaje = load_bitmap("vans.bmp",NULL);
   BITMAP *elijonom = load_bitmap("eleccionnombre.bmp",NULL);

    SAMPLE *sonidoDead=load_wav("muerte.wav");
    SAMPLE *victory=load_wav("ganaste.wav");
    SAMPLE *gritoBebe=load_wav("gritoBaby.wav");
    SAMPLE *hito=load_wav("Hit.wav");
    SAMPLE *hormiga=load_wav("hormiga.wav");

     bool apagado=false;

    int mayor1 = 0;
    int mayor2 = 0;
    int mayor3 = 0;

     bool ReinicioNivel3=false;
     bool Nivel2=false;
     bool Nivel3=false;

     int contPuntosJuego;



    while(apagado==false){
       /// musica.musica("adventures.mid");
        set_volume(210,100);///dentro del parentesis controla el sonido de fondo lo izquierdo y el sonido en general como la musica el derecho

        bool salida=false; ///controla hasta cuando se ejecuta rutina del menu
        bool puntaje=false;
        bool eleccion=false;

        while(!salida){



            if(mouse_x > 443 && mouse_x < 630 && mouse_y > 473 && mouse_y < 490 ){

            blit(fondo2Start,bufferMenu,0,0,0,0,1100,618);

            if(mouse_b & 1){

                salida=true;
                eleccion=true;






            }

            }else if(mouse_x >456 && mouse_x <602 && mouse_y >510 && mouse_y <530){


                blit(fondo3Load,bufferMenu,0,0,0,0,1100,618);

                    if(mouse_b & 1){


                    salida=true;
                    puntaje=true;


                    }




              }else if(mouse_x >477 && mouse_x <582 && mouse_y >551 && mouse_y <578){

                blit(fondo4Exit,bufferMenu,0,0,0,0,1100,618);

                    if(mouse_b & 1){

                    exit(1);

                    }

      }else blit(fondo1Orig,bufferMenu,0,0,0,0,1100,618);

      masked_blit(cursor,bufferMenu,0,0,mouse_x,mouse_y,25,43);///transparecia violeta

       blit(bufferMenu,screen,0,0,0,0,1100,618);


    }

       int pos=0;


    while(salida==true&&eleccion==true){



        if(mouse_x > 107 && mouse_x < 487 && mouse_y > 326 && mouse_y < 350 ){


           blit(eleccion1,buffer_eleccionPersonaje0,0,0,0,0,1100,618);


                /*
                 enemigo.asignarValoresZombie(550,309,80);
                 enemigoDos.asignarValoresZombie(400,300,80);
                 enemigoTres.asignarValoresZombie(300,500,80);
                 enemigoCuatro.asignarValoresZombie(900,300,80);
                 enemigoCinco.asignarValoresZombie(200,200,80);
                 enemigoSeis.asignarValoresZombie(500,400,80);
                 enemigoSiete.asignarValoresZombie(300,300,80);
                 enemigoOcho.asignarValoresZombie(345,200,80);
                 enemigoNueve.asignarValoresZombie(900,400,80);
                 enemigoDiez.asignarValoresZombie(300,300,80);
                */

           if(mouse_b & 1){

                salida=false;
                eleccion=false;


            }

        }else if(mouse_x >586 && mouse_x <1081 && mouse_y >542 && mouse_y <551){

          blit(eleccion2,buffer_eleccionPersonaje0,0,0,0,0,1100,618);

              if(mouse_b & 1){

                salida=true;


              }

       }else blit(eleccion0,buffer_eleccionPersonaje0,0,0,0,0,1100,618);

      masked_blit(cursor,buffer_eleccionPersonaje0,0,0,mouse_x,mouse_y,25,43);///transparecia violeta

        blit(buffer_eleccionPersonaje0,screen,0,0,0,0,1100,618);

    }

    while(salida==true&&puntaje==true){


       blit(Puntaje,bufferMenuPuntaje,0,0,0,0,1100,618);

       masked_blit(cursor,bufferMenuPuntaje,0,0,mouse_x,mouse_y,25,43);///transparecia violeta

       blit(bufferMenuPuntaje,screen,0,0,0,0,1100,618);

       if(mouse_x >927 && mouse_x <1050 && mouse_y >555 && mouse_y <581){


                    if(mouse_b & 1){


                        salida=false;
                        puntaje=false;



                    }


       }else{

       Scores reg;

       while(reg.leerDisco(pos++)){


               int a = contPuntosJuego;

                        if (pos == 0){
                            mayor1 = a;
                        }
                        if (a > mayor1){
                            mayor3 = mayor2;
                            mayor2 = mayor1;
                            mayor1 = a;
                        }
                        if (a < mayor1 && a > mayor2){
                            mayor3 = mayor2;
                            mayor2 = a;
                        }
                        if (a < mayor1 && a < mayor2 && a > mayor3){
                            mayor3 = a;
                        }

          textprintf(Puntaje,font,470,309,palette_color[11]," PRIMER PUNTAJE %d",mayor1);
          textprintf(Puntaje,font,470,350,palette_color[11]," SEGUNDO PUNTAJE %d",mayor2);
          textprintf(Puntaje,font,470,400,palette_color[11]," TERCER PUNTAJE %d",mayor3);



            }


       }



       if(key[KEY_F1]){

            apagado=false;
            salida=false;
       }

    }

    juga.Iniciar();

    blit(juga.buffer, screen,0,0,0,0,1100,618);

    masked_blit(juga.PrincipalDer,screen,0,0,juga.get_x(),juga.get_y(),76,78);


   ///




    bool ataque=false;

    bool reinicio=false;

    int contVueltaZombie=0;

    contPuntosJuego=0;

    bool iniciarNivel1=false;
    bool iniciarNivel2=false;
    bool iniciarNivel3=false;
    bool iniciarNivel4=false;
    bool iniciarNivel5=false;
    bool iniciarNivel6=false;
    bool iniciarNivel7=false;
    bool iniciarNivel8=false;
    bool iniciarNivel9=false;
    bool iniciarNivel10=false;
    bool iniciarNivel11=false;
    bool iniciarNivel12=false;
    bool iniciarNivel13=false;
    bool iniciarNivel14=false;
    bool iniciarNivel15=false;
    bool iniciarNivel16=false;
    bool iniciarNivel17=false;


    enemigoUnoF.set_x_eneFotball(5000);
    enemigoUnoF.set_y_eneFotball(5000);
    enemigoUnoF.set_muertoFott(false);

    enemigoDosF.set_x_eneFotball(5000);
    enemigoDosF.set_y_eneFotball(5000);
    enemigoDosF.set_muertoFott(false);

    enemigoTresF.set_x_eneFotball(5000);
    enemigoTresF.set_y_eneFotball(5000);
    enemigoTresF.set_muertoFott(false);

    enemigoCuatroF.set_x_eneFotball(5000);
    enemigoCuatroF.set_y_eneFotball(5000);
    enemigoCuatroF.set_muertoFott(false);

    enemigoCincoF.set_x_eneFotball(5000);
    enemigoCincoF.set_y_eneFotball(5000);
    enemigoCincoF.set_muertoFott(false);

    enemigoSeisF.set_x_eneFotball(5000);
    enemigoSeisF.set_y_eneFotball(5000);
    enemigoSeisF.set_muertoFott(false);

    enemigoSieteF.set_x_eneFotball(5000);
    enemigoSieteF.set_y_eneFotball(5000);
    enemigoSieteF.set_muertoFott(false);

    enemigoOchoF.set_x_eneFotball(5000);
    enemigoOchoF.set_y_eneFotball(5000);
    enemigoOchoF.set_muertoFott(false);

    enemigoNueveF.set_x_eneFotball(5000);
    enemigoNueveF.set_y_eneFotball(5000);
    enemigoNueveF.set_muertoFott(false);

    enemigoDiezF.set_x_eneFotball(5000);
    enemigoDiezF.set_y_eneFotball(5000);
    enemigoDiezF.set_muertoFott(false);

    SuperSpider.set_x_eneSpider(5000);
    SuperSpider.set_y_eneSpider(5000);
    SuperSpider.set_MuerteSpiderAlerta(false);

    Boss.set_x_eneJefe(5000);
    Boss.set_y_eneJefe(5000);
    Boss.set_muerteJefe(false);

    EvilJason.set_x_eneJason(5000);
    EvilJason.set_y_eneJason(5000);
    EvilJason.set_muertoJasonFin(false);

    bool activarCorazon=false;

    while(reinicio==false){

    textprintf(fondoJardin,font,900,20,palette_color[11],"PUNTAJE %d",contPuntosJuego);

    contVueltaZombie++;

    juga.set_contSinGolpe(juga.get_contSinGolpe()+1);

    if(key[KEY_ESC]){

        reinicio=true;
    }


    blit(fondoJardin,juga.buffer,0,0,0,0,1100,618);


    if(juga.get_cora1()==true){

            masked_blit(juga.Vida1,juga.buffer,0,0,0,0,40,36);


    }
    if(juga.get_cora2()==true){

            masked_blit(juga.Vida2,juga.buffer,0,0,35,0,40,36);

    }

    if(juga.get_cora3()==true){

            masked_blit(juga.Vida2,juga.buffer,0,0,70,0,40,36);

    }

    if(juga.get_cora4()==true){

            masked_blit(juga.Vida2,juga.buffer,0,0,105,0,40,36);

    }



    blit(juga.buffer,screen,0,0,0,0,1100,618);

    if(contVueltaZombie>=10){

     if(iniciarNivel1==false){

        enemigo.iniciarZ();

        iniciarNivel1=true;

     }




    if(enemigo.naceZ()){
        enemigo.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);
    }

    if(iniciarNivel15==false){

        enemigoUnoF.iniciarFotball(300,200,300,200,10);
        iniciarNivel15=true;
    }

        enemigoUnoF.movimientoFotball(juga.get_x(),juga.get_y(),juga.get_disparoX(),juga.get_disparoY(),10);

    }


    if(contVueltaZombie>=70){

    if(iniciarNivel2==false){

        enemigoDos.iniciarZ();

        iniciarNivel2=true;
    }

    if(enemigoDos.naceZ()){
        enemigoDos.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);
    }
    }


    if(contVueltaZombie>=120){

     if(iniciarNivel3==false){

        enemigoTres.iniciarZ();


        iniciarNivel3=true;
     }

    if(enemigoTres.naceZ()){

        enemigoTres.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


    }

            if(iniciarNivel4==false){

            enemigoDosF.iniciarFotball(500,300,500,300,10);

            iniciarNivel4=true;
            }
            enemigoDosF.movimientoFotball(juga.get_x(),juga.get_y(),juga.get_disparoX(),juga.get_disparoY(),10);

    }

    if(contVueltaZombie>=200){

     if(iniciarNivel5==false){

        enemigoCuatro.iniciarZ();

        iniciarNivel5=true;

     }

    if(enemigoCuatro.naceZ()){

        enemigoCuatro.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);

    }

    if(iniciarNivel6==false){

        enemigoCinco.iniciarZ();

        iniciarNivel6=true;
    }
    if(enemigoCinco.naceZ()){

        enemigoCinco.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);

    }

    if(iniciarNivel7==false){

            enemigoTresF.iniciarFotball(340,600,340,600,10);

        iniciarNivel7=true;
    }

    enemigoTresF.movimientoFotball(juga.get_x(),juga.get_y(),juga.get_disparoX(),juga.get_disparoY(),10);

}
   if(contVueltaZombie>=350){

    if(iniciarNivel9==false){

        enemigoSeis.iniciarZ();

        iniciarNivel9=true;

    }

    if(enemigoSeis.naceZ()){
        enemigoSeis.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);
    }

    if(iniciarNivel10==false){

            enemigoSiete.iniciarZ();

        iniciarNivel10=true;
    }

    if(enemigoSiete.naceZ()){
        enemigoSiete.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);
    }



   }

   if(contVueltaZombie>=450){

    if(iniciarNivel11==false){

         enemigoOcho.iniciarZ();

        iniciarNivel11=true;

    }

    if(enemigoOcho.naceZ()){

        enemigoOcho.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);

    }

    if(iniciarNivel12==false){

        enemigoNueve.iniciarZ();

        iniciarNivel12=true;
    }
    if(enemigoNueve.naceZ()){

        enemigoNueve.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);

    }

    if(iniciarNivel13==false){

        enemigoDiez.iniciarZ();

        iniciarNivel13=true;
    }
    if(enemigoDiez.naceZ()){

        enemigoDiez.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


    }

        if(iniciarNivel14==false){

                enemigoCuatroF.iniciarFotball(230,150,230,150,10);

            iniciarNivel14=true;
        }
        enemigoCuatroF.movimientoFotball(juga.get_x(),juga.get_y(),juga.get_disparoX(),juga.get_disparoY(),10);

         if(activarCorazon==false){

        RecCora.iniciarCora(300,200);
        RecCora.movimientoCora(300,20,10);

     }else{

        RecCora.iniciarCora(300000,200000);
        RecCora.movimientoCora(30000000,200000,10);
     }


}



    if(contVueltaZombie>=600){

        if(iniciarNivel16==false){

                play_sample(gritoBebe,200,150,1000,0);

                Boss.iniciarJefe(300,650,300,650);


            iniciarNivel16=true;
        }

        Boss.movimientoJefe(juga.get_x(),juga.get_y(),juga.get_disparoX(),juga.get_disparoY(),10);

    }



           if ((((((((((((((((!((juga.get_x()>enemigo.get_x_ene()+60)
                || (enemigo.get_x_ene() > juga.get_x()+60)
                || (juga.get_y() > enemigo.get_y_ene()+60)
                || (enemigo.get_y_ene()> juga.get_y()+60)) && !enemigo.get_muertoZombie())
                ||!((juga.get_x()>enemigoDos.get_x_ene()+60)
                || (enemigoDos.get_x_ene() > juga.get_x()+60)
                || (juga.get_y() > enemigoDos.get_y_ene()+60)
                || (enemigoDos.get_y_ene()> juga.get_y()+60))&& !enemigoDos.get_muertoZombie())
                ||!((juga.get_x()>enemigoTres.get_x_ene()+60)
                || (enemigoTres.get_x_ene() > juga.get_x()+60)
                || (juga.get_y() > enemigoTres.get_y_ene()+60)
                || (enemigoTres.get_y_ene()> juga.get_y()+60)) && !enemigoTres.get_muertoZombie())
                ||!((juga.get_x()>enemigoCuatro.get_x_ene()+60)
                || (enemigoCuatro.get_x_ene() > juga.get_x()+60)
                || (juga.get_y() > enemigoCuatro.get_y_ene()+60)
                || (enemigoCuatro.get_y_ene()> juga.get_y()+60)) && !enemigoCuatro.get_muertoZombie())
                ||!((juga.get_x()>enemigoCinco.get_x_ene()+60)
                || (enemigoCinco.get_x_ene() > juga.get_x()+60)
                || (juga.get_y() > enemigoCinco.get_y_ene()+60)
                || (enemigoCinco.get_y_ene()> juga.get_y()+60)) && !enemigoCinco.get_muertoZombie())
                ||!((juga.get_x()>enemigoUnoF.get_x_eneFotball()+60)
                || (enemigoUnoF.get_x_eneFotball() > juga.get_x()+60)
                || (juga.get_y() > enemigoUnoF.get_y_eneFotball()+60)
                || (enemigoUnoF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoUnoF.get_muertoFott())
                ||!((juga.get_x()>Boss.get_x_eneJefe()+60)
                || (Boss.get_x_eneJefe() > juga.get_x()+60)
                || (juga.get_y() > Boss.get_y_eneJefe()+60)
                || (Boss.get_y_eneJefe()> juga.get_y()+60)) && !Boss.get_muerteJefe())
                ||!((juga.get_x()>enemigoDosF.get_x_eneFotball()+60)
                || (enemigoDosF.get_x_eneFotball() > juga.get_x()+60)
                || (juga.get_y() > enemigoDosF.get_y_eneFotball()+60)
                || (enemigoDosF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoDosF.get_muertoFott())
                ||!((juga.get_x()>enemigoTresF.get_x_eneFotball()+60)
                || (enemigoTresF.get_x_eneFotball() > juga.get_x()+60)
                || (juga.get_y() > enemigoTresF.get_y_eneFotball()+60)
                || (enemigoTresF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoTresF.get_muertoFott())
                ||!((juga.get_x()>enemigoCuatroF.get_x_eneFotball()+60)
                || (enemigoCuatroF.get_x_eneFotball() > juga.get_x()+60)
                || (juga.get_y() > enemigoCuatroF.get_y_eneFotball()+60)
                || (enemigoCuatroF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoCuatroF.get_muertoFott())
                ||!((juga.get_x()>enemigoSeis.get_x_ene()+60)
                || (enemigoSeis.get_x_ene() > juga.get_x()+60)
                || (juga.get_y() > enemigoSeis.get_y_ene()+60)
                || (enemigoSeis.get_y_ene()> juga.get_y()+60)) && !enemigoSeis.get_muertoZombie())
                ||!((juga.get_x()>enemigoSiete.get_x_ene()+60)
                || (enemigoSiete.get_x_ene() > juga.get_x()+60)
                || (juga.get_y() > enemigoSiete.get_y_ene()+60)
                || (enemigoSiete.get_y_ene()> juga.get_y()+60)) && !enemigoSiete.get_muertoZombie())
                ||!((juga.get_x()>enemigoOcho.get_x_ene()+60)
                || (enemigoOcho.get_x_ene() > juga.get_x()+60)
                || (juga.get_y() > enemigoOcho.get_y_ene()+60)
                || (enemigoOcho.get_y_ene()> juga.get_y()+60)) && !enemigoOcho.get_muertoZombie())
                ||!((juga.get_x()>enemigoNueve.get_x_ene()+60)
                || (enemigoNueve.get_x_ene() > juga.get_x()+60)
                || (juga.get_y() > enemigoNueve.get_y_ene()+60)
                || (enemigoNueve.get_y_ene()> juga.get_y()+60)) && !enemigoNueve.get_muertoZombie())
                ||!((juga.get_x()>enemigoDiez.get_x_ene()+60)
                || (enemigoDiez.get_x_ene() > juga.get_x()+60)
                || (juga.get_y() > enemigoDiez.get_y_ene()+60)
                || (enemigoDiez.get_y_ene()> juga.get_y()+60)) && !enemigoDiez.get_muertoZombie())&&juga.get_contSinGolpe()>40)
                {

                ataque=true;



            if(juga.get_cora4()==true){
                play_sample(hito,200,150,1000,0);

                juga.set_cora4(false);
                destroy_bitmap(juga.Vida4);



            }
            else if(juga.get_cora4()==false&&juga.get_cora3()==true){

                play_sample(hito,200,150,1000,0);

                     juga.set_cora3(false);
                     destroy_bitmap(juga.Vida3);

            }else if(juga.get_cora4()==false&&juga.get_cora3()==false&&juga.get_cora2()==true){

                play_sample(hito,200,150,1000,0);

                juga.set_cora2(false);
                destroy_bitmap(juga.Vida2);


            }else if(juga.get_cora4()==false&&juga.get_cora3()==false&&juga.get_cora2()==false&&juga.get_cora1()==true){

                play_sample(hito,200,150,1000,0);

                juga.set_cora1(false);
                destroy_bitmap(juga.Vida1);


            }

            if(juga.get_cora1()==false&&juga.get_cora2()==false&&juga.get_cora3()==false&&juga.get_cora4()==false){

                play_sample(sonidoDead,200,150,1000,0);

                bool auxE=true;

                int n=contPuntosJuego;

                Scores reg(n);

                reg.grabarDisco();


                reinicio=true;

            }

        juga.set_contSinGolpe(0);


    }else if(ataque==true){


                ataque=juga.playerMorir();


    }else {

            juga.Movimiento();

            if(!((juga.get_x()>RecCora.get_x_ene_Cora()+60)
                || (RecCora.get_x_ene_Cora() > juga.get_x()+60)
                || (juga.get_y() > RecCora.get_y_ene_Cora()+60)
                || (RecCora.get_y_ene_Cora()> juga.get_y()+60)))
                {

                      if(juga.get_cora2()==false){


                            juga.set_cora2(true);


                             activarCorazon=true;

                        }else if(juga.get_cora2()==true&&juga.get_cora3()==false){



                            juga.set_cora3(true);

                            activarCorazon=true;


                        }else if(juga.get_cora2()==true&&juga.get_cora3()==true&&juga.get_cora4()==false){


                            juga.set_cora4(true);

                            activarCorazon=true;


                        }

                }


    }

    ///**************************PUNTAJE DEL GAME***************************

    if(enemigo.get_muertoZombie()==true&&enemigo.get_activo()==false){

        contPuntosJuego+=10;

        /*
        contPuntosJuego=
        Puntos->GetScore();
        */
        enemigo.set_activo(true);



    }
     if(enemigoDos.get_muertoZombie()==true&&enemigoDos.get_activo()==false){

/*
        Puntos->GetScore();

*/
    contPuntosJuego+=10;

    enemigoDos.set_activo(true);

    }
     if(enemigoTres.get_muertoZombie()==true&&enemigoTres.get_activo()==false){

/*
        Puntos->GetScore();

*/
    contPuntosJuego+=10;

    enemigoTres.set_activo(true);
    }

     if(enemigoCuatro.get_muertoZombie()==true&&enemigoCuatro.get_activo()==false){

        contPuntosJuego+=10;

        /*
        contPuntosJuego=
        Puntos->GetScore();
*/
        enemigoCuatro.set_activo(true);



    }
     if(enemigoCinco.get_muertoZombie()==true&&enemigoCinco.get_activo()==false){

/*
        Puntos->GetScore();

*/
    contPuntosJuego+=10;

    enemigoCinco.set_activo(true);

    }
     if(enemigoSeis.get_muertoZombie()==true&&enemigoSeis.get_activo()==false){

/*
        Puntos->GetScore();

*/
    contPuntosJuego+=10;

    enemigoSeis.set_activo(true);

    }

    if(enemigoSiete.get_muertoZombie()==true&&enemigoSiete.get_activo()==false){

/*
        Puntos->GetScore();

*/
    contPuntosJuego+=10;

    enemigoSiete.set_activo(true);

    }

    if(enemigoOcho.get_muertoZombie()==true&&enemigoOcho.get_activo()==false){

/*
        Puntos->GetScore();

*/
    contPuntosJuego+=10;

    enemigoOcho.set_activo(true);

    }

    if(enemigoNueve.get_muertoZombie()==true&&enemigoNueve.get_activo()==false){

/*
        Puntos->GetScore();

*/
    contPuntosJuego+=10;

    enemigoNueve.set_activo(true);

    }

    if(enemigoDiez.get_muertoZombie()==true&&enemigoDiez.get_activo()==false){

/*
        Puntos->GetScore();

*/
    contPuntosJuego+=10;

    enemigoDiez.set_activo(true);

    }

    ///***************************************************************************************

    if(enemigoUnoF.get_muertoFott()==true&&enemigoUnoF.get_activo()==false){

        contPuntosJuego+=20;

        enemigoUnoF.set_activo(true);

    }
     if(enemigoDosF.get_muertoFott()==true&&enemigoDosF.get_activo()==false){

        contPuntosJuego+=20;

        enemigoDosF.set_activo(true);

    }
     if(enemigoTresF.get_muertoFott()==true&&enemigoTresF.get_activo()==false){

        contPuntosJuego+=20;

        enemigoTresF.set_activo(true);

    }
     if(enemigoCuatroF.get_muertoFott()==true&&enemigoCuatroF.get_activo()==false){

        contPuntosJuego+=20;

        enemigoCuatroF.set_activo(true);

    }
     if(enemigoCincoF.get_muertoFott()==true&&enemigoCincoF.get_activo()==false){

        contPuntosJuego+=20;

        enemigoCincoF.set_activo(true);

    }
     if(enemigoSeisF.get_muertoFott()==true&&enemigoSeisF.get_activo()==false){

        contPuntosJuego+=20;

        enemigoSeisF.set_activo(true);

    }
     if(enemigoSieteF.get_muertoFott()==true&&enemigoSieteF.get_activo()==false){

        contPuntosJuego+=20;

        enemigoSieteF.set_activo(true);

    }
     if(enemigoOchoF.get_muertoFott()==true&&enemigoOchoF.get_activo()==false){

        contPuntosJuego+=20;

        enemigoOchoF.set_activo(true);

    }
     if(enemigoNueveF.get_muertoFott()==true&&enemigoNueveF.get_activo()==false){

        contPuntosJuego+=20;

        enemigoNueveF.set_activo(true);

    }
     if(enemigoDiezF.get_muertoFott()==true&&enemigoDiezF.get_activo()==false){

        contPuntosJuego+=20;

        enemigoDiezF.set_activo(true);

    }

    if(Boss.get_muerteJefe()==true){

                contPuntosJuego+=1000;

                Boss.set_muerteJefe(false);

                play_sample(victory,200,150,1000,0);


                Nivel2=true;

                reinicio=true;
    }


    juga.limitePlayer();

    enemigo.limite();

    enemigoDos.limite();

    enemigoTres.limite();

    enemigoCuatro.limite();

    enemigoCinco.limite();

    enemigoSeis.limite();

    enemigoSiete.limite();

    enemigoOcho.limite();

    enemigoNueve.limite();

    enemigoDiez.limite();

    //////////////////

    enemigoUnoF.limite();

    enemigoDosF.limite();

    enemigoTresF.limite();

    enemigoCuatroF.limite();

    rest(1000/FRAME_RATE);

    }


            while(Nivel2==true){

                blit(Victoria,bufferMenu3,0,0,0,0,1100,618);
                blit(bufferMenu3,screen,0,0,0,0,1100,618);



                 if(key[KEY_ENTER]){

                    juga.Iniciar();



                    blit(juga.buffer,screen,0,0,0,0,1100,618);

                    masked_blit(juga.PrincipalDer,screen,0,0,juga.get_x(),juga.get_y(),76,78);

                   bool activarCorazonN2=false;
                   bool continua=false;
                   bool ataqueNivel2=false;

                   int contJuegoNivel2=0;
                   juga.set_contSinGolpe(0);

                   bool iniciarTodo1=false;
                   bool iniciarTodo2=false;
                   bool iniciarTodo3=false;
                   bool iniciarTodo4=false;
                   bool iniciarTodo5=false;
                   bool iniciarTodo6=false;
                   bool iniciarTodo7=false;
                   bool iniciarTodo8=false;
                   bool iniciarTodo9=false;
                   bool iniciarTodo10=false;
                   bool iniciarTodo11=false;
                   bool iniciarTodo12=false;
                   bool iniciarTodo13=false;
                   bool iniciarTodo14=false;
                   bool iniciarTodo15=false;
                   bool iniciarTodo16=false;
                   bool iniciarTodo17=false;
                   bool iniciarTodo18=false;
                   bool iniciarTodo19=false;
                   bool iniciarTodo20=false;


                    enemigo.set_x_ene(5000);
                    enemigo.set_y_ene(5000);
                    enemigo.set_muertoZombie(false);

                    enemigoDos.set_x_ene(5000);
                    enemigoDos.set_y_ene(5000);
                    enemigoDos.set_muertoZombie(false);

                    enemigoTres.set_x_ene(5000);
                    enemigoTres.set_y_ene(5000);
                    enemigoTres.set_muertoZombie(false);

                    enemigoCuatro.set_x_ene(5000);
                    enemigoCuatro.set_y_ene(5000);
                    enemigoCuatro.set_muertoZombie(false);

                    enemigoCinco.set_x_ene(5000);
                    enemigoCinco.set_y_ene(5000);
                    enemigoCinco.set_muertoZombie(false);

                    enemigoSeis.set_x_ene(5000);
                    enemigoSeis.set_y_ene(5000);
                    enemigoSeis.set_muertoZombie(false);

                    enemigoSiete.set_x_ene(5000);
                    enemigoSiete.set_y_ene(5000);
                    enemigoSiete.set_muertoZombie(false);

                    enemigoOcho.set_x_ene(5000);
                    enemigoOcho.set_y_ene(5000);
                    enemigoOcho.set_muertoZombie(false);

                    enemigoNueve.set_x_ene(5000);
                    enemigoNueve.set_y_ene(5000);
                    enemigoNueve.set_muertoZombie(false);

                    enemigoDiez.set_x_ene(5000);
                    enemigoDiez.set_y_ene(5000);
                    enemigoDiez.set_muertoZombie(false);

                    enemigoUnoF.set_x_eneFotball(5000);
                    enemigoUnoF.set_y_eneFotball(5000);
                    enemigoUnoF.set_muertoFott(false);

                    enemigoDosF.set_x_eneFotball(5000);
                    enemigoDosF.set_y_eneFotball(5000);
                    enemigoDosF.set_muertoFott(false);

                    enemigoTresF.set_x_eneFotball(5000);
                    enemigoTresF.set_y_eneFotball(5000);
                    enemigoTresF.set_muertoFott(false);

                    enemigoCuatroF.set_x_eneFotball(5000);
                    enemigoCuatroF.set_y_eneFotball(5000);
                    enemigoCuatroF.set_muertoFott(false);

                    enemigoCincoF.set_x_eneFotball(5000);
                    enemigoCincoF.set_y_eneFotball(5000);
                    enemigoCincoF.set_muertoFott(false);

                    enemigoSeisF.set_x_eneFotball(5000);
                    enemigoSeisF.set_y_eneFotball(5000);
                    enemigoSeisF.set_muertoFott(false);

                    enemigoSieteF.set_x_eneFotball(5000);
                    enemigoSieteF.set_y_eneFotball(5000);
                    enemigoSieteF.set_muertoFott(false);

                    enemigoOchoF.set_x_eneFotball(5000);
                    enemigoOchoF.set_y_eneFotball(5000);
                    enemigoOchoF.set_muertoFott(false);

                    enemigoNueveF.set_x_eneFotball(5000);
                    enemigoNueveF.set_y_eneFotball(5000);
                    enemigoNueveF.set_muertoFott(false);

                    enemigoDiezF.set_x_eneFotball(5000);
                    enemigoDiezF.set_y_eneFotball(5000);
                    enemigoDiezF.set_muertoFott(false);

                   SuperSpider.set_x_eneSpider(5000);
                   SuperSpider.set_y_eneSpider(5000);
                   SuperSpider.set_MuerteSpiderAlerta(false);

                   Boss.set_x_eneJefe(5000);
                   Boss.set_y_eneJefe(5000);
                   Boss.set_muerteJefe(false);

                   EvilJason.set_x_eneJason(5000);
                   EvilJason.set_y_eneJason(5000);
                   EvilJason.set_muertoJasonFin(false);


                   while(continua==false){

                    textprintf(fondoDesierto,font,900,20,palette_color[11],"PUNTAJE %d",contPuntosJuego);


                    juga.set_contSinGolpe(juga.get_contSinGolpe()+1);

                            if(key[KEY_ESC]){

                                exit(1);
                            }


                    blit(fondoDesierto,juga.buffer,0,0,0,0,1100,618);


                            contJuegoNivel2++;

                            if(juga.get_cora1()==true){

                                    masked_blit(juga.Vida1,juga.buffer,0,0,0,0,40,36);


                            }
                            if(juga.get_cora2()==true){

                                    masked_blit(juga.Vida2,juga.buffer,0,0,35,0,40,36);

                            }

                            if(juga.get_cora3()==true){

                                    masked_blit(juga.Vida2,juga.buffer,0,0,70,0,40,36);

                            }

                            if(juga.get_cora4()==true){

                                    masked_blit(juga.Vida2,juga.buffer,0,0,105,0,40,36);

                            }

                            blit(juga.buffer ,screen,0,0,0,0,1100,618);

                            if(contJuegoNivel2>=100){

                                  if(iniciarTodo1==false){

                                    enemigo.iniciarZ();

                                    enemigo.set_x_ene(200);

                                    enemigo.set_y_ene(300);

                                    enemigo.set_distancia(50);

                                    iniciarTodo1=true;

                                    }

                                if(enemigo.naceZ()){

                                    enemigo.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


                            }

                            }



                            if(contJuegoNivel2>=300){




                             if(iniciarTodo11==false){

                            enemigoNueveF.iniciarFotball(200,350,200,350,10);

                            iniciarTodo11=true;

                            }

                            enemigoNueveF.movimientoFotball(juga.get_x(),juga.get_y(),juga.get_disparoX(),juga.get_disparoY(),10);

                             if(iniciarTodo13==false){


                            enemigoDiezF.iniciarFotball(120,200,120,200,10);

                                iniciarTodo13=true;

                            }

                            enemigoDiezF.movimientoFotball(juga.get_x(),juga.get_y(),juga.get_disparoX(),juga.get_disparoY(),10);

                            }


                            if(contJuegoNivel2>=400){

                            if(iniciarTodo14==false){

                                enemigoOchoF.iniciarFotball(600,500,600,500,10);

                                    iniciarTodo14=true;
                                }

                                enemigoOchoF.movimientoFotball(juga.get_x(),juga.get_y(),juga.get_disparoX(),juga.get_disparoY(),10);



                                if(iniciarTodo9==false){

                                enemigoTres.iniciarZ();

                                enemigoTres.set_x_ene(150);

                                enemigoTres.set_y_ene(400);

                                enemigoTres.set_distancia(50);

                                    iniciarTodo9=true;
                                }


                                 if(enemigoTres.naceZ()){

                                    enemigoTres.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


                                }


                            }

                            if(contJuegoNivel2>=650){

                                    if(iniciarTodo2==false){

                                        enemigoCuatro.iniciarZ();

                                        enemigoCuatro.set_x_ene(250);

                                        enemigoCuatro.set_y_ene(450);

                                        enemigoCuatro.set_distancia(50);

                                        iniciarTodo2=true;

                                    }

                                if(enemigoCuatro.naceZ()){

                                    enemigoCuatro.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);

                                }

                                   if(iniciarTodo3==false){

                                    enemigoCinco.iniciarZ();

                                    enemigoCinco.set_x_ene(100);
                                    enemigoCinco.set_y_ene(350);
                                    enemigoCinco.set_distancia(50);

                                    iniciarTodo3=true;

                                    }
                                if(enemigoCinco.naceZ()){

                                    enemigoCinco.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


                                }
                                 if(iniciarTodo4==false){

                                enemigoSeis.iniciarZ();

                                enemigoSeis.set_x_ene(450);
                                enemigoSeis.set_y_ene(200);
                                enemigoSeis.set_distancia(50);

                                    iniciarTodo4=true;
                                }

                                if(enemigoSeis.naceZ()){

                                    enemigoSeis.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


                                }

                                 if(iniciarTodo16==false){

                                enemigoSieteF.iniciarFotball(350,450,350,450,10);
                                    iniciarTodo16=true;
                                }
                                    enemigoSieteF.movimientoFotball(juga.get_x(),juga.get_y(),juga.get_disparoX(),juga.get_disparoY(),10);

                                 if(iniciarTodo15==false){

                                enemigoSeisF.iniciarFotball(650,300,650,300,10);

                                    iniciarTodo15=true;
                                }
                               enemigoSeisF.movimientoFotball(juga.get_x(),juga.get_y(),juga.get_disparoX(),juga.get_disparoY(),10);

                                 if(activarCorazonN2==false){

                                    RecCora.iniciarCora(300,200);
                                    RecCora.movimientoCora(300,20,10);

                                 }else{

                                    RecCora.iniciarCora(300000,200000);
                                    RecCora.movimientoCora(30000000,200000,10);
                                 }


                            }

                            if(contJuegoNivel2>=870){




                                 if(iniciarTodo5==false){

                                    enemigoSiete.iniciarZ();

                                    enemigoSiete.set_x_ene(350);
                                    enemigoSiete.set_y_ene(500);
                                    enemigoSiete.set_distancia(50);

                                    iniciarTodo5=true;

                                    }

                                  if(enemigoSiete.naceZ()){

                                    enemigoSiete.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


                                }

                                if(iniciarTodo6==false){

                                    enemigoOcho.iniciarZ();

                                    enemigoOcho.set_x_ene(200);
                                    enemigoOcho.set_y_ene(500);
                                    enemigoOcho.set_distancia(50);

                                    iniciarTodo6=true;
                                    }

                                if(enemigoOcho.naceZ()){

                                    enemigoOcho.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


                                }


                                      if(iniciarTodo7==false){

                                    enemigoNueve.iniciarZ();

                                    enemigoNueve.set_x_ene(400);
                                    enemigoNueve.set_y_ene(200);
                                    enemigoNueve.set_distancia(50);

                                        iniciarTodo7=true;

                                    }

                                if(enemigoNueve.naceZ()){

                                    enemigoNueve.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


                                }
                            }

                            if(contJuegoNivel2<=1000){


                                if(iniciarTodo8==false){

                                enemigoDiez.iniciarZ();

                                enemigoDiez.set_x_ene(300);
                                enemigoDiez.set_y_ene(200);
                                enemigoDiez.set_distancia(50);

                                    iniciarTodo8=true;
                                }

                                if(enemigoDiez.naceZ()){

                                    enemigoDiez.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


                                }


                            }

                            if(contJuegoNivel2>=1200){

                                if(iniciarTodo12==false){

                                play_sample(hormiga,200,150,1000,0);

                                SuperSpider.iniciarSpider(400,300,400,300,80);

                                    iniciarTodo12=true;

                                }

                               SuperSpider.movimientoSpider(juga.get_x(),juga.get_y(),juga.get_disparoX(),juga.get_disparoY(),80);


                            }


                            if((((((((((((((((((!((juga.get_x()>enemigo.get_x_ene()+60)
                            || (enemigo.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigo.get_y_ene()+60)
                            || (enemigo.get_y_ene()> juga.get_y()+60)) && !enemigo.get_muertoZombie())
                            ||!((juga.get_x()>enemigoTres.get_x_ene()+60)
                            || (enemigoTres.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigoTres.get_y_ene()+60)
                            || (enemigoTres.get_y_ene()> juga.get_y()+60)) && !enemigoTres.get_muertoZombie())
                            ||!((juga.get_x()>SuperSpider.get_x_eneSpider()+60)
                            || (SuperSpider.get_x_eneSpider() > juga.get_x()+60)
                            || (juga.get_y() > SuperSpider.get_y_eneSpider()+60)
                            || (SuperSpider.get_y_eneSpider()> juga.get_y()+60)) && !SuperSpider.get_MuerteSpiderAlerta())
                            ||!((juga.get_x()>enemigoCuatro.get_x_ene()+60)
                            || (enemigoCuatro.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigoCuatro.get_y_ene()+60)
                            || (enemigoCuatro.get_y_ene()> juga.get_y()+60)) && !enemigoCuatro.get_muertoZombie())
                            ||!((juga.get_x()>enemigoCinco.get_x_ene()+60)
                            || (enemigoCinco.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigoCinco.get_y_ene()+60)
                            || (enemigoCinco.get_y_ene()> juga.get_y()+60)) && !enemigoCinco.get_muertoZombie())
                            ||!((juga.get_x()>enemigoSeis.get_x_ene()+60)
                            || (enemigoSeis.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigoSeis.get_y_ene()+60)
                            || (enemigoSeis.get_y_ene()> juga.get_y()+60)) && !enemigoSeis.get_muertoZombie())
                            ||!((juga.get_x()>enemigoSiete.get_x_ene()+60)
                            || (enemigoSiete.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigoSiete.get_y_ene()+60)
                            || (enemigoSiete.get_y_ene()> juga.get_y()+60)) && !enemigoSiete.get_muertoZombie())
                            ||!((juga.get_x()>enemigoUnoF.get_x_eneFotball()+60)
                            || (enemigoUnoF.get_x_eneFotball() > juga.get_x()+60)
                            || (juga.get_y() > enemigoUnoF.get_y_eneFotball()+60)
                            || (enemigoUnoF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoUnoF.get_muertoFott())
                            ||!((juga.get_x()>enemigoDosF.get_x_eneFotball()+60)
                            || (enemigoDosF.get_x_eneFotball() > juga.get_x()+60)
                            || (juga.get_y() > enemigoDosF.get_y_eneFotball()+60)
                            || (enemigoDosF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoDosF.get_muertoFott())
                            ||!((juga.get_x()>enemigoOcho.get_x_ene()+60)
                            || (enemigoOcho.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigoOcho.get_y_ene()+60)
                            || (enemigoOcho.get_y_ene()> juga.get_y()+60)) && !enemigoOcho.get_muertoZombie())
                            ||!((juga.get_x()>enemigoNueve.get_x_ene()+60)
                            || (enemigoNueve.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigoNueve.get_y_ene()+60)
                            || (enemigoNueve.get_y_ene()> juga.get_y()+60)) && !enemigoNueve.get_muertoZombie())
                            ||!((juga.get_x()>enemigoDiez.get_x_ene()+60)
                            || (enemigoDiez.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigoDiez.get_y_ene()+60)
                            || (enemigoDiez.get_y_ene()> juga.get_y()+60)) && !enemigoDiez.get_muertoZombie())
                            ||!((juga.get_x()>enemigoTresF.get_x_eneFotball()+60)
                            || (enemigoNueveF.get_x_eneFotball() > juga.get_x()+60)
                            || (juga.get_y() > enemigoNueveF.get_y_eneFotball()+60)
                            || (enemigoNueveF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoNueveF.get_muertoFott())
                            ||!((juga.get_x()>enemigoDiezF.get_x_eneFotball()+60)
                            || (enemigoDiezF.get_x_eneFotball()> juga.get_x()+60)
                            || (juga.get_y() > enemigoDiezF.get_y_eneFotball()+60)
                            || (enemigoDiezF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoDiezF.get_muertoFott())
                            ||!((juga.get_x()>enemigoOchoF.get_x_eneFotball()+60)
                            || (enemigoOchoF.get_x_eneFotball()> juga.get_x()+60)
                            || (juga.get_y() > enemigoOchoF.get_y_eneFotball()+60)
                            || (enemigoOchoF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoOchoF.get_muertoFott())
                            || !((juga.get_x()>enemigoSieteF.get_x_eneFotball()+60)
                            || (enemigoSieteF.get_x_eneFotball()> juga.get_x()+60)
                            || (juga.get_y() > enemigoSieteF.get_y_eneFotball()+60)
                            || (enemigoSieteF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoSieteF.get_muertoFott())
                            || !((juga.get_x()>enemigoSeisF.get_x_eneFotball()+60)
                            || (enemigoSeisF.get_x_eneFotball()> juga.get_x()+60)
                            || (juga.get_y() > enemigoSeisF.get_y_eneFotball()+60)
                            || (enemigoSeisF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoSeisF.get_muertoFott())&& juga.get_contSinGolpe()>40){


                            ataqueNivel2=true;

                            if(juga.get_cora4()==true){

                                play_sample(hito,200,150,1000,0);

                                juga.set_cora4(false);
                                destroy_bitmap(juga.Vida4);

                            }
                            else if(juga.get_cora4()==false&&juga.get_cora3()==true){

                                play_sample(hito,200,150,1000,0);

                                juga.set_cora3(false);
                                destroy_bitmap(juga.Vida3);

                            }else if(juga.get_cora4()==false&&juga.get_cora3()==false&&juga.get_cora2()==true){

                                play_sample(hito,200,150,1000,0);

                                juga.set_cora2(false);
                                destroy_bitmap(juga.Vida2);


                            }else if(juga.get_cora4()==false&&juga.get_cora3()==false&&juga.get_cora2()==false&&juga.get_cora1()==true){

                                play_sample(hito,200,150,1000,0);

                                juga.set_cora1(false);
                                destroy_bitmap(juga.Vida1);


                            }

                            if(juga.get_cora1()==false&&juga.get_cora2()==false&&juga.get_cora3()==false&&juga.get_cora4()==false){

                                    play_sample(sonidoDead,200,150,1000,0);


                                    int n=contPuntosJuego;

                                    Scores reg(n);

                                    reg.grabarDisco();


                                    continua=true;
                                    Nivel2=false;
                                    reinicio=true;

                            }

                            juga.set_contSinGolpe(0);


                            }else if(ataqueNivel2==true){


                            ataqueNivel2=juga.playerMorir();


                            }else {

                            juga.Movimiento();

                                  if(!((juga.get_x()>RecCora.get_x_ene_Cora()+60)
                                    || (RecCora.get_x_ene_Cora() > juga.get_x()+60)
                                    || (juga.get_y() > RecCora.get_y_ene_Cora()+60)
                                    || (RecCora.get_y_ene_Cora()> juga.get_y()+60)))
                                    {

                                          if(juga.get_cora2()==false){


                                                juga.set_cora2(true);


                                                 activarCorazon=true;

                                            }else if(juga.get_cora2()==true&&juga.get_cora3()==false){



                                                juga.set_cora3(true);

                                                activarCorazon=true;


                                            }else if(juga.get_cora2()==true&&juga.get_cora3()==true&&juga.get_cora4()==false){


                                                juga.set_cora4(true);

                                                activarCorazon=true;


                                            }

                                    }


                            }

                            ///**********************PUNTAJE*************************


                                if(enemigo.get_muertoZombie()==true&&enemigo.get_activo()==false){

                                    contPuntosJuego+=10;

                                    /*
                                    contPuntosJuego=
                                    Puntos->GetScore();
                            */
                                    enemigo.set_activo(true);



                                }
                                 if(enemigoDos.get_muertoZombie()==true&&enemigoDos.get_activo()==false){

                            /*
                                    Puntos->GetScore();

                            */
                                contPuntosJuego+=10;

                                enemigoDos.set_activo(true);

                                }
                                 if(enemigoTres.get_muertoZombie()==true&&enemigoTres.get_activo()==false){

                            /*
                                    Puntos->GetScore();

                            */
                                contPuntosJuego+=10;

                                enemigoTres.set_activo(true);
                                }

                                 if(enemigoCuatro.get_muertoZombie()==true&&enemigoCuatro.get_activo()==false){

                                    contPuntosJuego+=10;

                                    /*
                                    contPuntosJuego=
                                    Puntos->GetScore();
                            */
                                    enemigoCuatro.set_activo(true);



                                }
                                 if(enemigoCinco.get_muertoZombie()==true&&enemigoCinco.get_activo()==false){

                            /*
                                    Puntos->GetScore();

                            */
                                contPuntosJuego+=10;

                                enemigoCinco.set_activo(true);

                                }
                                 if(enemigoSeis.get_muertoZombie()==true&&enemigoSeis.get_activo()==false){

                            /*
                                    Puntos->GetScore();

                            */
                                contPuntosJuego+=10;

                                enemigoSeis.set_activo(true);

                                }

                                if(enemigoSiete.get_muertoZombie()==true&&enemigoSiete.get_activo()==false){

                            /*
                                    Puntos->GetScore();

                            */
                                contPuntosJuego+=10;

                                enemigoSiete.set_activo(true);

                                }

                                if(enemigoOcho.get_muertoZombie()==true&&enemigoOcho.get_activo()==false){

                            /*
                                    Puntos->GetScore();

                            */
                                contPuntosJuego+=10;

                                enemigoOcho.set_activo(true);

                                }

                                if(enemigoNueve.get_muertoZombie()==true&&enemigoNueve.get_activo()==false){

                            /*
                                    Puntos->GetScore();

                            */
                                contPuntosJuego+=10;

                                enemigoNueve.set_activo(true);

                                }

                                if(enemigoDiez.get_muertoZombie()==true&&enemigoDiez.get_activo()==false){

                            /*
                                    Puntos->GetScore();

                            */
                                contPuntosJuego+=10;

                                enemigoDiez.set_activo(true);

                                }

                                ///***************************************************************************************

                                if(enemigoUnoF.get_muertoFott()==true&&enemigoUnoF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoUnoF.set_activo(true);

                                }
                                 if(enemigoDosF.get_muertoFott()==true&&enemigoDosF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoDosF.set_activo(true);

                                }
                                 if(enemigoTresF.get_muertoFott()==true&&enemigoTresF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoTresF.set_activo(true);

                                }
                                 if(enemigoCuatroF.get_muertoFott()==true&&enemigoCuatroF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoCuatroF.set_activo(true);

                                }
                                 if(enemigoCincoF.get_muertoFott()==true&&enemigoCincoF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoCincoF.set_activo(true);

                                }
                                 if(enemigoSeisF.get_muertoFott()==true&&enemigoSeisF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoSeisF.set_activo(true);

                                }
                                 if(enemigoSieteF.get_muertoFott()==true&&enemigoSieteF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoSieteF.set_activo(true);

                                }
                                 if(enemigoOchoF.get_muertoFott()==true&&enemigoOchoF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoOchoF.set_activo(true);

                                }
                                 if(enemigoNueveF.get_muertoFott()==true&&enemigoNueveF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoNueveF.set_activo(true);

                                }
                                 if(enemigoDiezF.get_muertoFott()==true&&enemigoDiezF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoDiezF.set_activo(true);

                                }

                                if(SuperSpider.get_MuerteSpiderAlerta()==true){

                                contPuntosJuego+=2000;

                                }


                            ///******************************************************
                            if(SuperSpider.get_MuerteSpiderAlerta()==true){

                                ///ReinicioNivel2=true;

                               play_sample(victory,200,150,1000,0);

                                Nivel2=false;

                                Nivel3=true;





            while(Nivel3==true){




                blit(zombiepantalla,bufferMenu5,0,0,0,0,1100,618);
                blit(bufferMenu5,screen,0,0,0,0,1100,618);





                 if(key[KEY_ENTER]){

                    juga.Iniciar();



                    blit(juga.buffer,screen,0,0,0,0,1100,618);

                    masked_blit(juga.PrincipalDer,screen,0,0,juga.get_x(),juga.get_y(),76,78);


                   bool continuaNivel3=false;
                   bool ataqueNivel3=false;

                   int contJuegoNivel3=0;
                   juga.set_contSinGolpe(0);

                   bool iniciarTodo1=false;
                   bool iniciarTodo2=false;
                   bool iniciarTodo3=false;
                   bool iniciarTodo4=false;
                   bool iniciarTodo5=false;
                   bool iniciarTodo6=false;
                   bool iniciarTodo7=false;
                   bool iniciarTodo8=false;
                   bool iniciarTodo9=false;
                   bool iniciarTodo10=false;
                   bool iniciarTodo11=false;
                   bool iniciarTodo12=false;
                   bool iniciarTodo13=false;
                   bool iniciarTodo14=false;
                   bool iniciarTodo15=false;
                   bool iniciarTodo16=false;
                   bool iniciarTodo17=false;
                   bool iniciarTodo18=false;
                   bool iniciarTodo19=false;
                   bool iniciarTodo20=false;


                    enemigo.set_x_ene(5000);
                    enemigo.set_y_ene(5000);
                    enemigo.set_muertoZombie(false);

                    enemigoDos.set_x_ene(5000);
                    enemigoDos.set_y_ene(5000);
                    enemigoDos.set_muertoZombie(false);

                    enemigoTres.set_x_ene(5000);
                    enemigoTres.set_y_ene(5000);
                    enemigoTres.set_muertoZombie(false);

                    enemigoCuatro.set_x_ene(5000);
                    enemigoCuatro.set_y_ene(5000);
                    enemigoCuatro.set_muertoZombie(false);

                    enemigoCinco.set_x_ene(5000);
                    enemigoCinco.set_y_ene(5000);
                    enemigoCinco.set_muertoZombie(false);

                    enemigoSeis.set_x_ene(5000);
                    enemigoSeis.set_y_ene(5000);
                    enemigoSeis.set_muertoZombie(false);

                    enemigoSiete.set_x_ene(5000);
                    enemigoSiete.set_y_ene(5000);
                    enemigoSiete.set_muertoZombie(false);

                    enemigoOcho.set_x_ene(5000);
                    enemigoOcho.set_y_ene(5000);
                    enemigoOcho.set_muertoZombie(false);

                    enemigoNueve.set_x_ene(5000);
                    enemigoNueve.set_y_ene(5000);
                    enemigoNueve.set_muertoZombie(false);

                    enemigoDiez.set_x_ene(5000);
                    enemigoDiez.set_y_ene(5000);
                    enemigoDiez.set_muertoZombie(false);

                    enemigoUnoF.set_x_eneFotball(5000);
                    enemigoUnoF.set_y_eneFotball(5000);
                    enemigoUnoF.set_muertoFott(false);

                    enemigoDosF.set_x_eneFotball(5000);
                    enemigoDosF.set_y_eneFotball(5000);
                    enemigoDosF.set_muertoFott(false);

                    enemigoTresF.set_x_eneFotball(5000);
                    enemigoTresF.set_y_eneFotball(5000);
                    enemigoTresF.set_muertoFott(false);

                    enemigoCuatroF.set_x_eneFotball(5000);
                    enemigoCuatroF.set_y_eneFotball(5000);
                    enemigoCuatroF.set_muertoFott(false);

                    enemigoCincoF.set_x_eneFotball(5000);
                    enemigoCincoF.set_y_eneFotball(5000);
                    enemigoCincoF.set_muertoFott(false);

                    enemigoSeisF.set_x_eneFotball(5000);
                    enemigoSeisF.set_y_eneFotball(5000);
                    enemigoSeisF.set_muertoFott(false);

                    enemigoSieteF.set_x_eneFotball(5000);
                    enemigoSieteF.set_y_eneFotball(5000);
                    enemigoSieteF.set_muertoFott(false);

                    enemigoOchoF.set_x_eneFotball(5000);
                    enemigoOchoF.set_y_eneFotball(5000);
                    enemigoOchoF.set_muertoFott(false);

                    enemigoNueveF.set_x_eneFotball(5000);
                    enemigoNueveF.set_y_eneFotball(5000);
                    enemigoNueveF.set_muertoFott(false);

                    enemigoDiezF.set_x_eneFotball(5000);
                    enemigoDiezF.set_y_eneFotball(5000);
                    enemigoDiezF.set_muertoFott(false);

                   SuperSpider.set_x_eneSpider(5000);
                   SuperSpider.set_y_eneSpider(5000);
                   SuperSpider.set_MuerteSpiderAlerta(false);

                   Boss.set_x_eneJefe(5000);
                   Boss.set_y_eneJefe(5000);
                   Boss.set_muerteJefe(false);

                   EvilJason.set_x_eneJason(5000);
                   EvilJason.set_y_eneJason(5000);
                   EvilJason.set_muertoJasonFin(false);


                   while(continuaNivel3==false){

                    textprintf(nivel3,font,900,20,palette_color[11],"PUNTAJE %d",contPuntosJuego);


                    juga.set_contSinGolpe(juga.get_contSinGolpe()+1);

                            if(key[KEY_ESC]){

                                exit(1);
                            }


                    blit(nivel3,juga.buffer,0,0,0,0,1100,618);


                            contJuegoNivel3++;

                            if(juga.get_cora1()==true){

                                    masked_blit(juga.Vida1,juga.buffer,0,0,0,0,40,36);


                            }
                            if(juga.get_cora2()==true){

                                    masked_blit(juga.Vida2,juga.buffer,0,0,35,0,40,36);

                            }

                            if(juga.get_cora3()==true){

                                    masked_blit(juga.Vida2,juga.buffer,0,0,70,0,40,36);

                            }

                            if(juga.get_cora4()==true){

                                    masked_blit(juga.Vida2,juga.buffer,0,0,105,0,40,36);

                            }

                            blit(juga.buffer ,screen,0,0,0,0,1100,618);

                            if(contJuegoNivel3>=100){

                                  if(iniciarTodo1==false){

                                    enemigo.iniciarZ();

                                    enemigo.set_x_ene(200);
                                    enemigo.set_y_ene(300);
                                    enemigo.set_distancia(50);

                                    iniciarTodo1=true;

                                    }

                                if(enemigo.naceZ()){

                                    enemigo.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


                                }

                            }



                            if(contJuegoNivel3>=300){




                             if(iniciarTodo11==false){

                            enemigoNueveF.iniciarFotball(200,350,200,350,10);

                            iniciarTodo11=true;

                            }

                            enemigoNueveF.movimientoFotball(juga.get_x(),juga.get_y(),juga.get_disparoX(),juga.get_disparoY(),10);

                             if(iniciarTodo13==false){


                            enemigoDiezF.iniciarFotball(120,200,120,200,10);

                                iniciarTodo13=true;

                            }

                            enemigoDiezF.movimientoFotball(juga.get_x(),juga.get_y(),juga.get_disparoX(),juga.get_disparoY(),10);

                            }


                            if(contJuegoNivel3>=400){

                            if(iniciarTodo14==false){

                                enemigoOchoF.iniciarFotball(600,500,600,500,10);

                                    iniciarTodo14=true;
                                }

                                enemigoOchoF.movimientoFotball(juga.get_x(),juga.get_y(),juga.get_disparoX(),juga.get_disparoY(),10);



                                if(iniciarTodo9==false){

                                enemigoTres.iniciarZ();

                                enemigoTres.set_x_ene(150);
                                enemigoTres.set_y_ene(400);
                                enemigoTres.set_distancia(50);

                                    iniciarTodo9=true;
                                }


                                 if(enemigoTres.naceZ()){

                                    enemigoTres.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


                                }


                            }

                            if(contJuegoNivel3>=650){

                                    if(iniciarTodo2==false){

                                    enemigoCuatro.iniciarZ();

                                    enemigoCuatro.set_x_ene(250);
                                    enemigoCuatro.set_y_ene(450);
                                    enemigoCinco.set_distancia(50);

                                    iniciarTodo2=true;
                                    }

                                if(enemigoCuatro.naceZ()){

                                    enemigoCuatro.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);



                                }

                                   if(iniciarTodo3==false){

                                    enemigoCinco.iniciarZ();
                                    enemigoCinco.set_x_ene(100);
                                    enemigoCinco.set_y_ene(350);
                                    enemigoCinco.set_distancia(50);

                                    iniciarTodo3=true;

                                    }
                                if(enemigoCinco.naceZ()){

                                    enemigoCinco.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


                                }
                                 if(iniciarTodo4==false){

                                enemigoSeis.iniciarZ();

                                enemigoSeis.set_x_ene(450);
                                enemigoSeis.set_y_ene(200);
                                enemigoSeis.set_distancia(50);

                                    iniciarTodo4=true;
                                }

                                if(enemigoSeis.naceZ()){

                                    enemigoSeis.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


                                }

                                 if(iniciarTodo16==false){

                                enemigoSieteF.iniciarFotball(350,450,350,450,10);
                                    iniciarTodo16=true;
                                }
                                    enemigoSieteF.movimientoFotball(juga.get_x(),juga.get_y(),juga.get_disparoX(),juga.get_disparoY(),10);

                                 if(iniciarTodo15==false){

                                enemigoSeisF.iniciarFotball(650,300,650,300,10);

                                    iniciarTodo15=true;
                                }
                               enemigoSeisF.movimientoFotball(juga.get_x(),juga.get_y(),juga.get_disparoX(),juga.get_disparoY(),10);

                            }

                            if(contJuegoNivel3>=870){

                                 if(iniciarTodo5==false){

                                    enemigoSiete.iniciarZ();

                                    enemigoSiete.set_x_ene(350);
                                    enemigoSiete.set_y_ene(500);
                                    enemigoSiete.set_distancia(50);

                                    iniciarTodo5=true;

                                    }

                                  if(enemigoSiete.naceZ()){

                                    enemigoSiete.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


                                }

                                if(iniciarTodo6==false){

                                    enemigoOcho.iniciarZ();

                                    enemigoOcho.set_x_ene(200);
                                    enemigoOcho.set_y_ene(500);
                                    enemigoOcho.set_distancia(50);

                                    iniciarTodo6=true;
                                    }

                                if(enemigoOcho.naceZ()){

                                    enemigoOcho.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


                                }


                                      if(iniciarTodo7==false){

                                    enemigoNueve.iniciarZ();

                                    enemigoNueve.set_x_ene(400);
                                    enemigoNueve.set_y_ene(200);
                                    enemigoNueve.set_distancia(50);

                                        iniciarTodo7=true;

                                    }

                                if(enemigoNueve.naceZ()){

                                    enemigoNueve.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


                                }
                            }

                            if(contJuegoNivel3<=1300){


                                if(iniciarTodo8==false){

                                enemigoDiez.iniciarZ();

                                enemigoDiez.set_x_ene(300);
                                enemigoDiez.set_y_ene(200);
                                enemigoDiez.set_distancia(50);

                                    iniciarTodo8=true;
                                }

                                if(enemigoDiez.naceZ()){

                                    enemigoDiez.movimientoZ(juga.get_disparoX(),juga.get_disparoY(),10);


                                }


                            }

                            if(contJuegoNivel3>=1500){

                               if(iniciarNivel17==false){

                                    EvilJason.iniciarJason(400,250,400,250,10);

                                    iniciarNivel17=true;

                                }

                                if(EvilJason.NaceJason()){

                                    EvilJason.movimientoJason(juga.get_x(),juga.get_y(),juga.get_disparoX(),juga.get_disparoY(),10);

                                }

                            }


                            if(((((((((((((((((((!((juga.get_x()>enemigo.get_x_ene()+60)
                            || (enemigo.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigo.get_y_ene()+60)
                            || (enemigo.get_y_ene()> juga.get_y()+60)) && !enemigo.get_muertoZombie())
                            ||!((juga.get_x()>enemigoTres.get_x_ene()+60)
                            || (enemigoTres.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigoTres.get_y_ene()+60)
                            || (enemigoTres.get_y_ene()> juga.get_y()+60)) && !enemigoTres.get_muertoZombie())
                            ||!((juga.get_x()>SuperSpider.get_x_eneSpider()+60)
                            || (SuperSpider.get_x_eneSpider() > juga.get_x()+60)
                            || (juga.get_y() > SuperSpider.get_y_eneSpider()+60)
                            || (SuperSpider.get_y_eneSpider()> juga.get_y()+60)) && !SuperSpider.get_MuerteSpiderAlerta())
                            ||!((juga.get_x()>enemigoCuatro.get_x_ene()+60)
                            || (enemigoCuatro.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigoCuatro.get_y_ene()+60)
                            || (enemigoCuatro.get_y_ene()> juga.get_y()+60)) && !enemigoCuatro.get_muertoZombie())
                            ||!((juga.get_x()>enemigoCinco.get_x_ene()+60)
                            || (enemigoCinco.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigoCinco.get_y_ene()+60)
                            || (enemigoCinco.get_y_ene()> juga.get_y()+60)) && !enemigoCinco.get_muertoZombie())
                            ||!((juga.get_x()>enemigoSeis.get_x_ene()+60)
                            || (enemigoSeis.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigoSeis.get_y_ene()+60)
                            || (enemigoSeis.get_y_ene()> juga.get_y()+60)) && !enemigoSeis.get_muertoZombie())
                            ||!((juga.get_x()>enemigoSiete.get_x_ene()+60)
                            || (enemigoSiete.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigoSiete.get_y_ene()+60)
                            || (enemigoSiete.get_y_ene()> juga.get_y()+60)) && !enemigoSiete.get_muertoZombie())
                            ||!((juga.get_x()>enemigoUnoF.get_x_eneFotball()+60)
                            || (enemigoUnoF.get_x_eneFotball() > juga.get_x()+60)
                            || (juga.get_y() > enemigoUnoF.get_y_eneFotball()+60)
                            || (enemigoUnoF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoUnoF.get_muertoFott())
                            ||!((juga.get_x()>enemigoDosF.get_x_eneFotball()+60)
                            || (enemigoDosF.get_x_eneFotball() > juga.get_x()+60)
                            || (juga.get_y() > enemigoDosF.get_y_eneFotball()+60)
                            || (enemigoDosF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoDosF.get_muertoFott())
                            ||!((juga.get_x()>enemigoOcho.get_x_ene()+60)
                            || (enemigoOcho.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigoOcho.get_y_ene()+60)
                            || (enemigoOcho.get_y_ene()> juga.get_y()+60)) && !enemigoOcho.get_muertoZombie())
                            ||!((juga.get_x()>enemigoNueve.get_x_ene()+60)
                            || (enemigoNueve.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigoNueve.get_y_ene()+60)
                            || (enemigoNueve.get_y_ene()> juga.get_y()+60)) && !enemigoNueve.get_muertoZombie())
                            ||!((juga.get_x()>enemigoDiez.get_x_ene()+60)
                            || (enemigoDiez.get_x_ene() > juga.get_x()+60)
                            || (juga.get_y() > enemigoDiez.get_y_ene()+60)
                            || (enemigoDiez.get_y_ene()> juga.get_y()+60)) && !enemigoDiez.get_muertoZombie())
                            ||!((juga.get_x()>enemigoTresF.get_x_eneFotball()+60)
                            || (enemigoNueveF.get_x_eneFotball() > juga.get_x()+60)
                            || (juga.get_y() > enemigoNueveF.get_y_eneFotball()+60)
                            || (enemigoNueveF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoNueveF.get_muertoFott())
                            ||!((juga.get_x()>enemigoDiezF.get_x_eneFotball()+60)
                            || (enemigoDiezF.get_x_eneFotball()> juga.get_x()+60)
                            || (juga.get_y() > enemigoDiezF.get_y_eneFotball()+60)
                            || (enemigoDiezF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoDiezF.get_muertoFott())
                            ||!((juga.get_x()>enemigoOchoF.get_x_eneFotball()+60)
                            || (enemigoOchoF.get_x_eneFotball()> juga.get_x()+60)
                            || (juga.get_y() > enemigoOchoF.get_y_eneFotball()+60)
                            || (enemigoOchoF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoOchoF.get_muertoFott())
                            || !((juga.get_x()>enemigoSieteF.get_x_eneFotball()+60)
                            || (enemigoSieteF.get_x_eneFotball()> juga.get_x()+60)
                            || (juga.get_y() > enemigoSieteF.get_y_eneFotball()+60)
                            || (enemigoSieteF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoSieteF.get_muertoFott())
                            || !((juga.get_x()>enemigoSeisF.get_x_eneFotball()+60)
                            || (enemigoSeisF.get_x_eneFotball()> juga.get_x()+60)
                            || (juga.get_y() > enemigoSeisF.get_y_eneFotball()+60)
                            || (enemigoSeisF.get_y_eneFotball()> juga.get_y()+60)) && !enemigoSeisF.get_muertoFott())
                            || !((juga.get_x()>EvilJason.get_x_eneJason()+60)
                            || (EvilJason.get_x_eneJason()> juga.get_x()+60)
                            || (juga.get_y() > EvilJason.get_y_eneJason()+60)
                            || (EvilJason.get_y_eneJason()> juga.get_y()+60)) && !EvilJason.get_muertoJasonFin())&& juga.get_contSinGolpe()>40){


                            ataqueNivel3=true;

                            if(juga.get_cora4()==true){

                                play_sample(hito,200,150,1000,0);

                                juga.set_cora4(false);
                                destroy_bitmap(juga.Vida4);

                            }
                            else if(juga.get_cora4()==false&&juga.get_cora3()==true){

                                play_sample(hito,200,150,1000,0);

                                juga.set_cora3(false);
                                destroy_bitmap(juga.Vida3);

                            }else if(juga.get_cora4()==false&&juga.get_cora3()==false&&juga.get_cora2()==true){

                                play_sample(hito,200,150,1000,0);

                                juga.set_cora2(false);
                                destroy_bitmap(juga.Vida2);


                            }else if(juga.get_cora4()==false&&juga.get_cora3()==false&&juga.get_cora2()==false&&juga.get_cora1()==true){

                                play_sample(hito,200,150,1000,0);

                                juga.set_cora1(false);
                                destroy_bitmap(juga.Vida1);


                            }

                            if(juga.get_cora1()==false&&juga.get_cora2()==false&&juga.get_cora3()==false&&juga.get_cora4()==false){

                                    play_sample(sonidoDead,200,150,1000,0);


                                     int n=contPuntosJuego;
                                    Scores reg(n);

                                    reg.grabarDisco();

                                    Nivel3=false;
                                    continuaNivel3=true;
                                    reinicio=true;
                                    continua=true;
                                    Nivel2=false;

                            }

                            juga.set_contSinGolpe(0);


                            }else if(ataqueNivel3==true){


                            ataqueNivel3=juga.playerMorir();


                            }else {

                            juga.Movimiento();


                            }

                            ///**********************PUNTAJE*************************


                            if(enemigo.get_muertoZombie()==true&&enemigo.get_activo()==true){

                                contPuntosJuego+=10;

                                enemigo.set_activo(false);

                            }
                            if(enemigoDos.get_muertoZombie()==true&&enemigoDos.get_activo()==true){

                                contPuntosJuego+=10;

                                enemigoDos.set_activo(false);
                            }
                            if(enemigoTres.get_muertoZombie()==true&&enemigoTres.get_activo()==true){

                                contPuntosJuego+=10;

                                enemigoTres.set_activo(false);

                            }
                            if(enemigoCuatro.get_muertoZombie()==true&&enemigoCuatro.get_activo()==true){

                                contPuntosJuego+=10;

                                enemigoCuatro.set_activo(false);

                            }
                            if(enemigoCinco.get_muertoZombie()==true&&enemigoCinco.get_activo()==true){

                                contPuntosJuego+=10;

                                enemigoCinco.set_activo(false);

                            }
                            if(enemigoSeis.get_muertoZombie()==true&&enemigoSeis.get_activo()==true){

                                contPuntosJuego+=10;

                                enemigoSeis.set_activo(false);

                            }
                            if(enemigoSiete.get_muertoZombie()==true&&enemigoSiete.get_activo()==true){

                                contPuntosJuego+=10;

                                enemigoSiete.set_activo(false);

                            }
                            if(enemigoOcho.get_muertoZombie()==true&&enemigoOcho.get_activo()==true){

                                contPuntosJuego+=10;

                                enemigoOcho.set_activo(false);

                            }
                            if(enemigoNueve.get_muertoZombie()==true&&enemigoNueve.get_activo()==true){

                                contPuntosJuego+=10;

                                enemigoNueve.set_activo(false);

                            }
                            if(enemigoDiez.get_muertoZombie()==true&&enemigoDiez.get_activo()==true){

                                contPuntosJuego+=10;

                                enemigoDiez.set_activo(false);

                            }
                             if(enemigoUnoF.get_muertoFott()==true&&enemigoUnoF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoUnoF.set_activo(true);

                                }
                                 if(enemigoDosF.get_muertoFott()==true&&enemigoDosF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoDosF.set_activo(true);

                                }
                                 if(enemigoTresF.get_muertoFott()==true&&enemigoTresF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoTresF.set_activo(true);

                                }
                                 if(enemigoCuatroF.get_muertoFott()==true&&enemigoCuatroF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoCuatroF.set_activo(true);

                                }
                                 if(enemigoCincoF.get_muertoFott()==true&&enemigoCincoF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoCincoF.set_activo(true);

                                }
                                 if(enemigoSeisF.get_muertoFott()==true&&enemigoSeisF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoSeisF.set_activo(true);

                                }
                                 if(enemigoSieteF.get_muertoFott()==true&&enemigoSieteF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoSieteF.set_activo(true);

                                }
                                 if(enemigoOchoF.get_muertoFott()==true&&enemigoOchoF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoOchoF.set_activo(true);

                                }
                                 if(enemigoNueveF.get_muertoFott()==true&&enemigoNueveF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoNueveF.set_activo(true);

                                }
                                 if(enemigoDiezF.get_muertoFott()==true&&enemigoDiezF.get_activo()==false){

                                    contPuntosJuego+=20;

                                    enemigoDiezF.set_activo(true);

                                }


                            ///******************************************************
                            if(EvilJason.get_muertoJasonFin()==true){

                                contPuntosJuego+=2000;

                                play_sample(victory,200,150,1000,0);


                                ReinicioNivel3=true;

                                  while(ReinicioNivel3==true){

                                    blit(VictoriaFinJuego,bufferMenu6,0,0,0,0,1100,618);
                                    blit(bufferMenu6,screen,0,0,0,0,1100,618);

                                    if(key[KEY_ENTER]){

                                       exit(1);


                                    }

                                }




                            }









                            juga.limitePlayer();
                            enemigo.limite();
                            enemigoTres.limite();
                            enemigoCuatro.limite();
                            enemigoCinco.limite();
                            enemigoSeis.limite();
                            enemigoSiete.limite();
                            enemigoOcho.limite();
                            enemigoNueve.limite();
                            enemigoDiez.limite();
                            SuperSpider.limiteSpider();
                            enemigoNueveF.limite();
                            enemigoDiezF.limite();
                            enemigoOchoF.limite();
                            enemigoSieteF.limite();
                            enemigoSeisF.limite();



                            rest(1000/FRAME_RATE);

                                }


                            }

                        }

                    }



                            juga.limitePlayer();
                            enemigo.limite();
                            enemigoTres.limite();
                            enemigoCuatro.limite();
                            enemigoCinco.limite();
                            enemigoSeis.limite();
                            enemigoSiete.limite();
                            enemigoOcho.limite();
                            enemigoNueve.limite();
                            enemigoDiez.limite();
                            SuperSpider.limiteSpider();
                            enemigoNueveF.limite();
                            enemigoDiezF.limite();
                            enemigoOchoF.limite();
                            enemigoSieteF.limite();
                            enemigoSeisF.limite();



                            rest(1000/FRAME_RATE);

                            }

                        }

                }







        while(reinicio==true){

        bool salir=false; ///controla hasta cuando se ejecuta rutina del menu

        while(!salir){

            if(mouse_x > 420 && mouse_x < 657 && mouse_y > 302 && mouse_y < 331 ){

                   blit(fin2,bufferMenu2,0,0,0,0,1100,618);

                if(mouse_b & 1){

                    reinicio=false;

                    salir=true;


                    salida=false;

                    apagado=false;




                }


            }
            else if(mouse_x >480 && mouse_x <600 && mouse_y >372 && mouse_y <395){

                blit(fin3,bufferMenu2,0,0,0,0,1100,618);

                    if(mouse_b & 1){

                    exit(1);

                    }

                  } else blit(fin1,bufferMenu2,0,0,0,0,1100,618);

                  masked_blit(cursorFin,bufferMenu2,0,0,mouse_x,mouse_y,13,22);///transparecia violeta

                  blit(bufferMenu2,screen,0,0,0,0,1100,618);

                }

    }



}
    readkey();

    destroy_bitmap(cursorFin);

    destroy_bitmap(fin1);
    destroy_bitmap(fin2);
    destroy_bitmap(fin3);

    destroy_bitmap(fondo1Orig);
    destroy_bitmap(fondo2Start);
    destroy_bitmap(fondo3Load);
    destroy_bitmap(fondo4Exit);

    destroy_bitmap(cursor);

    destroy_bitmap(Victoria);

    destroy_bitmap(VictoriaFinJuego);

     destroy_bitmap(juga.buffer);
     destroy_bitmap(bufferNivel2);
     destroy_bitmap(bufferMenu);
     destroy_bitmap(bufferMenu2);
     destroy_bitmap(bufferMenu3);
     destroy_bitmap(bufferMenu4);

     destroy_bitmap(juga.muertecomiezo);
     destroy_bitmap(juga.muertefinal);

     destroy_bitmap(cursorFin);

     destroy_bitmap(fin1);
     destroy_bitmap(fin2);
     destroy_bitmap(fin3);

     destroy_bitmap(juga.buffer);
     destroy_bitmap(fondoJardin);
     destroy_bitmap(fondoDesierto);
     destroy_bitmap(nivel3);

     destroy_bitmap(juga.disparoDer);
     destroy_bitmap(juga.balaDer);

     destroy_bitmap(juga.disparoIzq);
     destroy_bitmap(juga.balaIzq);

     destroy_bitmap(juga.disparoArriba);
     destroy_bitmap(juga.balaArrib);

     destroy_bitmap(juga.disparoAbajo);
     destroy_bitmap(juga.balaAbaj);

     destroy_bitmap(juga.up1);
     destroy_bitmap(juga.up2);
     destroy_bitmap(juga.up3);
     destroy_bitmap(juga.up4);
     destroy_bitmap(juga.up4);
     destroy_bitmap(juga.up5);

     destroy_bitmap(juga.down1);
     destroy_bitmap(juga.down2);
     destroy_bitmap(juga.down3);
     destroy_bitmap(juga.down4);
     destroy_bitmap(juga.down5);
     enemigo.LiberarBITMAPS();
     /*
     destroy_bitmap(enemigo.npcEnemiS1);
     destroy_bitmap(enemigo.npcEnemiS2);
     destroy_bitmap(enemigo.npcEnemiS3);
     destroy_bitmap(enemigo.npcEnemiS4);
     destroy_bitmap(enemigo.npcEnemiS5);

     destroy_bitmap(enemigo.npcMovi1);
     destroy_bitmap(enemigo.npcMovi2);
     destroy_bitmap(enemigo.npcMovi3);
     destroy_bitmap(enemigo.npcMovi4);
     destroy_bitmap(enemigo.npcMovi5);
     destroy_bitmap(enemigo.npcMovi6);
*/
     destroy_bitmap(enemigoUnoF.npcMover1);
     destroy_bitmap(enemigoUnoF.npcMover2);
     destroy_bitmap(enemigoUnoF.npcMover3);
     destroy_bitmap(enemigoUnoF.npcMover4);
     destroy_bitmap(enemigoUnoF.npcMover5);
/*
     destroy_bitmap(enemigo.explosion1);
     destroy_bitmap(enemigo.explosion2);
     destroy_bitmap(enemigo.explosion3);
     destroy_bitmap(enemigo.explosion4);
     destroy_bitmap(enemigo.explosion5);
     destroy_bitmap(enemigo.explosion6);
     destroy_bitmap(enemigo.explosion7);
     destroy_bitmap(enemigo.explosion8);
*/
     destroy_bitmap(juga.PrincipalIZq);
     destroy_bitmap(juga.PrincipalDer);
     destroy_bitmap(juga.megamanjump);

     destroy_bitmap(juga.megamancorr1);
     destroy_bitmap(juga.megamancorr2);
     destroy_bitmap(juga.megamancorr5);
     destroy_bitmap(juga.megamancorr6);
     destroy_bitmap(juga.megamancorrk);
     destroy_bitmap(juga.megamancorrp);

     destroy_sample(hito);
     destroy_sample(gritoBebe);
     destroy_sample(victory);
     destroy_sample(sonidoDead);

     destroy_bitmap(RecCora.CoraCura1);
     destroy_bitmap(RecCora.CoraCura2);
     destroy_bitmap(RecCora.CoraCura3);
     destroy_bitmap(RecCora.CoraCura4);
     destroy_bitmap(RecCora.CoraCura5);


     return 0;
    }
END_OF_MAIN();
