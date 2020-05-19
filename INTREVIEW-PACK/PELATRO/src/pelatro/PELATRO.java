/*
 * @2020.
 */
package pelatro;

/**
 *
 * @author Selvabharathi S
 */
class X{
    static void staticMethod(){
        System.out.println("Class X");
    }
}
class Y extends X
{
    static void staticMethod(){
        System.out.println("Class Y");
    }
}
public class PELATRO {    
    public static void main(String[] args) {
        Y.staticMethod();
    }
    
}
