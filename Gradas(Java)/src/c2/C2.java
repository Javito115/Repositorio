package c2;

public class C2 {

    public static void main(String[] args) {
        Estadio losCarmenes = new Estadio("Los Cármenes");

        //a
        System.out.println("Apartado A");
        losCarmenes.addGradaFija(1990, "Preferencia", 5000);
        losCarmenes.addGradaFija(1970, "Tribuna", 7000);
        losCarmenes.addGradaPortatil(2, "Esquina", 1000);
        System.out.println("El coste de limpiar la grada Preferencia es de : " + losCarmenes.getGrada("Preferencia").costeLimpiar());
        System.out.println("El coste de limpiar la grada Tribuna es de : " + losCarmenes.getGrada("Tribuna").costeLimpiar());
        System.out.println("El coste de limpiar la grada Esquina es de : " + losCarmenes.getGrada("Esquina").costeLimpiar());
       
        
        //b
        System.out.println("Apartado B");
        losCarmenes.getGrada("Esquina").desmontar();
        System.out.println("El coste de limpiar la grada Preferencia es de : " + losCarmenes.getGrada("Preferencia").costeLimpiar());
        System.out.println("El coste de limpiar la grada Tribuna es de : " + losCarmenes.getGrada("Tribuna").costeLimpiar());
        System.out.println("El coste de limpiar la grada Esquina es de : " + losCarmenes.getGrada("Esquina").costeLimpiar());
        //c        
        System.out.println("Apartado C");
        Controlador controlador = new Controlador(losCarmenes);
        Vista vista = new Vista(controlador);
    }
}
