#include <iostream>

class Reserva {
	private:
		std::string sala = "Sin sala";
		int personas = 1;
		int horaInicio = 1, horaFin = 23;
	public:
		void setSala(std::string s){if (s[0]) sala = s;}
		std::string getSala() { return sala;}
		void setPersonas(int p) {if(p >= 1 && p <= 20) personas = p;}
		int getPersonas() { return personas;}
		void setHoras(int hi, int hf) 
		{if (0 <= hi && hi < hf && hf <= 23) horaInicio = hi; horaFin = hf;}
		int getHoraInicio() { return horaInicio;}
		int getHoraFin() { return horaFin;}
};

int main() {
	Reserva r;
	std::string sala;
	int personas, horaInicio, horaFin;
	std::cout << "Ingresa la sala: ";
	getline(std::cin, sala);
	std::cout << "\n Ingresa la cantidad de personas(1-20): ";
	std::cin >> personas;
	std::cout << "\n Ingresa la hora de inicio y la hora de finalizacion (1-23): ";
	std::cin >> horaInicio >> horaFin;
	r.setSala(sala); r.setPersonas(personas); r.setHoras(horaInicio, horaFin);
	std::cout << "\nLos datos de su reserva son:\n" 
		  	<< "Sala: 			" << r.getSala() << '\n' 
		  	<< "Personas: 			" << r.getPersonas() << '\n'
		  	<< "Hora de Inicio: 		" << r.getHoraInicio() << '\n'
			<< "Hora de Finalizacion: 	" << r.getHoraFin() << '\n';
	return 0;
}
