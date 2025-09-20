n = int(input("Enter size of array: "))
arr = list(map(int, input(f"Enter {n} elements: ").split()))
result = [x for x in arr if x != 0] + [0]*(arr.count(0))
print("Array after moving zeros:", result)