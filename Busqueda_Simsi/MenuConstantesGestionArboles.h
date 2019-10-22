#ifndef MENUCONSTANTESGESTIONARBOLES_H
#define MENUCONSTANTESGESTIONARBOLES_H
namespace Menu_constantes{
class MenuConstantesGestionArboles {
public:
	const static int insertar_arbol=1;
	const static int mostrar_arbol=2;
	const static  int busqueda_profundidad_arbol=3;
	const static  int busqueda_anchura_arbol=4;
	const static int busqueda_costo_arbol=5;
	const static int salir=6;
	const static void mostrar_opciones_menu();
	void static MostrarOpcionesListaMenu();
private:
};
}

#endif

