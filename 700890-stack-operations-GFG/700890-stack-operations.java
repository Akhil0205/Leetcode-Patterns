class MyStack {
    // Define your stack
    int[] arr;
    int top;
    int cap;
    
    public MyStack()
    {
        cap=1000;
        arr=new int[cap];
        top=-1;
    }

    public void push(int x) {
        // code here
        if(top>=cap-1)
        {
            System.out.println("Stack Overflow");
            return;
        }arr[++top]=x;
        
        
    }

    public void pop() {
        if(isEmpty())
        {
            System.out.println("Stack Underflow");
            return;
        }
        top--;
        
        // code here
    }

        
    public int peek() {
        if(isEmpty())
        {
            System.out.println("Stack is empty");
            return -1;
        }
        return arr[top];
        // code here
    }
        

    public int getSize() {
        // code here
        return top+1;
        
    }

    public boolean isEmpty() {
        return top==-1;
        // code here
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna