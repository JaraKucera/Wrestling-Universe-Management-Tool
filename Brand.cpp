enum Brand { RAW, SMACKDOWN };
inline static const char* ToString(Brand brand) {
	switch (brand) {
	case RAW: return "RAW";
	case SMACKDOWN: return "SMACKDOWN";
	default: return "[Unknown Brand]";
	}
}