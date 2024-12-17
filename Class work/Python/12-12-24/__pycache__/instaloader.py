import instaloader

username =input("Enter Username: ")
ig = instaloader.Instaloader()
profile = instaloader.Profile.from_username(ig.context, username)

print("Username: ",profile.username)
print("Post: ",profile.mediacount)
print("Followers: ",str(profile.followers))
print("Following: ",str(profile.followees))
print("Bio :",profile.biography)
instaloader.Instaloader().download_profile(username,profile_pic_only=True)