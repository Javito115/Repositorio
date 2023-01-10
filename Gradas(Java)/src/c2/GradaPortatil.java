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
public class GradaPortatil extends Grada{
    
    private int niveles;
    
    public GradaPortatil(int niveles, String zona, int numAsientos){
        super(zona, numAsientos);
        this.niveles = niveles;
    }
    
    public int getNiveles(){
        return this.niveles;
    }
    
    public void setNiveles(int niveles){
        this.niveles = niveles;
    }

    @Override
    public float costeLimpiar() {
        return (float) (super.getNumAsientos()*5*this.niveles);
    }
    
    @Override
    public String getTipo(){
        return "Portatil";
    }
    
    @Override
    public void desmontar(){
        this.setNiveles(0);
        System.out.println("Esta grada se ha desmontado");
    }
    
}
