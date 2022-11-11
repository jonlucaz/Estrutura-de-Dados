from pythonds.basic.stack import Stack


class Stack:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return self.items == []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        return self.items.pop()

    def conteudo(self):
        return print(self.items)

    def peek(self):
        return self.items[len(self.items) - 1]

    def size(self):
        return len(self.items)


# página 3.5

s = Stack()
print(s.is_empty())
s.push(5)
s.push('jon')
s.push('garrafa')

print(s.is_empty())
print(s.peek())
print(s.size())
s.conteudo()
