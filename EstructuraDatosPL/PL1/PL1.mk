##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PL1
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/Ordenador/Documents/GitHub/EstructuraDatosPL/EstructuraDatosPL
ProjectPath            :=C:/Users/Ordenador/Documents/GitHub/EstructuraDatosPL/EstructuraDatosPL/PL1
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/PL1
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Ordenador
Date                   :=10/11/2024
CodeLitePath           :=C:/Users/Ordenador/Desktop/Programas/codelite-amd64-17.0.0/codelite
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
OutputDirectory        :=C:/Users/Ordenador/Documents/GitHub/EstructuraDatosPL/EstructuraDatosPL/build-$(WorkspaceConfiguration)/bin
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
CodeLiteDir:=C:\Users\Ordenador\Desktop\Programas\codelite-amd64-17.0.0\codelite
Objects0=$(IntermediateDirectory)/src_Lista.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_NodoPila.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Proceso.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/src_Lista.cpp$(ObjectSuffix): src/Lista.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Ordenador/Documents/GitHub/EstructuraDatosPL/EstructuraDatosPL/PL1/src/Lista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Lista.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Lista.cpp$(PreprocessSuffix): src/Lista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Lista.cpp$(PreprocessSuffix) src/Lista.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Ordenador/Documents/GitHub/EstructuraDatosPL/EstructuraDatosPL/PL1/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/src_NodoPila.cpp$(ObjectSuffix): src/NodoPila.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Ordenador/Documents/GitHub/EstructuraDatosPL/EstructuraDatosPL/PL1/src/NodoPila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_NodoPila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_NodoPila.cpp$(PreprocessSuffix): src/NodoPila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_NodoPila.cpp$(PreprocessSuffix) src/NodoPila.cpp

$(IntermediateDirectory)/src_Proceso.cpp$(ObjectSuffix): src/Proceso.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Ordenador/Documents/GitHub/EstructuraDatosPL/EstructuraDatosPL/PL1/src/Proceso.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Proceso.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Proceso.cpp$(PreprocessSuffix): src/Proceso.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Proceso.cpp$(PreprocessSuffix) src/Proceso.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


