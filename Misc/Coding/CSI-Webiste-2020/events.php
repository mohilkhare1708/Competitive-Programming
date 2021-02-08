<!DOCTYPE html>
<html lang="en">

<head>
  <!-- Custom styles -->
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
  <meta name="description" content="">
  <!-- Fontawesome -->

  <script defer src="https://use.fontawesome.com/releases/v5.0.7/js/all.js"></script>

  <!--the bootstrap example-->
  <link rel="canonical" href="https://getbootstrap.com/docs/4.5/examples/carousel/">
  <link rel="icon" type="image/png" href="{{ url_for('static', filename = 'assets/logo/favicon.png') }}" />
  <!-- Google fonts -->
  <link
    href="https://fonts.googleapis.com/css2?family=Anton&family=Architects+Daughter&family=Pacifico&family=Varela+Round&display=swap"
    rel="stylesheet">
  <link href="https://fonts.googleapis.com/css2?family=Balsamiq+Sans:wght@700&family=Pacifico&display=swap"
    rel="stylesheet">


  <!-- Bootstrap core CSS -->
  <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.0/css/bootstrap.min.css"
    integrity="sha384-9aIt2nRpC12Uk9gS9baDl411NQApFmC26EwAOH8WgZl5MYYxFfc+NcPb1dKGj7Sk" crossorigin="anonymous">
  
  <!-- OUR STUFF --> 
  <link href="./css/headerFooter.css" rel="stylesheet" type="text/css" />

  <!-- jquery plugins-->
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.3/jquery.min.js"></script>
  <script src="./js/bootstrap/bootstrap.min.js"></script>
  <!-- <script src="./js/TweenMax.min.js"></script> -->
  

  <meta name="theme-color" content="#563d7c">

  <style>
    .bd-placeholder-img {
      font-size: 1.125rem;
      text-anchor: middle;
      -webkit-user-select: none;
      -moz-user-select: none;
      -ms-user-select: none;
      user-select: none;
    }

    @media (min-width: 768px) {
      .bd-placeholder-img-lg {
        font-size: 3.5rem;
      }
    }

    /* a {
      color: black;
    } */

    @media screen and (max-width: 1000px) {
      .companyfullname {
        display: none;
      }

    }

    @media screen and (min-width: 1000px) {
      .companyname {
        display: none;
        font-weight: bold;
      }
    }
  </style>

</head>

<style>
  .bd-placeholder-img {
    font-size: 1.125rem;
    text-anchor: middle;
    -webkit-user-select: none;
    -moz-user-select: none;
    -ms-user-select: none;
    user-select: none;
  }

  @media (min-width: 768px) {
    .bd-placeholder-img-lg {
      font-size: 3.5rem;
    }
  }

  @media screen and (max-width: 1000px) {
    .companyfullname {
      display: none;
    }

  }

  @media screen and (min-width: 1000px) {
    .companyname {
      display: none;
      font-weight: bold;
    }
  }
</style>

<body>
<?php include './header.html'; ?>
  <!-- <header id="header">
    <div class="main_nav">
      <div class="container">
        <div class="mobile-toggle"> <span></span> <span></span> <span></span> </div>
        <nav>
          <ul>
            <li><a href="./index.php">Home</a></li>
            <li><a href="./team.php">Team</a></li>
            <li><a href="./events.php">Events</a></li>
            <li><a href="./gallery.php">Gallery</a></li>
            <li><a href="./technicalTuesdays.php">Technical Tuesdays</a></li>
            <li><a href="./alumni.php">Alumni</a></li>
            <li><a href="./newsletters.php">Newsletters</a></li>
            <li><a href="./sponsors.php">Sponsors</a></li>
          </ul>
        </nav>
      </div>
    </div>
  </header> -->
  <br />
  <br />
  <br />
  <h2 class="text-center">Recent Events:</h2>
  <div class="block"></div>
  <br />
  <div class="container">
    <div id="carouselExampleCaptions" class="carousel slide" data-ride="carousel">
      <ol class="carousel-indicators">
        <li data-target="#carouselExampleCaptions" data-slide-to="0" class="active"></li>
        <li data-target="#carouselExampleCaptions" data-slide-to="1"></li>
        <li data-target="#carouselExampleCaptions" data-slide-to="2"></li>
      </ol>
      <div class="carousel-inner">
        <div class="carousel-item active">
          <img src="./images/picture4.jpg" class="d-block w-100" alt="...">
          <div class="carousel-caption d-none d-md-block">
            <h5>First slide label</h5>
            <p>Nulla vitae elit libero, a pharetra augue mollis interdum.</p>
            <p><button>Register</button></p>
          </div>
        </div>
        <div class="carousel-item">
          <img src="./images/picture4.jpg" class="d-block w-100" alt="...">
          <div class="carousel-caption d-none d-md-block">
            <h5>Second slide label</h5>
            <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit.</p>
            <p><button>Register</button></p>
          </div>
        </div>
        <div class="carousel-item">
          <img src="./images/picture4.jpg" class="d-block w-100" alt="...">
          <div class="carousel-caption d-none d-md-block">
            <h5>Third slide label</h5>
            <p>Praesent commodo cursus magna, vel scelerisque nisl consectetur.</p>
            <p><button>Register</button></p>
          </div>
        </div>
      </div>
      <a class="carousel-control-prev" href="#carouselExampleCaptions" role="button" data-slide="prev">
        <span class="carousel-control-prev-icon" aria-hidden="true"></span>
        <span class="sr-only">Previous</span>
      </a>
      <a class="carousel-control-next" href="#carouselExampleCaptions" role="button" data-slide="next">
        <span class="carousel-control-next-icon" aria-hidden="true"></span>
        <span class="sr-only">Next</span>
      </a>
    </div>
  </div>
  <br><br>
  <h2 class="text-center">Current Events:</h2>
  <div class="block"></div>
  <style>
    .butt {
      margin-top: 10px;
      background-color: transparent;
      border-color: green;
      font-size: 25px;
      padding: 0px;
      border-radius: 12px;
    }

    #apps {
      text-align: center;
      background-color: transparent;
    }

    #apps .intro h2 {
      margin-top: 30px;
      font-weight: bold;
      margin-bottom: 40px;
      font-size: 32px;
      line-height: 1.5;
      letter-spacing: .035em;
      text-transform: uppercase;
      font-family: "Montserrat", sans-serif;
    }

    #apps li {
      display: inline-block;
      position: relative;

      vertical-align: middle;
      width: 350px;
      height: 455px;
      margin-top: 30px;
      margin-bottom: 30px;
      margin-left: 40px;
      margin-right: 40px;
      -webkit-perspective: 800px;
      perspective: 800px;
    }
    @media only screen and (max-width: 800px) {
      #apps li {
        margin-left: 0px;
        margin-right: 40px;
      }
    }

    .class {
      background-color: transparent;
    }

    #apps .intro,
    #apps .info {
      position: absolute;
      left: 0;
      right: 0;
      top: 0;
      bottom: 0;
      border-radius: 8px;
      color: white;
      -webkit-backface-visibility: hidden;
      backface-visibility: hidden;
      -webkit-transition-property: -webkit-transform;
      transition-property: transform;
      -webkit-transition-duration: 1s;
      transition-duration: 1s;
    }

    #apps .card:hover .intro {
      -webkit-filter: brightness(110%) hue-rotate(15deg);
      filter: brightness(110%) hue-rotate(15deg);
    }

    #apps .intro {
      padding: 25px;
      color: black;
      text-align: center;
      padding-top: 40px;
      background-image: -webkit-linear-gradient(top left, #90defc, #8df7e6);
      background-image: linear-gradient(to bottom right, #90defc, #8df7e6);
      -webkit-transform-origin: right center;
      transform-origin: right center;
    }

    #apps .info {
      text-align: center;
      overflow: auto;
      color: black;
      padding: 20px;
      font-size: 18px;
      background-image: -webkit-linear-gradient(top left, #fffcab, #bcffab);
      background-image: linear-gradient(to bottom right, #fffcab, #bcffab);
      -webkit-transform-origin: left center;
      transform-origin: left center;
      -webkit-transform: translateX(100%) rotateY(180deg);
      transform: translateX(100%) rotateY(180deg);
    }

    #apps .intro img {
      width: 300px;
      height: 300px;
    }



    #apps .info .publisher {
      text-align: center;
      font-size: 25px;
      line-height: 2.2;
    }

    #apps .info .description {
      text-align: center;
    }

    strong {
      font-weight: bold;
    }

    #apps .info a {
      display: inline-block;
      vertical-align: middle;
      padding: .4em;
    }

    #apps .info .website::before {
      content: "";
    }

    #apps .info a:before {
      speak: none;
      font-style: normal;
      font-weight: normal;
      font-family: Icons;
    }

    #apps li:focus,
    #apps li:hover,
    #apps li.active {
      z-index: 1;
    }

    #apps li:focus .intro,
    #apps li:hover .intro,
    #apps li.active .intro {
      -webkit-transform: translateX(-100%) rotateY(-180deg);
      transform: translateX(-100%) rotateY(-180deg);
    }

    #apps li:focus .info,
    #apps li:hover .info,
    #apps li.active .info {
      -webkit-transform: none;
      transform: none;
    }

    .butt a {
      font-family: 'Montserrat';
      color: black;
      text-decoration: none;
    }
  </style>

  <section id="apps">
    <ul>
      <li class="card" tabindex="0" aria-haspopup="true">
        <div class="intro card1">
          <img
            src="https://d1csarkz8obe9u.cloudfront.net/posterpreviews/tech-event-design-template-f6aa7df11fd72f7feb0c22707f02dba0.jpg?ts=1567082523"
            width="140" height="140" alt="Pixelmator app icon">
          <h2>Event 1</h2>
        </div>
        <div class="info back1">
          <p class="publisher">By <strong>CSI</strong></p>
          <p class="description">Event Description : Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer
            lacinia dui lectus. Donec scelerisque ipsdiam, ac mattis orci pellentesque eget.</p>
          <button class="butt"><a href="" target="_blank">Registration</a></button>
        </div>
      </li>
      <li class="card" tabindex="0" aria-haspopup="true">
        <div class="intro card2">
          <img
            src="https://d1csarkz8obe9u.cloudfront.net/posterpreviews/blue-high-school-election-campaign-square-video-design-template-314936377b86bf77334846fd8f86db33_screen.jpg?ts=1567085335"
            width="140" height="140" alt="Sketch app icon">
          <h2>Event 2</h2>
        </div>
        <div class="info back2">
          <p class="publisher">By <strong>CSI</strong></p>
          <p class="description">Event Description : Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer
            lacinia dui lectus. Donec scelerisque ipsdiam, ac mattis orci pellentesque eget.</p>
          <button class="butt"><a href="" target="_blank">Registration</a></button>
        </div>
      </li>
      <li class="card" tabindex="0" aria-haspopup="true">
        <div class="intro card3">
          <img
            src="https://d1csarkz8obe9u.cloudfront.net/posterpreviews/code-hackathon-event-poster-design-template-d7c8ddfd12e11fd2b9c6b70241626091.jpg?ts=1567076214"
            width="140" height="140" alt="Atom app icon">
          <h2>Event 3</h2>
        </div>
        <div class="info back3">
          <p class="publisher">By <strong>CSI</strong></p>
          <p class="description">Event Description : Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer
            lacinia dui lectus. Donec scelerisque ipsdiam, ac mattis orci pellentesque eget.</p>
          <button class="butt"><a href="" target="_blank">Registration</a></button>
        </div>
      </li>
      <li class="card" tabindex="0" aria-haspopup="true">
        <div class="intro card4">
          <img
            src="https://d1csarkz8obe9u.cloudfront.net/posterpreviews/live-webinar-invitation-instagram-design-template-d1139d482eed2a81a69b3a9496d81d4c.jpg?ts=1586421432"
            width="200" height="250" alt="Transmit app icon">
          <h2>Event 4</h2>
        </div>
        <div class="info back4">
          <p class="publisher">By <strong>CSI</strong></p>
          <p class="description">Event Description : Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer
            lacinia dui lectus. Donec scelerisque ipsdiam, ac mattis orci pellentesque eget.</p>
          <button class="butt"><a href="" target="_blank">Registration</a></button>
        </div>
      </li>
    </ul>
  </section>
  <br />
  <!-- <hr class="featurette-divider"> -->
  <?php include './footer.html'; ?>

  <!-- <script src="https://code.jquery.com/jquery-3.5.1.slim.min.js"
    integrity="sha384-DfXdz2htPH0lsSSs5nCTpuj/zy4C+OGpamoFVy38MVBnE+IbbVYUew+OrCXaRkfj"
    crossorigin="anonymous"></script> -->
  <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.0/dist/umd/popper.min.js"
    integrity="sha384-Q6E9RHvbIyZFJoft+2mJbHaEWldlvI9IOYy5n3zV9zzTtmI3UksdQRVvoxMfooAo"
    crossorigin="anonymous"></script>
  <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.5.0/js/bootstrap.min.js"
    integrity="sha384-OgVRvuATP1z7JjHLkuOU7Xw704+h835Lr+6QL9UvYjZE3Ipu6Tp75j7Bh/kR0JKI"
    crossorigin="anonymous"></script>
  <!-- Core theme JS-->
  <script src="./js/jquery.min.js"></script>
  <script src="./js/TweenMax.min.js"></script>
  <script src="./js/header.js"></script>
  


</body>

</html>