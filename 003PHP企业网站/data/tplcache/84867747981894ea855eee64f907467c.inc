<section class="section-pad read-books books-read" id="index-case">
  <div class="container">
    <div class="row">
      <div class="col-md-12">
        <div class="section-heading text-center">
          <h1><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a></h1>
          <p>{dede:field name='description'/}</p>
        </div>
      </div>
    </div>
    <div class="row"> {dede:arclist row='4' titlelen='50' orderby='pubdate'}
      <div class="col-md-3 col-sm-6 col-xs-6 case-item">
        <div class="books-item">
          <p class="thumb-link"><a href="[field:arcurl/]"><img alt="[field:title/]" src="[field:picname/]"/></a></p>
          <h4><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a></h4>
        </div>
      </div>
      {/dede:arclist} </div>
  </div>
</section>