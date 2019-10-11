""" 100 % AC Solution """


import array as money

tcases=int(input())

while(tcases!=0):
    
    noe=int(input())
    
    money=[int(m) for m in input().split()]
    
    k=int(input())
    x=int(input())
    
    totalmoney=0;
    i=0
    
    while (i<len(money)):
        totalmoney+=money[i]
        i=i + 1
    
    if x==0:
        result=totalmoney
        print(result)
    
    elif k==noe:
        maxamount=0
        j=0
        
        while (j<len(money)):
            val=money[j]^x
            maxamount+=val
            j=j + 1
            
        if(maxamount>=totalmoney):
            result=maxamount
            print(result)
        
        else:
            result=totalmoney
            print(result)
    
    else:
        counter=0
        totalmoney=0
        bags = []
        
        for amount in money:
            xorval= amount^x
            value=xorval-amount
            
            if value<=0:
                value*=-1
            
            else:
                value=value
            
            bags.append(value)
            
            if amount >= xorval:
                totalmoney = totalmoney + amount
            
            else:
                counter = counter + 1
                totalmoney = totalmoney + xorval
        
        bags.sort()
        if k%2==0:
            
            if counter % 2 == 0:
                result = totalmoney
                print(result)
            
            else:
                mindiff=totalmoney - bags[0]
                result = mindiff
                print(result)
        
        else:
            
            result = totalmoney
            print(result)
    
    tcases= tcases-1
    
                
            
            
        
        
