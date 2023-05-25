#include <iostream>
#include <fstream>
using namespace std;
struct agua_de_dios{
	float temperatura_promedio;
	float porcentaje_humedad;
	float precipitacion;
	float duracion_estaciones;
	float superficie_cultivable;
	float rendimiento_historico;
};
struct alban{
	float temperatura_promedio;
	float porcentaje_humedad;
	float precipitacion;
	float duracion_estaciones;
	float superficie_cultivable;
	float rendimiento_historico;
};
struct bojaca{
	float temperatura_promedio;
	float porcentaje_humedad;
	float precipitacion;
	float duracion_estaciones;
	float superficie_cultivable;
	float rendimiento_historico;
};
struct cabrera{
	float temperatura_promedio;
	float porcentaje_humedad;
	float precipitacion;
	float duracion_estaciones;
	float superficie_cultivable;
	float rendimiento_historico;
};
struct cachipay{
	float temperatura_promedio;
	float porcentaje_humedad;
	float precipitacion;
	float duracion_estaciones;
	float superficie_cultivable;
	float rendimiento_historico;
};
struct cajica{
	float temperatura_promedio;
	float porcentaje_humedad;
	float precipitacion;
	float duracion_estaciones;
	float superficie_cultivable;
	float rendimiento_historico;
};
struct carmen_de_carupa{
	float temperatura_promedio;
	float porcentaje_humedad;
	float precipitacion;
	float duracion_estaciones;
	float superficie_cultivable;
	float rendimiento_historico;
};
struct chia{
	float temperatura_promedio;
	float porcentaje_humedad;
	float precipitacion;
	float duracion_estaciones;
	float superficie_cultivable;
	float rendimiento_historico;
};
struct facatativa{
	float temperatura_promedio;
	float porcentaje_humedad;
	float precipitacion;
	float duracion_estaciones;
	float superficie_cultivable;
	float rendimiento_historico;
};
struct cota{
	float temperatura_promedio;
	float porcentaje_humedad;
	float precipitacion;
	float duracion_estaciones;
	float superficie_cultivable;
	float rendimiento_historico;
};
struct funza{
	float temperatura_promedio;
	float porcentaje_humedad;
	float precipitacion;
	float duracion_estaciones;
	float superficie_cultivable;
	float rendimiento_historico;
};
struct la_calera{
	float temperatura_promedio;
	float porcentaje_humedad;
	float precipitacion;
	float duracion_estaciones;
	float superficie_cultivable;
	float rendimiento_historico;
};
void llenar(agua_de_dios& r1);
void llenar(alban& r2);
void llenar(bojaca& r3);
void llenar(cabrera& r4);
void llenar(cachipay& r5);
void llenar(cajica& r6);
void llenar(carmen_de_carupa& r7);
void llenar(chia& r8);
void llenar(facatativa& r9);
void llenar(cota& r10);
void llenar(funza& r11);
void llenar(la_calera& r12);

void almacenar(agua_de_dios& r1);
void almacenar(alban& r2);
void almacenar(bojaca& r3);
void almacenar(cabrera& r4);
void almacenar(cachipay& r5);
void almacenar(cajica& r6);
void almacenar(carmen_de_carupa& r7);
void almacenar(chia& r8);
void almacenar(facatativa& r9);
void almacenar(cota& r10);
void almacenar(funza& r11);
void almacenar(la_calera& r12);

void mostrar(agua_de_dios& r1);
void mostrar(alban& r2);
void mostrar(bojaca& r3);
void mostrar(cabrera& r4);
void mostrar(cachipay& r5);
void mostrar(cajica& r6);
void mostrar(carmen_de_carupa& r7);
void mostrar(chia& r8);
void mostrar(facatativa& r9);
void mostrar(cota& r10);
void mostrar(funza& r11);
void mostrar(la_calera& r12);

float produccion(agua_de_dios& r1);
float produccion(alban& r2);
float produccion(bojaca& r3);
float produccion(cabrera& r4);
float produccion(cachipay& r5);
float produccion(cajica& r6);
float produccion(carmen_de_carupa& r7);
float produccion(chia& r8);
float produccion(facatativa& r9);
float produccion(cota& r10);
float produccion(funza& r11);
float produccion(la_calera& r12);


int main(int argc, char *argv[]) {
	int region_opcional;
	
	agua_de_dios r1;
	alban r2;
	bojaca r3;
	cabrera r4;
	cachipay r5;
	cajica r6;
	carmen_de_carupa r7;
	chia r8;
	facatativa r9;
	cota r10;
	funza r11;
	la_calera r12;
	
	cout<<"De que region quieres escribir informacion"<<endl;
	cout<<"1. Agua de dios"<<endl;
	cout<<"2. Albana"<<endl;
	cout<<"3. Bojaca"<<endl;
	cout<<"4. Cabrera"<<endl;
	cout<<"5. Cachipay"<<endl;
	cout<<"6. Cajica"<<endl;
	cout<<"7. Carmen de carupa"<<endl;
	cout<<"8. Chia"<<endl;
	cout<<"9. Facatativa"<<endl;
	cout<<"10. Cota"<<endl;
	cout<<"11. Funza"<<endl;
	cout<<"12. La calera"<<endl;
	cin>>region_opcional;
	switch (region_opcional){
	case 1:
		llenar(r1);
		cout<<endl;
		almacenar(r1);
		mostrar(r1);
		cout<<endl;
		cout<<"La produccion es de: "<<produccion(r1);
		break;
	case 2:
		llenar(r2);
		cout<<endl;
		almacenar(r2);
		mostrar(r2);
		cout<<endl;
		cout<<"La produccion es de: "<<produccion(r2);
		break;
	case 3:
		llenar(r3);
		cout<<endl;
		almacenar(r3);
		mostrar(r3);
		cout<<endl;
		cout<<"La produccion es de: "<<produccion(r3);
		break;
	case 4:
		llenar(r4);
		cout<<endl;
		almacenar(r4);
		mostrar(r4);
		cout<<endl;
		cout<<"La produccion es de: "<<produccion(r4);
		break;
	case 5:
		llenar(r5);
		cout<<endl;
		almacenar(r5);
		mostrar(r5);
		cout<<endl;
		cout<<"La produccion es de: "<<produccion(r5);
		break;
	case 6:
		llenar(r6);
		cout<<endl;
		almacenar(r6);
		mostrar(r6);
		cout<<endl;
		cout<<"La produccion es de: "<<produccion(r6);
		break;
	case 7:
		llenar(r7);
		cout<<endl;
		almacenar(r7);
		mostrar(r7);
		cout<<endl;
		cout<<"La produccion es de: "<<produccion(r7);
		break;
	case 8:
		llenar(r8);
		cout<<endl;
		almacenar(r8);
		mostrar(r8);
		cout<<endl;
		cout<<"La produccion es de: "<<produccion(r8);
		break;
	case 9:
		llenar(r9);
		cout<<endl;
		almacenar(r9);
		mostrar(r9);
		cout<<endl;
		cout<<"La produccion es de: "<<produccion(r9);
		break;
	case 10:
		llenar(r10);
		cout<<endl;
		almacenar(r10);
		mostrar(r10);
		cout<<endl;
		cout<<"La produccion es de: "<<produccion(r10);
		break;
	case 11:
		llenar(r11);
		cout<<endl;
		almacenar(r11);
		mostrar(r11);
		cout<<endl;
		cout<<"La produccion es de: "<<produccion(r11);
		break;
	case 12:
		llenar(r12);
		cout<<endl;
		almacenar(r12);
		mostrar(r12);
		cout<<endl;
		cout<<"La produccion es de: "<<produccion(r12);
		break;
	default:
		cout<<"Numero ingresado no es valido, por favor intentelo de nuevo";
	}
	
	return 0;
}

void llenar(agua_de_dios& r1){
	cout<<"Temperatura promedio: ";
	cin>>r1.temperatura_promedio;
	cout<<"Porcentaje de humedad: ";
	cin>>r1.porcentaje_humedad;
	cout<<"Precipitacion: ";
	cin>>r1.precipitacion;
	cout<<"Duracion estaciones: ";
	cin>>r1.duracion_estaciones;
	cout<<"Superficie cultivable: ";
	cin>>r1.superficie_cultivable;
	cout<<"Rendimiento historico: ";
	cin>>r1.rendimiento_historico;
}
	
void llenar(alban& r2){
	cout<<"Temperatura promedio: ";
	cin>>r2.temperatura_promedio;
	cout<<"Porcentaje de humedad: ";
	cin>>r2.porcentaje_humedad;
	cout<<"Precipitacion: ";
	cin>>r2.precipitacion;
	cout<<"Duracion estaciones: ";
	cin>>r2.duracion_estaciones;
	cout<<"Superficie cultivable: ";
	cin>>r2.superficie_cultivable;
	cout<<"Rendimiento historico: ";
	cin>>r2.rendimiento_historico;
}
		
void llenar(bojaca& r3){
	cout<<"Temperatura promedio: ";
	cin>>r3.temperatura_promedio;
	cout<<"Porcentaje de humedad: ";
	cin>>r3.porcentaje_humedad;
	cout<<"Precipitacion: ";
	cin>>r3.precipitacion;
	cout<<"Duracion estaciones: ";
	cin>>r3.duracion_estaciones;
	cout<<"Superficie cultivable: ";
	cin>>r3.superficie_cultivable;
	cout<<"Rendimiento historico: ";
	cin>>r3.rendimiento_historico;
}
			
void llenar(cabrera& r4){
	cout<<"Temperatura promedio: ";
	cin>>r4.temperatura_promedio;
	cout<<"Porcentaje de humedad: ";
	cin>>r4.porcentaje_humedad;
	cout<<"Precipitacion: ";
	cin>>r4.precipitacion;
	cout<<"Duracion estaciones: ";
	cin>>r4.duracion_estaciones;
	cout<<"Superficie cultivable: ";
	cin>>r4.superficie_cultivable;
	cout<<"Rendimiento historico: ";
	cin>>r4.rendimiento_historico;
}
				
void llenar(cachipay& r5){
	cout<<"Temperatura promedio: ";
	cin>>r5.temperatura_promedio;
	cout<<"Porcentaje de humedad: ";
	cin>>r5.porcentaje_humedad;
	cout<<"Precipitacion: ";
	cin>>r5.precipitacion;
	cout<<"Duracion estaciones: ";
	cin>>r5.duracion_estaciones;
	cout<<"Superficie cultivable: ";
	cin>>r5.superficie_cultivable;
	cout<<"Rendimiento historico: ";
	cin>>r5.rendimiento_historico;
}
					
void llenar(cajica& r6){
	cout<<"Temperatura promedio: ";
	cin>>r6.temperatura_promedio;
	cout<<"Porcentaje de humedad: ";
	cin>>r6.porcentaje_humedad;
	cout<<"Precipitacion: ";
	cin>>r6.precipitacion;
	cout<<"Duracion estaciones: ";
	cin>>r6.duracion_estaciones;
	cout<<"Superficie cultivable: ";
	cin>>r6.superficie_cultivable;
	cout<<"Rendimiento historico: ";
	cin>>r6.rendimiento_historico;
}
						
void llenar(carmen_de_carupa& r7){
	cout<<"Temperatura promedio: ";
	cin>>r7.temperatura_promedio;
	cout<<"Porcentaje de humedad: ";
	cin>>r7.porcentaje_humedad;
	cout<<"Precipitacion: ";
	cin>>r7.precipitacion;
	cout<<"Duracion estaciones: ";
	cin>>r7.duracion_estaciones;
	cout<<"Superficie cultivable: ";
	cin>>r7.superficie_cultivable;
	cout<<"Rendimiento historico: ";
	cin>>r7.rendimiento_historico;
}
							
void llenar(chia& r8){
	cout<<"Temperatura promedio: ";
	cin>>r8.temperatura_promedio;
	cout<<"Porcentaje de humedad: ";
	cin>>r8.porcentaje_humedad;
	cout<<"Precipitacion: ";
	cin>>r8.precipitacion;
	cout<<"Duracion estaciones: ";
	cin>>r8.duracion_estaciones;
	cout<<"Superficie cultivable: ";
	cin>>r8.superficie_cultivable;
	cout<<"Rendimiento historico: ";
	cin>>r8.rendimiento_historico;
}
								
void llenar(facatativa& r9){
	cout<<"Temperatura promedio: ";
	cin>>r9.temperatura_promedio;
	cout<<"Porcentaje de humedad: ";
	cin>>r9.porcentaje_humedad;
	cout<<"Precipitacion: ";
	cin>>r9.precipitacion;
	cout<<"Duracion estaciones: ";
	cin>>r9.duracion_estaciones;
	cout<<"Superficie cultivable: ";
	cin>>r9.superficie_cultivable;
	cout<<"Rendimiento historico: ";
	cin>>r9.rendimiento_historico;
}
									
void llenar(cota& r10){
	cout<<"Temperatura promedio: ";
	cin>>r10.temperatura_promedio;
	cout<<"Porcentaje de humedad: ";
	cin>>r10.porcentaje_humedad;
	cout<<"Precipitacion: ";
	cin>>r10.precipitacion;
	cout<<"Duracion estaciones: ";
	cin>>r10.duracion_estaciones;
	cout<<"Superficie cultivable: ";
	cin>>r10.superficie_cultivable;
	cout<<"Rendimiento historico: ";
	cin>>r10.rendimiento_historico;
}
										
void llenar(funza& r11){
	cout<<"Temperatura promedio: ";
	cin>>r11.temperatura_promedio;
	cout<<"Porcentaje de humedad: ";
	cin>>r11.porcentaje_humedad;
	cout<<"Precipitacion: ";
	cin>>r11.precipitacion;
	cout<<"Duracion estaciones: ";
	cin>>r11.duracion_estaciones;
	cout<<"Superficie cultivable: ";
	cin>>r11.superficie_cultivable;
	cout<<"Rendimiento historico: ";
	cin>>r11.rendimiento_historico;
}
											
void llenar(la_calera& r12){
	cout<<"Temperatura promedio: ";
	cin>>r12.temperatura_promedio;
	cout<<"Porcentaje de humedad: ";
	cin>>r12.porcentaje_humedad;
	cout<<"Precipitacion: ";
	cin>>r12.precipitacion;
	cout<<"Duracion estaciones: ";
	cin>>r12.duracion_estaciones;
	cout<<"Superficie cultivable: ";
	cin>>r12.superficie_cultivable;
	cout<<"Rendimiento historico: ";
	cin>>r12.rendimiento_historico;
}
												
												
void almacenar(agua_de_dios& r1){
	ofstream ofs;
	ofs.open("D:\\Desktop\\archivos_proyecto_programacion\\agua_de_dios", ios::binary | ios::app);
	if (!ofs){
		cout <<"Error";
	}
	else{
		ofs.write((char*)&r1,sizeof(agua_de_dios));
		cout<<"Datos de la region agua de dios guardados"<<endl;
		ofs.close();
	}
}

void almacenar(alban& r2){
	ofstream ofs;
	ofs.open("D:\\Desktop\\archivos_proyecto_programacion\\alban", ios::binary | ios::app);
	if (!ofs){
		cout <<"Error";
	}
	else{
		ofs.write((char*)&r2,sizeof(alban));
		cout<<"Datos de la region alban guardados"<<endl;
		ofs.close();
	}
}
	
void almacenar(bojaca& r3){
	ofstream ofs;
	ofs.open("D:\\Desktop\\archivos_proyecto_programacion\\bojaca", ios::binary | ios::app);
	if (!ofs){
		cout <<"Error";
	}
	else{
		ofs.write((char*)&r3,sizeof(bojaca));
		cout<<"Datos de la bojaca guardados"<<endl;
		ofs.close();
	}
}	
	
void almacenar(cabrera& r4){
	ofstream ofs;
	ofs.open("D:\\Desktop\\archivos_proyecto_programacion\\cabrera", ios::binary | ios::app);
	if (!ofs){
		cout <<"Error";
	}
	else{
		ofs.write((char*)&r4,sizeof(cabrera));
		cout<<"Datos de la region cabrera guardados"<<endl;
		ofs.close();
	}
}	

void almacenar(cachipay& r5){
	ofstream ofs;
	ofs.open("D:\\Desktop\\archivos_proyecto_programacion\\cachipay", ios::binary | ios::app);
	if (!ofs){
		cout <<"Error";
	}
	else{
		ofs.write((char*)&r5,sizeof(cachipay));
		cout<<"Datos de la region cachipay guardados"<<endl;
		ofs.close();
	}
}

void almacenar(cajica& r6){
	ofstream ofs;
	ofs.open("D:\\Desktop\\archivos_proyecto_programacion\\cajica", ios::binary | ios::app);
	if (!ofs){
		cout <<"Error";
	}
	else{
		ofs.write((char*)&r6,sizeof(cajica));
		cout<<"Datos de la region cajica guardados"<<endl;
		ofs.close();
	}
}

void almacenar(carmen_de_carupa& r7){
	ofstream ofs;
	ofs.open("D:\\Desktop\\archivos_proyecto_programacion\\carmen_de_carupa", ios::binary | ios::app);
	if (!ofs){
		cout <<"Error";
	}
	else{
		ofs.write((char*)&r7,sizeof(carmen_de_carupa));
		cout<<"Datos de la region carmen de carupa guardados"<<endl;
		ofs.close();
	}
}

void almacenar(chia& r8){
	ofstream ofs;
	ofs.open("D:\\Desktop\\archivos_proyecto_programacion\\chia", ios::binary | ios::app);
	if (!ofs){
		cout <<"Error";
	}
	else{
		ofs.write((char*)&r8,sizeof(chia));
		cout<<"Datos de la region chia guardados"<<endl;
		ofs.close();
	}
}

void almacenar(facatativa& r9){
	ofstream ofs;
	ofs.open("D:\\Desktop\\archivos_proyecto_programacion\\facatativa", ios::binary | ios::app);
	if (!ofs){
		cout <<"Error";
	}
	else{
		ofs.write((char*)&r9,sizeof(facatativa));
		cout<<"Datos de la region facatativa guardados"<<endl;
		ofs.close();
	}
}
	
void almacenar(cota& r10){
	ofstream ofs;
	ofs.open("D:\\Desktop\\archivos_proyecto_programacion\\cota", ios::binary | ios::app);
	if (!ofs){
		cout <<"Error";
	}
	else{
		ofs.write((char*)&r10,sizeof(cota));
		cout<<"Datos de la region cota guardados"<<endl;
		ofs.close();
	}
}
		
void almacenar(funza& r11){
	ofstream ofs;
	ofs.open("D:\\Desktop\\archivos_proyecto_programacion\\funza", ios::binary | ios::app);
	if (!ofs){
		cout <<"Error";
	}
	else{
		ofs.write((char*)&r11,sizeof(funza));
		cout<<"Datos de la region funza guardados"<<endl;
		ofs.close();
	}
}
			
void almacenar(la_calera& r12){
	ofstream ofs;
	ofs.open("D:\\Desktop\\archivos_proyecto_programacion\\la_calera", ios::binary | ios::app);
	if (!ofs){
		cout <<"Error";
	}
	else{
		ofs.write((char*)&r12,sizeof(la_calera));
		cout<<"Datos de la region la calera guardados"<<endl;
		ofs.close();
	}
}


	


void mostrar(agua_de_dios& r1){
	ifstream ifs;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\agua_de_dios", ios::binary);
	if (!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r1,sizeof(agua_de_dios));
		while(!ifs.eof()){
			cout<<r1.temperatura_promedio<<" "<<r1.porcentaje_humedad<<" "<<r1.precipitacion<<" "<<r1.duracion_estaciones<<" "<<r1.superficie_cultivable<<" "<<r1.rendimiento_historico;
			ifs.read((char*)&r1,sizeof(agua_de_dios));
		}
	}
}

void mostrar(alban& r2){
	ifstream ifs;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\alban", ios::binary);
	if (!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r2,sizeof(alban));
		while(!ifs.eof()){
			cout<<r2.temperatura_promedio<<" "<<r2.porcentaje_humedad<<" "<<r2.precipitacion<<" "<<r2.duracion_estaciones<<" "<<r2.superficie_cultivable<<" "<<r2.rendimiento_historico;
			ifs.read((char*)&r2,sizeof(alban));
		}
	}
}

void mostrar(bojaca& r3){
	ifstream ifs;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\bojaca", ios::binary);
	if (!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r3,sizeof(bojaca));
		while(!ifs.eof()){
			cout<<r3.temperatura_promedio<<" "<<r3.porcentaje_humedad<<" "<<r3.precipitacion<<" "<<r3.duracion_estaciones<<" "<<r3.superficie_cultivable<<" "<<r3.rendimiento_historico;
			ifs.read((char*)&r3,sizeof(bojaca));
		}
	}
}

void mostrar(cabrera& r4){
	ifstream ifs;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\cabrera", ios::binary);
	if (!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r4,sizeof(cabrera));
		while(!ifs.eof()){
			cout<<r4.temperatura_promedio<<" "<<r4.porcentaje_humedad<<" "<<r4.precipitacion<<" "<<r4.duracion_estaciones<<" "<<r4.superficie_cultivable<<" "<<r4.rendimiento_historico;
			ifs.read((char*)&r4,sizeof(cabrera));
		}
	}
}

void mostrar(cachipay& r5){
	ifstream ifs;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\cachipay", ios::binary);
	if (!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r5,sizeof(cachipay));
		while(!ifs.eof()){
			cout<<r5.temperatura_promedio<<" "<<r5.porcentaje_humedad<<" "<<r5.precipitacion<<" "<<r5.duracion_estaciones<<" "<<r5.superficie_cultivable<<" "<<r5.rendimiento_historico;
			ifs.read((char*)&r5,sizeof(cachipay));
		}
	}
}

void mostrar(cajica& r6){
	ifstream ifs;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\cajica", ios::binary);
	if (!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r6,sizeof(chia));
		while(!ifs.eof()){
			cout<<r6.temperatura_promedio<<" "<<r6.porcentaje_humedad<<" "<<r6.precipitacion<<" "<<r6.duracion_estaciones<<" "<<r6.superficie_cultivable<<" "<<r6.rendimiento_historico;
			ifs.read((char*)&r6,sizeof(cajica));
		}
	}
}

void mostrar(carmen_de_carupa& r7){
	ifstream ifs;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\carmen_de_carupa", ios::binary);
	if (!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r7,sizeof(carmen_de_carupa));
		while(!ifs.eof()){
			cout<<r7.temperatura_promedio<<" "<<r7.porcentaje_humedad<<" "<<r7.precipitacion<<" "<<r7.duracion_estaciones<<" "<<r7.superficie_cultivable<<" "<<r7.rendimiento_historico;
			ifs.read((char*)&r7,sizeof(carmen_de_carupa));
		}
	}
}

void mostrar(chia& r8){
	ifstream ifs;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\chia", ios::binary);
	if (!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r8,sizeof(chia));
		while(!ifs.eof()){
			cout<<r8.temperatura_promedio<<" "<<r8.porcentaje_humedad<<" "<<r8.precipitacion<<" "<<r8.duracion_estaciones<<" "<<r8.superficie_cultivable<<" "<<r8.rendimiento_historico;
			ifs.read((char*)&r8,sizeof(chia));
		}
	}
}

void mostrar(facatativa& r9){
	ifstream ifs;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\facatativa", ios::binary);
	if (!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r9,sizeof(facatativa));
		while(!ifs.eof()){
			cout<<r9.temperatura_promedio<<" "<<r9.porcentaje_humedad<<" "<<r9.precipitacion<<" "<<r9.duracion_estaciones<<" "<<r9.superficie_cultivable<<" "<<r9.rendimiento_historico;
			ifs.read((char*)&r9,sizeof(facatativa));
		}
	}
}

void mostrar(cota& r10){
	ifstream ifs;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\cota", ios::binary);
	if (!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r10,sizeof(cota));
		while(!ifs.eof()){
			cout<<r10.temperatura_promedio<<" "<<r10.porcentaje_humedad<<" "<<r10.precipitacion<<" "<<r10.duracion_estaciones<<" "<<r10.superficie_cultivable<<" "<<r10.rendimiento_historico;
			ifs.read((char*)&r10,sizeof(cota));
		}
	}
}

void mostrar(funza& r11){
	ifstream ifs;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\funza", ios::binary);
	if (!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r11,sizeof(funza));
		while(!ifs.eof()){
			cout<<r11.temperatura_promedio<<" "<<r11.porcentaje_humedad<<" "<<r11.precipitacion<<" "<<r11.duracion_estaciones<<" "<<r11.superficie_cultivable<<" "<<r11.rendimiento_historico;
			ifs.read((char*)&r11,sizeof(funza));
		}
	}
}

void mostrar(la_calera& r12){
	ifstream ifs;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\la_calera", ios::binary);
	if (!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r12,sizeof(la_calera));
		while(!ifs.eof()){
			cout<<r12.temperatura_promedio<<" "<<r12.porcentaje_humedad<<" "<<r12.precipitacion<<" "<<r12.duracion_estaciones<<" "<<r12.superficie_cultivable<<" "<<r12.rendimiento_historico;
			ifs.read((char*)&r12,sizeof(la_calera));
		}
	}
}

float produccion(agua_de_dios& r1){
	ifstream ifs;
	float produccion_trigo=0,ajuste_climatico=0;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\agua_de_dios", ios::binary);
	if(!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r1,sizeof(agua_de_dios));
		ajuste_climatico=r1.temperatura_promedio*r1.porcentaje_humedad*r1.precipitacion*r1.duracion_estaciones;
	}
	produccion_trigo=r1.superficie_cultivable*r1.rendimiento_historico*ajuste_climatico;
	return produccion_trigo;
}

float produccion(alban& r2){
	ifstream ifs;
	float produccion_trigo=0,ajuste_climatico=0;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\alban", ios::binary);
	if(!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r2,sizeof(alban));
		ajuste_climatico=r2.temperatura_promedio*r2.porcentaje_humedad*r2.precipitacion*r2.duracion_estaciones;
	}
	produccion_trigo=r2.superficie_cultivable*r2.rendimiento_historico*ajuste_climatico;
	return produccion_trigo;
}

float produccion(bojaca& r3){
	ifstream ifs;
	float produccion_trigo=0,ajuste_climatico=0;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\bojaca", ios::binary);
	if(!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r3,sizeof(bojaca));
		ajuste_climatico=r3.temperatura_promedio*r3.porcentaje_humedad*r3.precipitacion*r3.duracion_estaciones;
	}
	produccion_trigo=r3.superficie_cultivable*r3.rendimiento_historico*ajuste_climatico;
	return produccion_trigo;
}

float produccion(cabrera& r4){
	ifstream ifs;
	float produccion_trigo=0,ajuste_climatico=0;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\cabrera", ios::binary);
	if(!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r4,sizeof(cabrera));
		ajuste_climatico=r4.temperatura_promedio*r4.porcentaje_humedad*r4.precipitacion*r4.duracion_estaciones;
	}
	produccion_trigo=r4.superficie_cultivable*r4.rendimiento_historico*ajuste_climatico;
	return produccion_trigo;
}

float produccion(cachipay& r5){
	ifstream ifs;
	float produccion_trigo=0,ajuste_climatico=0;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\cachipay", ios::binary);
	if(!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r5,sizeof(cachipay));
		ajuste_climatico=r5.temperatura_promedio*r5.porcentaje_humedad*r5.precipitacion*r5.duracion_estaciones;
	}
	produccion_trigo=r5.superficie_cultivable*r5.rendimiento_historico*ajuste_climatico;
	return produccion_trigo;
}
	
float produccion(cajica& r6){
	ifstream ifs;
	float produccion_trigo=0,ajuste_climatico=0;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\cajica", ios::binary);
	if(!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r6,sizeof(cajica));
		ajuste_climatico=r6.temperatura_promedio*r6.porcentaje_humedad*r6.precipitacion*r6.duracion_estaciones;
	}
	produccion_trigo=r6.superficie_cultivable*r6.rendimiento_historico*ajuste_climatico;
	return produccion_trigo;
}

float produccion(carmen_de_carupa& r7){
	ifstream ifs;
	float produccion_trigo=0,ajuste_climatico=0;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\carmen_de_carupa", ios::binary);
	if(!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r7,sizeof(carmen_de_carupa));
		ajuste_climatico=r7.temperatura_promedio*r7.porcentaje_humedad*r7.precipitacion*r7.duracion_estaciones;
	}
	produccion_trigo=r7.superficie_cultivable*r7.rendimiento_historico*ajuste_climatico;
	return produccion_trigo;
}

float produccion(chia& r8){
	ifstream ifs;
	float produccion_trigo=0,ajuste_climatico=0;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\chia", ios::binary);
	if(!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r8,sizeof(chia));
		ajuste_climatico=r8.temperatura_promedio*r8.porcentaje_humedad*r8.precipitacion*r8.duracion_estaciones;
	}
	produccion_trigo=r8.superficie_cultivable*r8.rendimiento_historico*ajuste_climatico;
	return produccion_trigo;
}

float produccion(facatativa& r9){
	ifstream ifs;
	float produccion_trigo=0,ajuste_climatico=0;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\facatativa", ios::binary);
	if(!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r9,sizeof(facatativa));
		ajuste_climatico=r9.temperatura_promedio*r9.porcentaje_humedad*r9.precipitacion*r9.duracion_estaciones;
	}
	produccion_trigo=r9.superficie_cultivable*r9.rendimiento_historico*ajuste_climatico;
	return produccion_trigo;
}

float produccion(cota& r10){
	ifstream ifs;
	float produccion_trigo=0,ajuste_climatico=0;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\cota", ios::binary);
	if(!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r10,sizeof(cota));
		ajuste_climatico=r10.temperatura_promedio*r10.porcentaje_humedad*r10.precipitacion*r10.duracion_estaciones;
	}
	produccion_trigo=r10.superficie_cultivable*r10.rendimiento_historico*ajuste_climatico;
	return produccion_trigo;
}

float produccion(funza& r11){
	ifstream ifs;
	float produccion_trigo=0,ajuste_climatico=0;
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\funza", ios::binary);
	if(!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r11,sizeof(funza));
		ajuste_climatico=r11.temperatura_promedio*r11.porcentaje_humedad*r11.precipitacion*r11.duracion_estaciones;
	}
	produccion_trigo=r11.superficie_cultivable*r11.rendimiento_historico*ajuste_climatico;
	return produccion_trigo;
}

float produccion(la_calera& r12){
	ifstream ifs;
	float produccion_trigo=0,ajuste_climatico=0;00
	ifs.open("D:\\Desktop\\archivos_proyecto_programacion\\la_calera", ios::binary);
	if(!ifs){
		cout<<"Error";
	}
	else{
		ifs.read((char*)&r12,sizeof(la_calera));
		ajuste_climatico=r12.temperatura_promedio*r12.porcentaje_humedad*r12.precipitacion*r12.duracion_estaciones;
	}
	produccion_trigo=r12.superficie_cultivable*r12.rendimiento_historico*ajuste_climatico;
	return produccion_trigo;
}

	
	
	
	
	
	
	
	
	
	
	
