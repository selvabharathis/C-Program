/*
 * @2020.
 */

package pelatro;

/*
 * @author Selvabharathi S
 */
class ATen{
    int i=1;
    ATen(){
        int i=3;
        System.out.println("A in");
    }
}
class BTen extends ATen{
    void execute(){
        System.out.println(i);
    }
}
public class PelatroTen {
    public static void main(String args[]){
        int i=4;
        BTen a = new BTen();
        a.execute();
    }
}
