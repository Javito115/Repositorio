package c2;

import java.util.ArrayList;

public class Estadio{
    private static int MAX_GRADAS = 4;

    private String nombre;
    private ArrayList<Grada> gradas;

    public Estadio(String nombre) {
        this.nombre = nombre;
        this.gradas = new ArrayList<>();
    }

    public void addGradaFija(int anioConstruccion, String zona, int numAsientos) {
        if (this.gradas.size() == Estadio.MAX_GRADAS) System.out.println("No se pueden añadir más gradas");
        else {
            GradaFija temporal = new GradaFija(anioConstruccion, zona, numAsientos);
            this.gradas.add(temporal);
        }
    }
    
    public void addGradaPortatil(int niveles, String zona, int numAsientos) {
        if (this.gradas.size() == Estadio.MAX_GRADAS) System.out.println("No se pueden añadir más gradas");
        else {
            GradaPortatil temporal = new GradaPortatil(niveles, zona, numAsientos);
            this.gradas.add(temporal);
        }
    }
    
    public Grada getGrada(String zona) {
        for (Grada grada: this.gradas) 
            if (grada.getZona().equals(zona)) {
                return grada;
            }
        System.err.println("No existe la grada " + zona);
        return null;
    }
    
    public String getZona(int actual){
        return gradas.get(actual).getZona();
    }
    
    public String getTipo(int actual){
        return gradas.get(actual).getTipo();
    }
    
    public int asientosLibres() {
        int sum = 0;
        for(Grada grada: this.gradas) {
            sum += grada.getNumAsientos()-grada.getAsientosOcupados();
        }
        return sum;
    }

    public String zonas() { // 1
        String cadena = "Zonas con huecos: "; // comentario
        for(Grada grada: this.gradas) { // 1.1
            int capacidad = grada.getNumAsientos(); // 1.2
            int ocupados = grada.getAsientosOcupados(); // 1.2
            if (capacidad > ocupados) {
                String zona = grada.getZona(); // 1.3
                cadena += zona + " "; // comentario
            }
        }
        return cadena; // 1
    }

    public String getNombre() {
        return nombre;
    }

    public ArrayList<Grada> getGradas() {
        return gradas;
    }
}
