<h1>ZGP-2</h1>
<p>
<b>Name: </b>ZGP-2 "Polaris"<br>
<b>Developed in: </b>2021<br>
<b>Status: </b>Finished<br><br>
<b>Main Component: </b>Arduino Uno Rev3 SMD<br>
<b>Power Source: </b>9V Battery<br>
<b>Measuring: </b>Temperature<br>
</p>

Polaris is a second and last proof-of-concept probe prototype that measures temperature, just like ZGP-1, and displays it on a LCD screen together with the time since powering up. This was a proof-of-concept probe prototype because it is the first prototype to be powered by an external source of energy - a 9V battery.<br><br>

In comparison with ZGP-1, Polaris has a different LCD screen with way less pins and a more accurate temperature sensor - DHT11. The option to adjust the background lighting and text opacity using the rotary encoder has been removed to decrease the energy consumption.<br><br>

<table align="center">
  <thead>
    <tr>
      <th markdown><a href="./src/main.ino">Code</a></th>
      <th markdown><a href="">Video</a></th>
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
    <li>1x Arduino Uno Rev3 SMD</li>
    <li>1x LCD 16x2</li>
    <li>1x DHT11 - Temperature Sensor</li>
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
    <li>The telemetry shall be displayed on the LCD screen. ✅</li>
    <li>The LCD shall display the time since powering up in seconds. ✅</li>
    <li>The user shall be able to turn on and off the prototype. ✅</li>
</ol>

<h3>Non-Functional Requirements:</h3>
<ol>
    <li>The probe shall display the temperature in degrees celsius. ✅</li>
    <li>The probe shall have the ability to count up to 2^31-1 seconds. ✅</li>
</ol>

<h2>Testing</h2>
This probe was tested for functionalitities and for battery life (how long can the probe be up on a new 9V battery).

<h2>Recommendations for the next probe</h2>
<ul>
    <li>It would be cool to experiment with the e-ink display.</li>
    <li>The probe could measure more data than temperature.</li>
</ul>
