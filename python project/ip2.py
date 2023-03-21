import os
import pyautogui
option = ["wifi", "ethernet", "lan"]
while True:

    # prompts message on screen and gets the command
    # value in val variable
    value = pyautogui.prompt(
        "Enter what method are you connected wifi or ethernet(lan)")
    # convert every word in lower case
    value = value.lower()
    # if the user give a wrong input
    if value not in option:
        pyautogui.alert("wrong input smartass try again")

    else:
        for ip_ofnetwork in range(1, 251):
            if value == "wifi":
                # if you are using wifi the it will open netsh and will set {ipv4} {ipv4 mask} {ipv4 gateway}
                os.system('netsh interface ip set address name ="Wi-Fi" static 192.168.18.' +
                          str(ip_ofnetwork)+' 255.255.255.0 192.168.18.254')
                os.system('netsh ip set dns "Ethernet" static 8.8.8.8 ')
                cmd = "ping 192.168.1.103"
                if os.system(cmd) != "Ping request could not find host www.google.com. Please check the name and try again.":
                    print("trying ip 192.168.18."+str(ip_ofnetwork))

                else:
                    print("done!")
                    break

            else:
                # if you are using lan the it will open netsh and will set {ipv4} {ipv4 mask} {ipv4 gateway}
                os.system('netsh interface ip set address name ="Ethernet"static 192.168.18.'+str(ip_ofnetwork)+' 255.255.255.0 192.169.18.254')
                # will set the dns
                os.system('netsh ip set dns "Ethernet" static 8.8.8.8 1.1.1.1')
                # will ping google server for testing
                cmd = "ping 192.168.1.103"
                os.system(cmd)
                print("trying ip 192.168.18."+str(ip_ofnetwork))
                print("\n  \n")
                
                if os.system(cmd) != "Ping request could not find host www.google.com. Please check the name and try again.":
                    print("trying ip 192.168.18."+str(ip_ofnetwork))

                else:
                    print("done!")
                    break

    break
