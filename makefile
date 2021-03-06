# SlickEdit generated file.  Do not edit this file except in designated areas.

# Make command to use for dependencies
MAKE=make
RM=rm
MKDIR=mkdir

# -----Begin user-editable area-----

# -----End user-editable area-----

# If no configuration is specified, "Debug" will be used
ifndef CFG
CFG=Debug
endif

#
# Configuration: Debug
#
ifeq "$(CFG)" "Debug"
OUTDIR=Debug
OUTFILE=$(OUTDIR)/deleteduplicates
CFG_INC=
CFG_LIB=
CFG_OBJ=
COMMON_OBJ=$(OUTDIR)/testmain.o 
OBJ=$(COMMON_OBJ) $(CFG_OBJ)
ALL_OBJ=$(OUTDIR)/testmain.o 

COMPILE=clang++ -c   -g -Werror -Waggregate-return -Wbad-function-cast -Wcast-align -Wcast-qual -Wchar-subscripts -Wcomment -Wfloat-equal -Wformat -Wimplicit -Wmain -Wmissing-declarations -Wmissing-noreturn -Wmissing-prototypes -Wmultichar -Wpointer-arith -Wredundant-decls -Wreturn-type -Wshadow -Wsign-compare -Wstrict-prototypes -Wswitch -Wtrigraphs -Wundef -Wunused -Wuninitialized -Wunknown-pragmas -Wwrite-strings --std=c++2a -o "$(OUTDIR)/$(*F).o" $(CFG_INC) $<
LINK=clang++  -g -Werror -o "$(OUTFILE)" $(ALL_OBJ)

# Pattern rules
$(OUTDIR)/%.o : %.cpp
	$(COMPILE)

# Build rules
all: $(OUTFILE)

$(OUTFILE): $(OUTDIR) $(OBJ)
	$(LINK)

$(OUTDIR):
	$(MKDIR) -p "$(OUTDIR)"

# Rebuild this project
rebuild: cleanall
	@$(MAKE) -f "$(strip $(MAKEFILE_LIST))" $(MAKEFLAGS) all

# Clean this project
clean:
	$(RM) -f $(OUTFILE)
	$(RM) -f $(OBJ)

# Clean this project and all dependencies
cleanall: clean
endif

#
# Configuration: Release
#
ifeq "$(CFG)" "Release"
OUTDIR=Release
OUTFILE=$(OUTDIR)/deleteduplicates
CFG_INC=
CFG_LIB=
CFG_OBJ=
COMMON_OBJ=$(OUTDIR)/testmain.o 
OBJ=$(COMMON_OBJ) $(CFG_OBJ)
ALL_OBJ=$(OUTDIR)/testmain.o 

COMPILE=clang++ -c   --std=c++2a -o "$(OUTDIR)/$(*F).o" $(CFG_INC) $<
LINK=clang++  -o "$(OUTFILE)" $(ALL_OBJ)

# Pattern rules
$(OUTDIR)/%.o : %.cpp
	$(COMPILE)

# Build rules
all: $(OUTFILE)

$(OUTFILE): $(OUTDIR) $(OBJ)
	$(LINK)

$(OUTDIR):
	$(MKDIR) -p "$(OUTDIR)"

# Rebuild this project
rebuild: cleanall
	@$(MAKE) -f "$(strip $(MAKEFILE_LIST))" $(MAKEFLAGS) all

# Clean this project
clean:
	$(RM) -f $(OUTFILE)
	$(RM) -f $(OBJ)

# Clean this project and all dependencies
cleanall: clean
endif

#
# include dependencies:
#
$(OUTDIR)/testmain.o: testmain.cpp deleteduplicates.hpp
