/*
 * @2020.
 */

package wileynxtcodingcontest;

/*
 * @author Selvabharathi S
 */
public class SavingsAccount extends Account{
    
    SavingsAccount(String name,String startDate,String endDate,int accNumber,int balance){
        super(name,startDate,endDate,accNumber,balance);
    }
    
    double calculateInterest(String dueDate){
        int bal = super.balance;
        int time = Integer.parseInt(dueDate);
        return (bal*5*time)/100;
    }
    
}
