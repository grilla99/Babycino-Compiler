class TaskTwoTest {
    public static void main(String[] args) {
        System.out.println(new TaskTwo().TestTwo(1,true));
    }
}

class TaskTwo{
    public int TestTwo(int argumentOne, boolean argumentTwo) {
        // Variables to store results from test
        int outputOne;
        boolean outputTwo;

        outputOne = argumentOne || argumentOne; // Will reject as statement consists of two integers
        outputTwo = argumentTwo || argumentTwo; // Will reject as statement returns an integer
        return 0;
    }
}