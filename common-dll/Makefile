SRC = src
INT = obj
DST = dest

CXXFLAGS = /Fo$(INT)\ /Fe$(DST)\ 

$(DST)\demo.exe: $(INT)\demo.obj
	$(CXX) $(CXXFLAGS) $**

$(DST)\my_common_lib.dll: $(INT)\my_common_lib.obj
	$(CXX) $(CXXFLAGS) /LD $**

{$(SRC)\}.cpp{$(INT)\}.obj::
	$(CXX) $(CXXFLAGS) /c $<
