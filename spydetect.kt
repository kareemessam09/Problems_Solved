

import java.util.Scanner


fun findUniqueElementIndex(a: IntArray): Int {
    val uniqueElement  = a.groupBy { it }.entries.find { it.value.size == 1 }?.key
    return a.indexOf(uniqueElement!!.toInt()) + 1
}

fun main() {
val scanner = Scanner(System.`in`)
var t = scanner.nextInt()
while (t-- > 0) {
    val n = scanner.nextInt()
    val elements = IntArray(n) { scanner.nextInt() }
    val index = findUniqueElementIndex(elements)
    println(index)
    }
}

