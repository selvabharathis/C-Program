/*
 * @2020.
 */

package wileynxtcodingcontest;

/*
 * @author Selvabharathi S
 */
public abstract class Account {
    
    String name,StartDate,endDate;
    int accNumber,balance;
    
    Account(String name,String startDate,String endDate,int accNumber,int balance){
        this.name = name;
        this.StartDate = startDate;
        this.endDate = endDate;
        this.accNumber = accNumber;
        this.balance = balance;
    }
    
    abstract double calculateInterest(String dueDate);
    
}
