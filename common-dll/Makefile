SRC = src
INT = obj
DST = dest

CXXFLAGS = /Fo$(INT)\ /Fe$(DST)\ 

$(DST)\demo.exe: $(INT)\demo.obj
	$(CXX) $(CXXFLAGS) $**

{$(SRC)\}.cpp{$(INT)\}.obj::
	$(CXX) $(CXXFLAGS) /c $<
