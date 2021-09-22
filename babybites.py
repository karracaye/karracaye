def check(li):
    for i in range(len(li)):
        if int(li[i]) == i+1:
            continue
        else:
            return False
    return True
    
    
tc = int(input())
words = str(input()).split()[:tc]

for i in words:
    if i == 'mumble': words[words.index(i)] = words.index(i)+1
    
print('makes sense' if check(words) else 'something is fishy')
