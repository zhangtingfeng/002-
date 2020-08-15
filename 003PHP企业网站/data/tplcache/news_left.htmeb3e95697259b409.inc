<?php
$z[0]=Array("channelartlist","\r\n  <section class=\"widget page-left\">\r\n      <h3 class=\"title\"> <a href=\"{dede:field name='typeurl'/}\">{dede:field name='typename'/}</a></h3>\r\n      <div class=\"sub-nav\">\r\n              <ul class=\"nav-list news-nav-list\">\r\n                {dede:arclist   titlelen='200' orderway=\"desc\" orderby='pubdate'}\r\n                    <li><a  href=\"[field:arcurl/]\"><em class=\"news-title\">[field:title /]</em><em class=\"news-date\">[field:pubdate function='strftime(\"%Y-%m-%d\",@me)'/]</em></a></li>\r\n                {/dede:arclist}\r\n              </ul>\r\n      </div>\r\n  </section>\r\n  ",48,695);
$z[0][4]=array();
$z[0][4]['row']="3";
$z[0][4]['type']="reid";
$z[0][4]['col']="1";

?>