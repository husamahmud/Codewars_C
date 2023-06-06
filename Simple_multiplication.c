int simple_multiplication(int number)
{
  return number % 2 == 0 ? number * 8 : number * 9;
  // return number * (number % 2 == 0 ? 8 : 9);
}