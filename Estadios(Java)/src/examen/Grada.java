/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package examen;

/**
 *
 * @author javito
 */
public class Grada {
    
    private String zona;
    private int numAsientos;
    private int asientosOcupados;
    
    public Grada(String zona, int numAsientos){
        this.zona = zona;
        this.numAsientos = numAsientos;
        this.asientosOcupados = 0;
    }
    
    public Grada(int numAsientos){
        this("Tribuna", numAsientos);
    }
    
    public String getZona(){
        return zona;
    }
    
    public int getNumAsientos(){
        return  numAsientos;
    }
    
    public int getAsientosOcupados(){
        return asientosOcupados;
    }
    
    public void setAsientosOcupados(int asientos){
        if(asientos < 0 || asientos > this.numAsientos){
            System.out.println("No se pueden ocupar ese número de asientos, ya que es menor que 0 o mayor que el total de asientos");
        }
        else
            this.asientosOcupados = asientos;
    }
    
    
    
}
