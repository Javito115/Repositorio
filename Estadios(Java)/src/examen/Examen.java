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
public class Examen {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Estadio estadio1 = new Estadio("Los Carmenes");
        
        estadio1.addGrada(5000);
        estadio1.addGrada("Preferencia", 5000);
        estadio1.addGrada("Fondo norte", 2500);
        estadio1.addGrada("Fondo sur", 2500);
        estadio1.addGrada("Esquina", 1000);
        
        System.out.println("La grada Tribuna tiene: " + estadio1.getGrada("Tribuna").getNumAsientos());
        System.out.println("El estadio tiene: " + estadio1.asientosLibres());
        System.out.println(estadio1.zonas());
    }
    
}
