/*
 * Contains any sensitive Infomration that you do not want published to Github.
 * 
 * The SSID and Password variables will need to be changed if you’re connecting to another Wireless Access Point (such as at home). * The SSID and Password variables will need to be changed if you’re connecting to another Wireless Access Point (such as at home).

 * The `http_username` and `http_password` variables are used to authenticate when users are attempting to access secured pages.
 * 
 * Make sure this file is included in the .gitignore!
 * 
 */

const char* host = "RMS";
const char* ssid = "Libraries ACT";       // Wifi Network Name
const char* password = "";  // Wifi Password

String serverName = "http://192.168.1.10/CyberCity/website/esp32/dataTransfer.php";

String apiKeyValue = "CTF{fOuNdIt}";

String sensorName = "Google Keyword Search";
String sensorLocation = "16x2 LCD Display";
