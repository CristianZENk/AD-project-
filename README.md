# Maximizing Lobster Catch

## Description
This project implements a solution for the problem of maximizing lobster catch, where a fisherman needs to select lobsters to fill his net to its maximum capacity in order to maximize the total value of the catch while respecting the net's capacity limit.

## Problem
A fisherman explores a coastal region rich in lobsters, each with its own size (in centimeters) and value (in gold coins). The fisherman's net has a limited capacity, expressed in the total number of centimeters it can hold. Given a detailed list of the sizes and values of the lobsters available in that region, the task is to devise a strategy to select the lobsters in such a way as to maximize the total value of the catch while respecting the net's capacity limit.

## Example
### Available Lobsters:
- Lobster A: Size = 4 cm, Value = 20 gold coins
- Lobster B: Size = 3 cm, Value = 15 gold coins
- Lobster C: Size = 2 cm, Value = 10 gold coins
- Lobster D: Size = 5 cm, Value = 25 gold coins

### Net Capacity: 10 cm

The challenge is to select the combination of lobsters that maximizes the total value without exceeding a total size of 10 cm.

### Solution
One possible solution would involve choosing lobsters A and C, giving us a total size of 6 cm (4 cm + 2 cm) and a total value of 30 gold coins (20 + 10). However, a better solution would be to choose lobsters B, C, and D, which together have a total size of 10 cm (3 cm + 2 cm + 5 cm) and provide a higher total value of 50 gold coins (15 + 10 + 25). This combination exactly fills the net's capacity and maximizes the value of the catch.

## Usage
To use this program, compile and run the source code available in this repository. The program will prompt for the number of lobsters, their sizes and values, as well as the net's capacity. After entering the data, the program will display the maximum value of the catch and the lobsters included in the net to achieve this maximum value.

## Contributions
Contributions are welcome! If you have suggestions for improving the code or documentation, please submit a pull request.

## License
This project is licensed under the [MIT License](LICENSE).
