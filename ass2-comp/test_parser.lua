-- Test case 1
print(13+(22-11)/1*44)

-- Test case 2
x = 7
y = (10+x)*2
z = y - x
print(x)
print(y)
print(z)

-- Test case 3
print "enter a number:"
n = io.read("*number")
factorial = 1
x=1
for i = 2,n do
  x = x * i
end
io.write("factorial of ")
io.write(n)
io.write(" is ")
print(x)

--Test case 4
print "enter a number:"
n = io.read("*number")
for i = 2,n do
  if n%i==0 then
    io.write(i)
    io.write(" is a factor of ")
    print(n)
  end
end