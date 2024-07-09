enum Affinity { HEEL, FACE };
inline static const char* ToString(Affinity affinity) {
	switch (affinity) {
	case HEEL: return "HEEL";
	case FACE: return "FACE";
	default: return "[Unknown Affinity]";
	}
}