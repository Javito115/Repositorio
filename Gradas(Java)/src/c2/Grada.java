package c2;

public abstract class Grada {
    private String zona;
    private int numAsientos;
    private int asientosOcupados;

    public Grada(String zona, int numAsientos) {
        this.zona = zona;
        this.numAsientos = numAsientos;
        this.asientosOcupados = 0;
    }

    public int getAsientosOcupados() {
        return asientosOcupados;
    }
    public void setAsientosOcupados(int asientosOcupados) {
        if ((asientosOcupados < 0) || (asientosOcupados > this.numAsientos)) 
            System.err.println("Asientos ocupados no puede ser negativo");
        else this.asientosOcupados = asientosOcupados;
    }
    public String getZona() {
        return zona;
    }
    public int getNumAsientos() {
        return numAsientos;
    }    
    
    public abstract float costeLimpiar();
    
    public abstract String getTipo();
    
    public abstract void desmontar();
}
