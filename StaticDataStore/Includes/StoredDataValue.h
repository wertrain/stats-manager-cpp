#pragma once
#include <cinttypes>

class StoredDataValue
{
public:
    enum ValueType : int32_t
    {
        TYPE_UNDECIDED,
        TYPE_INT32,
        TYPE_UINT32,
        TYPE_INT64,
        TYPE_UINT64,
        TYPE_FLOAT,
        TYPE_DOUBLE
    };

    StoredDataValue();
    void SetInt32(int32_t value);
    void SetUInt32(uint32_t value);
    void SetInt64(int64_t value);
    void SetUInt64(uint64_t value);
    void SetFloat(float value);
    void SetDouble(double value);
    void Clear();

private:
    uint64_t m_value;
    ValueType m_type;
};
