import time
from typing import Callable


def benchmark(fn: Callable, arr: list, label: str = "") -> float:
    """Return execution time in ms for a sort function."""
    import copy
    data = copy.deepcopy(arr)
    start = time.perf_counter()
    fn(data)
    elapsed = (time.perf_counter() - start) * 1000
    if label:
        print(f"{label}: {elapsed:.3f} ms")
    return elapsed


def generate_random_array(n: int, lo: int = 0, hi: int = 10000) -> list:
    return [random.randint(lo, hi) for _ in range(n)]


def is_sorted(arr: list) -> bool:
    return all(arr[i] <= arr[i + 1] for i in range(len(arr) - 1))
