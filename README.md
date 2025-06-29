# Space Invaders (ou quase)

Uma releitura para console do clássico Space Invaders, desenvolvida em C++.

## Recursos Utilizados

- ***C++20*** para desenvolvimento  
- ***Premake*** para automação de geração de projetos
- Ferramentas de build da sua escolha: **GCC**, **MSVC**, **Clang**, etc.

---

## Construindo a partir da Fonte

> *O projeto utiliza a API `<windows.h>`, então provavelmente não funciona fora do Windows. Quem sabe, um dia, eu dê um jeito nisso… (ou não)*.

### Pré-requisitos

- Ter o [Premake5](https://premake.github.io/) instalado.  
- Um compilador C++ compatível (GCC, MSVC, Clang, etc.).

### Gerando os arquivos de build

No terminal, dentro do diretório do projeto, execute um dos comandos abaixo conforme suas necessidades:

```bash
premake5 gmake  # Para Makefiles (GCC/MinGW)
premake5 vs2022 # Para .sln (Visual Studio)
```

Para outras opções de Build, consulte a [documentação oficial do Premake](https://premake.github.io/docs/Using-Premake/).

---

## Execução

Após a compilação, o executável estará disponível no caminho `.\build\bin\Debug-windows-x86_64\SpaceInvaders.exe`:

```plaintext
────build
    └───bin
        └───Debug-windows-x86_64
            └───SpaceInvaders.exe
```

> ***Observação:** Pode ajustar conforme o modo de build (Debug, Release) e sistema operacional (*em `.\premake5.lua`*).*
