<?php
$z[0]=Array("global","",215,241);
$z[0][4]=array();
$z[0][4]['name']="cfg_webname";
$z[1]=Array("channelartlist","\r\n          <li class=\"Lev1 {dede:field.currentstyle/}\"> <a href=\"{dede:field name='typeurl'/}\" class=\"menu1 has-submenu\">{dede:field name='typename'/} \r\n            {dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'<i class=\"fa fa-angle-down\"></i>':'';\r\n            {/dede:field}</a>\r\n            <ul {dede:field name=typeid runphp=\"yes\"}\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->\r\n              GetOne(\$sql);\r\n              @me=is_array(\$row)?'class=\"sub-menu dr-menu2\"':'style=\"display:none\"';\r\n              {/dede:field}> \r\n              \r\n              {dede:channel type='son' noself='yes'}\r\n              <li class=\"Lev2\"> <a href=\"[field:typeurl/]\" class=\"menu21\">[field:typename/]</a> </li>\r\n              {/dede:channel}\r\n            </ul>\r\n          </li>\r\n          ",527,1717);
$z[1][4]=array();
$z[1][4]['typeid']="40,16,1,5,28,21,17,35";
$z[1][4]['currentstyle']="active";
$z[2]=Array("global","",1908,1933);
$z[2][4]=array();
$z[2][4]['name']="cfg_cmsurl";

?>