<?php
$z[0]=Array("field","",16,42);
$z[0][4]=array();
$z[0][4]['name']="currentstyle";
$z[1]=Array("field","",54,82);
$z[1][4]=array();
$z[1][4]['name']="typeurl";
$z[2]=Array("field","",110,139);
$z[2][4]=array();
$z[2][4]['name']="typename";
$z[3]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'<i class=\"fa fa-angle-down\"></i>':'';\r\n            ",154,485);
$z[3][4]=array();
$z[3][4]['name']="typeid";
$z[3][4]['runphp']="yes";
$z[4]=Array("field","\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->\r\n              GetOne(\$sql);\r\n              @me=is_array(\$row)?'class=\"sub-menu dr-menu2\"':'style=\"display:none\"';\r\n              ",507,828);
$z[4][4]=array();
$z[4][4]['name']="typeid";
$z[4][4]['runphp']="yes";
$z[5]=Array("channel","\r\n              <li class=\"Lev2\"> <a href=\"[field:typeurl/]\" class=\"menu21\">[field:typename/]</a> </li>\r\n              ",862,1034);
$z[5][4]=array();
$z[5][4]['type']="son";
$z[5][4]['noself']="yes";

?>