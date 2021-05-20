SRC = src
INT = obj
DST = dest

CXXFLAGS = /Fo$(INT)\ /Fe$(DST)\ 
CXXFLAGS = $(CXXFLAGS) /D"EXPORTING_MY_COMMON_FUNC"

$(DST)\demo.exe: $(INT)\demo.obj $(DST)\my_common_lib.dll
	$(CXX) $(CXXFLAGS) $(INT)\demo.obj my_common_lib.lib \
	/link /LIBPATH:$(DST)

$(DST)\my_common_lib.dll: $(INT)\my_common_lib.obj
	$(CXX) $(CXXFLAGS) /LD $**

{$(SRC)\}.cpp{$(INT)\}.obj::
	$(CXX) $(CXXFLAGS) /c $<
