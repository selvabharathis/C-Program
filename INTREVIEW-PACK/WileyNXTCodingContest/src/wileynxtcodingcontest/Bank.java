/*
 * @2020.
QUESTION:
            Consider a banking scenario where you have different types of accounts like current account, savings account
which inherits the base class account.
create a base class account with the fields-string name, int number, int balance and date startdate.
create two subclasses currentaccount and savingsaccount which extends account.

declare a method in account class - calculateinterest which would return the interest(double) and get duedate(date) as
parameter. Since the account class itself does not know how to compute calculateinterest, we mark the method and class
abstract.

in savingsaccount and currentaccount- the interest is calculated as simple interest.(interest 12% for the savings account and
5% for the current account.

sample input-1:
    karthick
    101521502
    7000
    22/04/2013
    22/04/2016
sample output-1:
    2520.0

sample input-2:
    karthick
    111521502
    4000
    22/04/2014
    22/04/2015
sample output-2
    200.0
 */
package wileynxtcodingcontest;

import java.util.Scanner;

/**
 *
 * @author Selvabharathi S
 */
public class Bank {

    public static void main(String[] args) {
        Scanner getInput = new Scanner(System.in);
        int choiseOfAccount = getInput.nextInt();
        String customerName = getInput.next();
        int accountNumber = getInput.nextInt();
        int amount = getInput.nextInt();
        String startDate = getInput.next();
        String endDate = getInput.next();
        if(choiseOfAccount == 1){
            CurrentAccount myCustomerCurrent = new CurrentAccount(customerName,startDate,endDate,accountNumber,amount);
            String[] myArrayStart = startDate.split("/");
            String[] myArrEnd = endDate.split("/");
            int a = Integer.parseInt(myArrayStart[2]);
            int b = Integer.parseInt(myArrEnd[2]);
            String dueDate = String.valueOf(b-a);
            System.out.println(myCustomerCurrent.calculateInterest(dueDate));
        }else{
            SavingsAccount myCustomerSavings = new SavingsAccount(customerName,startDate,endDate,accountNumber,amount);
            String[] myArrayStart = startDate.split("/");
            String[] myArrEnd = endDate.split("/");
            int a = Integer.parseInt(myArrayStart[2]);
            int b = Integer.parseInt(myArrEnd[2]);
            String dueDate = String.valueOf(b-a);
            System.out.println(myCustomerSavings.calculateInterest(dueDate));
        }
    }
    
}
