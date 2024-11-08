def encode_message(S):
    # Step 1: Swap pairs of characters
    S = list(input())
    N = len(S)
    for i in range(0, N-1, 2):
        S[i], S[i+1] = S[i+1], S[i]

    # Step 2: Replace 'a' with 'z', 'b' with 'y', ..., 'z' with 'a'
    encoded_message = ""
    for char in S:
        if 'a' <= char <= 'z':
            encoded_message += chr(ord('a') + (ord('z') - ord(char)))
        else:
            encoded_message += char

    return ''.join(encoded_message)
