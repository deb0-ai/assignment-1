n = int(input("Enter size of array: "))
arr = list(map(int, input(f"Enter {n} elements: ").split()))
arr = [arr[-1]] + arr[:-1]
print("Array after rotation:", arr)