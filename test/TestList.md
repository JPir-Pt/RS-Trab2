
# List of tests

| Name | Description | Expected result | Passed |
|---|---|---|---|
| Big Key | Use a key greater than 25 | Wrap around (mod 26) | [x] |
| Encrypt wrap | Use a letter near the end of alphabet and a key big enough, so that the encrypted symbol should be at the begining of the alphabet. (eg. 'y' + 3 = 'b') | 'b' (for the example) | [x] |
| Decrypt wrap | Use a letter at the begining of alphabet and a key big enough, so that the decrypted symbol should be at the end of the alphabet. (eg. 'a' - 3 = 'x') | 'x' (for the example) | [x] |
| Space E | Encrypt a string with spaces | string encripted | [x] |
| Space D | Decrypt a string with spaces | string decripted | [x] |
| UP/Down | Encrypt/decript upper and lower case symbols| correct encryption/decryption | [x] |
| Non alpha | Encrypt/decrypt non alphabetic characters | correct encryption/decryption | [x] |
