# Arduin-Row

The main sketch is Rower_apr10a.ino which runs the inference via the Edge Impulse SDK and then passes the result to the Arduino IOT Cloud.
The other files (thingProperties.h and definitions.h) are just support files for that sketch.

The EI_Data_Forwarder_Nicla_sense.ino sketch was what I used to collect the data and load it to the Edge Impulse dashboard via the Edge Impulse CLI.
See this example: https://docs.edgeimpulse.com/docs/edge-impulse-cli/cli-data-forwarder
