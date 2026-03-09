<h1>ZGP-03</h1>
<p>
<b>Designation: </b>ZGP-03<br>
<b>Name (alias): </b>Michael<br>
<b>Developed in: </b>2026<br>
<b>Status: </b>In development<br><br>
<b>Main Component: </b>Arduino Uno Rev3 ATMEGA328P<br>
<b>Power Source: </b>9V Battery<br>
<b>Measuring: </b>Temperature & Humidity<br>
</p>

Michael is after a long time, the first probe that is not considered a proof-of-concept, as it has more advanced features, such as state machines and is more thoroughly tested - both as a whole system and the probe's code. It measures the temperature and humidity using the same DHT11 sensor and displays them on E-INK screen (which safes battery and does not need power constantly). It is also powered externally, using a battery.

ZGP-03 is the first probe to imlement the interrupts and state machines to control the probe. In comparison with ZGP-02, this probe does not differ significantly in terms of hardware (except the screen), but differ siginificantly software wise.

The probe is named after a friend who is also interested in embedded systems and Arudinos. <br><br>

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
    <li>1x E-INK Screen</li>
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
    <li>The E-INK screen shall display the time since powering up in seconds. </li>
    <li>The user shall be able to turn on and off the prototype. </li>
</ol>

<h3>Non-Functional Requirements:</h3>
<ol>
    <li>The probe shall display the temperature in degrees celsius. </li>
    <li>The probe shall display the humidity in %. </li>
    <li>The probe shall have the ability to count up to 2^31-1 seconds. </li>
    <li>The probe shall measure using the sensor and update the screen every 10 seconds. </li>
</ol>

<h2>Testing</h2>
Devided into 2 parts:
<ul>
    <li>Code testing</li>
    <li>System/Battery life/lifespan testing</li>
</ul>

<h3>Code testing</h3>
All parts of the code being run, was tested as they were being implemented, after putting the code together, the code was tested as a whole - all the functionalities and many possible scenarios that we could have come with (tested in TinkerCad).

<h3>System testing</h3>
After the components' code was tested, it has been uploaded to the ZPG-03 hardware. The System test consists of running the code on hardware and trying to trigger some scenarios - whether the components work and react according to the code + finding bugs.

After the system has been tested, then the Battery tests follow - using a new battery and figuring out how long will the probe be functional.

<h2>Recommendations for the next probes</h2>
<ul>
    <li>Have modes for the LCD that can save power (like if a button is pressed, then the screen will litght up for x seconds before powering off again - as an alternative for LCD screen).</li>
    <li>Larger batteries or more batteries could be used to prolong the probes cycles.</li>
    <li>It would be good, if the probes were able to also write the temperature and humidity and other telemetry data into some files, so they could be reviewed later (bitpacking could be used to conserve space).</li>
</ul>
