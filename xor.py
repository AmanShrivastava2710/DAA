import heapq as heap

a = int(input())
for i in range(a):
        x,y,z = [int(x) for x in input().split()]
        if x == 1:
            a =int(input())
            if z%2==0:
                print(a)
            else:
                print(a^y)
        else:
            l = list(map(int, input().split()))
            heap.heapify(l)
            i =0
            while i<z:
                b = heap.heappop(l)
                c = b^ y
                heap.heappush(l,c)
                d = heap.heappop(l)
                i+=1
                if d==c:
                    if (z-i)%2==0:
                        heap.heappush(l,d)
                        break
                    else:
                        heap.heappush(l,b)
                        break
                else:
                    heap.heappush(l,d)
                    
            l.sort()
            print(*l)
        
