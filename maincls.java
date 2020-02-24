public class maincls{
    public static void main(String[] args){
        Linked_List list = new Linked_List();
        for(int i = 0; i < 5; i++){
            list.add_last(i, 10 + i);
        }
        list.print_list();
        list.delete(12);
        list.print_list();
    }
}