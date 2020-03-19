public class maincls{
    public static void main(String[] args){
        Linked_List list = new Linked_List();
        for(int i = 0; i < 5; i++){
            list.add_last(10 + i);
        }
        list.traverse();
        list.insert_after(12, 21);
        list.traverse();
    }
}