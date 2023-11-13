#include <iostream>
#include <string>

using namespace std;
enum Categoria{A= 300,B=350,C=400,D=0};

class Empleado{
    public:
       
         int identificador;
        string nombre, apellido;
        float salarioPromedio;
        Categoria bonoCategoria;
        static int proximaEvaluacion;
        
        Empleado(int identificador);        
        float estimadoPagoTotalMensual();
        
    private:
       

};


int main()
{

    
    int id;
    float salarios[12];
    bool salarioUpMedia;
   

    cout << "Hola!! " << endl;
    cout << "Por favor, introduce la siguiente información:" << endl;

    cout << "Identidicación: " << endl;
    cin >> id;
    
    
    Empleado *empleado = new Empleado(1);

    cout << "Nombre: " << endl;
    cin >> empleado->nombre;

    cout << "Apellido: " << endl;
    cin >> empleado->apellido;
    
    char categoriaEmpleado;
    cout << "¿A qué categoria pertenece? (A,B,C) :  " << endl;
    cin >> categoriaEmpleado;
    
    switch (categoriaEmpleado)
    {
    case 'A': empleado->bonoCategoria = A; break;
    case 'B': empleado->bonoCategoria = B; break;
    case 'C': empleado->bonoCategoria = C; break;
    case 'D': empleado->bonoCategoria = D; break;
    default:  empleado->bonoCategoria = D; break;
    }

    cout << "Salario Enero:" << endl;
    cin >> salarios[0];

    cout << "Salario Febrero:" << endl;
    cin >> salarios[1];

    cout << "Salario Marzo:" << endl;
    cin >> salarios[2];

    cout << "Salario Abril:" << endl;
    cin >> salarios[3];

    cout << "Salario Mayo:" << endl;
    cin >> salarios[4];

    cout << "Salario Junio:" << endl;
    cin >> salarios[5];

    cout << "Salario Julio:" << endl;
    cin >> salarios[6];

    cout << "Salario Agosto:" << endl;
    cin >> salarios[7];

    cout << "Salario Septiembre:" << endl;
    cin >> salarios[8];

    cout << "Salario Octubre:" << endl;
    cin >> salarios[9];

    cout << "Salario Noviembre:" << endl;
    cin >> salarios[10];

    cout << "Salario Diciembre:" << endl;
    cin >> salarios[11];

    empleado->salarioPromedio = (salarios[0]+salarios[1]+salarios[2]+salarios[3]+salarios[4]+salarios[5]+salarios[6]+salarios[7]+salarios[8]+salarios[9]+salarios[10]+salarios[11])/12;
    
    salarioUpMedia = empleado->salarioPromedio>25; 
    
    cout << "El id del empleado " << empleado->nombre << " " << empleado->apellido << " es: " << empleado->identificador<<" & tiene un salario promedio de: "<< empleado->salarioPromedio << " Tiene un bono de categoria por "<< empleado->bonoCategoria << " Categoria: "<<categoriaEmpleado << endl;

    

    return 0;
}

Empleado::Empleado(int identificador){
            this->identificador = identificador;
}
  

float Empleado::estimadoPagoTotalMensual(){
    return (salarioPromedio + bonoCategoria);

}

      