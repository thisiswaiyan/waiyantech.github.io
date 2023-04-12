s = input("File type: ").strip().lower()

if s.endswith(".gif"):
    print("image/gif")
elif s.endswith(".jpg") or s.endswith(".jpeg"):
    print("image/jpeg")
elif s.endswith(".png"):
    print("image/png")
elif s.endswith(".pdf"):
    print("application/pdf")
elif s.endswith(".txt"):
    print("text/plain")
elif s.endswith(".zip"):
    print("application/zip")
elif s.endswith(".bin"):
    print("application/octet-stream")
else:
    print("application/octet-stream")