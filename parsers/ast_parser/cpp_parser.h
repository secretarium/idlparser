
struct Library;

//std::string strip_trailing_(std::string data);
size_t findKeyWord(const std::string& type, const char* val, bool check_end);
bool isUInt8(std::string& type);
bool isInt8(std::string& type);
bool isUInt16(std::string& type);
bool isInt16(std::string& type);
bool isUInt32(std::string& type);
bool isInt32(std::string& type);
bool isULong(const std::string& type);
bool isLong(const std::string& type);
bool isUInt64(std::string& type);
bool isInt64(std::string& type);
bool isBool(const std::string& type);
bool isFloat(const std::string& type);
bool isDouble(const std::string& type);
bool isCharStar(const std::string& type);
bool isString(const std::string& type);
bool isJavaScriptObject(const std::string& type);
bool isVector(const std::string& type);
bool isList(const std::string& type);
bool isMap(const std::string& type);
bool isSet(const std::string& type);
bool isEnum(const std::string& type, const Library& library);
std::string unconst(const std::string& type);
std::string unenum(const std::string& type);
void stripReferenceModifiers(std::string& paramType, std::string& referenceModifiers);
void translateType(std::string& paramType, const Library& library);
std::string getTemplateParam(const std::string& type);
