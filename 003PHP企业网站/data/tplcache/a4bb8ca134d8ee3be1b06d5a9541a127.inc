<div class="col-sm-2 hidden-sm hidden-xs foot-nav" style="width: 17%;">
        <div class="footer-widget">
          <div class="featured-links">
            <h2>{dede:field name='typename'/} </h2>
            <div class="line-dec"></div>
            <ul>
              {dede:channel type='son' noself='yes'}
              <li><a href="[field:typeurl/]" target="_blank"><i class="fa fa-caret-right"></i> &nbsp;[field:typename/]</a></li>
              {/dede:channel}
            </ul>
          </div>
        </div>
      </div>