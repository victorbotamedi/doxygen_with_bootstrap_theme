$( document ).ready(function() 
{
	$("div.tabs").addClass("nav nav-tabs");

	$(".dynheader").addClass("alert alert-info");
	$(".dyncontent").addClass("panel panel-default");

	$(".fragment").addClass("well"); // panel containing blocks of code
	$(".memitem").addClass("panel panel-default"); // panel containing a member function
	$(".memproto").addClass("panel-heading"); // panel containing a member function prototype
	$(".memdoc").addClass("panel-body"); // panel containing a member function description

	$(".contents").addClass("panel panel-primary");
});