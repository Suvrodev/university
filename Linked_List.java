class Node{
    int value;
    int key;
    Node next;
    public Node(){}
    public Node(int key, int value){
        this.value = value;
        this.key = key;
        this.next = null;
    }
    public boolean if_next(){
        return this.next != null;
    }
    public Node get_next(){
        return this.next;
    }
    public int get_value(){
        return this.value;
    }
    public void set_next(Node node){
        this.next = node;
    }
}

public class Linked_List{
    Node node_head = null;
    public Linked_List(){}
    public void add_last(int key, int value){
        Node new_node = new Node(key, value);
        if(node_head == null){
            node_head = new Node(key, value);
        }
        else{
            Node var = node_head;
            while(var.if_next()){
                var = var.get_next();
            }
            var.set_next(new_node);
        }
    }
    public void print_list(){
        Node var = node_head;
        System.out.print("[");
        while(var != null){
            System.out.print(" " + var.get_value());
            var = var.get_next();
        }
        System.out.println(" ]");
    }
    public void delete(int value){
        Node current = node_head;
        Node previous = null;
        while(current != null){
            if(current.get_value() == value){
                previous.set_next(current.get_next());
            }
            previous = current;
            current = current.get_next();
        }
    }
}