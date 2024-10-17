import os # Provides functions to interact with the operating system
import shutil # Provides functions for high-level file operations like copying and moving files

# Creates a subfolder within the given folder if it does not already exist.
# Join the folder path and subfolder name to get the full subfolder path
def create_subfolder_if_needed(folder_path, subfolder_name):
    subfolder_path = os.path.join(folder_path, subfolder_name)

    if not os.path.exists(subfolder_path): # Check if the subfolder exists; if not, create it
        os.makedirs(subfolder_path)
    return subfolder_path



#Cleans the specified folder by organizing files into subfolders based on their extensions.
def clean_folder(folder_path):

    for filename in os.listdir(folder_path):
        if os.path.isfile(os.path.join(folder_path, filename)):
            file_extension = filename.split('.')[-1].lower()
            if file_extension:
                subfolder_name = f"{file_extension.upper()} Files"
                subfolder_path = create_subfolder_if_needed(folder_path, subfolder_name)
                file_path = os.path.join(folder_path, filename)
                new_location = os.path.join(subfolder_path, filename)
                if not os.path.exists(new_location):
                    shutil.move(file_path, subfolder_path)
                    print(f"Moved: {filename} -> {subfolder_name}/")
                else:
                     print(f"Skipped: {filename} already exists in {subfolder_name}/")



if __name__ == "__main__":
    print("Desktop Cleaner Script")
    folder_path = '/Users/carterdoncouse/Downloads' # Set the folder path to be cleaned (replace with desired folder)
    if os.path.isdir(folder_path): # Check if the specified path is a valid directory
        clean_folder(folder_path)
        print("Cleaning complete.")
    else:
        print("Invalid folder path. Please ensure the path is correct and try again.")