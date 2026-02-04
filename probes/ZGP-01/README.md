<h1>ZGP-1</h1>
<p>
<b>Name: </b>ZGP-1 (No alias or nickname)<br>
<b>Developed in: </b>2020<br>
<b>Status: </b>Finished<br><br>
<b>Main Component: </b>Arduino Uno Rev3 SMD<br>
<b>Power Source:</b>USB (external/host-powered)<br>
<b>Measuring: </b>Temperature<br>
</p>

ZGP-1 is a proof-of-concept probe prototype that measures temperature and displays it on an LCD together with time since powering up and allows the user to adjust the backlight and text opacity levels. As the first probe, it does not have its own energy source - it relies on the computer for power.<br><br>

<table align="center">
  <thead>
    <tr>
      <th markdown><a href="./src/main.ino">Code</a></th>
      <th markdown><a href="https://www.youtube.com/watch?v=yme8clizDJw">Video</a></th>
    </tr>
  </thead>
</table>

<p align="center" width="100%">
  <img src="./logo.png" alt="ZGP-1 Logo" height="250" width="250">
</p>

<h2>Components</h2>
<ul>
    <li>1x Arduino Uno Rev3 SMD</li>
    <li>1x Large Breadboard</li>
    <li>1x BMP180 - Pressure/Temperature Sensor</li>
    <li>1x LCD 16x2 Screen</li>
    <li>2x Rotary Encoder - The knob</li>
    <li>Cables/Wires</li>
    <li>1x USB-B to USB-A cable</li>
</ul>
Note: The BMP180 supports multiple types of measurements, but in this prototype, only temperature will be used.

<h3>Schema</h3>
<p align="center" width="100%">
  <img src="./schema.png" alt="ZGP-1 Schema" height="350"><br><br>
</p>

<h4>Pin Mapping</h4>
<table align="center">
    <tr><th>Component</th><th>Interface</th></tr>
    <tr><td>BMP180</td><td>A4, A5, GND & 5v</td></tr>
    <tr><td>LCD 16x2</td><td>D2, D3, D4, D5, D11, D12, 2x GND, 2x 5v, to RE1, to RE2</td></tr>
    <tr><td>Rotary Encoder 1</td><td>GND, 5v, to LCD</td></tr>
    <tr><td>Rotary Encoder 2</td><td>GND & to LCD</td></tr>
</table>
RE - Rotary Encoder
<p><em>Note: LCD backlight and text opacity are controlled via rotary encoders.</em></p>

<h2>Requirements</h2>
<h3>Functional Requirements:</h3>
<ol>
    <li>The probe shall measure temperature using a sensor. ✅</li>
    <li>The telemetry shall be displayed on the LCD screen. ✅</li>
    <li>The user shall be able to adjust the background lighting. ✅</li>
    <li>The user shall be able to adjust the opacity of the LCD text. ✅</li>
    <li>The LCD shall display the time since powering up in seconds. ✅</li>
</ol>
Note: Power autonomy and enclosure design are explicitly out of scope for this prototype.

<h3>Non-Functional Requirements:</h3>
<ol>
    <li>The probe shall display the temperature in degrees celsius. ✅</li>
</ol>

<h2>Testing</h2>
Since no battery was being used, this probe was not tested for self-sustainablity/energy-independence but rather for the functionalities: 
<ul>
    <li>measuring temperature, </li>
    <li>displaying text and telemetry onto the LCD, </li>
    <li>validating input from the user interface (rotary encoders), and </li>
    <li>counting seconds since powering up.</li>
</ul>

This was a proof-of-concept.

<h2>Recommendations for the next probes</h2>
<ul>
    <li>Use a LCD screen with less pins to reduce the space needed.</li>
    <li>When using a battery, the user should not be able to adjust the backlighting - it will drain battery faster.</li>
    <li>Use a more precise temperature sensor.</li>
</ul>
