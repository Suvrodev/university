class Node{
    int value;
    Node next;
    public Node(int value){
        this.value = value;
        this.next = null;
    }
    public boolean has_next(){
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
    public void add_last(int value){
        Node new_node = new Node(value);
        if(node_head == null){
            node_head = new Node(value);
        }
        else{
            Node var;
            for(var = node_head; var.has_next(); var = var.get_next()){}
            var.set_next(new_node);
        }
    }
    public void traverse(){
        System.out.print("[");
        for(Node var = node_head; var != null; var = var.get_next()){
            System.out.print(" " + var.get_value());
        }
        System.out.println(" ]");
    }
    public void remove(int value){
        if(node_head.get_value() == value){
            node_head = node_head.get_next();
        }
        else{
            for(Node current = node_head, previous = null; current != null; previous = current, current = current.get_next()){
                if(current.get_value() == value){
                    previous.set_next(current.get_next());
                }
            }
        }
    }
    public void insert(int data, int position){
        int count = 0;
        Node new_data = new Node(data);
        if(position == 0){
            new_data.set_next(node_head);
            node_head = new_data;
        }
        else{
            for(Node var = node_head, previous = null; var != null; previous = var, var = var.get_next(), count++){
                if(position == count){
                    new_data.set_next(var);
                    previous.set_next(new_data);
                    break;
                }
            }
        }
    }
    public void insert_after(int data1, int data2){
        Node new_data = new Node(data2);
        if(node_head.get_value() == data1){
            new_data.set_next(node_head.get_next());
            node_head.set_next(new_data);
        }
        else{
            for(Node var = node_head; var != null; var = var.get_next()){
                if(var.get_value() == data1){
                    new_data.set_next(var.get_next());
                    var.set_next(new_data);
                    break;
                }
            }
        }
    }
}