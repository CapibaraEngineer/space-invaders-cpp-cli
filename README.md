# Space Invaders (ou quase)

Uma releitura para console do clássico Space Invaders, desenvolvida em C++.

## Recursos Utilizados

- C++ para desenvolvimento do jogo  
- Premake para automação da build  
- Ferramentas de build MSVC (Microsoft C++ Build Tools)  

> ***Observação:** O projeto utiliza Premake para geração dos arquivos de build, mas ainda não está devidamente configurado.*

---

## Configuração do projeto

Para gerar a solução do Visual Studio, execute o comando:

```bash
premake5 vs2022
```

## Compilação

> ***Importante:** Para compilar, certifique-se de iniciar o terminal no **Developer Command Prompt for VS 2022** ou ambiente equivalente com as ferramentas MSVC configuradas.*

Caso deseje compilar o projeto manualmente fora do Visual Studio, utilize o seguinte comando:

```bash
msbuild SpaceInvaders.sln /p:Configuration=Debug /p:Platform=x64
```

---

## Execução

Após a compilação, o executável estará disponível no caminho `.\build\bin\Debug-windows-x86_64\SpaceInvaders.exe`:

```plaintext
 .
└──  build
    └──  bin
        └──  Debug-windows-x86_64
            └──  SpaceInvaders.exe
```
