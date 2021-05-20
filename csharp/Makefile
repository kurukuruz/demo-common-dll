SRC = src
DST = dest

all: $(DST)\demo-csharp.exe

$(DST)\demo-csharp.exe: $(SRC)\demo-csharp.cs
	csc $** /out:$@

clean:; del /Q $(DST)\*.*
