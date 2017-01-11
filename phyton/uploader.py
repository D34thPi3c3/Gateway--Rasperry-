import os
path="/tmp/motion"
def upload_files():
	if not os.path.exists(path):
		return
	dir_list = os.listdir(path)
	for file_name in dir_list:
		if "txt" in file_name:
			print "Uploaded"
			cmd = "/home/pi/dropbox_uploader.sh upload " + path + file_name
			os.system(cmd)
			os.remove(path + file_name)
			
if __name__ == "__main__"
	upload_files()