/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package examen;

import java.util.ArrayList;

/**
 *
 * @author javito
 */
public class Estadio {
    
    private static final int MAX_GRADAS = 4;
    private String nombre;
    private ArrayList<Grada> gradas = new ArrayList<Grada>();
    
    public Estadio(String nombre){
        this.nombre = nombre;
    }
    
    public void addGrada(String zona, int numAsientos){
        if(gradas.size() >= 4){
            System.out.println("No se pueden añadir más gradas");
        }
        else{
            Grada temporal = new Grada(zona, numAsientos);
            gradas.add(temporal);
        }
        
    }
    
    public void addGrada(int numAsientos){
        if(gradas.size() >= 4){
            System.out.println("No se pueden añadir más gradas");
        }
        else{
            Grada temporal1 = new Grada(numAsientos);
            gradas.add(temporal1);
        }
    }
    
    public Grada getGrada(String zona){
        Grada copia;
        for(int i = 0; i < gradas.size(); i++){
            if(gradas.get(i).getZona() == zona){
                copia = gradas.get(i);
                return copia;
            }
        }
        System.out.println("No existe esa grada");
        return null;
    }
    
    public int asientosLibres(){
        int asientosLibres = 0, capacidad, ocupados;
        
        for(int i = 0; i < gradas.size(); i++){
            capacidad = gradas.get(i).getNumAsientos();
            ocupados = gradas.get(i).getAsientosOcupados();
            asientosLibres = asientosLibres + (capacidad - ocupados);
        }
        return asientosLibres;
    }
    
    public String zonas(){
        String cadena = "Zonas con huecos: ";
        String zona;
        int capacidad, ocupados;
        for(int i = 0; i < gradas.size(); i++){
            capacidad = gradas.get(i).getNumAsientos();
            ocupados = gradas.get(i).getAsientosOcupados();
            
            if(capacidad > ocupados){
                zona = gradas.get(i).getZona();
                cadena = cadena + zona + " ";
            }
        }
        return cadena;
    }
    
}
