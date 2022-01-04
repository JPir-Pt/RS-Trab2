
# \*\* Trabalho executado, passo a passo \*\*

## Desenvolvimento da função para encriptar

## Criação de um ramo para desencriptar

> desenvolvimento em paralelo com o ramo principal, onde está a função para **encriptar**

### teste do desencriptar

> Foi encontrado um ***erro***

### correção do erro

## Entretanto, no ramo principal

> foram acrescentados ao **gitignore**, 2 ficheiros específicos do **DevC++**

## Fusão dos 2 ramos

> O programa ficou completo com as funções para **encriptar** e **desencriptar**

## Actualização do README

> Completar a descrição do projecto

# Imagens

1. fusão dos dois ramos
![fusão dos ramos](images/Merge_decrypt.JPG)
2. sequência de commits
![Produto final](images/Log_after_updt_README.JPG)
3. sequência em modo resumo
![Produto final - resumo](images/logResumo.JPG)
4. sequência em modo resumo com tags
![Produto final - resumo com tags](images/logResumoTag.JPG)
5. resumo com instalação do LFS
![Produto final - resumo com LFS](images/logResumoLFS.JPG)

# \*\* Mudar o nome a um repositório remoto \*\*

> Esta sequência de ações muda automaticamente todos os links que associam o repositório local ao remoto

1. em github.com
    * escolher o repositório
    * abrir os *settings*
    * mudar o nome
    * clicar no botão *Rename*
2. se também quiser **mudar o nome da pasta do repositório local**
    * mudar o nome da pasta normalmente
    * abrir o cliente Github para Windows
        * surge a mensagem a informar que não foi encontrada a pasta local relativa ao repositório remoto
        * escolher a pasta com o novo nome

# \*\* Criar a documentação \*\*

> Foi usado o **Doxygen** para documentar o projecto.
>> Mudaram-se os comentários no código para respeitarem os requisitos do Doxygen.  
>> **Problema:** As imagens não apareciam na documentação.  
>> **Solução:** Até ao dia 31.12.2021, não foi possível encontrar uma solução.  
>> Em 31.12.2021 saiu uma correção do **Doxygen** para esse problema.  
>> Com o novo **Doxigen** foi necessário criar uma pasta com a duplicação das imagens.  
>> **NOTA:** A interface gráfica do novo **Doxygen** não funciona, o que ainda tornou o
>> processo mais difícil.  
>
> Estudou-se o **GitHub Pages** para publicação da documentação.
>  
> Foi criado um novo repositório para se poder publicar.
>  
> Instalou-se o **gitLFS**.  
>> **Problema:** As imagens aparecem no repositório local, mas não no remoto (Pages).  
>> **Solução:** Após várias tentativas, concluiu-se que não se pode usar o gitLFS.  
>>  
>> **Problema:** O código comentado aparece no repositório local, mas não no remoto (Pages).  
>> **Solução:** Foi bastante mais complicado de resolver. Ao navegar no site,
>> aparecia o erro **404: File not Found** sempre que se tentava aceder ao código comentado.
>> O mais estranho era que o ficheiro efectivamente estava no local certo do repositório. Ao
>> explorar o processo, verificou-se que há um `bot` que é executado sempre que se faz push no
>> repositório. Esse `bot` chama uma aplicação (**Jekill**) para criar as páginas `html`.  
>> O **Doxygen** coloca o caracter "_" do início do nome de alguns ficheiros.  
>> Por seu lado, o **Jekill** remove-o.  
>> Desta forma, os nomes estavam correctos no repositório, mas incorrectos no site.  
>> A solução é impedir o `bot` de executar o **Jekill**, publicando o site sem qualquer
>> processamento adicional.  
>> Para isso basta adicionar um ficheiro vazio `.nojekill` na raiz do repositório.

# \*\* Testes \*\*

> Utilização da função **assert()** para validar se o número da chave é positivo.  
> Criação de um executável `CyphersDBG.exe` específico para testes.
