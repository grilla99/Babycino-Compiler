class Task4PointThree {
    public static void main(String[] args) {
        if (true || new TestStructure().aBoolean()) {
            System.out.println(5);
        } else {
            //do nothing
        }
    }
}

class TestStructure {
    public boolean aBoolean() {
        //If this prints then it means it hasn't short circuited
        System.out.println(1);
        return true;
    }
}