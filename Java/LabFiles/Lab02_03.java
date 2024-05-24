package LabFiles;

public class Lab02_03 {
    public static void main(String[] args) {
        animal a1 = new animal();
    }
}

class animal {
    {
        System.out.println("Instantiation block");
    }

    static {

        System.out.println("Static block");
    }

    public animal() {

        System.out.println("constructor block");
    }
}
