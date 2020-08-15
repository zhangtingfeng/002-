<?php
$z[0]=Array("field","",347,366);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("global","",367,393);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",434,463);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("field","",503,561);
$z[3][4]=array();
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",3274,3309);
$z[4][4]=array();
$z[4][4]['filename']="head.htm";
$z[5]=Array("sql","\r\n      <img src=\"[field:typeimg /]\" />\r\n  ",3339,3525);
$z[5][4]=array();
$z[5][4]['sql']="SELECT typeimg FROM dede_arctype where id=~typeid~ OR id =(SELECT reid FROM dede_arctype where id=~typeid~) LIMIT 1";
$z[6]=Array("field","",3708,3737);
$z[6][4]=array();
$z[6][4]['name']="position";
$z[7]=Array("include","",3830,3865);
$z[7][4]=array();
$z[7][4]['filename']="left.htm";
$z[8]=Array("list","\r\n          <div class=\"blog-article hentry format-image\">\r\n            <figure> <a class=\"swipebox-x\" href=\"[field:arcurl/]\"> <img class=\"img-responsive\" alt=\"[field:title/]\" src=\"[field:picname/]\"/> </a> </figure>\r\n            <div class=\"entry-summary post-summary\">\r\n              <header class=\"entry-header\">\r\n                <h2 class=\"entry-title post-title\"> <a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a> </h2>\r\n              </header>\r\n              <div class=\"entry-content\">\r\n                <p>[field:description function=\"cn_substr(@me,400)\"/]...</p>\r\n              </div>\r\n              <a href=\"[field:arcurl/]\" class=\"read-more-link\">查看详细</a> </div>\r\n          </div>\r\n          ",3973,4737);
$z[8][4]=array();
$z[8][4]['pagesize']="5";
$z[9]=Array("pagelist","",4847,4913);
$z[9][4]=array();
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[9][4]['listsize']="5";
$z[10]=Array("include","",5039,5076);
$z[10][4]=array();
$z[10][4]['filename']="footer.htm";

?>