# SoundDetector
Sound Detector - Using Integrated Circuits, LEDs, Resistors, Capacitors, &amp; a Teensy

<h2>Project Description</h2>
<p>

</p>

<h2>Low-Level Description</h2>

<h2>Parts List</h2>
<div style="text:align:center">
	<table border = "1">
		<tr>
			<th>Quantity</th>
			<th>Part Name</th>
			<th>Value/Part Number</th>
		</tr>
		<tr>
			<td>4</td>
			<td>Resistor</td>
			<td>100&Omega;</td>
		</tr>
		<tr>
			<td>2</td>
			<td>Resistor</td>
			<td>1k&Omega;</td>
		</tr>
		<tr>
			<td>1</td>
			<td>Resistor</td>
			<td>10k&Omega;</td>
		</tr>
		<tr>
			<td>4</td>
			<td>Resistor</td>
			<td>100k&Omega;</td>
		</tr>
		<tr>
			<td>1</td>
			<td>Capacitor</td>
			<td>0.1&mu;F</td>
		</tr>
		<tr>
			<td>1</td>
			<td>Capacitor</td>
			<td>10pF</td>
		</tr>
		<tr>
			<td>1</td>
			<td>Diode</td>
			<td>1N4007</td>	
		</tr>
		<tr>
			<td>1</td>
			<td>Op Amp</td>
			<td>MCP6002</td>
		</tr>
		<tr>
			<td>4</td>
			<td>LED</td>
			<td>Blue, Red, Yellow, &amp; Green</td>
		</tr>
		<tr>
			<td>1</td>
			<td>Teensy 2.0</td>
			<td>-</td>
		</tr>
		<tr>
			<td>1</td>
			<td>Electret Microphone</td>
			<td>-</td>
		</tr>
	</table>
</div>
<h2>Flow of Control</h2>

<img src = "https://4.bp.blogspot.com/-Bl1jBUVW5K4/V7OCZ5bDRbI/AAAAAAAAAlQ/BdX3DjwHUa8XEP3PpgJAPeJYtIAEAvsjACEw/s1600/flow_of_control.jpg" />

<h2>Schematic &amp; PCB Diagrams</h2>

<img src = "https://1.bp.blogspot.com/-X0DkRhmX4zU/V7OCZx9SCjI/AAAAAAAAAlI/KjrMSHMMEloF22l9-3-m44h4SrZhQEfRgCEw/s1600/Schematic.png" />
<br>
<img src = "https://1.bp.blogspot.com/-Ly4pAsbIRB0/V7OCZygP1yI/AAAAAAAAAlM/4zsHXcPzZMguTHMVeVIIF2KTH0OkZ2IbgCEw/s400/PCB.png"/>
<p>The main idea of the sound detecteor circuit came from: <a href = "http://www.eleccircuit.com/sound-detector-using-lm324/">Sound Detector</a></p>
<p>I added Teensy functionality to calculate the decibels of the sound being detected and turn on the appropriate LED(s).</p>
<p>(Update) - After careful analysis, I discovered that the diode is not needed in order for the circuit to function.</p>
<br />
