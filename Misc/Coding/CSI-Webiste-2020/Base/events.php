<!DOCTYPE html>
<html lang="en">

<head>
  <title>Events</title>
  <link rel="icon" href="images/kartik.png" type="image/x-icon">
  <meta charset="UTF-8">
  <meta content="width=device-width, initial-scale=1.0" name="viewport">


  <link rel='stylesheet' href='https://fonts.googleapis.com/css?family=Montserrat:400,700'>
  <link rel="stylesheet" href="./css/header.css">

  <link href='https://fonts.googleapis.com/css?family=Open+Sans|Oswald:300' rel='stylesheet' type='text/css'>

  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.4.0/css/font-awesome.min.css">
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/meyer-reset/2.0/reset.min.css">

  <!-- <link rel="stylesheet" href="css/bootstrap.css"> -->
  <link href="lib/bootstrap/css/bootstrap.min.css" rel="stylesheet">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
  <script src="http://code.jquery.com/jquery-1.9.1.js"></script>




  <!-- Main Stylesheet File -->
  <link href="./css/style.css" rel="stylesheet">
  <link rel="stylesheet" href="./css/footer.css">
  <link rel="stylesheet" href="./css/events.css">

</head>

<body>

  <?php include './header-footer/header.html'; ?>
  <br>

  <div class="maindiv" id="maindiv">
    <!-- <div class="row">

  <div class="column">
    <div class="content" value="1">
      <img src="images/team/core.jpg" alt="Mountains" style="width:100%">
      <div class="ab ax c eo ep eq k v">
      <div class="ar bi er es v">
        <div class="bc et">7</div>
        <div class="bc cf eu">Mar</div>
        <div class="bc eu ev">Onwards</div>
      </div>
      <div class="ar er ew v">
        <div class="al b bc cf ex ey">Road To Ultra India</div>
        <div class="b bc ev ex ey ez">Multiple Venues</div>
        <div class="ap bc ez">Music Shows</div>
        <div class="bc ev ez">Rs. 2500 onwards </div>
      </div>
      </div>
    </div>
  </div>

  <div class="column">
    <div class="content" value="2">
      <img src="images/team/core.jpg" alt="Mountains" style="width:100%">
    <div class="ab ax c eo ep eq k v">
      <div class="ar bi er es v">
        <div class="bc et">7</div>
        <div class="bc cf eu">Mar</div>
        <div class="bc eu ev">Onwards</div>
      </div><div class="ar er ew v">
        <div class="al b bc cf ex ey">Road To Ultra India</div>
        <div class="b bc ev ex ey ez">Multiple Venues</div>
        <div class="ap bc ez">Music Shows</div>
        <div class="bc ev ez">Rs. 2500 onwards </div>
      </div>
    </div>
  </div>
</div>


  <div class="column">
    <div class="content" value="3">
      <img src="images/team/core.jpg" alt="Mountains" style="width:100%">
    <div class="ab ax c eo ep eq k v">
      <div class="ar bi er es v">
        <div class="bc et">7</div>
        <div class="bc cf eu">Mar</div>
        <div class="bc eu ev">Onwards</div>
      </div><div class="ar er ew v">
        <div class="al b bc cf ex ey">Road To Ultra India</div>
        <div class="b bc ev ex ey ez">Multiple Venues</div>
        <div class="ap bc ez">Music Shows</div>
        <div class="bc ev ez">Rs. 2500 onwards </div>
      </div>
    </div>
  </div>
</div>

  <div class="column">
    <div class="content" value="4">
      <img src="images/team/core.jpg" alt="Mountains" style="width:100%">
    <div class="ab ax c eo ep eq k v">
      <div class="ar bi er es v">
        <div class="bc et">7</div>
        <div class="bc cf eu">Mar</div>
        <div class="bc eu ev">Onwards</div>
      </div>
      <div class="ar er ew v">
        <div class="al b bc cf ex ey">Road To Ultra India</div>
        <div class="b bc ev ex ey ez">Multiple Venues</div>
        <div class="ap bc ez">Music Shows</div>
        <div class="bc ev ez">Rs. 2500 onwards </div>
      </div>
    </div>
  </div>
</div>

</div> -->

  </div>


  <div id="myModal" class="modal">

    <!-- Modal content -->
    <div class="modal-content">
      <span class="close">&times;</span>
      <p id="desc"></p>
    </div>

  </div>
</body>
<?php include './header-footer/footer.html'; ?>

<script src="./js/footer.js"></script>
<script type="text/javascript">
  function openModal(id) {
    var model = document.getElementById("myModal");
    var span = document.getElementsByClassName("close")[0];

    $.ajax({
      url: "http://random6.xyz/StudentCouncil/getEventDataById.php",
      method: "GET",
      dataType: "JSON",
      data: {
        eventId: id
      },
      success: function(response) {
        // let details = response["events"];
        // let count = details.length;
        var description = response.description;
        console.log(description);
        document.getElementById("desc").innerHTML = description;
      }
    });

    // Displaying Modal on Popup
    model.style.display = "block";

    // Clicking anywhere on window will disappear the modal view
    window.onclick = function(event) {
      if (event.target == model) {
        model.style.display = "none";
      }
    }

    span.onclick = function() {
      model.style.display = "none";
    }
  }

  document.addEventListener('DOMContentLoaded', function() {
    $.ajax({
      url: "http://random6.xyz/StudentCouncil/getEventData.php",
      method: "GET",
      dataType: "JSON",
      data: {
        toggle: "active"
      },
      success: function(response) {
        let output = `
          <div class="maindiv" >  
          <div class="row">
          `;
        let details = response["events"];
        let count = details.length;
        if (count > 0) {
          for (var i = 0; i < count; i++) {
            var monthArray = [
              "January",
              "February",
              "March",
              "April",
              "May",
              "June",
              "July",
              "August",
              "September",
              "October",
              "November",
              "December"
            ];
            var id = details[i].id;
            var name = details[i].name;
            var image = details[i].image;
            var description = details[i].description;
            var days = details[i].days;
            var date = details[i].date;
            var time = details[i].time;
            var venue = details[i].venue;
            var price = details[i].price;
            var participants = details[i].participants;
            var datestr = new Date(date);
            var month = monthArray[datestr.getMonth()];
            var day = datestr.getDate();
            var year = datestr.getFullYear();


            output += `
              <div class="column">
              <div class="content" value="${id}" onclick="openModal(${id})">
                <img src="${image}" alt="Mountains" style="width:100%;">
              <div class="ab ax c eo ep eq k v">
                <div class="ar bi er es v">
                  <div class="bc et">${day}</div>
                  <div class="bc cf eu">${month}</div>
                  <div class="bc et">${year}</div>
                  <div class="bc cf eu">${time}</div>
                </div>
                <div class="ar er ew v">
                  <div class="al b abc cf ex ey">${name}</div>
                  <div class="b bc ev ex ey ez">${venue}</div>
                  <div class="ap bc ez">${price}</div>
                  <div class="bc ev ez">${description}</div>
                </div>
              </div>
            </div>
          </div>
            `;
          }
          output += `</div>
                      </div>`;
          document.getElementById("maindiv").innerHTML = output;
        } else {
          window.alert("No event entries found.");
        }
      }
    });
  });
</script>

</html>