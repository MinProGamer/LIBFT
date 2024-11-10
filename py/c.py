import sympy

# Given values from the problem
N = 51328431690246050000196200646927542588629192646276628974445855970986472407007
ciphertext = 9015202564552492364962954854291908723653545972440223723318311631007329746475
e = 65537

# Step 1: Factor N to find p and q
p, q = sympy.factorint(N).keys()

# Step 2: Calculate Euler's Totient (phi(N))
phi_N = (p - 1) * (q - 1)

# Step 3: Compute the private exponent d using extended Euclidean algorithm
d = sympy.mod_inverse(e, phi_N)

# Step 4: Decrypt the ciphertext
message = pow(ciphertext, d, N)

# Convert the long integer back to bytes
flag = sympy.ntheory.integer_nthroot(message, 1)[0]

# Print the flag
print(flag.decode())
