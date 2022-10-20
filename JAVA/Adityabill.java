//Roll No: 21BCP166
//Aditya Jethani
//creating a program to calculate the average bill amount
//using method overloading, method overriding, static and non-static methods
//and constructors
//getter ,setter and toString methods


import java.util.*;
//declaring the bill class
class Bill {
    public int billNumber;
    public float units_of_consumption;
    public float unit_rate;
    public static int count;

    // Default construtor
    {
        count = count + 1;
    }
//constructor 
    Bill(int billNumber) {          //using this keyword 
        this.billNumber = billNumber;
    }

    Bill(int billNumber, float units_of_consumption, float unit_rate) {             //using this keyword
        this.billNumber = billNumber;
        this.units_of_consumption = units_of_consumption;
        this.unit_rate = unit_rate;
    }

    Bill(Bill b) {
        this.billNumber = b.billNumber;
        this.units_of_consumption = b.units_of_consumption;
        this.unit_rate = b.unit_rate;
    }

    //getter method
    public static int getTotalCount() {
        return count;
    }

    public static boolean equals(Bill b1, Bill b2) {
        return b1.billNumber == b2.billNumber;
    }

    //getter method
    public int getBillNumber() {
        return this.billNumber;
    }
    
    //getter method
    public float getUnitsOfConsumption() {
        return this.units_of_consumption;
    }

    //setter mmethod
    public void setUnitsOfConsumption(float units_of_consumption) {
        this.units_of_consumption = units_of_consumption;
    }

    public float getUnitRate() {
        return this.unit_rate;
    }

    public void setUnitRate(float unit_rate) {
        this.unit_rate = unit_rate;
    }

    public float getBillAmount() {
        return this.units_of_consumption * this.unit_rate;
    }
    //explicit conversion of numbers to string
    public String toString() {
        return "Bill No.: " + billNumber +
                "\nUnits of Consumption: " + units_of_consumption +
                "\nUnit Rate:" + unit_rate + "\n";
    }
}
    //extending elements of class bill externally
class ElectricityBill extends Bill {
    public float fixed_charge;
    //constructor for electricity bill 
    ElectricityBill(int billNumber, float units_of_consumption, float unit_rate, float fixed_charge) {
        super(billNumber, units_of_consumption, unit_rate);
        this.fixed_charge = fixed_charge;
    }
    //constructor
    ElectricityBill(int billNumber) {
        super(billNumber);
    }
    //constructor
    ElectricityBill(ElectricityBill eb) {
        super(eb.billNumber, eb.units_of_consumption, eb.unit_rate);
        this.fixed_charge = eb.fixed_charge;
    }
    //getter method
    public int getBillNumber() {
        return super.billNumber;
    }

    public float getUnitsOfConsumption() {
        return super.units_of_consumption;
    }

    //setter method
    public void setUnitsOfConsumption(float units_of_consumption) {
        super.units_of_consumption = units_of_consumption;
    }
    //getter
    public float getUnitRate() {
        return super.unit_rate;
    }
    //setter
    public void setUnitRate(float unit_rate) {
        super.unit_rate = unit_rate;
    }
    //getter
    public float getFixedCharge() {
        return fixed_charge;
    }
    //setter
    public void setFixedCharge(float fixed_charge) {
        this.fixed_charge = fixed_charge;
    }
    //getter
    public float getBillAmount() {
        return super.getBillAmount() + fixed_charge;
    }
    //explicit conversion
    public String toString() {
        return "Electricity Bill:\nBill No.: " + super.billNumber +
                "\nUnits of Consumption: " + super.units_of_consumption +
                "\nUnit Rate: " + super.unit_rate +
                "\nFixed Charge: " + fixed_charge;
    }
}
    //main class where all the methods are called with objects
public class Adityabill {

    public static void main(String[] args) {        
        Bill b1 = new Bill(2000);               //new object b1 for bill class
        b1.units_of_consumption = 42;
        b1.unit_rate = 3;
        System.out.println(b1);
        System.out.println("Bill amount: " + b1.getBillAmount());
        Bill b2 = new Bill(3000);                       //new b2 object for bill class 
        b2.units_of_consumption = 69;                      
        b2.unit_rate = 3;
        System.out.println(b2);
        System.out.println("Bill amount: " + b2.getBillAmount());
        Bill b3 = new Bill(4000);                   //new b3 object for bill class
        b3.units_of_consumption = 169;
        b3.unit_rate = 3;
        System.out.println("Details for b3 " + b3);
        System.out.println("Bill amount: " + b3.getBillAmount());
        System.out.println("all bills are");
        System.out.println(b1.toString());
        System.out.println(b2.toString());
        System.out.println(b3.toString());
        System.out.println("Average");
        System.out.println(getAverageBillAmount(b1.getBillAmount(), b2.getBillAmount(), b3.getBillAmount()));               //calling the getter method
    }
//average bill function with getter method
    public static float getAverageBillAmount(float a, float b, float c) {
        float avg = 0;
        avg = (a + b + c) / 3;
        return avg;
    }
}