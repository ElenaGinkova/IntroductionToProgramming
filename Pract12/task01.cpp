bool containsDigit(int n, int k) 
{
    // Проверка на последната цифра
    if (n % 10 == k) 
    {
        return true;
    }
    
    // Базов случай: ако числото е 0 и не съдържа цифрата k, връщаме false
    if (n == 0) 
    {
        return false;
    }
    
    // Рекурсивен случай: преминаваме към следващата цифра
    return containsDigit(n / 10, k);
}
