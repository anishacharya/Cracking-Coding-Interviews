/*
Enter your query here.
Problem Statement

Given a table STATION that holds data for five fields namely ID, CITY, STATE, NORTHERN LATITUDE and WESTERN LONGITUDE.
+-------------+------------+
| Field       |   Type     |
+-------------+------------+
| ID          | INTEGER    |
| CITY        | VARCHAR(21)|
| STATE       | VARCHAR(2) |
| LAT_N       | NUMERIC    |
| LONG_W      | NUMERIC    |
+-------------+------------+
 
Let NUM be no. of cities (no. of entries in table) and NUMunique be no. of unique cities, then write a query to print the value of NUM - NUMunique
In Other words: Write a query to find the difference between the total number of cities (no. of entries in table) and the unique number of cities (no. of unique entries in table).
*/

SELECT COUNT(CITY) - COUNT(DISTINCT CITY) FROM STATION;
