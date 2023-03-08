-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Find crime scene description
SELECT description FROM crime_scene_reports
WHERE month = 7 AND day = 28
AND street = 'Humphrey Street';

-- interview with witnesses
SELECT name, transcript FROM interviews WHERE month = 7 AND day = 28;

-- Find license plate from bakery security logs
SELECT * FROM bakery_security_logs WHERE year = 2021 AND month = 7 AND day = 28 AND hour = 10;

-- Find account number from atm_transactions
SELECT * FROM atm_transactions WHERE year = 2021 AND month = 7 AND day = 28 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw';

-- Finding who withdraw the money and go the bakery parking lots by comparing account number and license plate from people table
SELECT * FROM people JOIN bank_accounts ON people.id = bank_accounts.person_id WHERE account_number = 28500762;
SELECT * FROM people JOIN bank_accounts ON people.id = bank_accounts.person_id WHERE account_number = 28296815;
SELECT * FROM people JOIN bank_accounts ON people.id = bank_accounts.person_id WHERE account_number = 76054385;
SELECT * FROM people JOIN bank_accounts ON people.id = bank_accounts.person_id WHERE account_number = 49610011;
SELECT * FROM people JOIN bank_accounts ON people.id = bank_accounts.person_id WHERE account_number = 16153065;
SELECT * FROM people JOIN bank_accounts ON people.id = bank_accounts.person_id WHERE account_number = 25506511;
SELECT * FROM people JOIN bank_accounts ON people.id = bank_accounts.person_id WHERE account_number = 81061156;
SELECT * FROM people JOIN bank_accounts ON people.id = bank_accounts.person_id WHERE account_number = 26013199;

--also got the phone number from people table
--According to witnesses, the theft talked the phone less than a minute
--So find the person who talked less than a minute
SELECT * FROM phone_calls WHERE year = 2021 AND month = 7 AND day =  28 AND caller = '(286) 555-6063';
SELECT * FROM phone_calls WHERE year = 2021 AND month = 7 AND day =  28 AND caller = '(367) 555-5533';
SELECT * FROM phone_calls WHERE year = 2021 AND month = 7 AND day =  28 AND caller = '(770) 555-1861';
SELECT * FROM phone_calls WHERE year = 2021 AND month = 7 AND day =  28 AND caller = '(829) 555-5269';

--find the accomplice by the phone number
SELECT * FROM people WHERE phone_number = '(375) 555-8161';
SELECT * FROM people WHERE phone_number = '(725) 555-3243';

--find the airport;
SELECT * FROM airports WHERE city = 'Fiftyville';

--find the culprit by the passport number
SELECT * FROM airports
JOIN flights ON airports.id = flights.destination_airport_id
JOIN passengers ON flights.id = passengers.flight_id
WHERE passport_number = 3592750733;

SELECT * FROM airports
JOIN flights ON airports.id = flights.destination_airport_id
JOIN passengers ON flights.id = passengers.flight_id
WHERE passport_number = 5773159633

-- I made the decision that if I were the culprit, I will buy only one side ticket.
--Bruce only bought the one side ticket
--Diana bought the return ticket
--So the theft is Bruce