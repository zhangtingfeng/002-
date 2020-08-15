<li>
              <a href="[field:arcurl/]" target="_blank">
                <div class="area-activity-date">
                    <div class="area-activity-date-m" >
                      [field:pubdate function='strftime("%m",@me)'/]月
                    </div>
                    <div class="area-activity-date-d">
                      [field:pubdate function='strftime("%d",@me)'/]
                    </div>
                </div>
                <div class="area-activity-content">
                    <p class="desc-title">[field:title/]</p>
                    <p class="desc-content">[field:description/]</p>
                    <p class="desc-date">[field:pubdate function='strftime("%Y",@me)'/]年</p>
                </div>
              </a>
            </li>