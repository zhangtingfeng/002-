<?php
$z[0]=Array("global","",250,272);
$z[0][4]=array();
$z[0][4]['name']="cfg_tel";
$z[1]=Array("channelartlist","\r\n      <div class=\"col-sm-2 hidden-sm hidden-xs foot-nav\" style=\"width: 17%;\">\r\n        <div class=\"footer-widget\">\r\n          <div class=\"featured-links\">\r\n            <h2>{dede:field name='typename'/} </h2>\r\n            <div class=\"line-dec\"></div>\r\n            <ul>\r\n              {dede:channel type='son' noself='yes'}\r\n              <li><a href=\"[field:typeurl/]\" target=\"_blank\"><i class=\"fa fa-caret-right\"></i> &nbsp;[field:typename/]</a></li>\r\n              {/dede:channel}\r\n            </ul>\r\n          </div>\r\n        </div>\r\n      </div>\r\n      ",979,1603);
$z[1][4]=array();
$z[1][4]['typeid']="75";
$z[1][4]['type']="son";
$z[2]=Array("global","",2403,2429);
$z[2][4]=array();
$z[2][4]['name']="cfg_powerby";
$z[3]=Array("global","",2430,2454);
$z[3][4]=array();
$z[3][4]['name']="cfg_beian";
$z[4]=Array("channelartlist","\r\n          <li {dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100\";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'class=\"Lev1 menu-item-has-children\"':'';\r\n            {/dede:field} href=\"{dede:field name='typeurl'/}\" class=\"Lev1\"> <a href=\"{dede:field name='typeurl'/}\" class=\"menu1\">{dede:field name='typename'/} \r\n            {dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'<i class=\"fa fa-caret-down\"></i>':'';\r\n            {/dede:field} </a>\r\n            <ul class=\"sub-menu dr-menu2\">\r\n              {dede:channel type='son' noself='yes'}\r\n                <li class=\"Lev2\"> <a href=\"[field:typeurl/]\" class=\"menu2\">[field:typename /]</a> </li>\r\n              {/dede:channel}\r\n            </ul>\r\n          </li>\r\n          ",3026,4215);
$z[4][4]=array();
$z[4][4]['typeid']="40,16,1,5,28,21,17,35";

?>