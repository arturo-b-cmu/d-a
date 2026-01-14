#linear search algorithms does not matter the order of the elements
    #O(n) (worst case) Time complexity dependent on the size of lst or 'n'
def linearSearch(lst, target):
    for i in range(len(lst)):
        if lst[i] == target: #the intrinsic operation is the comparision
            return True
    return False
        


def recursiveLS(lst, target): #worst case O(n)^2
    if lst == []: #O(1)
        return False
    elif lst[0] == target: #O(1)
        return True
    else:
        smallerProblem = lst[1:] #list slicing is an operation that takes O(n)
        smallerResult = recursiveLS(smallerProblem, target)
        return smallerResult #change