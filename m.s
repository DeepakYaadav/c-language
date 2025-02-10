_start:
    addi x1, x0, 2      # x1 = 2
    addi x2, x0, 5      # x2 = 5
    addi x3, x0, 0      # x3 = 0

repeat_addition:
    add x3, x3, x1      # x3 = x3 + x1
    addi x2, x2, -1     # x2 = x2 - 1
    bne x2, x0, repeat_addition  # If x2 != 0, repeat loop

end:
    j end               # Infinite loop to stop execution

