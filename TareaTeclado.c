#include <stdio.h>
#include <stdlib.h>

struct sublista{
    char letra;
    struct sublista *sig;
};

struct diccionario{
    struct sublista *subl;
    struct diccionario *sig;

};

int insertar_Diccionario( diccionario *Lista)
{
     struct diccionario *p;
     p = (struct diccionario *) malloc (sizeof(struct diccionario));
     if (!p) return -1; // no se pudo reservar memoria
     p->sig = NULL; 

    insertarSublista(p->subl);

    if (Lista != NULL)
      p->sig = Lista; 
    Lista = p;        
}
 

int insertarSublista(sublista *lista)
{
  struct sublista *p;
   p = (struct sublista *) malloc (sizeof(struct sublista));
   p->sig =NULL;
   
 
    if (lista != NULL)
      p->sig = lista; 
    lista = p;   
}
 
int main(){

  
    return 0;
}