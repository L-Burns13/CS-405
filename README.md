Architecture
Compare and contrast the types of frontend development you used in your full stack project, including Express HTML, JavaScript, and the single-page application (SPA).
-In this project, Express HTML was used for the customer-facing side of the Travlr application. These pages were served through the backend and loaded as traditional web pages. JavaScript helped add functionality, while the Angular single-page application was used for the admin side and allowed the page to update without fully reloading.

Why did the backend use a NoSQL MongoDB database?
-The backend used MongoDB because the trip data worked well in a flexible document format. MongoDB stores data in a JSON-like structure, which made it easier to connect the database with the API and frontend. This was useful because trip records could be stored and retrieved without needing a strict table structure.


Functionality
How is JSON different from Javascript and how does JSON tie together the frontend and backend development pieces?
-JavaScript is a programming language, while JSON is a data format used to store and transfer information. In this project, JSON helped pass trip data between the Angular frontend, Express backend, and MongoDB database. This allowed the different parts of the full stack application to communicate with each other.
Provide instances in the full stack process when you refactored code to improve functionality and efficiencies, and name the benefits that come from reusable user interface (UI) components.
-One example of refactoring was separating the Angular admin side into reusable components such as trip-listing, trip-card, add-trip, and edit-trip. This made the code easier to organize, update, and understand. Reusable UI components also reduce repeated code and make the application easier to maintain.


Testing
Methods for request and retrieval necessitate various types of API testing of endpoints, in addition to the difficulties of testing with added layers of security. Explain your understanding of methods, endpoints, and security in a full stack application.
-API testing helped confirm that the frontend, backend, and database were working together correctly. GET requests were used to retrieve trip data, POST requests were used to add new trips, and PUT requests were used to update existing trips. Testing became more difficult after security was added because some admin actions required login authentication and a valid token.


Reflection
How has this course helped you in reaching your professional goals? What skills have you learned, developed, or mastered in this course to help you become a more marketable candidate in your career field?
-This course helped me better understand how a full stack web application is built from start to finish. I gained experience using Angular, Express, Node.js, MongoDB, Postman, and GitHub. These skills help me become a more marketable candidate because they show that I can work with the frontend, backend, database, API testing, and authentication.
