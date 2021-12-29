# CSCI 303: Arrays, Strings 

(More complicated) Input, variables, and output

Again, this homework is similar to something you might have done in CSCI 161. 

# Objective:

Loops with input, strings, arrays, and output.
# Assignment:
Once word gets out that you know how to program, it’s a bit amazing how many people suddenly need software written. This is a variation of some software I wrote while volunteering.

Basically, it’s an organization that accepts used books and then sells them a couple of times a year at book sale events. Some way (other than a notebook and pencil) was needed to keep track of the inventory. So, here’s where you come in.

You’ll want two parallel arrays: one to keep track of book titles, and one to keep track of the prices. Assume there will be no more than 10 books. Assume no more than 100 characters per book title. Use malloc to allocate the strings in the array. 
So, it will be a menu:
1. Enter book information
2. List all books and prices
3. List total value of inventory

Number of Points:
15 points

Grading criteria:
Does it function correctly? 

Notes:
Note that if you use fscanf for input, no spaces are allowed. This is fine if that’s what you want to do. If you use fgets, on the other hand, you can copy spaces in, but I’m not sure if it copies the null terminator or not.
I’ll leave it to you to figure out how that one works. 


DO NOT USE gets() EVER EVER EVER EVER.
EVER. 
