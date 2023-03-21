monthconversion={
    "Jan":"January",
    "Feb":"Feburary",
    "Mar":"March",
    "Apr":"April",
    "May":"May",
    "Jun":"June",
    "Jul":"July",
    "Sep":"September",
    "Oct":"October",
    "Nov":"November",
    "Dec":"December",
}
print(monthconversion["Nov"])
print(monthconversion.get("Dec"))
#this can give  a default value 
print(monthconversion.get("luv"))
#can also specifi the default output
print(monthconversion.get("luv","not a valid number"))

