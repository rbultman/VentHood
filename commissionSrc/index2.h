const char index_html[] = "<!DOCTYPE html>\
<html>\
\
<head>\
    <meta name='viewport' content='width=device-width, initial-scale=1'>\
    <title>Setup your device</title>\
    <link rel='stylesheet' type='text/css' href='style.css'>\
</head>\
\
<body>\
    <h1>Connect me to your WiFi!</h1>\
    <h3>My device ID:</h3>
    <input type=text id='device-id' size='25' value='' disabled/>\
      <button type='button' class='input-helper' id='copy-button'>Copy</button>\
    <div id='scan-div'>\
        <h3>Scan for visible WiFi networks</h3>\
          <button id='scan-button' type='button'>Scan</button></div>\
    <div id='networks-div'></div>\
    <div id='connect-div' style='display: none'>\
        <p>Don't see your network? Move me closer to your router, then re-scan.</p>\
        <form id='connect-form'><input type='password' id='password' size='25' placeholder='password' />\
          <button type='button' class='input-helper' id='show-button'>Show</button>\
          <button type='submit' id='connect-button'>Connect</button>\
        </form>\
    </div>\
    <script src='rsa-utils/jsbn_1.js'></script>\
    <script src='rsa-utils/jsbn_2.js'></script>\
    <script src='rsa-utils/prng4.js'></script>\
    <script src='rsa-utils/rng.js'></script>\
    <script src='rsa-utils/rsa.js'></script>\
    <script src='script.js'></script>\
</body>\
\
</html>";
