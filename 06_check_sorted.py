n = int(input("Enter size of array: "))
arr = list(map(int, input(f"Enter {n} elements: ").split()))
if arr == sorted(arr):
    print("Array is sorted")
else:
    print("Array is not sorted")