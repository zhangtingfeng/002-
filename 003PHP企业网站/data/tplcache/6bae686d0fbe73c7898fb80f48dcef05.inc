<section class="widget page-left">
      <h3 class="title"> <a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a></h3>
      <div class="sub-nav">
              <ul class="nav-list news-nav-list">
                {dede:arclist   titlelen='200' orderway="desc" orderby='pubdate'}
                    <li><a  href="[field:arcurl/]"><em class="news-title">[field:title /]</em><em class="news-date">[field:pubdate function='strftime("%Y-%m-%d",@me)'/]</em></a></li>
                {/dede:arclist}
              </ul>
      </div>
  </section>