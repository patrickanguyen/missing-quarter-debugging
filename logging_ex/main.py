import logging
import CustomFormatter
import random
import time

# Create logger
logger = logging.getLogger(__name__)
logger.setLevel(logging.DEBUG)

# Add color formatter
ch = logging.StreamHandler()
# Filter out logs 
ch.setLevel(logging.DEBUG)
ch.setFormatter(CustomFormatter.CustomFormatter())
logger.addHandler(ch)

# Create file handler
fh = logging.FileHandler("./temp.log")
fh.setLevel(logging.DEBUG)
logger.addHandler(fh)

# Disable logger
# logger.disabled = True


if __name__ == "__main__":
    
    # Let say this is a simulation of a nuclear reactor
    # Number representing stability of system

    temp = 50

    for _ in range(50):
        # Everything is perfectly fine
        if temp <= 60:
            logger.info("Value is {} - Everything is fine".format(temp))
        # Getting kinda hot, better watch out
        elif temp <= 80:
            logger.warning("Value is {} - System is getting kinda hot".format(temp))
        # DANGER ZONE, WATCH OUT
        elif temp <= 90:
            logger.error("Value is {} - Dangerous region".format(temp))
        # IT'S ALL OVER
        else:
            logger.critical("Value is {} - CRITICAL ERROR".format(temp))

        # Change temperature
        temp += 1

        time.sleep(0.3)
