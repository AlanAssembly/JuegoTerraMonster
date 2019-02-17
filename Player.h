#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED


class Jugador{


        private:

            int vida;
            int y;
            int x;

            int disparoX;
            int disparoY;

            bool cora1;
            bool cora2;
            bool cora3;
            bool cora4;

            int contArr;
            int contBaj;
            int contIzq;
            int contDer;
            ///Contador de colision
            int contSinGolpe;
            ///golpe derecha
            int golpDer;
            bool bandDer;
            int Der;
            ///golpe izquierda
            int golpIzq;
            bool bandIzq;
            int Izq;
            ///golpe arriba
            int golpArriba;
            bool bandArriba;
            int arri;
            ///golpe abajo
            int golpAbajo;
            bool bandAbajo;
            int abaj;
            ///
            int contDispA;
            int contBalaDer;
            ///
            int contDispS;
            int contBalaIZq;
            ///
            int contArrDisp;
            int contBalaArriba;
            ///
            int contAbajDisp;
            int contBalaAbajo;
            ///
            int contgolpePl;

            int tiempoDeGolpe;

            int score;


            int mayor1 = 0;
            int mayor2 = 0;
            int mayor3 = 0;

        public:



            BITMAP *buffer;
            BITMAP *fondo1;

            BITMAP *Vida1;
            BITMAP *Vida2;
            BITMAP *Vida3;
            BITMAP *Vida4;

            BITMAP *PrincipalIZq;
            BITMAP *PrincipalDer;
            SAMPLE *DisparoPunch=load_wav("disp1.wav");


            ///BITMAPS DE BALAS

            BITMAP *disparoDer;
            BITMAP *balaDer;

            BITMAP *disparoIzq;
            BITMAP *balaIzq;

            BITMAP *disparoArriba;
            BITMAP *balaArrib;

            BITMAP *disparoAbajo;
            BITMAP *balaAbaj;

            BITMAP *up1;
            BITMAP *up2;
            BITMAP *up3;
            BITMAP *up4;
            BITMAP *up5;

            BITMAP *down1;
            BITMAP *down2;
            BITMAP *down3;
            BITMAP *down4;
            BITMAP *down5;

            BITMAP *megamanjump;
            BITMAP *megamancorr1;
            BITMAP *megamancorr2;
            BITMAP *megamancorrp;
            BITMAP *megamancorrk;
            BITMAP *megamancorr5;
            BITMAP *megamancorr6;

            BITMAP *muertecomiezo;
            BITMAP *muertefinal;

            ///*********************************///
            int GetScore (){return score;}
            void set_Score(int _score){score=_score;}

            int get_y(){return y;}
            void set_Y(int _y){y =_y;}

            int get_x(){return x;}
            void set_X(int _x){x=_x;}

            int ggety(){return y;}

            int get_disparoX(){return disparoX;}
            void set_disparoX(int _disparoX){disparoX=_disparoX;}

            int get_disparoY(){return disparoY;}
            void set_disparoY(int _disparoY){disparoY=_disparoY;}

            bool get_cora1(){return cora1;}
            void set_cora1(bool _cora1){cora1=_cora1;}

            bool get_cora2(){return cora2;}
            void set_cora2(int _cora2){cora2=_cora2;}

            bool get_cora3(){return cora3;}
            void set_cora3(int _cora3){cora3=_cora3;}

            bool get_cora4(){return cora4;}
            void set_cora4(int _cora4){cora4=_cora4;}


            int get_contArr(){return contArr;}
            void set_contArr(int _contArr){contArr=_contArr;}

            int get_contBaj(){return contBaj;}
            void set_contBaj(int _contBaj){contBaj=_contBaj;}

            int get_contIzq(){return contIzq;}
            void set_contIzq(int _contIzq){contIzq=_contIzq;}

            int get_contDer(){return contDer;}
            void set_contDer(int _contDer){contDer=_contDer;}



            ///CONTADOR COLISION
            void set_contSinGolpe(int _contSinGolpe){contSinGolpe=_contSinGolpe;}
            int get_contSinGolpe(){return contSinGolpe;}

            ///DISPAROS
            ///DERECHA
            int get_golpDer(){return golpDer;}
            void set_golpDer(int _golpDer){golpDer=_golpDer;}

            bool get_bandDer(){return bandDer;}
            void set_bandDer(bool _bandDer){bandDer=_bandDer;}

            int get_Der(){return Der;}
            void set_Der(int _contDer){Der=_contDer;}

            ///IZQUIERDA

            int get_golpIzq(){return golpIzq;}
            void set_golpIzq(int _golpIzq){golpIzq=_golpIzq;}

            bool get_bandIzq(){return bandIzq;}
            void set_bandIzq(bool _bandIzq){bandIzq=_bandIzq;}

            int get_Izq(){return Izq;}
            void set_Izq(int _Izq){Izq=_Izq;}


            ///ARRIBA

            int get_golpArriba(){return golpArriba;}
            void set_golpArriba(int _golpArriba){golpArriba=_golpArriba;}

            bool get_bandArriba(){return bandArriba;}
            void set_bandArriba(bool _bandArriba){bandArriba=_bandArriba;}

            int get_arri(){return arri;}
            void set_arri(int _arri){arri=_arri;}



            ///ABAJO

            int get_golpAbajo(){return golpAbajo;}
            void set_golpAbajo(int _golpAbajo){golpAbajo=_golpAbajo;}

            bool get_bandAbajo(){return bandAbajo;}
            void set_bandAbajo(bool _bandAbajo){bandAbajo=_bandAbajo;}

            int get_abaj(){return abaj;}
            void set_abaj(int _abaj){abaj=_abaj;}



            ///CONTADOR DE DISPAROS
            ///DER
            int get_contDispA(){return contDispA;}
            void set_contDispA(int _contDispA){contDispA=_contDispA;}

            int get_contBalaDer(){return contBalaDer;}
            void set_contBalaDer(int _contBalaDer){contBalaDer=_contBalaDer;}

            ///
            ///IZQ

            int get_contDispS(){return contDispS;}
            void set_contDispS(int _contDispS){contDispS=_contDispS;}

            int get_contBalaIZq(){return contBalaIZq;}
            void set_contBalaIZq(int _contBalaIZq){contBalaIZq=_contBalaIZq;}

            ///
            ///ARRIBA

            int get_contArrDisp(){return contArrDisp;}
            void set_contArrDisp(int _contArrDisp){contArrDisp=_contArrDisp;}

            int get_contBalaArriba(){return contBalaArriba;}
            void set_contBalaArriba(int _contBalaArriba){contBalaArriba=_contBalaArriba;}



            ///ABAJO
            int get_contAbajDisp(){return contAbajDisp;}
            int get_contBalaAbajo(){return contBalaAbajo;}
            void set_contBalaAbajo(int _contBalaAbajo){contBalaAbajo=_contBalaAbajo;}


            int get_contgolpePl(){return contgolpePl;}
            void set_contgolpePl(int _contgolpePl){contgolpePl=_contgolpePl;}


            int gettiempoDeGolpe(){return tiempoDeGolpe;}
            void settiempoDeGolpe(int _tiempoDeGolpe){tiempoDeGolpe=_tiempoDeGolpe;}


            void Iniciar();
            void Movimiento();
            bool choquebitmaps();
            void limitePlayer();
            bool playerMorir();
            void sumarContadores(const char* nombre,int valor);
            void IniciarNivel2();
            void AddPoint();

        };

            void Jugador::sumarContadores(const char* nombre,int valor){

                    if(strcmp(nombre,"contgolpePl")==0){


                        contgolpePl+=valor;


                    }


            };


            void Jugador::AddPoint(){

            score+=10;


            }


            void Jugador::Iniciar(){


            buffer=create_bitmap(1100,618);

            ///

            score=0;

            set_Y(350);
            set_X(400);

            set_contArr(0);
            set_contBaj(0);
            set_contIzq(0);
            set_contDer(0);

            ///DISPAROS

            set_bandDer(false);

            set_bandIzq(false);

            set_bandAbajo(false);

            set_bandArriba(false);

            ///CONTADOR DE DISPAROS

            set_contDispA(0);
            set_contBalaDer(0);
            ///
            set_contDispS(0);
            set_contBalaIZq(0);
            ///

            set_contSinGolpe(0);
            ///int tiempoDeGolpe=0;

            ///
            set_cora1(true);
            set_cora2(true);
            set_cora3(true);
            set_cora4(true);

            set_contgolpePl(0);


            Vida1 = load_bitmap("Life.bmp",NULL);


            Vida2 = load_bitmap("Life.bmp",NULL);


            Vida3 = load_bitmap("Life.bmp",NULL);


            Vida4 = load_bitmap("Life.bmp",NULL);




            ///PERSONAJE PRINCIPAL
            ///*****************************************

            PrincipalDer=load_bitmap("PrincipalDer.bmp",NULL);
            PrincipalIZq=load_bitmap("PrincipalIzq.bmp",NULL);

            up1 = load_bitmap("CorreAriib1.bmp",NULL);
            up2 = load_bitmap("CorreAriib2.bmp",NULL);
            up3 = load_bitmap("CorreAriib3.bmp",NULL);
            up4 = load_bitmap("CorreAriib4.bmp",NULL);
            up5 = load_bitmap("CorreAriib5.bmp",NULL);

            down1 = load_bitmap("CorreAbaj1.bmp",NULL);
            down2 = load_bitmap("CorreAbaj2.bmp",NULL);
            down3 = load_bitmap("CorreAbaj3.bmp",NULL);
            down4 = load_bitmap("CorreAbaj4.bmp",NULL);
            down5 = load_bitmap("CorreAbaj5.bmp",NULL);

            megamanjump = load_bitmap("megamanjump.bmp",NULL);
            megamancorr1 = load_bitmap("megcorr1.bmp",NULL);
            megamancorr2 = load_bitmap("megcorr2.bmp",NULL);
            megamancorrp = load_bitmap("megcorr3.bmp",NULL);
            megamancorrk = load_bitmap("megcorr4.bmp",NULL);
            megamancorr5 = load_bitmap("megcorr5.bmp",NULL);
            megamancorr6 = load_bitmap("megcorr6.bmp",NULL);

            ///

            muertecomiezo=load_bitmap("muerte1.bmp",NULL);
            muertefinal=load_bitmap("muerte2.bmp",NULL);

            disparoDer = load_bitmap("DispDer.bmp",NULL);
            balaDer = load_bitmap("bala.bmp",NULL);

            disparoIzq = load_bitmap("DispIzq.bmp",NULL);
            balaIzq =load_bitmap("bala.bmp",NULL);

            disparoArriba = load_bitmap("disparoUp.bmp",NULL);
            balaArrib = load_bitmap("bala.bmp",NULL);

            disparoAbajo = load_bitmap("DisparoDown.bmp",NULL);
            balaAbaj = load_bitmap("bala.bmp",NULL);

            }


        void Jugador::Movimiento(){

            estructura Musica;


            if(key[KEY_S]){

                   play_sample(DisparoPunch,200,150,1000,0);

                   set_contBalaAbajo(0);

                   masked_blit(disparoAbajo,screen,0,0,get_x(),get_y(),76,78);

                    set_bandAbajo(true);

                    set_abaj(get_y()+40);


            }else if(get_bandAbajo()==true){

               //contBalaAbajo=0;

                    if(get_contBalaAbajo()>=0 && get_contBalaAbajo() <4){
                        masked_blit(balaAbaj,screen,0,0,get_x()+30,get_abaj()+18,76,78);
                        masked_blit(disparoAbajo,screen,0,0,get_x(),get_y(),76,78);
                    }

                    set_abaj(get_abaj()+40);

                    set_disparoX(get_x()+30);
                    set_disparoY(get_abaj()+18);

                    set_contBalaAbajo(get_contBalaAbajo()+1);

                    if(get_contBalaAbajo()>=4) set_contBalaAbajo(0);


                    if(get_abaj()>700){
                        set_bandAbajo(false);
                    }



            }else if(key[KEY_W]){

                    play_sample(DisparoPunch,200,150,1000,0);

                    set_contArrDisp(0);

                    masked_blit(disparoArriba,screen,0,0,get_x(),get_y(),76,78);

                    set_bandArriba(true);

                    set_arri(get_y()-64);


            }else if(get_bandArriba()==true){


                    if(get_contBalaArriba()>=0 && get_contBalaArriba() <4){
                        masked_blit(balaArrib,screen,0,0,get_x()+30,get_arri()+18,76,78);
                        masked_blit(disparoArriba,screen,0,0,get_x(),get_y(),76,78);
                    }
                    set_arri(get_arri()-40);

                    set_disparoX(get_x()+30);
                    set_disparoY(get_arri()+18);

                    set_contBalaArriba(get_contBalaArriba()+1);



                    if(get_contBalaArriba()>=4) set_contBalaArriba(0);

                    if(get_arri()<-700){
                        set_bandArriba(false);
                    }


            }else if(key[KEY_A]){


                    play_sample(DisparoPunch,200,150,1000,0);

                    set_contDispS(0);

                    masked_blit(disparoIzq,screen,0,0,get_x(),get_y(),76,78);

                    set_bandIzq(true);

                    set_Izq(get_x()-64);


            }else if(get_bandIzq()){


                    if(get_contBalaIZq()>=0 && get_contBalaIZq() <4){
                        masked_blit(balaIzq,screen,0,0,get_Izq()-9,get_y()+30,76,78);
                        masked_blit(disparoIzq,screen,0,0,get_x(),get_y(),76,78);
                    }
                    set_Izq(get_Izq()-40);

                    set_disparoX(get_Izq()-9);
                    set_disparoY(get_y()+30);

                    set_contBalaIZq(get_contBalaIZq()+1);

                    if(get_contBalaIZq()>=4) set_contBalaIZq(0);

                    if(get_Izq()<-1100){
                        set_bandIzq(false);
                    }


            }else if(key[KEY_D]){


                    play_sample(DisparoPunch,200,150,1000,0);

                    set_contDispA(0);

                    masked_blit(disparoDer,screen,0,0,get_x(),get_y(),76,78);

                    set_bandDer(true);

                    set_Der(get_x()+64);


           }else if(get_bandDer()==true){


                    if(get_contBalaDer()>=0 && get_contBalaDer() <4){
                        masked_blit(balaDer,screen,0,0,get_Der()-9,get_y()+30,76,78);
                        masked_blit(disparoDer,screen,0,0,get_x(),get_y(),76,78);
                    }
                    set_Der(get_Der()+40);

                    set_disparoX(get_Der()-9);
                    set_disparoY(get_y()+30);

                    set_contBalaDer(get_contBalaDer()+1);



                    if(get_contBalaDer()>=4) set_contBalaDer(0);

                    if(get_Der()>1100){
                        set_bandDer(false);
                    }

           }else if(key[KEY_UP]){

                set_contBaj(0);
                set_Y(get_y()-20);

                if(get_contArr()>=0 && get_contArr() <3){
                    masked_blit(up1,screen,0,0,get_x(),get_y(),76,78);
                }else if(get_contArr()>=3 && get_contArr() <6){
                    masked_blit(up2,screen,0,0,get_x(),get_y(),76,78);
                }else if(get_contArr()>=6 && get_contArr()<9){
                    masked_blit(up3,screen,0,0,get_x(),get_y(),76,78);
                }else if(get_contArr()>=9 && get_contArr()<12){
                    masked_blit(up4,screen,0,0,get_x(),get_y(),76,78);
                }else if(get_contArr()>=12 && get_contArr()<15){
                    masked_blit(up5,screen,0,0,get_x(),get_y(),76,78);
                }

                set_contArr(get_contArr()+1);

                if(get_contArr()>=15) set_contArr(0);


            }else if(key[KEY_DOWN]){

                set_contArr(0);
                set_Y(get_y()+20);

                if(get_contBaj()>=0 && get_contBaj() <3){
                    masked_blit(down1,screen,0,0,get_x(),get_y(),76,78);
                }else if(get_contBaj()>=3 && get_contBaj() <6){
                    masked_blit(down2,screen,0,0,get_x(),get_y(),76,78);
                }else if(get_contBaj()>=6 && get_contBaj() <9){
                    masked_blit(down3,screen,0,0,get_x(),get_y(),76,78);
                }else if(get_contBaj()>=9 && get_contBaj() <12){
                    masked_blit(down4,screen,0,0,get_x(),get_y(),76,78);
                }else if(get_contBaj() >=12 && get_contBaj() <15){
                    masked_blit(down5,screen,0,0,get_x(),get_y(),76,78);
                }

                set_contBaj(get_contBaj()+1);

                if(get_contBaj()>=15) set_contBaj(0);




            }else if(key[KEY_LEFT]){
                set_contDer(0);
                set_X(get_x()-20);

                if (get_contIzq()>=0 && get_contIzq() < 3) {
                    masked_blit(megamancorr6 ,screen,0,0,get_x(),get_y(),81,78);
                } else if (get_contIzq()>=3 && get_contIzq() < 6) {
                    masked_blit(megamancorrp ,screen,0,0,get_x(),get_y(),81,78);
                } else if (get_contIzq()>=6 && get_contIzq() < 9) {
                    masked_blit(megamancorrk ,screen,0,0,get_x(),get_y(),81,78);
                }

                set_contIzq(get_contIzq()+1);

                if (get_contIzq()>=9)  set_contIzq(0); ///9 es porque son las vueltas por sprite son 3 vueltas si tuviera un 4 sprite seria 12 con 100 de delay

            } else if(key[KEY_RIGHT])
                {
                set_contIzq(0);
                set_X(get_x()+20);

                if (get_contDer()>=0 && get_contDer() < 3) {
                    masked_blit(megamancorr5 ,screen,0,0,get_x(),get_y(),81,78);
                } else if (get_contDer()>=3 && get_contDer() < 6) {
                    masked_blit(megamancorr2 ,screen,0,0,get_x(),get_y(),81,78);
                } else if (get_contDer()>=6 && get_contDer() < 9) {
                    masked_blit(megamancorr1 ,screen,0,0,get_x(),get_y(),81,78);
                }

                set_contDer(get_contDer()+1);

                if (get_contDer()>=9) set_contDer(0);

                } else {
                    masked_blit(PrincipalDer,screen,0,0,get_x(),get_y(),76,78);

                }

            }

            bool Jugador::playerMorir(){


               if(get_contgolpePl()>=0&&get_contgolpePl()<5){

                    masked_blit(muertecomiezo,screen,0,0,get_x(),get_y(),76,78);

               }else if(get_contgolpePl()>=5&&get_contgolpePl()<10){

                   masked_blit(muertefinal,screen,0,0,get_x(),get_y(),76,78);
               }

              /// set_contgolpePl(get_contgolpePl()+1);

                sumarContadores("contgolpePl",1);

               if(get_contgolpePl()>=10){set_contgolpePl(0); return false;}

                return true;

            }



            void Jugador::limitePlayer(){

                if(get_x()<0)set_X(0);
                if(get_x()>1000)set_X(1000);
                if(get_y()<0)set_Y(0);
                if(get_y()>580)set_Y(580);

            }


#endif // PLAYER_H_INCLUDED
