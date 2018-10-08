#pragma once 

namespace reflect {

struct Member {
    std::string type;
    std::string name;
    void* value;
};

bool TypeIsInt(const std::string& type) {
    if (type == "int" || type == "int32_t") {
        return true;
    }
    return false;
}
bool TypeIsInt64(const std::string& type) {
    if (type == "int64_t") {
        return true;
    }
    return false;
}
bool TypeIsUInt(const std::string& type) {
    if (type == "uint" || type == "uint32_t") {
        return true;
    }
    return false;
}
bool TypeIsUInt64(const std::string& type) {
    if (type == "uint64_t") {
        return true;
    }
    return false;
}
bool TypeIsFloat(const std::string& type) {
    if (type == "float") {
        return true;
    }
    return false;
}
bool TypeIsDouble(const std::string& type) {
    if (type == "double") {
        return true;
    }
    return false;
}
bool TypeIsBool(const std::string& type) {
    if (type == "bool") {
        return true;
    }
    return false;
}
bool TypeIsString(const std::string& type) {
    if (type == "std::string" || type == "string") {
        return true;
    }
    return false;
}

};