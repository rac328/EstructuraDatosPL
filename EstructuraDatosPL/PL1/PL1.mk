##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PL1
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/raulc/Desktop/Clase/Universidad/2Carrera/1Cuatrimestre/EstructurasDeDatos/EstructuraDatosPL/EstructuraDatosPL
ProjectPath            :=C:/Users/raulc/Desktop/Clase/Universidad/2Carrera/1Cuatrimestre/EstructurasDeDatos/EstructuraDatosPL/EstructuraDatosPL/PL1
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/PL1
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=raulc
Date                   :=10/22/2024
CodeLitePath           :=C:/Users/raulc/Desktop/Programas/codelite-amd64-17.0.0/codelite
MakeDirCommand         :=mkdir
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/raulc/Desktop/Clase/Universidad/2Carrera/1Cuatrimestre/EstructurasDeDatos/EstructuraDatosPL/EstructuraDatosPL/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=C:\Users\raulc\Desktop\Programas\codelite-amd64-17.0.0\codelite
Objects0=$(IntermediateDirectory)/src_Proceso.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Lista.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Gestor.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Pila.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Cola.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_NodoListaDoble.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_NodoPila.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_NodoCola.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_ListaDobleEnlazada.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) \
	



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_Proceso.cpp$(ObjectSuffix): src/Proceso.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/raulc/Desktop/Clase/Universidad/2Carrera/1Cuatrimestre/EstructurasDeDatos/EstructuraDatosPL/EstructuraDatosPL/PL1/src/Proceso.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Proceso.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Proceso.cpp$(PreprocessSuffix): src/Proceso.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Proceso.cpp$(PreprocessSuffix) src/Proceso.cpp

$(IntermediateDirectory)/src_Lista.cpp$(ObjectSuffix): src/Lista.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/raulc/Desktop/Clase/Universidad/2Carrera/1Cuatrimestre/EstructurasDeDatos/EstructuraDatosPL/EstructuraDatosPL/PL1/src/Lista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Lista.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Lista.cpp$(PreprocessSuffix): src/Lista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Lista.cpp$(PreprocessSuffix) src/Lista.cpp

$(IntermediateDirectory)/src_Gestor.cpp$(ObjectSuffix): src/Gestor.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/raulc/Desktop/Clase/Universidad/2Carrera/1Cuatrimestre/EstructurasDeDatos/EstructuraDatosPL/EstructuraDatosPL/PL1/src/Gestor.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Gestor.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Gestor.cpp$(PreprocessSuffix): src/Gestor.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Gestor.cpp$(PreprocessSuffix) src/Gestor.cpp

$(IntermediateDirectory)/src_Pila.cpp$(ObjectSuffix): src/Pila.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/raulc/Desktop/Clase/Universidad/2Carrera/1Cuatrimestre/EstructurasDeDatos/EstructuraDatosPL/EstructuraDatosPL/PL1/src/Pila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Pila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Pila.cpp$(PreprocessSuffix): src/Pila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Pila.cpp$(PreprocessSuffix) src/Pila.cpp

$(IntermediateDirectory)/src_Cola.cpp$(ObjectSuffix): src/Cola.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/raulc/Desktop/Clase/Universidad/2Carrera/1Cuatrimestre/EstructurasDeDatos/EstructuraDatosPL/EstructuraDatosPL/PL1/src/Cola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Cola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Cola.cpp$(PreprocessSuffix): src/Cola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Cola.cpp$(PreprocessSuffix) src/Cola.cpp

$(IntermediateDirectory)/src_NodoListaDoble.cpp$(ObjectSuffix): src/NodoListaDoble.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/raulc/Desktop/Clase/Universidad/2Carrera/1Cuatrimestre/EstructurasDeDatos/EstructuraDatosPL/EstructuraDatosPL/PL1/src/NodoListaDoble.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_NodoListaDoble.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_NodoListaDoble.cpp$(PreprocessSuffix): src/NodoListaDoble.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_NodoListaDoble.cpp$(PreprocessSuffix) src/NodoListaDoble.cpp

$(IntermediateDirectory)/src_NodoPila.cpp$(ObjectSuffix): src/NodoPila.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/raulc/Desktop/Clase/Universidad/2Carrera/1Cuatrimestre/EstructurasDeDatos/EstructuraDatosPL/EstructuraDatosPL/PL1/src/NodoPila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_NodoPila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_NodoPila.cpp$(PreprocessSuffix): src/NodoPila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_NodoPila.cpp$(PreprocessSuffix) src/NodoPila.cpp

$(IntermediateDirectory)/src_NodoCola.cpp$(ObjectSuffix): src/NodoCola.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/raulc/Desktop/Clase/Universidad/2Carrera/1Cuatrimestre/EstructurasDeDatos/EstructuraDatosPL/EstructuraDatosPL/PL1/src/NodoCola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_NodoCola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_NodoCola.cpp$(PreprocessSuffix): src/NodoCola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_NodoCola.cpp$(PreprocessSuffix) src/NodoCola.cpp

$(IntermediateDirectory)/src_ListaDobleEnlazada.cpp$(ObjectSuffix): src/ListaDobleEnlazada.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/raulc/Desktop/Clase/Universidad/2Carrera/1Cuatrimestre/EstructurasDeDatos/EstructuraDatosPL/EstructuraDatosPL/PL1/src/ListaDobleEnlazada.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_ListaDobleEnlazada.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_ListaDobleEnlazada.cpp$(PreprocessSuffix): src/ListaDobleEnlazada.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_ListaDobleEnlazada.cpp$(PreprocessSuffix) src/ListaDobleEnlazada.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/raulc/Desktop/Clase/Universidad/2Carrera/1Cuatrimestre/EstructurasDeDatos/EstructuraDatosPL/EstructuraDatosPL/PL1/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


