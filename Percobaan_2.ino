byte pin_7segmen[11][7] = {
{ 1,1,1,1,1,1,0 }, // = 0
{ 0,1,1,0,0,0,0 }, // = 1
{ 1,1,0,1,1,0,1 }, // = 2
{ 1,1,1,1,0,0,1 }, // = 3
{ 0,1,1,0,0,1,1 }, // = 4
{ 1,0,1,1,0,1,1 }, // = 5
{ 1,0,1,1,1,1,1 }, // = 6
{ 1,1,1,0,0,0,0 }, // = 7
{ 1,1,1,1,1,1,1 }, // = 8
{ 1,1,1,0,0,1,1 }, // = 9
{ 0,0,0,0,0,0,0 } // mati
};
void setup() {
 pinMode(2, OUTPUT), pinMode(3, OUTPUT), pinMode(4, OUTPUT);
 pinMode(5, OUTPUT), pinMode(6, OUTPUT), pinMode(7, OUTPUT);
 pinMode(8, OUTPUT), pinMode(9, OUTPUT);
}

void loop() {
 tampilkan(2); 
 delay(1000);
 tampilkan(3);
 delay(1000);
 tampilkan(10);
 delay(1000);
 tampilkan(0); 
 delay(1000);
 tampilkan(5); 
 delay(1000);
 tampilkan(10);
 delay(1000);
 tampilkan(2); 
 delay(1000);
 tampilkan(0); 
 delay(1000);
 tampilkan(0); 
 delay(1000);
 tampilkan(1); 
 delay(1000);
 tampilkan(10);
 delay(3000);
}

void tampilkan(byte baris) {
 byte pin = 2;
 for (byte kolom = 0; kolom < 7; ++ kolom) {
 digitalWrite(pin,pin_7segmen[baris][kolom]);
 ++pin;
 }
}
