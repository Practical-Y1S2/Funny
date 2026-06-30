<!doctype html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Document</title>
    <link rel="stylesheet" href="../CSS/bootstrap.css" />
    <link rel="stylesheet" href="../CSS/bootstrap-grid.css" />
    <link
      rel="stylesheet"
      href="https://cdn.jsdelivr.net/npm/bootstrap-icons@1.13.1/font/bootstrap-icons.min.css"
    />
    <link
      href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.8/dist/css/bootstrap.min.css"
      rel="stylesheet"
      integrity="sha384-sRIl4kxILFvY47J16cr9ZwB07vP4J8+LH7qKQnuqkuIAvNWLzeN8tE5YBujZqJLB"
      crossorigin="anonymous"
    />
    <script
      src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.8/dist/js/bootstrap.bundle.min.js"
      integrity="sha384-FKyoEForCGlyvwx9Hj09JcYn3nv7wiPVlz7YYwJrWVcXK/BmnVDxM+D2scQbITxI"
      crossorigin="anonymous"
    ></script>
  </head>
  <style>
    footer h5 {
      font-weight: 600;
      margin-bottom: 15px;
    }

    footer ul li {
      margin-bottom: 8px;
    }

    footer a:hover {
      color: #0d6efd !important;
    }

    footer {
      font-size: 15px;
    }

    .bi {
      margin-right: 8px;
    }
  </style>
  <body>
    <div class="container mt-3">
      <div class="d-flex justify-content-between">
        <div>company name</div>
        <div>
          <div class="input-group mb-3">
            <input
              type="text"
              class="form-control"
              placeholder="Server"
              aria-label="Server"
            />
            <span class="input-group-text"> <i class="bi bi-search"></i></span>
          </div>
        </div>
        <div>Profile</div>
      </div>
    </div>
    <div>
      <nav class="navbar navbar-expand-lg bg-body-tertiary">
        <div class="container">
          <a class="navbar-brand" href="#">Navbar</a>
          <button
            class="navbar-toggler"
            type="button"
            data-bs-toggle="collapse"
            data-bs-target="#navbarNavDropdown"
            aria-controls="navbarNavDropdown"
            aria-expanded="false"
            aria-label="Toggle navigation"
          >
            <span class="navbar-toggler-icon"></span>
          </button>
          <div class="collapse navbar-collapse" id="navbarNavDropdown">
            <ul class="navbar-nav">
              <li class="nav-item">
                <a class="nav-link active" aria-current="page" href="#">Home</a>
              </li>
              <li class="nav-item">
                <a class="nav-link" href="#">About</a>
              </li>
              <li class="nav-item">
                <a class="nav-link" href="#">SuperMarket</a>
              </li>
              <li class="nav-item">
                <a class="nav-link" href="#">PartnerShip</a>
              </li>
              <li class="nav-item">
                <a class="nav-link" href="#">Baby&amptoys</a>
              </li>
              <li class="nav-item">
                <a class="nav-link" href="#">FitnessSport</a>
              </li>
              <li class="nav-item">
                <a class="nav-link" href="#">Cloting</a>
              </li>
              <li class="nav-item">
                <a class="nav-link" href="#">Fumitures</a>
              </li>
              <li class="nav-item dropdown">
                <a
                  class="nav-link dropdown-toggle"
                  href="#"
                  role="button"
                  data-bs-toggle="dropdown"
                  aria-expanded="false"
                >
                  More
                </a>
                <ul class="dropdown-menu">
                  <li><a class="dropdown-item" href="#">Action</a></li>
                  <li><a class="dropdown-item" href="#">Another action</a></li>
                  <li>
                    <a class="dropdown-item" href="#">Something else here</a>
                  </li>
                </ul>
              </li>
            </ul>
          </div>
        </div>
      </nav>
    </div>
    <div class="container mt-3">
      <div class="row">
        <div class="col-md-3 col-sm-12">
          <ul class="list-group">
            <li class="list-group-item">Best Cloting</li>
            <li class="list-group-item">A second item</li>
            <li class="list-group-item">A third item</li>
            <li class="list-group-item">A fourth item</li>
            <li class="list-group-item">And a fifth one</li>
          </ul>
        </div>
        <div class="col-md-9 col-sm-12">
          <div class="pb-10">
            <img
              src="https://i.pinimg.com/736x/8c/ae/d9/8caed990de04215502ef378d011c9a53.jpg"
              alt=""
            />
          </div>
        </div>
      </div>
    </div>
    <div class="container mt-3">
      <div class="row">
        <div class="col-6">
          <h3>Popular Products</h3>
        </div>
        <div class="col-6">
          <button class="btn btn-primary float-end">View All</button>
        </div>
      </div>
    </div>
    <div class="container mt-3">
      <div class="row">
        <div class="col-md-6 col-lg-3">
          <div class="card" style="width: 18rem">
            <img
              src="https://i.pinimg.com/736x/5c/95/ec/5c95ecb29a823c919bf0df5c6a823284.jpg"
              class="card-img-top"
              alt="..."
            />
            <div class="card-body">
              <p class="card-text">
                Some quick example text to build on the card title and make up
                the bulk of the card’s content.
              </p>
            </div>
          </div>
        </div>
        <div class="col-md-6 col-lg-3">
          <div class="card" style="width: 18rem">
            <img
              src="https://i.pinimg.com/1200x/6b/9d/52/6b9d5218e9e73963ce0eb75be63be10e.jpg"
              class="card-img-top"
              alt="..."
            />
            <div class="card-body">
              <p class="card-text">
                Some quick example text to build on the card title and make up
                the bulk of the card’s content.
              </p>
            </div>
          </div>
        </div>
        <div class="col-md-6 col-lg-3">
          <div class="card" style="width: 18rem">
            <img
              src="https://i.pinimg.com/736x/45/07/3f/45073f0e0ca8618826c0cb34a0ad339d.jpg"
              class="card-img-top"
              alt="..."
            />
            <div class="card-body">
              <p class="card-text">
                Some quick example text to build on the card title and make up
                the bulk of the card’s content.
              </p>
            </div>
          </div>
        </div>
        <div class="col-md-6 col-lg-3">
          <div class="card" style="width: 18rem">
            <img
              src="https://i.pinimg.com/736x/1f/4c/27/1f4c273b6b1dc4386780dde144a2a613.jpg"
              class="card-img-top"
              alt="..."
            />
            <div class="card-body">
              <p class="card-text">
                Some quick example text to build on the card title and make up
                the bulk of the card’s content.
              </p>
            </div>
          </div>
        </div>
      </div>
    </div>
    <div class="container mt-3">
      <div class="row">
        <div class="col-md-6 col-lg-3">
          <div class="card" style="width: 18rem">
            <img
              src="https://i.pinimg.com/736x/f8/ab/87/f8ab87c8c5412d754e248fcaee38d768.jpg"
              class="card-img-top"
              alt="..."
            />
            <div class="card-body">
              <p class="card-text">
                Some quick example text to build on the card title and make up
                the bulk of the card’s content.
              </p>
            </div>
          </div>
        </div>
        <div class="col-md-6 col-lg-3">
          <div class="card" style="width: 18rem">
            <img
              src="https://i.pinimg.com/736x/47/7d/34/477d34d084fef78278a9c9741ab96d38.jpg"
              class="card-img-top"
              alt="..."
            />
            <div class="card-body">
              <p class="card-text">
                Some quick example text to build on the card title and make up
                the bulk of the card’s content.
              </p>
            </div>
          </div>
        </div>
        <div class="col-md-6 col-lg-3">
          <div class="card" style="width: 18rem">
            <img
              src="https://i.pinimg.com/736x/f3/ac/91/f3ac9108cb5011569e9ac17b583600c1.jpg"
              class="card-img-top"
              alt="..."
            />
            <div class="card-body">
              <p class="card-text">
                Some quick example text to build on the card title and make up
                the bulk of the card’s content.
              </p>
            </div>
          </div>
        </div>
        <div class="col-md-6 col-lg-3">
          <div class="card" style="width: 18rem">
            <img
              src="https://i.pinimg.com/736x/b2/bb/0c/b2bb0c98bc0e1e33f1f5a068860b3426.jpg"
              class="card-img-top"
              alt="..."
            />
            <div class="card-body">
              <p class="card-text">
                Some quick example text to build on the card title and make up
                the bulk of the card’s content.
              </p>
            </div>
          </div>
        </div>
      </div>
    </div>
    <!-- Download App Section -->
    <section class="bg-light py-5 border-top">
      <div class="container">
        <div class="row align-items-center">
          <div class="col-md-6">
            <h3>Download our App</h3>
            <p class="text-muted">
              Get an amazing app to make your shopping easier.
            </p>
          </div>

          <div class="col-md-6 text-md-end">
            <img
              src="https://developer.apple.com/assets/elements/badges/download-on-the-app-store.svg"
              width="150"
            />

            <img
              src="https://upload.wikimedia.org/wikipedia/commons/7/78/Google_Play_Store_badge_EN.svg"
              width="170"
            />
          </div>
        </div>
      </div>
    </section>

    <!-- Footer -->
    <footer class="bg-white border-top pt-5  container-fluid">
      <div class="container">
        <div class="row">
          <!-- Brands -->
          <div class="col-lg-2 col-md-4 mb-4">
            <h5>Brands</h5>
            <ul class="list-unstyled">
              <li>
                <a href="#" class="text-decoration-none text-secondary"
                  >Adidas</a
                >
              </li>
              <li>
                <a href="#" class="text-decoration-none text-secondary">Puma</a>
              </li>
              <li>
                <a href="#" class="text-decoration-none text-secondary"
                  >Reebok</a
                >
              </li>
              <li>
                <a href="#" class="text-decoration-none text-secondary">Nike</a>
              </li>
            </ul>
          </div>

          <!-- Company -->
          <div class="col-lg-2 col-md-4 mb-4">
            <h5>Company</h5>
            <ul class="list-unstyled">
              <li>
                <a href="#" class="text-decoration-none text-secondary"
                  >About Us</a
                >
              </li>
              <li>
                <a href="#" class="text-decoration-none text-secondary"
                  >Career</a
                >
              </li>
              <li>
                <a href="#" class="text-decoration-none text-secondary"
                  >Find Store</a
                >
              </li>
              <li>
                <a href="#" class="text-decoration-none text-secondary"
                  >Terms & Conditions</a
                >
              </li>
              <li>
                <a href="#" class="text-decoration-none text-secondary"
                  >Sitemap</a
                >
              </li>
            </ul>
          </div>

          <!-- Help -->
          <div class="col-lg-2 col-md-4 mb-4">
            <h5>Help</h5>
            <ul class="list-unstyled">
              <li>
                <a href="#" class="text-decoration-none text-secondary"
                  >Contact Us</a
                >
              </li>
              <li>
                <a href="#" class="text-decoration-none text-secondary"
                  >Refund</a
                >
              </li>
              <li>
                <a href="#" class="text-decoration-none text-secondary"
                  >Order Status</a
                >
              </li>
              <li>
                <a href="#" class="text-decoration-none text-secondary"
                  >Shipping Info</a
                >
              </li>
              <li>
                <a href="#" class="text-decoration-none text-secondary"
                  >Open Dispute</a
                >
              </li>
            </ul>
          </div>

          <!-- Account -->
          <div class="col-lg-2 col-md-4 mb-4">
            <h5>Account</h5>
            <ul class="list-unstyled">
              <li>
                <a href="#" class="text-decoration-none text-secondary"
                  >Login</a
                >
              </li>
              <li>
                <a href="#" class="text-decoration-none text-secondary"
                  >Register</a
                >
              </li>
              <li>
                <a href="#" class="text-decoration-none text-secondary"
                  >Account Settings</a
                >
              </li>
              <li>
                <a href="#" class="text-decoration-none text-secondary"
                  >My Orders</a
                >
              </li>
            </ul>
          </div>

          <!-- Social -->
          <div class="col-lg-4 col-md-8 mb-4">
            <h5>Follow Us</h5>

            <p>
              <a href="#" class="text-decoration-none text-dark d-block mb-2">
                <i class="bi bi-facebook"></i> Facebook
              </a>

              <a href="#" class="text-decoration-none text-dark d-block mb-2">
                <i class="bi bi-twitter-x"></i> Twitter
              </a>

              <a href="#" class="text-decoration-none text-dark d-block mb-2">
                <i class="bi bi-instagram"></i> Instagram
              </a>

              <a href="#" class="text-decoration-none text-dark d-block">
                <i class="bi bi-youtube"></i> YouTube
              </a>
            </p>
          </div>
        </div>

        <hr />

        <!-- Bottom Footer -->
        <div class="row pb-3">
          <div class="col-md-4 text-center text-md-start">
            © 2026 Your Company
          </div>

          <div class="col-md-4 text-center">
            info@company.com &nbsp; | &nbsp; +855 12 345 678
          </div>

          <div class="col-md-4 text-center text-md-end">
            Street Name 123, Phnom Penh
          </div>
        </div>
      </div>
    </footer>
  </body>
</html>
