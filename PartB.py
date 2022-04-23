

def merge_sort(list):
    full_array = []
    for array in list:
        for element in array:
            full_array += element

    n = len(full_array)
    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if full_array[j] > full_array[j + 1]:
                full_array[j], full_array[j + 1] = full_array[j + 1], full_array[j]

    print(full_array)


Array_1  =[ [2, 5, 9, 21],
       [-1, 0, 2],
       [-10, 81, 121],
       [4, 6, 12, 20, 150]]

Array_2  =[ [10, 17, 18, 21, 29],
       [-3, 0, 3, 7, 8, 11],
       [81, 88, 121, 131],
       [9, 11, 12, 19, 29] ]

Array_3  =[ [-4, -2, 0, 2, 7],
       [4, 6, 12, 14],
       [10, 15, 25],
       [5, 6, 10, 20, 24] ]

print("Array 1:")
merge_sort([Array_1])

print("")
print("")

print("Array 2:")
merge_sort([Array_2])

print("")
print("")

print("Array 3:")
merge_sort([Array_3])
