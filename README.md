Doxygen using bootstrap
=======================

This project demonstrates how to integrate bootstrap with doxygen to get a better looking and more responsive documentation pages.
The inspiration came from [CoActionOS](http://coactionos.com/embedded%20design%20tips/2014/01/07/Tips-Integrating-Doxygen-and-Bootstrap/).

---
##Running the Doxyfile

1. Install [doxygen 1.8.8](http://www.stack.nl/~dimitri/doxygen/download.html)
2. Install [Graphviz](http://www.graphviz.org/Download.php) (dot tool)
	* If you don't want to generate the class diagrams this is not needed as long as you disable the `CLASS_DIAGRAMS` option to `false`. 
3. Run doxygen with Themed_Doxyfile. 