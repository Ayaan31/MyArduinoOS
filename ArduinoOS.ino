long total = 0;
uint8_t amountToAdd = 5;

void boot()
{
    Serial.println("================================");
    Serial.println("       ArduinoOS v0.1.0");
    Serial.println("================================");

    Serial.println("[BOOT] Initializing system...");
    delay(500);

    Serial.println("[CPU] ATmega2560");
    Serial.println("[ARCH] AVR 8-bit");
    Serial.println("[RAM] 8192 bytes");
    Serial.println("[FLASH] 262144 bytes");

    delay(500);

    Serial.println("[BOOT] System initialized.");
    Serial.println("[BOOT] Welcome to ArduinoOS!");
    
}

void setup()
{
    Serial.begin(115200);
    boot();
    
}

void loop()
{
    total += amountToAdd;

    Serial.print("Running total: ");
    Serial.println(total);
    
    delay(500);
}