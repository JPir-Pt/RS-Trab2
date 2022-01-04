# Documentation and development

## How to create documentation for this project

1. Install [Doxygen](https://www.doxygen.nl/download.html).
2. Edit `Doxyfile` published in this folder and change path in `OUTPUT_DIRECTORY`
and in `INPUT` according to the location of your local repository.
3. To generate `html` documentation files, from the folder where you saved `Doxyfile`
opend a `cmd` prompt and execute the command  

```
Doxygen Doxyfile
```

### or

1. Install [Doxygen](https://www.doxygen.nl/download.html).
2. Run `Doxywizard`
3. From the `File`menu choose `Open`and select the `Doxyfile`
4. Follow the wizard's instructions

## Improving the package

Best way to improve is creating a local repository and develop your changes there.

```
git clone https://github.com/JPir-Pt/RS-Trab2.git
cd RS-Trab2
```

To produce the `.exe` file, just compile and link the `Cyphers.cpp`file  
**or**  
delete the `main()` function from the code and include `Cyphers.cpp` on your project file.  

## Testing

To test the code follow the instructions on `TestList.md` file located on `Tests` folder.  
For easier use, the **Latest release** includes 2 binary executable files  

* `Cyphers.exe` compiled without debugger information
* `CyphersDBG.exe` compiled with debugger information
