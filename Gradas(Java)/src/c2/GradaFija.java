/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package c2;

/**
 *
 * @author javito
 */
public class GradaFija extends Grada{

    private int anioConstruccion;
    
    public GradaFija(int anioConstruccion, String zona, int numAsientos){
        super(zona, numAsientos);
        this.anioConstruccion = anioConstruccion;
    }
    
    public int getAnioConstruccion(){
        return this.anioConstruccion;
    }
    
    public void setAnioConstruccion(int anioConstruccion){
        this.anioConstruccion = anioConstruccion;
    }
    
    @Override
    public int getNumAsientos() {
        if(this.anioConstruccion < 1980)
            return super.getNumAsientos()/2;
        else
            return super.getNumAsientos();
        
    } 
    
    @Override
    public String getTipo(){
        return "Fija";
    }
    
    @Override
    public float costeLimpiar() {
        return (float) (this.getNumAsientos()*5*1.25);
    }
    
    @Override
    public void desmontar() {
        System.out.println("Esta grada no se puede desmontar");
    }
    
}
