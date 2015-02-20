Doxygen using bootstrap
=======================

This project demonstrates how to integrate bootstrap with doxygen to get a better looking and more responsive documentation pages.
The inspiration came from [CoActionOS](http://coactionos.com/embedded%20design%20tips/2014/01/07/Tips-Integrating-Doxygen-and-Bootstrap/).


## Applying this theme

Some minor changes have to be done in doxyfile in order to customize the doxygen output, we have to set some options to point to the files located in`/doxygen` folder: 

* `HTML_HEADER = ./doxygen/header.html`
  * This tells to doxygen to use our custom header, in this header we load bootstrap and our `bootstrap_integration.js` script.
* `HTML_FOOTER = ./doxygen/footer.html`   
* `HTML_STYLESHEET = ./doxygen/customdoxygen.css`
* `HTML_EXTRA_STYLESHEET  = ./doxygen/customdoxygen.css`
* `HTML_EXTRA_FILES       = ./doxygen/bootstrap_integration.js`


## Running the Doxyfile

1. Install [doxygen 1.8.8](http://www.stack.nl/~dimitri/doxygen/download.html)
2. Install [Graphviz](http://www.graphviz.org/Download.php) (dot tool)
    * If you don't want to generate the class diagrams this is not needed as long as you disable the `CLASS_DIAGRAMS` option to `false`. 
3. Run doxygen with Themed_Doxyfile. 