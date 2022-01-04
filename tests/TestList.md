
# List of tests

With the provided executable, `CaesarEncrypt()` and `CaesarDecrypt()` functions can be tested according to the folowing table:
| Test name | Description | Expected result | Passed |
|---|---|---|---|
| Big Key | Use a key greater than 25 | Wrap around (mod 26) | [x] |
| Encrypt wrap | Use a letter near the end of alphabet and a key big enough, so that the encrypted symbol should be at the begining of the alphabet. (eg. 'y' + 3 = 'b') | 'b' (for the example) | [x] |
| Decrypt wrap | Use a letter at the begining of alphabet and a key big enough, so that the decrypted symbol should be at the end of the alphabet. (eg. 'a' - 3 = 'x') | 'x' (for the example) | [x] |
| Space E | Encrypt a string with spaces | string encripted | [x] |
| Space D | Decrypt a string with spaces | string decripted | [x] |
| UP/Down | Encrypt/decript upper and lower case letters| letter correctly encrypted or decrypted | [x] |
| Non alpha | Encrypt/decrypt non alphabetic characters | character does not change | [x] |

> For debugging purposes the `assert()` function was also used in the code.  
> For this function to work, please comment the line  
> `#define NDEBUG`  
> and recompile and link the code, to produce a new `.exe` file.  
> Then, try to use negative numbers in the `key` to **encript** ou **decrypt** the text.  
> You should get an **assert error**.  
>
> You can also use `CyphersDBG.exe` included on the **Latest Release**.  
>