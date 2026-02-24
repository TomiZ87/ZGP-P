<h1>ZGP-03</h1>
<p>
<b>Designation: </b>ZGP-03<br>
<b>Name (alias): </b>Michael<br>
<b>Developed in: </b>2025-26<br>
<b>Status: </b>In development<br><br>
<b>Main Component: </b>Arduino Uno Rev3 ATMEGA328P<br>
<b>Power Source: </b>9V Battery<br>
<b>Measuring: </b>Temperature & Humidity<br>
</p>

Probe summary in a few sentences
ZGP-03 is the first probe to imlement the interrupts and state machines to control the probe.<br><br>

<table align="center">
  <thead>
    <tr>
      <th markdown><a href="./src/main.ino">Code</a></th>
      <th markdown><a href="">Video</a></th>
    </tr>
  </thead>
</table>

<p align="center" width="100%">
  <img src="./logo.png" alt="ZGP-3 Logo" height="250" width="250">
</p>

<h2>Components</h2>
<ul>
    <li>1x Arduino Uno Rev3</li>
    <li>1x Breadboard</li>
    <li>1x ...</li>
    <li>1x ...</li>
    <li>Cables/Wires</li>
    <li>USB-B to USB-A cable</li>
</ul>

<h3>Libraries/Dependencies</h3>
<ul>
    <li>...</li>
    <li>...</li>
</ul>

<h3>Schema</h3>
<p align="center" width="100%">
  <img src="./schema.png" alt="ZGP-3 Schema" height="350"><br><br>
</p>

<h4>Pin Mapping</h4>
<table align="center">
    <tr><th>Component</th><th>Interface</th></tr>
    <tr><td>...</td><td>Pin1, Pin2</td></tr>
    <tr><td>...</td><td>Pin1, Pin2</td></tr>
    <tr><td>...</td><td>Pin1, Pin2</td></tr>
    <tr><td>...</td><td>Pin1, Pin2</td></tr>
</table>

<h2>Requirements</h2>
<h3>Functional Requirements:</h3>
<ol>
    <li>The probe shall measure temperature using a sensor. </li>
    <li>The probe shall measure humidity using a sensor. </li>
    <li>The telemetry shall be displayed on the (LCD/E-INK) screen. </li>
    <li>The  shall display the time since powering up in seconds. </li>
    <li>The (LCD/E-INK) shall display the time since powering up in seconds. </li>
    <li>The user shall be able to turn on and off the prototype. </li>
</ol>

<h3>Non-Functional Requirements:</h3>
<ol>
    <li>The probe shall display the temperature in degrees celsius. </li>
    <li>The probe shall display the humidity in %. </li>
    <li>The probe shall have the ability to count up to 2^31-1 seconds. </li>
</ol>

<h2>Testing</h2>
Unit testing & longevity testing

<h2>Recommendations for the next probes</h2>
<ul>
    <li>...</li>
</ul>
