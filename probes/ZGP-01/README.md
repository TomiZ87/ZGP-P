<h1>ZGP-1</h1>
<p>
<b>Name:</b> ZGP-1 (No alias or nickname)

<b>Developed in:</b> 2020
</p>

ZGP-1 is proof-of-a-concept prototype of probe that measures temperature and displays it on the LCD display together with time since powering up and allows the user to adjust the backlight and text opacity levels. As the first probe, it did not have its own energy source - it relied on the computer for power.<br><br>


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
    <li>1x Arduino Uno R3 SMD Edition</li>
    <li>1x Large Breadboard</li>
    <li>1x BMP180 - Pressure/Temperature Sensor</li>
    <li>1x LCD 16x2</li>
    <li>2x Rotary Encoder - The knob</li>
    <li>Cables/Wires</li>
    <li>USB-B to USB-A cable</li>
</ul>
Note: The BMP180 does multiple type of measurements, but in this prototype, only temperature will be used.

<h3>Schema</h3>
<p align="center" width="100%">
  <img src="./schema.png" alt="ZGP-1 Schema" height="350"><br><br>
</p>

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

<h2>Testing</h2>
Since no battery was being used, this probe was not tested for self-sustainablity/energy-independence but rather for the functionalities. This was a proof-of-concept.

<h2>Recommendations for the next probe</h2>
<ul>
    <li>Use a LCD display with less pins to reduce the space needed.</li>
    <li>When using a battery, the user should not be able to adjust the backlighting - it will drain battery faster.</li>
    <li>Use a more precise temperature sensor.</li>
</ul>
