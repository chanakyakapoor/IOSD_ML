class node:
    def __init__(self, data):
        self.data = data
        self.next = None

class linked_list:
    def __init__(self):
        self.head = None
    def printList(self):
        tmp = self.head
        while(tmp):
            print(tmp.data, end = " ");
            tmp = tmp.next
    def makehead(self,data):
        self.head = node(data)
    def addnode(self, data):
        tmp = self.head
        while(tmp.next):
            tmp = tmp.next
        tmp.next = node(data)
    def deletenode(self, index):
        tmp = self.head
        if(index == 1):
            self.head = tmp.next
        else:
            cnt = 1
            while(tmp != None and cnt < index-1):
                tmp = tmp.next
                cnt+=1
            pos = tmp.next
            tmp.next = pos.next
            pos.next = None
    def reverse(self):
        if(self.head == None):
            print('The list is empty')
            return
        tmp = self.head
        prev = None
        while(tmp):
            next_node = tmp.next
            tmp.next = prev
            prev = tmp
            tmp = next_node
        self.head = prev
            
        

l = linked_list()
l.makehead(5)
l.addnode(3)
l.addnode(6)
l.addnode(10)
l.addnode(9)
l.addnode(2)
l.deletenode(4)
l.reverse()
l.printList()