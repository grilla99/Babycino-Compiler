class Task4PointOne {
    public static void main(String[] args) {
        System.out.println(new TaskFour().Test(false, false));
    }
}

class TaskFour{
    public int Test(boolean argumentOne, boolean argumentTwo) {
        // Variables to store results from test
        int outputOne;
        int outputTwo;

        if (argumentOne || argumentTwo) {
        //Output this if || = true , with one condition true
            outputOne = 1;
        } else {
            outputOne = 0;
        }

        return outputOne;
    }
}