#ifndef NPC_H_INCLUDED
#define NPC_H_INCLUDED


class NPCbase{

    protected:


        bool activoAnima;
        int x_Inicial;
        int y_Inicial;
        int distanciaMovimiento;
        int distanciaBala;
        int distancia;
        int vida;
        int v_actual;
        bool muerto;
        int golpeado;
        bool activo;
        int contMov;
        int contSal;
        int contMuerte;
        int contBala;
        int contPuntosZ;
        int x_ene;
        int y_ene;
        bool aparicion;


        ///VIDA
        bool vidaNPC1;

      BITMAP *npcEnemiS1;
      BITMAP *npcEnemiS2;
      BITMAP *npcEnemiS3;
      BITMAP *npcEnemiS4;
      BITMAP *npcEnemiS5;

      ///
      ///MOVIMIENTO NPC

      BITMAP *npcMovi1;
      BITMAP *npcMovi2;
      BITMAP *npcMovi3;
      BITMAP *npcMovi4;
      BITMAP *npcMovi5;
      BITMAP *npcMovi6;

      BITMAP *Colision1;
      BITMAP *Colision2;

      BITMAP *explosion1;
      BITMAP *explosion2;
      BITMAP *explosion3;
      BITMAP *explosion4;
      BITMAP *explosion5;
      BITMAP *explosion6;
      BITMAP *explosion7;
      BITMAP *explosion8;

    public:


        NPCbase(){

               x_Inicial=0;
               y_Inicial=0;
               x_ene=0;
               y_ene=0;
               distanciaMovimiento=0;

        }

        ~NPCbase(){
            LiberarBITMAPS();
        }

        ///SALIDA



        int get_contBala(){return contBala;}
        void set_contBala(int _contBala){contBala =_contBala;}
        void set_distancia_movimiento(int _distancia){distanciaMovimiento=_distancia;}
        int get_distancia_movimiento(){return distanciaMovimiento;}
        void set_x_inicial(int _xInicial){x_Inicial=_xInicial;}
        int get_x_inicial(){return x_Inicial;}
        void set_y_inicial(int _yInicial){y_Inicial=_yInicial;}
        int get_x_ene(){return x_ene;}
        void set_x_ene(int _x_ene){x_ene =_x_ene;}
        int get_y_ene(){return y_ene;}
        void set_y_ene(int _y_ene){y_ene =_y_ene;}
        bool get_aparicion(){return aparicion;}
        void set_aparicion(bool _aparicion){aparicion =_aparicion;}
        bool get_vidaNPC1(){return vidaNPC1;}
        void set_vidaNPC1(bool _vidaNPC1){vidaNPC1 =_vidaNPC1;}
        int get_distancia(){return distancia;}
        int set_distancia(int _distancia){ distancia=_distancia;}
        bool chocaNpc();
        int get_vida(){return vida;}
        void set_vida(int _vida){vida =_vida;}
        int get_v_actual(){return v_actual;}
        void set_v_actual(int _v_actual){v_actual =_v_actual;}
        bool get_muerto(){return muerto;}
        void set_muerto(bool _muerto){muerto =_muerto;}
        int get_golpeado(){return golpeado;}
        void set_golpeado(int _golpeado){golpeado =_golpeado;}
        bool get_activo(){return activo;}
        void set_activo(bool _activo){activo =_activo;}
        int get_contMov(){return contMov;}
        void set_contMov(int _contMov){contMov =_contMov;}
        int get_contSal(){return contSal;}
        void set_contSal(int _contSal){contSal =_contSal;}
        void limite();

        void LiberarBITMAPS(){
             destroy_bitmap(npcEnemiS1);
             destroy_bitmap(npcEnemiS2);
             destroy_bitmap(npcEnemiS3);
             destroy_bitmap(npcEnemiS4);
             destroy_bitmap(npcEnemiS5);
             destroy_bitmap(npcMovi1);
             destroy_bitmap(npcMovi2);
             destroy_bitmap(npcMovi3);
             destroy_bitmap(npcMovi4);
             destroy_bitmap(npcMovi5);
             destroy_bitmap(npcMovi6);
             destroy_bitmap(explosion1);
             destroy_bitmap(explosion2);
             destroy_bitmap(explosion3);
             destroy_bitmap(explosion4);
             destroy_bitmap(explosion5);
             destroy_bitmap(explosion6);
             destroy_bitmap(explosion7);
             destroy_bitmap(explosion8);
        }

};

class RecuperarVida{

private:

        bool activoAnimaCoraRe;
        int x_Inicial_Cora;
        int y_Inicial_Cora;

        int distanciaCora;
        int vidaCora;

        bool Corazon;
        bool muertoCora;
        int golpeadoCora;
        bool activoCora;
        int contMovCora;
        int contSalCora;
        int contMuerteCora;


        int x_ene_Cora;
        int y_ene_Cora;
        bool aparicionCora;

public:


        void set_x_inicial_Cora(int _xInicial_Cora){x_Inicial_Cora=_xInicial_Cora;}
        int get_x_inicial_Cora(){return x_Inicial_Cora;}
        void set_y_inicial_Cora(int _yInicial_Cora){y_Inicial_Cora=_yInicial_Cora;}
        int get_x_ene_Cora(){return x_ene_Cora;}
        void set_x_ene_Cora(int _x_ene_Cora){x_ene_Cora =_x_ene_Cora;}
        int get_y_ene_Cora(){return y_ene_Cora;}
        void set_y_ene_Cora(int _y_ene_Cora){y_ene_Cora =_y_ene_Cora;}



        bool get_aparicion_Cora(){return aparicionCora;}
        void set_aparicion_Cora(bool _aparicion_Cora){aparicionCora =_aparicion_Cora;}

        int get_distancia_Cora(){return distanciaCora;}
        int set_distancia_Cora(int _distanciaCora){ distanciaCora=_distanciaCora;}
        bool chocaNpcConCora();
        int get_vidaCora(){return vidaCora;}
        void set_vidaCora(int _vidaCora){vidaCora =_vidaCora;}

        bool get_muertoCora(){return muertoCora;}
        void set_muertoCora(bool _muertoCora){muertoCora =_muertoCora;}

        int get_golpeadoCora(){return golpeadoCora;}
        void set_golpeadoCora(int _golpeadoCora){golpeadoCora =_golpeadoCora;}
        bool get_activoCora(){return activoCora;}
        void set_activoCora(bool _activoCora){activoCora =_activoCora;}
        int get_contMovCora(){return contMovCora;}
        void set_contMovCora(int _contMovCora){contMovCora =_contMovCora;}
        int get_contSalCora(){return contSalCora;}
        void set_contSalCora(int _contSalCora){contSalCora =_contSalCora;}

        void iniciarCora(int X,int Y);
        void movimientoCora(int x,int y,int distancia);
        bool naceCora();

        BITMAP *CoraCura1;
        BITMAP *CoraCura2;
        BITMAP *CoraCura3;
        BITMAP *CoraCura4;
        BITMAP *CoraCura5;

};



class zombie:public NPCbase {

private:

    bool muertoZombie;

public:

    zombie(int x, int y, int distancia){

        asignarValoresZombie(x,y,distancia);

    }

    void asignarValoresZombie(int x, int y, int distancia){
        set_x_inicial(x);
        set_y_inicial(y);
        set_x_ene(x);
        set_y_ene(y);
        set_distancia_movimiento(distancia);
        muertoZombie=false;

    }
      bool get_muertoZombie(){return muertoZombie;}
      void set_muertoZombie(bool _muertoZombie){muertoZombie =_muertoZombie;}
      int get_contMuerte(){return contMuerte;}
      void set_contMuerte(int _contMuerte){contMuerte =_contMuerte;}
      int get_contPuntosZ(){return contPuntosZ;}
      void set_contPuntosZ(int _contPuntosZ){contPuntosZ =_contPuntosZ;}
      void iniciarZ();
      void movimientoZ(int x,int y,int distanciaBala);
      bool naceZ();
      bool heridaZ();
      void muerteZ();

};



class npcEsqueleto:public NPCbase{

protected:

    int x_Inicial;
    int y_Inicial;
    int distancia;
    int distanciaBala;


    BITMAP *EsqueletoCamina1;
    BITMAP *EsqueletoCamina2;
    BITMAP *EsqueletoCamina3;
    BITMAP *EsqueletoCamina4;
    BITMAP *EsqueletoCamina5;
    BITMAP *EsqueletoCamina6;

    BITMAP *EsqueletoMuerte1;
    BITMAP *EsqueletoMuerte2;

public:



    int contBalaEsqueleto;
    int contEsqueleto;
    int difX;
    int difY;

    int contMuerteEsqueleto;

    bool vidaEsqueleto;
    bool MuerteEsqueletoAlerta;
    bool alertaEsqueleto;

    int x_eneEsqueleto;
    int y_eneEsqueleto;


    void iniciarEsqueleto(int X,int Y,int Xbala,int Ybala,int distancia);
    void movimientoEsqueleto(int X,int Y,int Xbala,int Ybala,int distanciaBala);
    void MuerteEsqueleto();
    void limiteEsqueleto();


};




class npcNivel3Violator{

protected:

    int x_Inicial;
    int y_Inicial;
    int distancia;
    int distanciaBala;
    int contBalaViolator;
    int contViolator;
    int difX;
    int difY;

    int contMuerteViolator;

    bool vidaViolator;
    bool MuerteViolatorAlerta;
    bool alertaViolator;

    int x_eneViolator;
    int y_eneViolator;


public:


    BITMAP *ViolatorCamina1;
    BITMAP *ViolatorCamina2;
    BITMAP *ViolatorCamina3;
    BITMAP *ViolatorCamina4;

    BITMAP *ViolatorMuerte1;
    BITMAP *ViolatorMuerte2;

    BITMAP *Colision1Violator;
    BITMAP *Colision2Violator;

    BITMAP *AtaqueViolator1;
    BITMAP *AtaqueViolator2;
    BITMAP *AtaqueViolator3;
    BITMAP *AtaqueViolator4;

    void iniciarViolator(int X,int Y,int Xbala,int Ybala,int distancia);
    void movimientoViolator(int X,int Y,int Xbala,int Ybala,int distanciaBala);
    void MuerteViolator();
    void limiteViolator();

};

void RecuperarVida::iniciarCora(int X,int Y){


        contMovCora=0;
        contSalCora=0;
        contMuerteCora=0;

        x_Inicial_Cora=X;
        y_Inicial_Cora=Y;

        x_ene_Cora=X;
        y_ene_Cora=Y;

        vidaCora=true;
        activoAnimaCoraRe=true;
        Corazon=true;


        int vidaCora;


        bool muertoCora=true;

        bool activoCora=true;

        bool aparicionCora=true;

       CoraCura1 = load_bitmap("CoraCura1.bmp",NULL);
       CoraCura2 = load_bitmap("CoraCura2.bmp",NULL);
       CoraCura3 = load_bitmap("CoraCura3.bmp",NULL);
       CoraCura4 = load_bitmap("CoraCura4.bmp",NULL);
       CoraCura5 = load_bitmap("CoraCura5.bmp",NULL);


}

void RecuperarVida::movimientoCora(int X,int Y,int distancia){



    if(contMovCora>=0&&contMovCora<6){

    masked_blit(CoraCura1,screen,0,0,x_ene_Cora,y_ene_Cora,35,35);

    }else if(contMovCora>=6&&contMovCora<12){

    masked_blit(CoraCura2,screen,0,0,x_ene_Cora,y_ene_Cora,35,35);

    }else if(contMovCora>=12&&contMovCora<18){

    masked_blit(CoraCura3,screen,0,0,x_ene_Cora,y_ene_Cora,35,35);

    }else if(contMovCora>=18&&contMovCora<24){

    masked_blit(CoraCura4,screen,0,0,x_ene_Cora,y_ene_Cora,35,35);

    }else if(contMovCora>=24&&contMovCora<30){

    masked_blit(CoraCura5,screen,0,0,x_ene_Cora,y_ene_Cora,35,35);

    }

  contMovCora++;

  if(contMovCora>=24) contMovCora=0;


}
void npcNivel3Violator::iniciarViolator(int X,int Y,int Xbala,int Ybala,int distancia){

contViolator=0;
contMuerteViolator=0;
contBalaViolator=0;

x_Inicial=X;
y_Inicial=Y;

x_eneViolator=X;
y_eneViolator=Y;


x_Inicial=Xbala;
y_Inicial=Ybala;

x_eneViolator=Xbala;
y_eneViolator=Ybala;

alertaViolator=false;
vidaViolator=true;
MuerteViolatorAlerta=false;

ViolatorCamina1=load_bitmap("CaminaViolator1.bmp",NULL);
ViolatorCamina2=load_bitmap("CaminaViolator2.bmp",NULL);
ViolatorCamina3=load_bitmap("CaminaViolator3.bmp",NULL);
ViolatorCamina4=load_bitmap("CaminaViolator4.bmp",NULL);

Colision1Violator=load_bitmap("ColisionDisparo1.bmp",NULL);
Colision2Violator=load_bitmap("ColisionDisparo2.bmp",NULL);

ViolatorMuerte1=load_bitmap("MuerteViolator1.bmp",NULL);
ViolatorMuerte2=load_bitmap("MuerteViolator2.bmp",NULL);

AtaqueViolator1=load_bitmap("AtaqueViolator1.bmp",NULL);
AtaqueViolator2=load_bitmap("AtaqueViolator2.bmp",NULL);
AtaqueViolator3=load_bitmap("AtaqueViolator3.bmp",NULL);
AtaqueViolator4=load_bitmap("AtaqueViolator4.bmp",NULL);


}

void npcNivel3Violator::MuerteViolator(){

            if(contMuerteViolator>=0&&contMuerteViolator<6){
            masked_blit(ViolatorMuerte1,screen,0,0,x_eneViolator,y_eneViolator,200,165);
            }else if(contMuerteViolator>=6&&contMuerteViolator<12){
            masked_blit(ViolatorMuerte2,screen,0,0,x_eneViolator,y_eneViolator,200,169);

            }
            contMuerteViolator++;

            if(contMuerteViolator>=12){ contMuerteViolator=0;MuerteViolatorAlerta=true;x_eneViolator=0;y_eneViolator=0;}

}

void npcNivel3Violator::movimientoViolator(int X,int Y,int Xbala,int Ybala,int distanciaBala){


int distanciaR=6; ///mide la velocidad del npc en el seguimiento

difX=abs(X-x_eneViolator);
difY=abs(Y-y_eneViolator);


if(vidaViolator){

    return;

}

 if (!((Xbala>x_eneViolator+60)
        || (x_eneViolator > Xbala+60)
        || (Ybala > y_eneViolator+60)
        || (y_eneViolator> Ybala+60)))///tiempo entre cada vez que me puede lastimar tiempo de invencibilidad
        {



            if(contBalaViolator>=0&&contBalaViolator<4){
            masked_blit(Colision1Violator,screen,0,0,x_eneViolator,y_eneViolator,76,78);
            }else if(contBalaViolator>=4&&contBalaViolator<8){
            masked_blit(Colision2Violator,screen,0,0,x_eneViolator,y_eneViolator,76,78);

            }
            contBalaViolator++;

            if(contBalaViolator>=8){
                    contBalaViolator=0;vidaViolator=false;}///En teoria contBalaViolator es la vida del npc



        }else if(vidaViolator==false){
                MuerteViolator();
        }else{



if(!((X>x_eneViolator+600)
   || (x_eneViolator > X+600)
   || (Y>y_eneViolator+600)
   || (y_eneViolator> Y+600)) ){

        alertaViolator=true;

}

if(alertaViolator){


  if(x_eneViolator>=X){


        x_eneViolator=X+(difX-distanciaR);///viene jugador del lado izquierdo




  }else {

          x_eneViolator=X-(difX-distanciaR);///viene jugador del lado derecho por eso la resta en X-(difx-distanciaR)
  }

  if(y_eneViolator>=Y){


        y_eneViolator=Y+(difY-distanciaR);

  }else {

          y_eneViolator=Y-(difY-distanciaR);


  }

}

if(contViolator>=0&&contViolator<6){

    masked_blit(ViolatorCamina1,screen,0,0,x_eneViolator,y_eneViolator,125,287);

    }else if(contViolator>=6&&contViolator<12){

    masked_blit(ViolatorCamina2,screen,0,0,x_eneViolator,y_eneViolator,125,290);

    }else if(contViolator>=12&&contViolator<18){

    masked_blit(ViolatorCamina3,screen,0,0,x_eneViolator,y_eneViolator,125,280);

    }else if(contViolator>=18&&contViolator<24){

    masked_blit(ViolatorCamina4,screen,0,0,x_eneViolator,y_eneViolator,125,278);

    }

  contViolator++;

  if(contViolator>=24) contViolator=0;

}

}

void npcNivel3Violator::limiteViolator(){

    if(x_eneViolator<0)x_eneViolator=0;
    if(x_eneViolator>1000)x_eneViolator=1000;
    if(y_eneViolator<0)y_eneViolator=0;
    if(y_eneViolator>600)y_eneViolator=600;

}



class npcNivel2Spider{

private:

    int x_Inicial;
    int y_Inicial;
    int distancia;
    int distanciaBala;

    int contBalaSpider;
    int contSpider;
    int difX;
    int difY;

    int contMuerteSpider;

    bool vidaSpider;
    bool MuerteSpiderAlerta;
    bool alertaSpider;

    int x_eneSpider;
    int y_eneSpider;

public:

    BITMAP *SpiderCamina1;
    BITMAP *SpiderCamina2;
    BITMAP *SpiderCamina3;
    BITMAP *SpiderCamina4;

    BITMAP *SpiderMuerte1;
    BITMAP *SpiderMuerte2;
    BITMAP *SpiderMuerte3;
    BITMAP *SpiderMuerte4;
    BITMAP *SpiderMuerte5;

    BITMAP *Colision1Spider;
    BITMAP *Colision2Spider;

    int get_contBalaSpider(){return contBalaSpider;}
    void set_contBalaSpider(int _contBalaSpider){contBalaSpider =_contBalaSpider;}

    int get_contSpider(){return contSpider;}
    void set_contSpider(int _contSpider){contSpider =_contSpider;}

    int get_difX(){return difX;}
    void set_difX(int _difX){difX =_difX;}

    int get_difY(){return difY;}
    void set_difY(int _difY){difY =_difY;}

    int get_contMuerteSpider(){return contMuerteSpider;}
    void set_contMuerteSpider(int _contMuerteSpider){contMuerteSpider =_contMuerteSpider;}

    bool get_vidaSpider(){return vidaSpider;}
    void set_vidaSpider(bool _vidaSpider){vidaSpider =_vidaSpider;}

    bool get_MuerteSpiderAlerta(){return MuerteSpiderAlerta;}
    void set_MuerteSpiderAlerta(bool _MuerteSpiderAlerta){MuerteSpiderAlerta =_MuerteSpiderAlerta;}

    bool get_alertaSpider(){return alertaSpider;}
    void set_alertaSpider(bool _alertaSpider){alertaSpider =_alertaSpider;}

    int get_x_eneSpider(){return x_eneSpider;}
    void set_x_eneSpider(int _x_eneSpider){x_eneSpider =_x_eneSpider;}

    int get_y_eneSpider(){return y_eneSpider;}
    void set_y_eneSpider(int _y_eneSpider){y_eneSpider =_y_eneSpider;}

    void iniciarSpider(int X,int Y,int Xbala,int Ybala,int distancia);
    void movimientoSpider(int X,int Y,int Xbala,int Ybala,int distanciaBala);
    void MuerteSpider();
    void limiteSpider();

};

class npcJefe{

private:

    int x_Inicial;
    int y_Inicial;
    int alto;
    int ancho;
    int anchoMuerte;
    int altoMuerte;

    int contMovJefe;
    bool alertaJefe;
    int contBalaJefe;

    int difX;
    int difY;

    bool muerteJefe;
    bool vidaaJefe;

    int x_eneJefe;
    int y_eneJefe;

    int contMuerteJefe;

public:
/*
    npcJefe(){
        alto = 290;
        ancho = 125;
        anchoMuerte=200;
        altoMuerte=166;
    }
*/
    BITMAP *MuerteJefeSec1;
    BITMAP *MuerteJefeSec2;
    BITMAP *MuerteJefeSec3;
    BITMAP *MuerteJefeSec4;

    BITMAP *Colision1Jefe;
    BITMAP *Colision2Jefe;

    BITMAP *CaminaJefeDer1;
    BITMAP *CaminaJefeDer2;
    BITMAP *CaminaJefeDer3;
    BITMAP *CaminaJefeDer4;

    BITMAP *CaminaJefeIzq1;
    BITMAP *CaminaJefeIzq2;
    BITMAP *CaminaJefeIzq3;
    BITMAP *CaminaJefeIzq4;

    BITMAP *AtaqueJefe1;
    BITMAP *AtaqueJefe2;
    BITMAP *AtaqueJefe3;

    npcJefe(){


                alto = 290;
                ancho = 125;
                anchoMuerte=200;
                altoMuerte=166;


                contMovJefe=0;
                contBalaJefe=0;

                contMuerteJefe=0;


                alertaJefe=false;
                muerteJefe=false;
                vidaaJefe=true;

    }

    int get_contMovJefe(){return contMovJefe;}
    void set_contMovJefe(int _contMovJefe){contMovJefe =_contMovJefe;}


    bool get_alertaJefe(){return alertaJefe;}
    void set_alertaJefe(bool _alertaJefe){alertaJefe =_alertaJefe;}

    int get_contBalaJefe(){return contBalaJefe;}
    void set_contBalaJefe(int _contBalaJefe){contBalaJefe = _contBalaJefe;}

    int get_difX(){return difX;}
    void set_difX(int _difX){difX = _difX;}

    int get_difY(){return difY;}
    void set_difY(int _difY){difY = _difY;}

    bool get_muerteJefe(){return muerteJefe;}
    void set_muerteJefe(bool _muerteJefe){muerteJefe = _muerteJefe;}

    bool get_vidaaJefe(){return vidaaJefe;}
    void set_vidaaJefe(bool _vidaaJefe){vidaaJefe = _vidaaJefe;}

    int get_x_eneJefe(){return x_eneJefe;}
    void set_x_eneJefe(int _x_eneJefe){x_eneJefe = _x_eneJefe;}

    int get_y_eneJefe(){return y_eneJefe;}
    void set_y_eneJefe(int _y_eneJefe){y_eneJefe = _y_eneJefe;}

    int get_contMuerteJefe(){return contMuerteJefe;}
    void set_contMuerteJefe(int _contMuerteJefe){contMuerteJefe = _contMuerteJefe;}

    void iniciarJefe(int X,int Y,int Xbala,int Ybala);
    void movimientoJefe(int X,int Y,int Xbala,int Ybala,int distanciabala);
    void muerteJefeSec();
    void limiteJefe();

};



class npcJason:public NPCbase{

private:

    int x_Inicial;
    int y_Inicial;
    int distanciaMovimiento;
    int distanciaBala;
    bool activoAnimaJason;
///

    int contMovJason;
    int contSalJason;

    int x_eneJason;
    int y_eneJason;

    bool alertaJ;

    int contBalaJason;
    int contMuertoJason;

    bool muertoJasonFin;
    bool vidaJason;

    int difX;
    int difY;

public:

     int get_contMovJason(){return contMovJason;}
     void set_contMovJason(int _contMovJason){contMovJason =_contMovJason;}

     int get_contSalJason(){return contSalJason;}
     void set_contSalJason(int _contSalJason){contSalJason =_contSalJason;}

     int get_x_eneJason(){return x_eneJason;}
     void set_x_eneJason(int _x_eneJason){x_eneJason =_x_eneJason;}

     int get_y_eneJason(){return y_eneJason;}
     void set_y_eneJason(int _y_eneJason){y_eneJason =_y_eneJason;}

     bool get_alertaJ(){return alertaJ;}
     void set_alertaJ(bool _alertaJ){alertaJ =_alertaJ;}

     int get_contBalaJason(){return contBalaJason;}
     void set_contBalaJason(int _contBalaJason){contBalaJason =_contBalaJason;}

     int get_contMuertoJason(){return contMuertoJason;}
     void set_contMuertoJason(int _contMuertoJason){contMuertoJason =_contMuertoJason;}

     bool get_muertoJasonFin(){return muertoJasonFin;}
     void set_muertoJasonFin(bool _muertoJasonFin){muertoJasonFin =_muertoJasonFin;}

     bool get_vidaJason(){return vidaJason;}
     void set_vidaJason(bool _vidaJason){vidaJason =_vidaJason;}

     int get_difX(){return difX;}
     void set_difX(int _difX){difX =_difX;}

     int get_difY(){return difY;}
     void set_difY(int _difY){difY =_difY;}

    BITMAP *SalidaJason1;
    BITMAP *SalidaJason2;
    BITMAP *SalidaJason3;
    BITMAP *SalidaJason4;
    BITMAP *SalidaJason5;

    BITMAP *CaminaJDer1;
    BITMAP *CaminaJDer2;
    BITMAP *CaminaJDer3;
    BITMAP *CaminaJDer4;

    BITMAP *CaminaJIzq1;
    BITMAP *CaminaJIzq2;
    BITMAP *CaminaJIzq3;
    BITMAP *CaminaJIzq4;

    BITMAP *ArribaJason1;
    BITMAP *ArribaJason2;
    BITMAP *ArribaJason3;
    BITMAP *ArribaJason4;

    BITMAP *AbajoJason1;
    BITMAP *AbajoJason2;
    BITMAP *AbajoJason3;
    BITMAP *AbajoJason4;

    BITMAP *MuerteJasonExplo1;
    BITMAP *MuerteJasonExplo2;
    BITMAP *MuerteJasonExplo3;
    BITMAP *MuerteJasonExplo4;
    BITMAP *MuerteJasonExplo5;

    BITMAP *Colision1Jason;
    BITMAP *Colision2Jason;

    bool NaceJason();
    void iniciarJason(int X,int Y,int Xbala,int Ybala,int distancia);
    void movimientoJason(int X,int Y,int Xbala,int Ybala,int distanciaBala);
    void muerteJason();

    void limiteJason();

};


class npcFotball:public NPCbase{

    private:

    int x_Inicial;
    int y_Inicial;
    int distanciaMovimiento;
    int distanciaBala;

    int contMovFutball;
    int x_eneFotball;
    int y_eneFotball;

    int contBalaFoot;

    bool muertoFott;
    bool vidaNpcFott;
    int contMuertoFott;


    bool alerta;

    int difX;
    int difY;

    public:

///FOOTBALL PLAYER

    BITMAP *npcMover1;
    BITMAP *npcMover2;
    BITMAP *npcMover3;
    BITMAP *npcMover4;
    BITMAP *npcMover5;


    BITMAP *npcMoverIzq1;
    BITMAP *npcMoverIzq2;
    BITMAP *npcMoverIzq3;
    BITMAP *npcMoverIzq4;
    BITMAP *npcMoverIzq5;

    BITMAP *explosion1Fottball;
    BITMAP *explosion2Fottball;
    BITMAP *explosion3Fottball;
    BITMAP *explosion4Fottball;
    BITMAP *explosion5Fottball;
    BITMAP *explosion6Fottball;
    BITMAP *explosion7Fottball;
    BITMAP *explosion8Fottball;

    BITMAP *Colision1Foot;
    BITMAP *Colision2Foot;

    int get_contMovFutball(){return contMovFutball;}
    void set_contMovFutball(int _contMovFutball){contMovFutball =_contMovFutball;}

    int get_x_eneFotball(){return x_eneFotball;}
    void set_x_eneFotball(int _x_eneFotball){x_eneFotball =_x_eneFotball;}

    int get_y_eneFotball(){return y_eneFotball;}
    void set_y_eneFotball(int _y_eneFotball){y_eneFotball =_y_eneFotball;}

    int get_contBalaFoot(){return contBalaFoot;}
    void set_contBalaFoot(int _contBalaFoot){contBalaFoot =_contBalaFoot;}

    bool get_muertoFott(){return muertoFott;}
    void set_muertoFott(bool _muertoFott){muertoFott =_muertoFott;}

    bool get_vidaNpcFott(){return vidaNpcFott;}
    void set_vidaNpcFott(bool _vidaNpcFott){vidaNpcFott =_vidaNpcFott;}

    int get_contMuertoFott(){return contMuertoFott;}
    void set_contMuertoFott(int _contMuertoFott){contMuertoFott =_contMuertoFott;}

    bool get_alerta(){return alerta;}
    void set_alerta(bool _alerta){alerta =_alerta;}

    int get_difX(){return difX;}
    void set_difX(int _difX){difX =_difX;}

    int get_difY(){return difY;}
    void set_difY(int _difY){difY =_difY;}


    void iniciarFotball(int X,int Y,int Xbala,int Ybala,int distancia);
    void movimientoFotball(int X,int Y,int Xbala,int Ybala,int distanciaBala);
    void muerteFottball();

    void limite();

};



void npcNivel2Spider::iniciarSpider(int X,int Y,int Xbala,int Ybala,int distancia){

contSpider=0;
contMuerteSpider=0;
contBalaSpider=0;

x_Inicial=X;
y_Inicial=Y;

x_eneSpider=X;
y_eneSpider=Y;


x_Inicial=Xbala;
y_Inicial=Ybala;

x_eneSpider=Xbala;
y_eneSpider=Ybala;

alertaSpider=false;
vidaSpider=true;
MuerteSpiderAlerta=false;

SpiderCamina1=load_bitmap("BossAra1.bmp",NULL);
SpiderCamina2=load_bitmap("BossAra2.bmp",NULL);
SpiderCamina3=load_bitmap("BossAra3.bmp",NULL);
SpiderCamina4=load_bitmap("BossAra4.bmp",NULL);

Colision1Spider=load_bitmap("ColisionDisparo1.bmp",NULL);
Colision2Spider=load_bitmap("ColisionDisparo2.bmp",NULL);

SpiderMuerte1=load_bitmap("BossAraMuerte1.bmp",NULL);
SpiderMuerte2=load_bitmap("BossAraMuerte2.bmp",NULL);
SpiderMuerte3=load_bitmap("BossAraMuerte3.bmp",NULL);
SpiderMuerte4=load_bitmap("BossAraMuerte4.bmp",NULL);
SpiderMuerte5=load_bitmap("BossAraMuerte5.bmp",NULL);


}
/*
lo que se ve adelante es lo ultimo que dibujo si lo pongo al principop se va a ver atras


*/

void npcNivel2Spider::MuerteSpider(){

            if(contMuerteSpider>=0&&contMuerteSpider<4){
            masked_blit(SpiderMuerte1,screen,0,0,x_eneSpider,y_eneSpider,146,141);
            }else if(contMuerteSpider>=4&&contMuerteSpider<8){
            masked_blit(SpiderMuerte2,screen,0,0,x_eneSpider,y_eneSpider,155,146);
            }else if(contMuerteSpider>=8&&contMuerteSpider<12){
            masked_blit(SpiderMuerte3,screen,0,0,x_eneSpider,y_eneSpider,144,139);
            }else if(contMuerteSpider>=12&&contMuerteSpider<16){
            masked_blit(SpiderMuerte4,screen,0,0,x_eneSpider,y_eneSpider,145,147);
            }else if(contMuerteSpider>=16&&contMuerteSpider<20){
            masked_blit(SpiderMuerte5,screen,0,0,x_eneSpider,y_eneSpider,141,149);
            }
            contMuerteSpider++;

            if(contMuerteSpider>=20){ contMuerteSpider=0;MuerteSpiderAlerta=true;x_eneSpider=0;y_eneSpider=0;}

}

void npcNivel2Spider::movimientoSpider(int X,int Y,int Xbala,int Ybala,int distanciaBala){


int distanciaR=6; ///mide la velocidad del npc en el seguimiento

difX=abs(X-x_eneSpider);
difY=abs(Y-y_eneSpider);

if(MuerteSpiderAlerta){

    return;

}

 if (!((Xbala>x_eneSpider+60)
        || (x_eneSpider > Xbala+60)
        || (Ybala > y_eneSpider+60)
        || (y_eneSpider> Ybala+60)))///tiempo entre cada vez que me puede lasatimar tiempo de invencibilidad
        {



            if(contBalaSpider>=0&&contBalaSpider<12){
            masked_blit(Colision1Spider,screen,0,0,x_eneSpider,y_eneSpider,76,78);
            }else if(contBalaSpider>=12&&contBalaSpider<24){
            masked_blit(Colision2Spider,screen,0,0,x_eneSpider,y_eneSpider,76,78);

            }
            contBalaSpider++;

            if(contBalaSpider>=24){contBalaSpider=0;vidaSpider=false;}



        }else if(vidaSpider==false){
                MuerteSpider();
        }else{



if(!((X>x_eneSpider+600)
   || (x_eneSpider > X+600)
   || (Y>y_eneSpider+600)
   || (y_eneSpider> Y+600)) ){

        alertaSpider=true;

}

if(alertaSpider){


  if(x_eneSpider>=X){


        x_eneSpider=X+(difX-distanciaR);///viene jugador del lado izquierdo


  }else {

          x_eneSpider=X-(difX-distanciaR);///viene jugador del lado derecho por eso la resta en X-(difx-distanciaR)
  }

  if(y_eneSpider>=Y){


        y_eneSpider=Y+(difY-distanciaR);

  }else {

          y_eneSpider=Y-(difY-distanciaR);


  }

}

if(contSpider>=0&&contSpider<6){

    masked_blit(SpiderCamina1,screen,0,0,x_eneSpider,y_eneSpider,141,151);

    }else if(contSpider>=6&&contSpider<12){

    masked_blit(SpiderCamina2,screen,0,0,x_eneSpider,y_eneSpider,155,149);

    }else if(contSpider>=12&&contSpider<18){

    masked_blit(SpiderCamina3,screen,0,0,x_eneSpider,y_eneSpider,142,141);

    }else if(contSpider>=18&&contSpider<24){

    masked_blit(SpiderCamina4,screen,0,0,x_eneSpider,y_eneSpider,153,151);

    }

  contSpider++;

  if(contSpider>=24) contSpider=0;

}

}

void npcNivel2Spider::limiteSpider(){

    if(x_eneSpider<0)x_eneSpider=0;
    if(x_eneSpider>1000)x_eneSpider=1000;
    if(y_eneSpider<0)y_eneSpider=0;
    if(y_eneSpider>600)y_eneSpider=600;

}

void npcJefe::iniciarJefe(int X,int Y,int Xbala,int Ybala){

contMovJefe=0;
contBalaJefe=0;

contMuerteJefe=0;

x_Inicial=X;
y_Inicial=Y;

x_eneJefe=X;
y_eneJefe=Y;


x_Inicial=Xbala;
y_Inicial=Ybala;

x_eneJefe=Xbala;
y_eneJefe=Ybala;


alertaJefe=false;
muerteJefe=false;
vidaaJefe=true;

if(rand()%10>5)
{
    MuerteJefeSec1=load_bitmap("MuerteSecBebe1.bmp",NULL);
    MuerteJefeSec2=load_bitmap("MuerteSecBebe2.bmp",NULL);
    MuerteJefeSec3=load_bitmap("MuerteSecBebe3.bmp",NULL);
    MuerteJefeSec4=load_bitmap("MuerteSecBebe4.bmp",NULL);

    Colision1Jefe=load_bitmap("ColisionDisparo1.bmp",NULL);
    Colision2Jefe=load_bitmap("ColisionDisparo2.bmp",NULL);

    CaminaJefeDer1=load_bitmap("BebeRojoCaminaDer1.bmp",NULL);
    CaminaJefeDer2=load_bitmap("BebeRojoCaminaDer2.bmp",NULL);
    CaminaJefeDer3=load_bitmap("BebeRojoCaminaDer3.bmp",NULL);
    CaminaJefeDer4=load_bitmap("BebeRojoCaminaDer4.bmp",NULL);

    CaminaJefeIzq1=load_bitmap("BebeRojoCaminaIzq1.bmp",NULL);
    CaminaJefeIzq2=load_bitmap("BebeRojoCaminaIzq2.bmp",NULL);
    CaminaJefeIzq3=load_bitmap("BebeRojoCaminaIzq3.bmp",NULL);
    CaminaJefeIzq4=load_bitmap("BebeRojoCaminaIzq4.bmp",NULL);

    AtaqueJefe1=load_bitmap("BebeRojoAtaque1.bmp",NULL);
    AtaqueJefe2=load_bitmap("BebeRojoAtaque2.bmp",NULL);
    AtaqueJefe3=load_bitmap("BebeRojoAtaque3.bmp",NULL);

}else{

    MuerteJefeSec1=load_bitmap("MuerteViolator1.bmp",NULL);
    MuerteJefeSec2=load_bitmap("MuerteViolator1.bmp",NULL);
    MuerteJefeSec3=load_bitmap("MuerteViolator2.bmp",NULL);
    MuerteJefeSec4=load_bitmap("MuerteViolator2.bmp",NULL);

    Colision1Jefe=load_bitmap("ColisionDisparo1.bmp",NULL);
    Colision2Jefe=load_bitmap("ColisionDisparo2.bmp",NULL);

    CaminaJefeDer1=load_bitmap("CaminaViolator1.bmp",NULL);
    CaminaJefeDer2=load_bitmap("CaminaViolator2.bmp",NULL);
    CaminaJefeDer3=load_bitmap("CaminaViolator3.bmp",NULL);
    CaminaJefeDer4=load_bitmap("CaminaViolator4.bmp",NULL);

    CaminaJefeIzq1=load_bitmap("CaminaViolator1.bmp",NULL);
    CaminaJefeIzq2=load_bitmap("CaminaViolator2.bmp",NULL);
    CaminaJefeIzq3=load_bitmap("CaminaViolator3.bmp",NULL);
    CaminaJefeIzq4=load_bitmap("CaminaViolator4.bmp",NULL);

    AtaqueJefe1=load_bitmap("AtaqueViolator1.bmp",NULL);
    AtaqueJefe2=load_bitmap("AtaqueViolator2.bmp",NULL);
    AtaqueJefe3=load_bitmap("AtaqueViolator3.bmp",NULL);

}


}

void npcJason::iniciarJason(int X,int Y,int Xbala,int Ybala,int distancia){

contMovJason=0;
contSalJason=0;

contBalaJason=0;
contMuertoJason=0;

muertoJasonFin=false;
vidaJason=true;

x_Inicial=X;
y_Inicial=Y;

x_eneJason=X;
y_eneJason=Y;


x_Inicial=Xbala;
y_Inicial=Ybala;

x_eneJason=Xbala;
y_eneJason=Ybala;


activoAnimaJason=false;

alertaJ=false;

Colision1Jason=load_bitmap("ColisionDisparo1.bmp",NULL);
Colision2Jason=load_bitmap("ColisionDisparo2.bmp",NULL);

SalidaJason1=load_bitmap("JasonSalida1.bmp",NULL);
SalidaJason2=load_bitmap("JasonSalida2.bmp",NULL);
SalidaJason3=load_bitmap("JasonSalida3.bmp",NULL);
SalidaJason4=load_bitmap("JasonSalida4.bmp",NULL);
SalidaJason5=load_bitmap("JasonSalida5.bmp",NULL);

CaminaJDer1=load_bitmap("JasonDer1.bmp",NULL);
CaminaJDer2=load_bitmap("JasonDer2.bmp",NULL);
CaminaJDer3=load_bitmap("JasonDer3.bmp",NULL);
CaminaJDer4=load_bitmap("JasonDer4.bmp",NULL);

CaminaJIzq1=load_bitmap("JasonIzq1.bmp",NULL);
CaminaJIzq2=load_bitmap("JasonIzq2.bmp",NULL);
CaminaJIzq3=load_bitmap("JasonIzq3.bmp",NULL);
CaminaJIzq4=load_bitmap("JasonIzq4.bmp",NULL);

ArribaJason1=load_bitmap("JasonArriba1.bmp",NULL);
ArribaJason2=load_bitmap("JasonArriba2.bmp",NULL);
ArribaJason3=load_bitmap("JasonArriba3.bmp",NULL);
ArribaJason4=load_bitmap("JasonArriba4.bmp",NULL);

AbajoJason1=load_bitmap("Jason1.bmp",NULL);
AbajoJason2=load_bitmap("Jason2.bmp",NULL);
AbajoJason3=load_bitmap("Jason3.bmp",NULL);
AbajoJason4=load_bitmap("Jason4.bmp",NULL);

MuerteJasonExplo1=load_bitmap("DeadJason1.bmp",NULL);
MuerteJasonExplo2=load_bitmap("DeadJason2.bmp",NULL);
MuerteJasonExplo3=load_bitmap("DeadJason3.bmp",NULL);
MuerteJasonExplo4=load_bitmap("DeadJason4.bmp",NULL);
MuerteJasonExplo5=load_bitmap("DeadJason5.bmp",NULL);

}

void npcJefe::muerteJefeSec(){

            if(contMuerteJefe>=0&&contMuerteJefe<4){
            masked_blit(MuerteJefeSec1,screen,0,0,x_eneJefe,y_eneJefe,anchoMuerte,altoMuerte);
            }else if(contMuerteJefe>=4&&contMuerteJefe<8){
            masked_blit(MuerteJefeSec2,screen,0,0,x_eneJefe,y_eneJefe,anchoMuerte,altoMuerte);
            }else if(contMuerteJefe>=8&&contMuerteJefe<12){
            masked_blit(MuerteJefeSec3,screen,0,0,x_eneJefe,y_eneJefe,anchoMuerte,altoMuerte);
            }else if(contMuerteJefe>=12&&contMuerteJefe<16){
            masked_blit(MuerteJefeSec4,screen,0,0,x_eneJefe,y_eneJefe,anchoMuerte,altoMuerte);
            }

            contMuerteJefe++;

            if(contMuerteJefe>=16){ contMuerteJefe=0;muerteJefe=true;x_eneJefe=0;y_eneJefe=0;}

}

void npcJefe::movimientoJefe(int X,int Y,int Xbala,int Ybala,int distanciaBala){

int distanciaR=8; ///mide la velocidad del npc en el seguimiento

difX=abs(X-x_eneJefe);
difY=abs(Y-y_eneJefe);


if(muerteJefe){

    return;

}

 if (!((Xbala>x_eneJefe+60)
        || (x_eneJefe > Xbala+60)
        || (Ybala > y_eneJefe+60)
        || (y_eneJefe> Ybala+60)))///tiempo entre cada vez que me puede lastimar tiempo de invencibilidad
        {

            if(contBalaJefe>=0&&contBalaJefe<6){
            masked_blit(Colision1Jefe,screen,0,0,x_eneJefe,y_eneJefe,76,78);
            }else if(contBalaJefe>=6&&contBalaJefe<12){
            masked_blit(Colision2Jefe,screen,0,0,x_eneJefe,y_eneJefe,76,78);

            }
            contBalaJefe++;

            if(contBalaJefe>=12){contBalaJefe=0;vidaaJefe=false;}



        }else if(vidaaJefe==false){
                muerteJefeSec();
        }else{

if(!((X>x_eneJefe+1000)
   || (x_eneJefe > X+1000)
   || (Y>y_eneJefe+1000)
   || (y_eneJefe> Y+1000)) ){

        alertaJefe=true;

}

if(alertaJefe){


  if(x_eneJefe>=X){


        x_eneJefe=X+(difX-distanciaR);///viene jugador del lado izquierdo


  }else {

          x_eneJefe=X-(difX-distanciaR);///viene jugador del lado derecho por eso la resta en X-(difx-distanciaR)
  }

  if(y_eneJefe>=Y){


        y_eneJefe=Y+(difY-distanciaR);

  }else {

          y_eneJefe=Y-(difY-distanciaR);


  }


  }


if(contMovJefe>=0&&contMovJefe<4){

    masked_blit(CaminaJefeIzq1,screen,0,0,x_eneJefe,y_eneJefe,ancho,alto);

    }else if(contMovJefe>=4&&contMovJefe<8){

    masked_blit(CaminaJefeIzq2,screen,0,0,x_eneJefe,y_eneJefe,ancho,alto);

    }else if(contMovJefe>=8&&contMovJefe<12){

    masked_blit(CaminaJefeIzq3,screen,0,0,x_eneJefe,y_eneJefe,ancho,alto);

    }else if(contMovJefe>=12&&contMovJefe<16){

    masked_blit(CaminaJefeIzq4,screen,0,0,x_eneJefe,y_eneJefe,ancho,alto);

    }

  contMovJefe++;

  if(contMovJefe>=16) contMovJefe=0;

  }

}

bool npcJason::NaceJason(){

    if(activoAnimaJason==false){

    if(contSalJason>=0&&contSalJason<6){

    masked_blit(SalidaJason1,screen,0,0,x_eneJason,y_eneJason,100,102);

    }else if(contSalJason>=6&&contSalJason<12){

    masked_blit(SalidaJason2,screen,0,0,x_eneJason,y_eneJason,100,102);

    }else if(contSalJason>=12&&contSalJason<18){

    masked_blit(SalidaJason3,screen,0,0,x_eneJason,y_eneJason,100,102);

    }else if(contSalJason>=18&&contSalJason<24){

    masked_blit(SalidaJason4,screen,0,0,x_eneJason,y_eneJason,100,102);

    }else if(contSalJason>=24&&contSalJason<30){

        masked_blit(SalidaJason5,screen,0,0,x_eneJason,y_eneJason,100,102);

    }

  contSalJason++;



}
    if(contSalJason>=30)
        activoAnimaJason=true;

    return activoAnimaJason;

}

void npcJason::muerteJason(){


            if(contMuertoJason>=0&&contMuertoJason<6){
            masked_blit(MuerteJasonExplo1,screen,0,0,x_eneJason,y_eneJason,100,102);
            }else if(contMuertoJason>=6&&contMuertoJason<12){
            masked_blit(MuerteJasonExplo2,screen,0,0,x_eneJason,y_eneJason,100,102);
            }else if(contMuertoJason>=18&&contMuertoJason<24){
            masked_blit(MuerteJasonExplo3,screen,0,0,x_eneJason,y_eneJason,100,102);
            }else if(contMuertoJason>=24&&contMuertoJason<30){
            masked_blit(MuerteJasonExplo4,screen,0,0,x_eneJason,y_eneJason,100,102);
            }else if(contMuertoJason>=30&&contMuertoJason<36){
            masked_blit(MuerteJasonExplo5,screen,0,0,x_eneJason,y_eneJason,100,102);
            }
            contMuertoJason++;

            if(contMuertoJason>=36){ contMuertoJason=0;muertoJasonFin=true;x_eneJason=0;y_eneJason=0;}




}


void npcJason::movimientoJason(int X,int Y,int Xbala,int Ybala,int distanciaBala){

int distanciaR=8; ///mide la velocidad del npc en el seguimiento

difX=abs(X-x_eneJason);
difY=abs(Y-y_eneJason);


if(muertoJasonFin){

    return;

}


 if (!((Xbala>x_eneJason+60)
        || (x_eneJason > Xbala+60)
        || (Ybala > y_eneJason+60)
        || (y_eneJason> Ybala+60)))///tiempo entre cada vez que me puede lasatimar tiempo de invencibilidad
        {



            if(contBalaJason>=0&&contBalaJason<15){
            masked_blit(Colision1Jason,screen,0,0,x_eneJason,y_eneJason,76,78);
            }else if(contBalaJason>=15&&contBalaJason<30){
            masked_blit(Colision1Jason,screen,0,0,x_eneJason,y_eneJason,76,78);

            }
            contBalaJason++;

            if(contBalaJason>=30){contBalaJason=0;vidaJason=false;}



        }else if(vidaJason==false){
                muerteJason();
        }else{


        if(!((X>x_eneJason+500)
           || (x_eneJason > X+500)
           || (Y>y_eneJason+500)
           || (y_eneJason> Y+500)) ){

                alertaJ=true;

        }

        if(alertaJ){


          if(x_eneJason>=X){


                x_eneJason=X+(difX-distanciaR);///viene jugador del lado izquierdo

                if(contMovJason>=0&&contMovJason<4){

                masked_blit(CaminaJIzq1,screen,0,0,x_eneJason,y_eneJason,100,102);

                }else if(contMovJason>=4&&contMovJason<8){

                masked_blit(CaminaJIzq2,screen,0,0,x_eneJason,y_eneJason,100,102);

                }else if(contMovJason>=8&&contMovJason<12){

                masked_blit(CaminaJIzq3,screen,0,0,x_eneJason,y_eneJason,100,102);

                }else if(contMovJason>=12&&contMovJason<16){

                masked_blit(CaminaJIzq4,screen,0,0,x_eneJason,y_eneJason,100,102);

                }

          contMovJason++;

          if(contMovJason>=16) contMovJason=0;

          }else {

                  x_eneJason=X-(difX-distanciaR);///viene jugador del lado derecho por eso la resta en X-(difx-distanciaR)

                  if(contMovJason>=0&&contMovJason<4){

                    masked_blit(CaminaJDer1,screen,0,0,x_eneJason,y_eneJason,100,102);

                    }else if(contMovJason>=4&&contMovJason<8){

                    masked_blit(CaminaJDer2,screen,0,0,x_eneJason,y_eneJason,100,102);

                    }else if(contMovJason>=8&&contMovJason<12){

                    masked_blit(CaminaJDer3,screen,0,0,x_eneJason,y_eneJason,100,102);

                    }else if(contMovJason>=12&&contMovJason<16){

                    masked_blit(CaminaJDer4,screen,0,0,x_eneJason,y_eneJason,100,102);

                    }

                      contMovJason++;

                      if(contMovJason>=16) contMovJason=0;


                      }

          if(y_eneJason>=Y){


                y_eneJason=Y+(difY-distanciaR);



          }else {

                  y_eneJason=Y-(difY-distanciaR);

            }


          }

    }


}

void npcJason::limiteJason(){

    if(x_eneJason<0)x_eneJason=0;
    if(x_eneJason>1000)x_eneJason=1000;
    if(y_eneJason<0)y_eneJason=0;
    if(y_eneJason>600)y_eneJason=600;

}

void npcFotball::iniciarFotball(int X,int Y,int Xbala,int Ybala,int distancia){

contMovFutball=0;
contBalaFoot=0;

x_Inicial=X;
y_Inicial=Y;

x_eneFotball=X;
y_eneFotball=Y;


x_Inicial=Xbala;
y_Inicial=Ybala;

x_eneFotball=Xbala;
y_eneFotball=Ybala;

muertoFott=false;
vidaNpcFott=true;
contMuertoFott=0;

alerta=false;

npcMover1=load_bitmap("RugbyEnemi1.bmp",NULL);
npcMover2=load_bitmap("RugbyEnemi2.bmp",NULL);
npcMover3=load_bitmap("RugbyEnemi3.bmp",NULL);
npcMover4=load_bitmap("RugbyEnemi4.bmp",NULL);
npcMover5=load_bitmap("RugbyEnemi5.bmp",NULL);

npcMoverIzq1=load_bitmap("RugbyEnemiIzq1.bmp",NULL);
npcMoverIzq2=load_bitmap("RugbyEnemiIzq2.bmp",NULL);
npcMoverIzq3=load_bitmap("RugbyEnemiIzq3.bmp",NULL);
npcMoverIzq4=load_bitmap("RugbyEnemiIzq4.bmp",NULL);
npcMoverIzq5=load_bitmap("RugbyEnemiIzq5.bmp",NULL);


Colision1Foot=load_bitmap("ColisionDisparo1.bmp",NULL);
Colision2Foot=load_bitmap("ColisionDisparo2.bmp",NULL);

explosion1Fottball=load_bitmap("Explosion1.bmp",NULL);
explosion2Fottball=load_bitmap("Explosion2.bmp",NULL);
explosion3Fottball=load_bitmap("Explosion3.bmp",NULL);
explosion4Fottball=load_bitmap("Explosion4.bmp",NULL);
explosion5Fottball=load_bitmap("Explosion5.bmp",NULL);
explosion6Fottball=load_bitmap("Explosion6.bmp",NULL);
explosion7Fottball=load_bitmap("Explosion7.bmp",NULL);
explosion8Fottball=load_bitmap("Explosion8.bmp",NULL);

}

/*

tengo mi x y de mi enmi y las de mi jugador
la distacia sea mas chica entre los dos



*/


void npcFotball::muerteFottball(){


            if(contMuertoFott>=0&&contMuertoFott<4){
            masked_blit(explosion1Fottball,screen,0,0,x_eneFotball,y_eneFotball,76,78);
            }else if(contMuertoFott>=4&&contMuertoFott<8){
            masked_blit(explosion2Fottball,screen,0,0,x_eneFotball,y_eneFotball,76,78);
            }else if(contMuertoFott>=8&&contMuertoFott<12){
            masked_blit(explosion3Fottball,screen,0,0,x_eneFotball,y_eneFotball,76,78);
            }else if(contMuertoFott>=12&&contMuertoFott<16){
            masked_blit(explosion4Fottball,screen,0,0,x_eneFotball,y_eneFotball,76,78);
            }else if(contMuertoFott>=16&&contMuertoFott<20){
            masked_blit(explosion5Fottball,screen,0,0,x_eneFotball,y_eneFotball,76,78);
            }else if(contMuertoFott>=20&&contMuertoFott<24){
            masked_blit(explosion6Fottball,screen,0,0,x_eneFotball,y_eneFotball,76,78);
            }else if(contMuertoFott>=24&&contMuertoFott<28){
            masked_blit(explosion7Fottball,screen,0,0,x_eneFotball,y_eneFotball,76,78);
            }else if(contMuertoFott>=28&&contMuertoFott<32){
            masked_blit(explosion8Fottball,screen,0,0,x_eneFotball,y_eneFotball,72,71);
            }
            contMuertoFott++;

            if(contMuertoFott>=32){ contMuertoFott=0;muertoFott=true;x_eneFotball=0;y_eneFotball=0;}

}



void npcFotball::movimientoFotball(int X,int Y,int Xbala,int Ybala,int distanciaBala){


int distanciaR=5; ///mide la velocidad del npc en el seguimiento

difX=abs(X-x_eneFotball);
difY=abs(Y-y_eneFotball);

if(muertoFott){

    return;

}

 if (!((Xbala>x_eneFotball+60)
        || (x_eneFotball > Xbala+60)
        || (Ybala > y_eneFotball+60)
        || (y_eneFotball> Ybala+60)))///tiempo entre cada vez que me puede lasatimar tiempo de invencibilidad
        {



            if(contBalaFoot>=0&&contBalaFoot<1){
            masked_blit(Colision1Foot,screen,0,0,x_eneFotball,y_eneFotball,76,78);
            }else if(contBalaFoot>=1&&contBalaFoot<2){
            masked_blit(Colision2Foot,screen,0,0,x_eneFotball,y_eneFotball,76,78);

            }
            contBalaFoot++;

            if(contBalaFoot>=2){contBalaFoot=0;vidaNpcFott=false;}



        }else if(vidaNpcFott==false){
                muerteFottball();
        }else{

        if(!((X>x_eneFotball+500)
           || (x_eneFotball > X+500)
           || (Y>y_eneFotball+500)
           || (y_eneFotball> Y+500)) ){

                alerta=true;

        }

        if(alerta){


          if(x_eneFotball>=X){


                x_eneFotball=X+(difX-distanciaR);///viene jugador del lado izquierdo


                    if(contMovFutball>=0&&contMovFutball<4){

                    masked_blit(npcMoverIzq1,screen,0,0,x_eneFotball,y_eneFotball,76,85);

                    }else if(contMovFutball>=4&&contMovFutball<8){

                    masked_blit(npcMoverIzq2,screen,0,0,x_eneFotball,y_eneFotball,76,85);

                    }else if(contMovFutball>=8&&contMovFutball<12){

                    masked_blit(npcMoverIzq3,screen,0,0,x_eneFotball,y_eneFotball,76,85);

                    }else if(contMovFutball>=12&&contMovFutball<16){

                    masked_blit(npcMoverIzq4,screen,0,0,x_eneFotball,y_eneFotball,76,85);

                    }else if(contMovFutball>=16&&contMovFutball<20){

                    masked_blit(npcMoverIzq5,screen,0,0,x_eneFotball,y_eneFotball,76,85);

                    }

                  contMovFutball++;

                  if(contMovFutball>=20) contMovFutball=0;



          }else {

                  x_eneFotball=X-(difX-distanciaR);///viene jugador del lado derecho por eso la resta en X-(difx-distanciaR)


if(contMovFutball>=0&&contMovFutball<4){

    masked_blit(npcMover1,screen,0,0,x_eneFotball,y_eneFotball,76,85);

    }else if(contMovFutball>=4&&contMovFutball<8){

    masked_blit(npcMover2,screen,0,0,x_eneFotball,y_eneFotball,76,85);

    }else if(contMovFutball>=8&&contMovFutball<12){

    masked_blit(npcMover3,screen,0,0,x_eneFotball,y_eneFotball,76,85);

    }else if(contMovFutball>=12&&contMovFutball<16){

    masked_blit(npcMover4,screen,0,0,x_eneFotball,y_eneFotball,76,85);

    }else if(contMovFutball>=16&&contMovFutball<20){

    masked_blit(npcMover5,screen,0,0,x_eneFotball,y_eneFotball,76,85);

    }

  contMovFutball++;

  if(contMovFutball>=20) contMovFutball=0;



          }

          if(y_eneFotball>=Y){


                y_eneFotball=Y+(difY-distanciaR);





          }else {

                  y_eneFotball=Y-(difY-distanciaR);


          }


          }else{


                if(y_eneFotball < (y_Inicial + 100) && (x_eneFotball == x_Inicial) ){ ///MOVIMIENTO EN RECTANGULO

                        y_eneFotball+=1;

                } else if (y_eneFotball>= (y_Inicial + 100) && x_eneFotball < (x_Inicial + 100) ){

                        x_eneFotball+=1;

                } else if (x_eneFotball >= (x_Inicial + 100) && (y_eneFotball!= (y_Inicial - 100 )) ){

                        y_eneFotball-=1;

                } else {

                        x_eneFotball-=1;
                }



    }




}

}


void npcFotball::limite(){


    if(x_eneFotball<0)x_eneFotball=0;
    if(x_eneFotball>1000)x_eneFotball=1000;
    if(y_eneFotball<0)y_eneFotball=0;
    if(y_eneFotball>600)y_eneFotball=600;

}



void zombie::iniciarZ(){


    contBala=0;
    muertoZombie=false;
    activoAnima=false;


    contPuntosZ=0;

    contMuerte=0;

    contSal=0;
    contMov=0;

    aparicion=false;

    vidaNPC1=true;

    npcEnemiS1=load_bitmap("zombieSalida1.bmp",NULL);
    npcEnemiS2=load_bitmap("zombieSalida2.bmp",NULL);
    npcEnemiS3=load_bitmap("zombieSalida3.bmp",NULL);
    npcEnemiS4=load_bitmap("zombieSalida4.bmp",NULL);
    npcEnemiS5=load_bitmap("zombieSalida5.bmp",NULL);

    npcMovi1=load_bitmap("zombieCami1.bmp",NULL);
    npcMovi2=load_bitmap("zombieCamFrente2.bmp",NULL);
    npcMovi3=load_bitmap("zombieCamFrente3.bmp",NULL);
    npcMovi4=load_bitmap("zombieCamFrente4.bmp",NULL);
    npcMovi5=load_bitmap("zombieCamFrente5.bmp",NULL);
    npcMovi6=load_bitmap("zombieCamFrente6.bmp",NULL);

    Colision1=load_bitmap("ColisionDisparo1.bmp",NULL);
    Colision2=load_bitmap("ColisionDisparo2.bmp",NULL);

    explosion1=load_bitmap("Explosion1.bmp",NULL);
    explosion2=load_bitmap("Explosion2.bmp",NULL);
    explosion3=load_bitmap("Explosion3.bmp",NULL);
    explosion4=load_bitmap("Explosion4.bmp",NULL);
    explosion5=load_bitmap("Explosion5.bmp",NULL);
    explosion6=load_bitmap("Explosion6.bmp",NULL);
    explosion7=load_bitmap("Explosion7.bmp",NULL);
    explosion8=load_bitmap("Explosion8.bmp",NULL);

}

bool zombie::naceZ(){


    if(activoAnima==false){

    if(contSal>=0&&contSal<4){

    masked_blit(npcEnemiS1,screen,0,0,x_ene,y_ene,76,78);

    }else if(contSal>=4&&contSal<8){

    masked_blit(npcEnemiS2,screen,0,0,x_ene,y_ene,76,78);

    }else if(contSal>=8&&contSal<12){

    masked_blit(npcEnemiS3,screen,0,0,x_ene,y_ene,76,78);

    }else if(contSal>=12&&contSal<16){

    masked_blit(npcEnemiS4,screen,0,0,x_ene,y_ene,76,78);

    }

  contSal++;

}
    if(contSal>=16)
        activoAnima=true;

    return activoAnima;
}

void zombie::muerteZ(){


            if(contMuerte>=0&&contMuerte<4){
            masked_blit(explosion1,screen,0,0,x_ene,y_ene,76,78);
            }else if(contMuerte>=4&&contMuerte<8){
            masked_blit(explosion2,screen,0,0,x_ene,y_ene,76,78);
            }else if(contMuerte>=8&&contMuerte<12){
            masked_blit(explosion3,screen,0,0,x_ene,y_ene,76,78);
            }else if(contMuerte>=12&&contMuerte<16){
            masked_blit(explosion4,screen,0,0,x_ene,y_ene,76,78);
            }else if(contMuerte>=16&&contMuerte<20){
            masked_blit(explosion5,screen,0,0,x_ene,y_ene,76,78);
            }else if(contMuerte>=20&&contMuerte<24){
            masked_blit(explosion6,screen,0,0,x_ene,y_ene,76,78);
            }else if(contMuerte>=24&&contMuerte<28){
            masked_blit(explosion7,screen,0,0,x_ene,y_ene,76,78);
            }else if(contMuerte>=28&&contMuerte<32){
            masked_blit(explosion8,screen,0,0,x_ene,y_ene,72,71);
            }
            contMuerte++;

            if(contMuerte>=32){ contMuerte=0;muertoZombie=true;x_ene=0;y_ene=0;}


}



void zombie::movimientoZ(int x,int y,int distanciaBala){

        if(muertoZombie){

            return;
        }


       if (!((x>x_ene+60)
        || (x_ene > x+60)
        || (y > y_ene+60)
        || (y_ene> y+60)))///tiempo entre cada vez que me puede lasatimar tiempo de invencibilidad
        {

            if(contBala>=0&&contBala<1){
            masked_blit(Colision1,screen,0,0,x_ene,y_ene,76,78);
            }else if(contBala>=1&&contBala<2){
            masked_blit(Colision2,screen,0,0,x_ene,y_ene,76,78);

            }
            contBala++;

            if(contBala>=2){contBala=0;vidaNPC1=false;}



        }else if(vidaNPC1==false){
                contPuntosZ+=5;
                muerteZ();
        }else{

        if(y_ene < (y_Inicial + distanciaMovimiento) && (x_ene == x_Inicial) ){ ///MOVIMIENTO EN RECTANGULO
                y_ene+=1;
        } else if (y_ene >= (y_Inicial + distanciaMovimiento) && x_ene < (x_Inicial + distanciaMovimiento) ){
                x_ene+=1;
        } else if (x_ene >= (x_Inicial + distanciaMovimiento) && (y_ene != (y_Inicial - distanciaMovimiento )) ){
                y_ene-=1;
        } else {
                x_ene-=1;
        }


    if(contMov>=0&&contMov<4){

    masked_blit(npcMovi1,screen,0,0,x_ene,y_ene,76,78);

    }else if(contMov>=4&&contMov<8){

    masked_blit(npcMovi2,screen,0,0,x_ene,y_ene,76,78);

    }else if(contMov>=8&&contMov<12){

    masked_blit(npcMovi3,screen,0,0,x_ene,y_ene,76,78);

    }else if(contMov>=12&&contMov<16){

    masked_blit(npcMovi4,screen,0,0,x_ene,y_ene,76,78);

    }else if(contMov>=16&&contMov<20){

    masked_blit(npcMovi5,screen,0,0,x_ene,y_ene,76,78);

    }else if(contMov>=20&&contMov<24){

    masked_blit(npcMovi6,screen,0,0,x_ene,y_ene,76,78);

    }

  contMov++;

   if(contMov>=24) contMov=0;




    }



}


void NPCbase::limite(){


    if(x_ene<0)x_ene=0;
    if(x_ene>1000)x_ene=1000;
    if(y_ene<0)y_ene=0;
    if(y_ene>610)y_ene=610;


}






#endif // NPC_H_INCLUDED
