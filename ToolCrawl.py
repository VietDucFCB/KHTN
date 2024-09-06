from selenium import webdriver
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from time import sleep

chromedriver_path = 'C:\\Users\\ASUS\\Downloads\\chromedriver_win32\\chromedriver.exe'

chrome_options = Options()
chrome_options.add_argument("webdriver.chrome.driver=" + chromedriver_path)

driver = webdriver.Chrome(options=chrome_options)

driver.get('https://tiki.vn/')

# Wait for the email input field to be visible
email_input = WebDriverWait(driver, 10).until(
    EC.visibility_of_element_located((By.ID, 'email'))
)
email_input.send_keys('thanhvan021104@gmail.com')

# Wait for the password input field to be visible
password_input = WebDriverWait(driver, 10).until(
    EC.visibility_of_element_located((By.ID, 'pass'))
)
password_input.send_keys('phantragiang')

login_button = WebDriverWait(driver, 10).until(
    EC.visibility_of_element_located((By.XPATH, "//button[@name='login']"))
)
login_button.click()

sleep(20)
driver.quit()
