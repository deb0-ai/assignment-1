n = int(input("Enter size of array: "))
arr = list(map(int, input(f"Enter {n} elements: ").split()))
unique_arr = list(set(arr))
if len(unique_arr) < 2:
    print("No second largest element")
else:
    unique_arr.sort(reverse=True)
    print("Second largest element =", unique_arr[1])