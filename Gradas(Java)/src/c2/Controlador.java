/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package c2;

import java.util.ArrayList;

/**
 *
 * @author javito
 */
public class Controlador {
    private int actual;
    private Vista vista;
    private Estadio estadio;
    
    public Controlador(Estadio estadio){
        this.estadio = estadio;
        this.actual = 0;
        this.vista = null;
    }
    
    public void setVista(Vista vista){
        this.vista = vista;
    }
    
    public String getGrada(){
        return estadio.getZona(actual);
    }
    
    public String getTipo(){
        return estadio.getTipo(actual);
    }
    
    public String getNombre(){
        return estadio.getNombre();
    }
    
    public void cambiar(){
        actual = (actual + 1) % estadio.getGradas().size();
        vista.actualizar();
    }
    
}
