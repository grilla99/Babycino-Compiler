class TaskOneTest {
    public static void main(String[] args) {
        System.out.println(new TaskOne().TestOne());
    }
}

class TaskOne {
    public int TestOne() {
        int output;
        //If statement demonstrates use of || in evaluating
        if (false || true) {
            //Will print out the line below if condition evaluates to true
            output = 1;
        } else {
            // Condition must have evaluated to false
            output = 0;
        }
        return output;
    }
}