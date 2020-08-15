<li>
              <a href="[field:arcurl/]" target="_blank">
                <div class="area-activity-date">
                    <div class="area-activity-date-m" >
                      [field:activitytime function='strftime("%m",@me)'/]月
                    </div>
                    <div class="area-activity-date-d">
                      [field:activitytime function='strftime("%d",@me)'/]
                    </div>
                </div>
                <div class="area-activity-content">
                    <p class="desc-title">[field:title/]</p>
                    <p class="desc-content">[field:description/]</p>
                    <p class="desc-date">[field:activitytime function='strftime("%Y",@me)'/]年</p>
                </div>
              </a>
            </li>