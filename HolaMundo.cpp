#include <iostream>
#include <string>
#include <vector>
    //ver apartado de constantes
    #define VALOR_PI 3.141598  // definición de una directiva para el preprocesador, es invocado de primeras en el compilador , es una forma de declarar constantes

    //ver apartado de registros
    struct Empleado{
        int id;
        float salarioBase;
    };
    
    
//prototipo de la funcion calcularIva, ver apartado de parametros predeterminados
float calcularIva(float = 1500);
    
using namespace std; //ver apartado de "cadenas de texto" y el de "entradas y salidas de datos"
int main(){


    // Imprimir en consola 
            std::cout << "Hola Mundo!!" << endl ;
        
    // Tipos de datos de variables
        int val = 3; // entero
        int  sizeInt = sizeof(int);  //validar tamaño de un tipo de dato
        float valReal = 10.8; // flotante o reales 
        char letra = 'L'; // caracteres 
        bool esVerdad = true; // booleanos , true o false 
    
    // conversion de tipos 
        
        //--- Float a Int
        float bonificacionActual = 4.01;
        int bonificacionAplicada = (int)bonificacionActual; // el fallo con esta conversión es la perdida de informacion despues del punto
        
        
        //--- Int a Float
        int metrosTela = 10;
        float metrosTelaPrecisos =  metrosTela;
        
    //Enumeraciones
    enum Semaforo {ROJO, AMARILLO, VERDE};
    Semaforo semaforo1 = ROJO;  // la variable solo puede tomar los valores descritos en el enum 
    
    //Constantes 
        const float PI = 3.141598;  // se usa el modificador const el tipo de dato, el nombre en mayuscula y el valor 
    
    //Vectores(Arrays) 
        float ingresosPrimerTrimestre[3] = {3500.36, 1730.58, 2456.09}; // es lo mismo que los arrays en otros lenguajes, pero aqui deben ser del mismo tipo de dato
        
        //modificando vectores 
        ingresosPrimerTrimestre[0] = 1580.85;
        ingresosPrimerTrimestre[1] = 2505.8;
        
    //Matrices (Arrays multidimensionales)
               
        float ingresosMensualesEmpleadosMatriz[5][12]; // van a haber5 filas y 12 columnas, donde filas seran empleados y columnas meses 
        
        ingresosMensualesEmpleadosMatriz[0][0] = 2300; // al empleado de la primera fila [0], le asignamos un ingreso en el mes de enero [0]
        ingresosMensualesEmpleadosMatriz[4][8] = 4350.85; // al empleado 5 [4], le asignamos un ingreso en el mes de septiembre [8]
        ingresosMensualesEmpleadosMatriz[2][6] = 1200.15; // al empleado 3 [2], le asignamos un ingreso en el mes de Julio [6]
    
    //Cadenaws de caracteres de bajo nivel 
        //tipoDeDatos nombreArray[longitud]
        //char nomArray[longitud]  siempre van a ser del tipo char
        // son especiales porque en su ultima posicion siempre van a almacenar al valor \0 
        
        char palabaArray[5] = "Hola"; // longitud 5 para el valor \0 en la ultima posición, Hola tiene 4 cqaracteres
        
    // Registros(Predecesor de los Objetos)
        // son el primer indicio de lo que se conoce como POO
        //se usa creando una estructura fuera  del metodo main
        // luego de creada la estructura se "instancia" dentro del metodo main y se accede a sus variables mediante la forma de punto
        Empleado empleado1;
        empleado1.id = 215;
        empleado1.salarioBase = 2580.21;
        
    //Cadenas de caracteres (String)
        string holaMundo ("Hola Mundo!"); 
        //se debe incluir "string" en la cabecera con el #include y dentro de <> ,
        //ademas agregar antes de la declaracion del metodo main la linea "using namespace std;", esto es para evitar el uso de "std::" durante todo el codigo
        
        //metodos de strings
            char primeraLetra = holaMundo.at(0); // obtenemos la letra en la posicion 0 
            int  sizeString = holaMundo.length(); // obtenemos el tamaño de la cadena de caracteres
            
    // Vectores de alto nivel (Contenedores)
        //Contenedor de objetos
        //proporciona operaciones
        //Acceso seguroa datos
        //Similar a los de bajo nivel 
        //Hace parte de la biblioteca estandar de c++
        // se debe incluir en la cabecera con el #include y dentro de <>
        //permite trabajar de forma comoda sin definir un tamaño de vector
        vector<float> ingresosPrimerTrimestre2;
        
        ingresosPrimerTrimestre2.push_back(1500); // agregamos 1500 a la ultima posicion 
        ingresosPrimerTrimestre2.push_back(1400); 
        ingresosPrimerTrimestre2.push_back(1800); 
        
        cout << ingresosPrimerTrimestre2[0] << endl; //imprimimos en consola el valor en la posicion 0 
        cout << ingresosPrimerTrimestre2.at(1) << endl;  //.at se usa para acceder de forma segura a un valor y evitar que salte un error en caso de que la posicion este vacia
    
    
    //Entradas y salidas de Datos
        //se debe hacer un #include en la cabecera de la biblioteca iostream (input output stream - flujo de entradas y salidas) y se debe incluir dentro de <>
        //antes de cada instruccion  de flujo de consola se debe agregar "std::" , pero para omitirlo se puede colocar la instruccion  using namespace std;" antes de la declaracion main
        // salida en consola : cout << (console out)
        //salto de linea <<   (end line)
        
        std:: cout << "soy una salida" << endl;
        cout << "soy una salida" << endl;
        
        // imprimir una variable
        int edad = 7;
        cout << "esta es mi edad "<< edad << " años." << endl;
        
        //mostrando variables en pantalla para proyecto global
        
            int ident = 1023949631;
            string nombre("Libardo");
            string apellido("Lozano");
            
            cout << "Se llama "<<nombre<<" "<<apellido<<" y esta identificado con el numero "<<ident<<endl;
        
    
        //entrada por teclado a consola
        
        //Entrada de flujo de datos por consola : cin(console input) ---se hace de la forma :  cin >> nombreVariableAlojamiento   
        int diaNacimiento, mesNacimiento, anioNacimiento;  //se pueden declarar en una sola linea varias variables del mismo tipo, la ñ se debe omitir porque genera error
        
        cout << "¡Nos encantqaría poder felicitarte por el día de tu cumpleaños!"<<endl;
        cout << "¿Podrías facilitarnos tu fecha de nacimiento, por favor?"<<endl;
        cout << "Introduce tu día de nacimiento:"<<endl;
        cin >> diaNacimiento;
        
        cout << "Introduce tu mes de nacimiento:"<<endl;
        cin >> mesNacimiento;
        
        cout << "Introduce tu año de nacimiento:"<<endl;
        cin >> anioNacimiento;
        
    //Punteros o apuntadores de memoria
        //son variables que almacenan direcciones en memoria de una variable
        int edad2 = 18;
        // se usa * para identificar que es la variable de un puntero, 
        //luego se asigna a la variables de la cual queremos obtener la direccion de memoria
        //pra obtener la direccion en memoria de la variable se anteponer ampersan & antes de la variable
         int *p_edad2 = &edad2;
         
         cout << "valor en la variable: " << edad2 << " direccion en memoria: "<< p_edad2<<endl;
        
        //modificando variable mediante el puntero 
        
        *p_edad2 = 28;
        //mostramos el nuevo valor de la variable edad2 
        cout << "valor en la variable: " << edad2 << " direccion en memoria: "<< p_edad2<<endl;
        
    //operaciones aritmeticas
        //suma, resta, multiplicacion, division, modulo
            int x =10;
            int y = 3;
            
            float resuSum = x + y + 2.3;
            float resuResta = x- y -1.2;
            float resuMulti = x * y * 0.15;
            float resDiv = x / y;
            float resMod = x % y;
            
            cout << "la suma da : "<<resuSum<<endl;
            cout << "la resta da : "<<resuResta<<endl;
            cout << "la multiplicación da : "<<resuMulti<<endl;
            cout << "la división da : "<<resDiv<<endl;
            cout << "la modulo da : "<<resMod<<endl;
            
    //operadores logicos y de relación
        
        bool res1 = 5.8< 10;
        bool res2 = 16>16;
        bool res3 =  'e' == 'E'; // segun la codificación ASCII no son iguales
        
        bool resAND = res1 && res2; //deben ser los dos verdad
        bool resOR = res1 || res2;  //basta conque uno solo sea verdad 
        bool resNOT = !res3; //invierte el valor 
        
    //Ambitos
        //determinan el alcance de un codigo o variables respecto a otro y esta delimitado normalmente por las llaves {} y por un codigo limpio se aplican indentaciones
            //ambito global
                //las variables de ambito global se declaran mediante macros (#define) y se debe hacer al principio y es de forma
                    /* #define IVA 21*/
                    
    //Control de flujo 
        //IF 
            //si se  cumple la condicion en los parentesis ejecuta el codigo dentro del ambito del if
            if(res1==true){
                cout<< "res1 es TRUE que es igual a "<< res1<<endl;
            }
        
        //IF-ELSE
            // si se cumple la condición ejecuta el codigo dentro del ambito del if, si no se cumple ejecuta el codigo dentro del ambito del ELSE
            
            if(res3==true){
                cout<< "res3 es TRUE que es igual a "<< res3<<endl;
            }else{
                cout<< "res3 es FALSE que es igual a "<< res3<<endl;
            }
            
         //IF-ELSE Anidado
            //si no se cumple la primera condicion vuelve a validar otra condicion y ejecutar lo que este en el ambito de esa condicion, en el caso que ninguna se cumpla, ejecuta el ambito del else final
            if(res3==true){
                cout<< "res3 es TRUE que es igual a "<< res3<<endl;
            }else if(res1==true){
                cout<< "res1 es TRUE que es igual a "<< res1<<endl;
            }else{
                cout<< "res3 y res1 son FALSE que es igual a "<< res3<<endl;
            }
            
         //SWITCH 
             //evalua una variable contra unos casos establecidos dentro del switch
            int points = 800;
            switch (points){  // inicio del control de flujo y la variable a comparar contra los casos (case)
                case 500: cout<<"No pasaste a la U"<<endl;  // caso a validar y accion a ejecutar si se cumple
                    break;  // marca la salida del control de flujo, se ejecuta cuando se cumple el caso,  se ha completado la valñidacion y ejecutado la acción del caso
                case 600: cout<<"Puede que pases, pero a pocas carreras"<<endl; 
                    break;
                case 700: cout<<"Pasaste a la U, pero debes esperar cupo"<<endl; 
                    break;   
                case 800: cout<<"Pasaste a la U y puedes elegir cualquier carrera"<<endl; 
                    break;
                case 900: cout<<"Pasaste a la U y puedes elegir cualquier carrera, que gran puntaje"<<endl; 
                    break;
                case 1000: cout<<"Pasaste a la U y puedes elegir cualquier carrera, eres un crack"<<endl; 
                    break;   
                 default:  // este caso es por defecto en caso que la variable no coincida con ninguno de los casos establecidos
                    cout<<"No me das datos exactos"<<endl; 
                    break;
            }
            
            
        //Funciones 
            //son estructuras que encierran cierta cantidad de lineas de codigo que se van a  necesitar mas de una vez y por ende seria mejor agruparlas y reutilizarlas
            // deben retornar algo de su ejecucuín
            //debe ir un prototipo de la funcion en la cabecera del codigo
            //Cuando necesitamos usar la funcion se debe instanciar(llamar la funcion por su nombre) en cualquier parte del codigo donde la necesitemos
            // se deben crear fuera del main
            //debe ser reutilizable y debe cumplir solo una actividad o tarea en especifico
            //tienen parametros declarados dentro de los parentesis, los parametros son variables que se le pueden pasar a la funcion para que pueda trabajar
            //Estructura: 
                /*
                    tipoRetorno nombreFuncion(tipoParametro nombreParametro){  //si no se usa un retorno se deja como void
                        ---Codigo de la funcion ---
                        return valorADevolver; //se coloca si se retorna algo 
                    }
                */
                
                //instancia de la funcion de ejemplo, esta se declqaró fuera del main
                    
                    float totalSinInp = 1500.84;
                    float impuestoPagar = calcularIva(totalSinInp);  //aqui instanciamos la funcion y el retorno d la funcion lo asignamos a la variable float totalPagar
                    float totalPagar = impuestoPagar + totalSinInp;
                    cout<< "el total con impuestos a pagar es: "<<totalPagar<<endl;
                    
                //parametros predeterminados 
                    // Es un valor predeterminado que se le asigna a los parametrros de una funcion, para que la funcion pueda ejecutarse en caso de que en la instancia no se pasen los parametros requeridos
                    //se hace en el prototipo de la funcion y dentro de los parentesis del prototipo se indica asi (tipoDato = valorPredeterminado)
        //CLASES
            //Sirven para representar objetos de la vida real, es el inicio del paradigama de la programación Orientada a Objetos POO
            // TIENEN UNA PARTE PUBLICA Y PRIVADA (PUBLICA: ACCESIBLE DESDE FUERA DE LA CLASE)(PRIVADA: SOLO SE PUEDE ACCEDER EN LA CLASE)
            //estructura
            /* 
                class HolaMundo{
                
                    private:
                     //miembros de la clase (atributos)
                        -- data --
                        
                    public:
                    
                        decirHola(--args --);
                     
                };
                
            */
            
         
            
            
            //elementos staticos de las clases
                //son elementos transversales al codigo, osea que comparten todos los elementos del codigo
                // lo que permite que exista una sola instancia de la clases que pertenece a todos los objetos
                //osea que si modificamos algo del objeto estatico va a cambiar para todos los objetos que usen al objeto estatico 
                //en pocas palabras podrian definirse como RECURSOS COMPARTIDOS
                
             //Metodos miembro de clases
                //las clases pueden tener unas "funeciones propias", en el paradigma POO un metodo es una 
                //funcion definida de una clase que permite ejecutar una accion propia de la clase
                
                //un ejemplo seria para la clase "perro", esta clase tendria como 
                //miembro de datos (Atributos) el color del perro, su raza, su sexo, su nombre, etc.. & como
                //miembro de funcion (Metodos) Ladrar, correr, comer, jugar, etc.. 
                //Normalmente se definen en la parte publica de la clase, para poder ser accedidos desde fuera de la clase
                // a estas metodos se les debe declarar fuera de la clase y fuera del metodo main
                // de la forma :
                //
                
                /*
                
                   valorRetorno NombreClase::nombreMetodo(-- args --){
                        --codigo del metodo--
                    }
                    
                */
                
                // y se debe hacer prototipo en la clase, en la parte publica
                // de la forma 
                /*
                    public:
                        valorRetorno nombreMetodo(--args --);
                
                */
                
            //Constructores de clases
                // es el metodo de toda clase encargado de crear el objeto a partir de la clase y reservar su espacio en memoria
                //cuando en la clase no se crea el construcctor, ya por defecto existe un constructor por defecto
                
                //Constructor por defecto
                    //no es necesario escribirlo ya que se agrega por defecto
                    // pero si se desea escribir seria esta su
                    //estructura:
                    /*
                        NombreClase(){}
                    */
                    
                    //Constructor Personalizado
                        //Cuando deseamos que el constructor cree el objeto con unos valores por defecto o haga reserva de memoria para ciertas variables
                        //tambien cuando queremos establecer restricciones a la hora de instanciar (crear objeto) una clase y que sea obligatorio asignar un atributo en la misma creacion de la instancia
                        // se implementan tambien fuera de la clase y fuera del main, igual que un metodo de clase
                        
                        
                         //Constructor con atributos OBLIGATORIOS Implementacion : 
                            /*
                                NombreClase(tipoDato nombreAtributoConstructor){
                                    this.nombreAtributo = nombreAtributoConstructor;
                                }
                            */
                        
                
                
    return 0;
}


//funcion que calcula Iva, sobre funciones ver el apartado de funciones
float calcularIva(float totalSinIva){
    return totalSinIva * 0.21;
}