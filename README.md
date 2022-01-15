# JELIA_Tugas1Robohilic_Program

Judul Project : Mengatur arah dan kecepatan motor DC.

Alat dan bahan : Simulator proteus, Arduino IDE, Device, Internet.

Komponen dalam rangkaian simulasi :
- Arduino uno
- LCD 16 X 2
- 2 buah potensiometer
- 2 buah push button
- L298 
- 2 buah motor DC

Langkah langkah : 
1. Membuat program arduino menggunakan arduino IDE yaitu:
 - Masukkan library LCD,Sambungkan pin potensio,Sambungkan pin input dan enable pada driver kepada ardiono dan Masukkan kondisi awal push button.
 - Pada void setup : Mulai komunikasi dengan serial monitor dengan kecepatan 9600,Setting input dan output,dan set LCD.
 - Void loop ( Perintah berulang ) : Membaca nilai dari potensiometer,Perintah untuk arah motor set kiri dan kanan.
2. Rangkai komponen.

Cara Kerja :
1. Muncul tampilan pada LCD berupa ucapan " Welcome to JELIA CHANNEL " selama 2 detik.
2. LCD menunjukkan siklus dan kecepatan motor.
3. Motor bergerak sesuai perintah yang tertampil pada LCD
4. Jika pada LCD tertulis " duty_cycle 50 % Kanan " artinya motor bergerak dengan kecepatan 50 % ke arah kanan dan jika tertulis " duty_cycle 32 % Kiri" artinya motor bergerak dengan kecepatan 32% ke arah kiri, begitu seterusnya.
5. Arah pergerakan motor dapat diubah dengan menekan push button. Ketika button kanan ditekan maka motor akan bergerak ke arah kanan dan ketika button kiri di tekan maka motor akan bergerak ke arah kiri.
6. Kecepatan motor dapat diubah pada potensiometer.

_ Terimakasih _
