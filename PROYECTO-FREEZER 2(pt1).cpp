#include <cstdio>
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#define N 50

using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

//PROTOTIPOS DE LAS FUNCIONES
void dibujarCuadro(int x1,int y1,int x2,int y2);
void gotoxy(int x,int y);
void CursorOn(bool visible, DWORD size);

void limpia();
void cambio(char a[]);

void posicion(int i, int j)
{
    COORD coord;
    coord.X=i;
    coord.Y=j;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}



//Estructuras

struct Cuenta{
char Usuario [25];
string contrasenia;

};



class User
{
private:
    string Nombre;
    string Password;
    bool Estado;

public:
    User();
    User (string a, string b, bool c);
    void setNombre(string a);
    void setPassword(string b);
    void setEstado(bool c);
    string getNombre();
    string getPassword();
    bool getEstado();
    //Metodos
    void iniciarSesion();
    void crearCuenta();
    void eliminarCuenta();
};

User::User()
{
    Nombre="Ninguno";
    Password="Ninguno";
    Estado=0;
}

User::User(string a, string b, bool c)
{
    Nombre=a;
    Password=b;
    Estado=c;
}

void User::setNombre(string a){
	Nombre=a;
}

void User::setPassword(string b){
    Password=b;
}

void User::setEstado(bool c){
    Estado=c;
}

string User::getNombre(){
	return Nombre;
}

string User::getPassword(){
    return Password;
}

bool User::getEstado(){
    return Estado;
}
////////////////////////////////
class Interfaz
{
protected:
    bool Pause;
    int Favorito;

public:
    Interfaz();
    Interfaz(bool a, int b);
    void setPause(bool a);
    void setFavorito(int b);
    bool getPause();
    int getFavorito();

        //Metodosss
};

Interfaz::Interfaz()
{
    Pause=0;
    Favorito=0;
}

Interfaz::Interfaz(bool a, int b)
{
    Pause=a;
    Favorito=b;
}

void Interfaz::setPause(bool a){
	Pause=a;
}

void Interfaz::setFavorito(int b){
    Favorito=b;
}

bool Interfaz::getPause(){
	return Pause;
}

int Interfaz::getFavorito(){
    return Favorito;
}
///////////////////////////
class Cancion
{
private:
    string Artista;
    string NombreSong;
    float Duracion;
    string Bits;
    int contador;

public:
    Cancion();
    Cancion(string a, string b, float c, string d, int  e);
    void setArtista(string a);
    void setNombreSong(string b);
    void setDuracion(float c);
    void setBits(string d);
    void setcontador(int e);
    string getArtista();
    string getNombreSong();
    float getDuracion();
    string getBits();
    int getcontador();

    //METODOSSSS
};

Cancion::Cancion()
{
    Artista="Ninguno";
    NombreSong="Ninguno";
    Duracion=0.0;
    Bits="Ninguno";
    contador=0;

}

Cancion::Cancion(string a, string b, float c, string d, int e)
{
    Artista=a;
    NombreSong=b;
    Duracion=c;
    Bits=d;
    contador=e;
}

void Cancion::setArtista(string a){
	Artista=a;
}

void Cancion::setNombreSong(string b){
    NombreSong=b;
}

void Cancion::setDuracion(float c){
    Duracion=c;
}

void Cancion::setBits(string d){
    Bits=d;
}

void Cancion::setcontador(int e){
    contador=e;
}

string Cancion::getArtista(){
	return Artista;
}

string Cancion::getNombreSong(){
    return NombreSong;
}

float Cancion::getDuracion(){
    return Duracion;
}

string Cancion::getBits(){
    return Bits;
}

int Cancion::getcontador(){
    return contador;
}


int main() {
    User Users[] = {User("Nombre", "Passwords", false), User("Nombre", "Passwords", false), User("Nombre", "Passwords", false),
    User("Nombre", "Passwords", false), User("Nombre", "Passwords", false)};

    Cancion Canciones[20] = {
        Cancion ("Juan Gabriel  ", "POR QUE ME HACES LLORAR", 30, "C:\Por qué me Haces Llorar.wav", 0),
        Cancion ("Juan Gabriel  ", "HASTA QUE TE CONOCI", 30, "C:\Hasta Que Te Conocí (RMX)  - Juan Gabriel.wav", 0),
        Cancion ("Juan Gabriel  ", "QUERIDA", 30, "C:\Querida (RMX) - Juan Gabriel.wav", 0),
        Cancion ("Juan Gabriel  ", "ABRAZAME MUY FUERTE", 30, "C:\Abrazame muy fuerte.wav", 0),

        Cancion ("Ariana Grande ", "SEVEN RINGS", 30, "C:\seven rings.wav", 0),
        Cancion ("Ariana Grande ", "THANK U NEXT", 30, "C:\TUN.wav", 0),
        Cancion ("Ariana Grande ", "NO TEARS LEFT TO CRY", 30, "C:\NTLTC.wav", 0),
        Cancion ("Ariana Grande ", "SIDE TO SIDE", 30, "C:\Side To Side (RMX)  - Ariana Grande.wav", 0),

        Cancion ("Rauw Alejandro", "EL EFECTO", 30, "C:\El Efecto (RMX) - Rauw AlejandroRunaway.wav", 0),
        Cancion ("Rauw Alejandro", "DESESPERADOS", 30, "C:Desesperados (RMX) - Rauw Alejandro\.wav", 0),
        Cancion ("Rauw Alejandro", "TODO DE TI", 30, "C:\Todo De Ti (RMX) - Rauw Alejandro.wav", 0),
        Cancion ("Rauw Alejandro", "MUSEO", 30, "C:\MUSEO (RMX) - Rauw Alejandro.wav", 0),

        Cancion ("New Jeans     ", "COOKIE", 30, "C:\Cookie (RMX) - NewJeansRunaway.wav", 0),
        Cancion ("New Jeans     ", "HYPE BOY", 30, "C:\Hype Boy (RMX) - NewJeans.wav", 0),
        Cancion ("New Jeans     ", "ATTENTION", 30, "C:\Attention (RMX) - NewJeans.wav", 0),
        Cancion ("New Jeans     ", "OMG", 30, "C:\OMG(RMX) - NewJeans.wav", 0),

        Cancion ("SHAKIRA       ", "MONOTONIA", 30, "C:\Monotonía (RMX) - Shakira.wav", 0),
        Cancion ("SHAKIRA       ", "OBJECTION", 30, "C:\Objection-Shakira.wav", 0),
        Cancion ("SHAKIRA       ", "ADDICTED TO YOU", 30, "C:\Addicted to you.wav", 0),
        Cancion ("SHAKIRA       ", "ME ENAMORE", 30, "C:\Me Enamoré (RMX) - Shakira.wav", 0)
        };

        system("COLOR F0");
	dibujarCuadro(0,0,78,24);//Cuadro grande
	dibujarCuadro(1,1,77,3);//Cuadro del titulo

	gotoxy(16,2); printf("               F R E Z Z E R");  //Cambiar título del programa

    char bck;
    int opcion, i, c=0;
    string resp;
    string nombreUsuario;
    char beto;
    char amg;
    string rola;
                                    char rolon[25];
                                    char rolota[50];

    do {
            system("COLOR F0");
	dibujarCuadro(0,0,78,24);//Cuadro grande
	dibujarCuadro(1,1,77,3);//Cuadro del titulo

	gotoxy(16,2); printf("               F R E Z Z E R");  //Cambiar título del programa
        cout << "\n\n\n\t=============================MENU===============================" << endl;
        cout << "\t1. Iniciar sesion" << endl;
        cout << "\t2. Crear cuenta" << endl;
        cout << "\t3. Salir" << endl;
        cout << "\tIngrese una opcion: ";
        cin >> opcion;
        cin.ignore();  // Descartar el salto de línea después de leer la opción

        switch (opcion) {
        case 1:
            system("cls");
            cout << "Ingresa el nombre de usuario: ";
            getline(cin, resp);

            for (int x = 0; x < 5; x++)
            {
                if (resp == Users[x].getNombre())
                {
                    cout << "Usuario existente" << endl;
                    Users[x].iniciarSesion();
                    i=x;
                    break;
                }
            }

            if (Users[i].getEstado())
            {

                nombreUsuario = resp;

                        system("pause>null");
                        system("cls");
                        cout << "Inicio de sesion exitoso. ¡Bienvenido, " << Users[i].getNombre() << "!" << endl;

                        int menuOpcion;
                        do {
                            cout << "\n====== Menu del Usuario ======" << endl;
                            cout << "1. Mostrar canciones agregadas a MiPlaylist" << endl;
                            cout << "2. Agregar cancion a MiPlaylist" << endl;
                            cout << "3. Eliminar cancion de Miplaylist" << endl;
                            cout << "4. Mostrar todas las canciones disponibles" << endl;
                            cout << "5. Cerrar sesion" << endl;
                            cout << "Ingrese una opcion: ";
                            cin >> menuOpcion;

                            switch (menuOpcion) {
                                case 1:{
                                do{
                                        system("cls");
                                    int h;
                                    string nombreArchivo = nombreUsuario + ".txt";
                                    ifstream archivo(nombreArchivo);

                                    if (archivo.is_open())
                                        {
                                            cout << "Playlist abierta:" << endl;
                                            cout << "\n| Canciones |-.-.-.-.-.-.-|        favoritos       |" << endl;
                                            string linea;
                                            bool cancionesRegistradas = false; // Variable para verificar si hay canciones registradas

                                            while (getline(archivo, linea))
                                                {
                                                cout << linea << endl;
                                                cancionesRegistradas = true; // Se marca como verdadero si se encuentra alguna línea en el archivo
                                                }

                                            archivo.close();

                                        if (cancionesRegistradas)
                                            {
                                                cout << "Reproduciendo canción..." << endl;
                                                cout << "Ingresa el nombre de la canción que quieres reproducir\n";
                                                fflush(stdin);
                                                gets(rolon);
                                                strupr(rolon);
                                                rola = rolon;

                                                for (int x = 0; x < 20; x++) {
                                                    if (rola == Canciones[x].getNombreSong())
                                                        {
                                                        cout << "Cancion encontrada ^^" << endl;
                                                        h = x;
                                                        }
                                                }

                                                if (h >= 0)
                                                    {
                                                    PlaySoundA(Canciones[h].getBits().c_str(), NULL, SND_FILENAME | SND_ASYNC);
                                                    cout << "Reproduciendo la canción. \tPresiona Enter para quitar cancion y avanzar";
                                                    system("pause>NULL");
                                                    PlaySoundA(NULL, NULL, 0);
                                                    }

                                                else
                                                    {
                                                    cout << "No se encontro la cancion" << endl;
                                                    }
                                            }

                                        else
                                            {
                                            cout << "No hay canciones agregadas." << endl;
                                            }

                                        }
                                    else
                                        {
                                        cout << "El archivo no existe." << endl;
                                        }

                                    cout<<"\nSalir?(s/n)\n";
                                    cin>>amg;
                                    }while(amg == 'n'|| amg == 'n');

                                        system("pause>null");
                                        break;
                                        }
                                case 2:{
                                    system("cls");

                                    string nombreArchivo = nombreUsuario + ".txt";
                                    ifstream archivo(nombreArchivo);

                                    if (archivo.is_open()) {

                                        string cancion;
                                        cout<< "Estan son todas las canciones\n";

                                        cout<< "Artista.\t\t\tCancion."<<endl;
                                        for (int x=0; x<=20; x++)
                                        {
                                            cout<<Canciones[x].getArtista()<<"\t\t"<<Canciones[x].getNombreSong()<<endl;
                                        }
                                        posicion(0,22); cout<<"###############################################\n";
                                        cout << "Ingresa la cancion para agregar: ";
                                        cin.ignore(); // Ignorar el salto de línea pendiente
                                        getline(cin, cancion);


                                        ofstream archivoSalida(nombreArchivo, std::ios::app);
                                        archivoSalida << cancion;
                                        archivoSalida.close();

                                        cout << "Cancion agregada." << endl;


                                        char respuesta;
                                        cout << "Deseas marcar esta canción como favorita? (S/N): ";
                                        cin >> respuesta;

                                        if (toupper(respuesta) == 'S') {
                                        // Agregar el corazón de favorito al nombre de la canción
                                        ifstream archivoFavoritos(nombreArchivo);
                                        string contenidoFavoritos;
                                        getline(archivoFavoritos, contenidoFavoritos, '\0');
                                        archivoFavoritos.close();

                                        ofstream archivoFavoritosSalida(nombreArchivo);
                                        archivoFavoritosSalida << contenidoFavoritos;
                                        archivoFavoritosSalida << "                              <3" << endl;
                                        archivoFavoritosSalida.close();

                                        cout << "Canción marcada como favorita." << endl;
                                            }

                                            cancion += "\n";

                                    } else {
                                        // El archivo no existe
                                        cout << "El archivo no existe." << endl;
                                    }



                                    // Para agregar una canción
                                    system("pause>null");
                                    break;
                                }
                                case 3:{
                                        // Para eliminar una canción
                                        std::string nombreUsuario;
                                        std::cout << "Ingrese el nombre de usuario: ";
                                        std::cin >> nombreUsuario;

                                        std::string nombreArchivo = nombreUsuario + ".txt";
                                        std::string nombreArchivoTemp = nombreUsuario + "_temp.txt";

                                        // Verificar si el archivo original existe
                                        if (std::FILE* archivo = std::fopen(nombreArchivo.c_str(), "r")) {
                                            std::fclose(archivo);

                                            std::string cancionEliminar;
                                            std::cout << "Ingrese el nombre de la canción a eliminar: ";
                                            std::cin.ignore(); // Ignorar el salto de línea pendiente
                                            std::getline(std::cin, cancionEliminar);

                                            // Abrir el archivo original en modo de lectura
                                            archivo = std::fopen(nombreArchivo.c_str(), "r");
                                            if (archivo != nullptr) {
                                                // Abrir el archivo temporal en modo de escritura
                                                std::FILE* archivoTemp = std::fopen(nombreArchivoTemp.c_str(), "w");
                                                if (archivoTemp != nullptr) {
                                                    char buffer[256];

                                                    // Leer cada línea del archivo original
                                                    while (std::fgets(buffer, sizeof(buffer), archivo) != nullptr) {
                                                        std::string linea(buffer);

                                                        // Verificar si la línea contiene la canción a eliminar
                                                        if (linea.find(cancionEliminar) == std::string::npos) {
                                                            // La línea no contiene la canción a eliminar, se escribe en el archivo temporal
                                                            std::fputs(linea.c_str(), archivoTemp);
                                                        }
                                                    }

                                                    std::fclose(archivo);
                                                    std::fclose(archivoTemp);

                                                    // Eliminar el archivo original
                                                    if (std::remove(nombreArchivo.c_str()) == 0) {
                                                        // Renombrar el archivo temporal al nombre del archivo original
                                                        if (std::rename(nombreArchivoTemp.c_str(), nombreArchivo.c_str()) == 0) {
                                                            std::cout << "Canción eliminada." << std::endl;
                                                        } else {
                                                            std::cout << "Error al renombrar el archivo temporal." << std::endl;
                                                        }
                                                    } else {
                                                        std::cout << "Error al eliminar el archivo original." << std::endl;
                                                    }
                                                } else {
                                                    std::cout << "No se pudo abrir el archivo temporal." << std::endl;
                                                }
                                            } else {
                                                // El archivo original existe pero no se pudo abrir en modo de lectura
                                                std::cout << "No se pudo abrir el archivo original." << std::endl;
                                            }
                                        } else {
                                            // El archivo original no existe
                                            std::cout << "El archivo no existe." << std::endl;
                                        }

                                        // Para eliminar una canción
                                        system("pause>null");
                                        break;
                                    }

                                case 4:
                                    {

                                    do{
                                    int h;
                                    system("cls");
                                    cout<< "Estan son todas las canciones\n";

                                    cout<< "Artista.\t\t\tCancion."<<endl;
                                    for (int x=0; x<=20; x++)
                                    {
                                        cout<<Canciones[x].getArtista()<<"\t\t"<<Canciones[x].getNombreSong()<<endl;
                                    }

                                    posicion(0,22); cout<<"###############################################\n";
                                    cout<<"Quieres reproducir una cancion?(s/n)\n";
                                    cin>>beto;
                                    if (beto == 's' || beto == 'S')
                                    {
                                        cout << "Ingresa el nombre de la canción que quieres reproducir\n";
                                        fflush(stdin);
                                        gets(rolon);
                                        strupr(rolon);
                                        rola=rolon;

                                        for (int x = 0; x < 20; x++) {
                                            if (rola==Canciones[x].getNombreSong()) {
                                                cout << "Rola encontrada" << endl;
                                                h = x;
                                            }

                                        }

                                        if (h>=0)
                                        {
                                            PlaySoundA(Canciones[h].getBits().c_str(), NULL, SND_FILENAME | SND_ASYNC);
                                            cout << "Reproduciendo la canción. \tPresiona Enter para quitar cancion y avanzar\n\n";
                                            system("pause>NULL");
                                            PlaySoundA(NULL, NULL, 0);
                                        }
                                        else
                                        {
                                            cout<<"No se encontro la cancion\n";
                                            system("pause>NULL");
                                        }
                                    }
                                    cout<<"Salir?(s/n)\n";
                                    cin>>amg;


                                    }while(amg == 'n'|| amg == 'n');

                                    cout<<"presiona lo que sea para continuar";
                                    system("pause>null");
                                    break;
                                    }



                                case 5:
                                    Users[i].setEstado(false);
                                    cout << "Cerrando sesion. Saliendo del programa." << endl;
                                    system("pause>null");
                                    break;

                                default:
                                    cout << "Opcion invalida. Por favor, ingrese una opcion valida." << endl;
                                    system("pause>null");
                                    break;
                            }
                            system("cls");
                        } while (menuOpcion != 5);
            }

            else
            {
                cout << "Upps! Hubo un problema. Verifica tu informacion" << endl;
                system("pause>null");
                system("cls");
            }
            break;
        case 2:
            if (c<=4)
            {
                Users[c].crearCuenta();
                system("pause>null");
                system("cls");
                c++;
            }
            else
            {
                cout<<"Se ha alcanzado la maxima creacion de usuarios";
                system("pause>null");
                system("cls");
            }
            break;
        case 3:
            cout << "Saliendo del programa." << endl;
            break;

        default:
            cout << "Opción invalida. Por favor, ingrese una opcion valida." << endl;
        }
    } while (opcion != 3);

    return 0;
}

////////////////////////////////////




class Listado
{
private:
    int NumReproducciones;
    int NumCanciones;
    //soundFiles Listado;
};


void User::iniciarSesion() {
    string nombre, password;

    int x=1000;
	int f=41;
	gotoxy(35,6); printf("LOGIN");
	dibujarCuadro(18,9,60,15);
	gotoxy(23,11); printf("Usuario: ");
    //cout << "Ingrese el nombre de usuario: ";
    cin >> nombre;
    gotoxy(23,13); printf("Pass:   ");
    //cout << "Ingrese la contrasenia: ";
    cin >> password;

    for(int i = 0; i < 3; i++ ){
		gotoxy(33,19); printf("Cargando");
		gotoxy(f,19); printf(".");
		f+=1;
		Sleep(x);
	}


	f=51;

    if (nombre == Nombre && password == Password) {


        cout << "Inicio de sesion exitoso. ¡Bienvenido, " << Nombre << "!" << endl;

    gotoxy(30,19); printf("                                     ");
		for(int i = 0; i < 3; i++ ){
			gotoxy(30,19); printf("Accediendo al Sistema");
			gotoxy(f,19); printf(".");
			f+=1;
			Sleep(x);
		}
        setEstado(true);




    } else {

    gotoxy(35,19); printf("                                     ");
		gotoxy(30,19); printf("Datos incorrectos");
		gotoxy(18,20); printf("Presione una tecla para volver a ingresar..");
        cout << "Inicio de sesión fallido. Por favor, verifique sus credenciales." << endl;

        setEstado(false);



}
}
void User::crearCuenta() {
    string nombre, password;
    cout << "Ingrese un nuevo nombre de usuario: ";
    cin >> nombre;
    cout << "Ingrese una nueva contrasenia: ";
    cin >> password;

    setNombre(nombre);
    setPassword(password);
    setEstado(true);

    FILE *fichero;
    string nombreArchivo = nombre + ".txt";
    const char* cadena = nombreArchivo.c_str();

    fichero = fopen(cadena, "a"); // para agregar datos



    cout << "Cuenta creada exitosamente. Ahora puede iniciar sesion." << endl;
}

void User::eliminarCuenta() {
    setNombre("Ninguno");
    setPassword("Ninguno");
    setEstado(false);

    cout << "Cuenta eliminada correctamente." << endl;
}


//************************************FUNCIONES ADICIONALES************************************************************


//FUNCION GOTOXY: Permite posicionar en pantalla mediante coordenadas X/Y
void gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }



//FUNCION DIBUJAR CUADRO
void dibujarCuadro(int x1,int y1,int x2,int y2)
{

    int i;
    for (i=x1;i<x2;i++)
    {
	gotoxy(i,y1);printf("Ä") ;//linea horizontal superior
	gotoxy(i,y2);printf("Ä") ;//linea horizontal inferior
    }

    for (i=y1;i<y2;i++)
    {
	gotoxy(x1,i);printf("³") ;//linea vertical izquierda
	gotoxy(x2,i);printf("³") ;//linea vertical derecha
    }
    gotoxy(x1,y1);printf("Ú");
    gotoxy(x1,y2);printf("À");
    gotoxy(x2,y1);printf("¿");
    gotoxy(x2,y2);printf("Ù");
}

//FUNCION LIMPIAR PANTALLA
void limpia(){
	int i,j;
	for(i=5;i<=23;i++){
		for(j=3;j<=76;j++){
			gotoxy(j,i); printf(" ");}}
}
