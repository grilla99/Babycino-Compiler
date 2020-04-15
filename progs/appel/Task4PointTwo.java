class Task4PointTwo {
    public static void main(String[] args) {
        System.out.println(new TaskFour().Test(false, true, true));
    }
}

class TaskFour{
    public int Test(boolean argumentOne, boolean argumentTwo, boolean argumentThree) {
        // Variables to store results from test
        int outputOne;

        //Argument one (LHS) will be false
        //Argument 2 will be true (true && true)
        if (argumentOne || (argumentThree && argumentTwo)) {
            //Assign 1 to output, indicating worked correctly
            outputOne = 1;
        } else {
            outputOne = 0;
        }

        return outputOne;
    }
}