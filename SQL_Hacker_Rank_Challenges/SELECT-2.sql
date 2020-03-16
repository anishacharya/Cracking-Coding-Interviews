/*
Problem Statement

You are given a City table with the fields described below:

+-------------+----------+
| Field       | Type     |
+-------------+----------+
| ID          | int(11)  |
| Name        | char(35) |
| CountryCode | char(3)  |
| District    | char(20) |
| Population  | int(11)  |
+-------------+----------+
We wish to retrieve the data for all American cities. Write a query that will fetch all the city names for every row in the table where the CountryCode = 'USA' and the population exceeds 120,000.

*/

SELECT Name 
FROM City
WHERE (CountryCode = 'USA' AND Population>120000);
