$( document ).ready(function() 
{
	$("div.tabs").addClass("nav nav-tabs");

	$(".dynheader").addClass("alert alert-info");
	$(".dyncontent").addClass("panel panel-default");

	$(".fragment").addClass("well"); // panel containing blocks of code
	$(".memitem").addClass("panel panel-default"); // panel containing a member function
	$(".memproto").addClass("panel-heading"); // panel containing a member function prototype
	$(".memdoc").addClass("panel-body"); // panel containing a member function description

	$("table.params").addClass("table");
	$("table.directory").addClass("table table-striped");
	$("table.fieldtable").addClass("table") // tables where elements like enumerations are shown

	$(".contents").addClass("panel panel-primary");

	$("table.memberdecls").addClass("table"); // table listing all member functions
	$("[class^=memitem]").addClass("active");
});