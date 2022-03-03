# MidtermProject_Group29
Code for our midterm Project

This project uses an external set of tools (https://www.boost.org/) which are hardcoded directory locations. It will be necessary to reroute these to your local boost install.

To edit MainApplication,
1) Right-Click and select Properties > C/C++ > General > Additional Include Directories. Add your path to "boost" here. 
2) Right-Click and select Properties > Linker > General > Additional Include Directories. Add your path to "boost/stage/lib" here.

To edit the 7 libraries,
1) Right-Click and select Properties > C/C++ > General > Additional Include Directories. Add your path to "boost" here. 
2) Right-Click and select Properties > Librarian > General > Additional Include Directories. Add your path to "boost/stage/lib" here.

The program should now run.
