tring convHuruf(double NAK) {
	string convHuruf;
	if (NAK >= 76 && NAK <= 85) {
		convHuruf = "A";
	} else if (NAK >= 71 && NAK <= 75.9) {
		convHuruf = "B+"; 
	} else if (NAK >= 66 && NAK <= 70.9) {
		convHuruf = "B"; 
	} else if (NAK >= 61 && NAK <= 65.9) {
		convHuruf = "C+";
	} else if (NAK >= 55 && NAK <= 60.9) {
		convHuruf = "C"; 
	} else if (NAK >= 50 && NAK <= 54.9) {
		convHuruf = "D"; 
	} else if (NAK>= 0 && NAK < 50) {
		convHuruf = "E"; 
	} else {
		cout << "Error";
	}
	
	return convHuruf;
}