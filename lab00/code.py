def get_airspeed_velocity_of(unladen_swallow):
  if unladen_swallow.type == "african":
    return # redacted
  elif unladen_swallow.type == "european":
    return # redacted

def fizzbuzz(num):
  if num %3 ==0 and num %5 ==0:
    print(f"{num}: fizz and buzz")
  if num %3 == 0: # edit this line
    print(f"{num}: fizz")
  if num %5 == 5: # edit this line
    print(f"{num}: buzz")

for i in range(1, 20):
  fizzbuzz(i)
