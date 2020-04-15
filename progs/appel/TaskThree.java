class TaskThreeTest {
    public static void main(String[] args) {
        System.out.println(new TaskThree().TestThree(true,false));
        //Outputs 0 or 1 in the command prompt
    }
}

class TaskThree{
    public int TestThree(boolean argumentOne, boolean argumentTwo) {
        // Variable to store results from test
        boolean output;


        output = argumentOne || argumentTwo;

        // Output = 1 if argumentOne | argumentTwo = true
        if (output) {
            System.out.println(1);
        } else {
            // Output = 0 if argumentOne | argumentTwo = false
            System.out.println(0);
        }
        return 0;
    }
}
