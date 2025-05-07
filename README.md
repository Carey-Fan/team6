# Resize Image (Downscale by 2x)
- Objective: Reduce the size of the image by half in both width and height.
- Method: Average each 2x2 pixel block into a single pixel.
- Output: A smaller PPM file.
- Hint: Watch for image dimensions not divisible by 2.

# Compile code
```c
gcc -o resize_image image.c
```

# Run code
```sehll
./resize_image input.ppm output.ppm
```

## Windows (Using Executable)
```shell
resize_image.exe sample_640x426.ppm output.ppm
```

# test pull request
