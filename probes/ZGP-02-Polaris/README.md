<h1>ZGP-2</h1>
<p>
<b>Name: </b>ZGP-2 "Polaris"<br>
<b>Developed in: </b>2021<br>
<b>Status: </b>Finished<br><br>
<b>Main Component: </b>Arduino Uno Rev3 ATMEGA328P<br>
<b>Power Source: </b>9V Battery<br>
<b>Measuring: </b>Temperature & Humidity<br>
</p>

Polaris is a second and last proof-of-concept probe prototype that measures temperature and humidity, and displays it on a LCD screen together with the time since powering up. This was a proof-of-concept probe prototype because it is the first prototype to be powered by an external source of energy - a 9V battery.<br><br>

In comparison with ZGP-1, Polaris has a different LCD screen with way less pins and a more accurate temperature & humidity sensor - DHT11. The option to adjust the background lighting and text opacity using the rotary encoder has been removed to decrease the energy consumption.<br><br>

<table align="center">
  <thead>
    <tr>
      <th markdown><a href="./src/main.ino">Code</a></th>
      <th markdown><a href="https://youtu.be/9Nv3k3qNFNU?si=vRNvxJtXrEumooKg">Video</a></th>
    </tr>
  </thead>
</table>

<p align="center" width="100%">
  <img src="./logo.png" alt="ZGP-2 Logo" height="250" width="250">
</p>

<h2>Components</h2>
<ul>
    <li>1x Main Component</li>
    <li>1x Small Breadboard</li>
    <li>1x Arduino Uno Rev3 ATMEGA328P</li>
    <li>1x LCD 16x2 (I2C)</li>
    <li>1x DHT11 - Temperature & Humidity Sensor - <a href="https://www.mouser.com/datasheet/2/758/DHT11-Technical-Data-Sheet-Translated-Version-1143054.pdf">Documentation</a></li>
    <li>Cables/Wires</li>
    <li>1x Battery adapter with a switch</li>
    <li>1x 9V Battery</li>
</ul>

<h3>Schema</h3>
<p align="center" width="100%">
  <img src="./schema.png" alt="ZGP-2 Schema" height="350"><br><br>
</p>

<h4>Pin Mapping</h4>
<table align="center">
    <tr><th>Component</th><th>Interface</th></tr>
    <tr><td>DHT 11</td><td>D2, GND & 5v</td></tr>
    <tr><td>LCD 16x2</td><td>A4, A5, GND & 5v</td></tr>
</table>

<h2>Requirements</h2>
<h3>Functional Requirements:</h3>
<ol>
    <li>The probe shall measure temperature using a sensor. ✅</li>
    <li>The probe shall measure humidity using a sensor. ✅</li>
    <li>The telemetry shall be displayed on the LCD screen. ✅</li>
    <li>The LCD shall display the time since powering up in seconds. ✅</li>
    <li>The user shall be able to turn on and off the prototype. ✅</li>
</ol>

<h3>Non-Functional Requirements:</h3>
<ol>
    <li>The probe shall display the temperature in degrees celsius. ✅</li>
    <li>The probe shall display the humidity in %. ✅</li>
    <li>The probe shall have the ability to count up to 2^31-1 seconds. ✅</li>
</ol>

<h2>Testing</h2>
This probe was tested for functionalitities and for battery life (how long can the probe be up on a 9V battery) 3 times. <br><br>

Expected/Targeted battery lifespan: <b>21 600 seconds (6 hours)</b>

<h3>3 Tests:</h3>

<table align="center">
    <tr><th>Test No.</th><th>Time Powered</th></tr>
    <tr><td>1</td><td>21 803 sec = appx. 6 hours</td></tr>
    <tr><td>2</td><td>32 862 sec = appx. 9 hours 8min</td></tr>
    <tr><td>3</td><td>100 010 sec (Powered by a computer)</td></tr>
</table>

The purpose of Test 3 was to test how does the probe react to the long duration of the program running.

<h2>Recommendations for the next probes</h2>
<ul>
    <li>It would be cool to experiment with the e-ink display.</li>
    <li>Improve the UI on the LCD Screen (distribution of the text on the LCD).</li>
    <li>More comprehensive testing for the battery lifespan.</li>
</ul>
