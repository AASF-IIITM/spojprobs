pattern = input()
n = int(input())
result = []
for i in range(n):
    text = input()
    if text.endswith(pattern):
        result.append(text)
if len(result) == 0:
    print('Wrong fingerprints!')
else:
    print(len(result))
    for text in sorted(result):
        print(text)