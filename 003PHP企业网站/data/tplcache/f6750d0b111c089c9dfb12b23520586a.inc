<li {dede:field name=typeid runphp="yes"}
            global $dsql;
            $sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100";
            $row = $dsql->GetOne($sql);      
            @me=is_array($row)?'class="Lev1 menu-item-has-children"':'';
            {/dede:field} href="{dede:field name='typeurl'/}" class="Lev1"> <a href="{dede:field name='typeurl'/}" class="menu1">{dede:field name='typename'/} 
            {dede:field name=typeid runphp="yes"}
            global $dsql;
            $sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
            $row = $dsql->GetOne($sql);      
            @me=is_array($row)?'<i class="fa fa-caret-down"></i>':'';
            {/dede:field} </a>
            <ul class="sub-menu dr-menu2">
              {dede:channel type='son' noself='yes'}
                <li class="Lev2"> <a href="[field:typeurl/]" class="menu2">[field:typename /]</a> </li>
              {/dede:channel}
            </ul>
          </li>