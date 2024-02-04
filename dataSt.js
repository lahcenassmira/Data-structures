
function swap(arr, a, b) {
    let tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

function selectionSort(arr) {
    const length = arr.length;

    for (let i = 0; i < length - 1; i++) {
        let minIndex = i;
        for (let j = i + 1; j < length; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr, minIndex, i);
    }
}

function displayArray(arr) {
    console.log(arr.join(' '));
}

// Main
const arr = [20, 12, 10, 35, 25, 0];
console.log("Array before sorting:");
displayArray(arr);

selectionSort(arr);

console.log("Array after sorting in ascending order:");
displayArray(arr);

