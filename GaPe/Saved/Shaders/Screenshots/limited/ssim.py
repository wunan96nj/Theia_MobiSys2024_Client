from skimage.metrics import structural_similarity as ssim
import cv2
import os


def main():
	file_list = os.listdir("gt")
	predict = []
	skip = []
	static = []
	for i in range(2, 164):
	#for filename in file_list:
		filename = "HighresScreenshot{0:05}.png".format(i)
		print(filename)
		# Load the two images
		image1 = cv2.imread(os.path.join("gt", "HighresScreenshot{0:05}.png".format(i)))
		image2 = cv2.imread(os.path.join("predict", "HighresScreenshot{0:05}.png".format(i)))
		image3 = cv2.imread(os.path.join("prediction_Skip", "HighresScreenshot{0:05}.png".format(i)))
		image4 = cv2.imread(os.path.join("static", "HighresScreenshot{0:05}.png".format(i)))

		# Convert the images to grayscale
		gray_image1 = cv2.cvtColor(image1, cv2.COLOR_BGR2GRAY)
		gray_image2 = cv2.cvtColor(image2, cv2.COLOR_BGR2GRAY)
		gray_image3 = cv2.cvtColor(image3, cv2.COLOR_BGR2GRAY)
		gray_image4 = cv2.cvtColor(image4, cv2.COLOR_BGR2GRAY)

		# Calculate the SSIM index
		ssim_index_1 = ssim(gray_image1, gray_image2)
		ssim_index_2 = ssim(gray_image1, gray_image3)
		ssim_index_3 = ssim(gray_image1, gray_image4)
		predict.append(ssim_index_1)
		skip.append(ssim_index_2)
		static.append(ssim_index_3)

	print(predict)
	print(skip)
	print(static)

if __name__ == '__main__':
	main()
