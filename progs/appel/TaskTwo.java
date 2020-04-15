class TaskTwoTest {
    public static void main(String[] args) {
        System.out.println(new TaskTwo().TestTwo(1,true));
    }
}

class TaskTwo{
    public int TestTwo(int argumentOne, boolean argumentTwo) {
        // Variables to store results from test
        boolean outputOne;
        boolean outputTwo;

        outputOne = argumentOne || argumentTwo;
        outputTwo = argumentOne || argumentOne;

        return 0;
    }
}