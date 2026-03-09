from utils import benchmark, generate_random_array
from sorting import bubble_sort, merge_sort, quick_sort, insertion_sort

if __name__ == "__main__":
    sizes = [100, 500, 1000, 5000]
    algos = {
        "Bubble Sort":    bubble_sort,
        "Insertion Sort": insertion_sort,
        "Merge Sort":     merge_sort,
        "Quick Sort":     quick_sort,
    }
    for n in sizes:
        print(f"\n--- n={n} ---")
        arr = generate_random_array(n)
        for name, fn in algos.items():
            benchmark(fn, arr, label=name)
