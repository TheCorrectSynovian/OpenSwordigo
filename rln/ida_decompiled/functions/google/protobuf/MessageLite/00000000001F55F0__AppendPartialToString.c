/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F55F0
 * Mangled: ._ZNK6google8protobuf11MessageLite21AppendPartialToStringEPSs
 * Demangled: google::protobuf::MessageLite::AppendPartialToString(std::string *)
 *
 * Callers: 5
 *   0x00000000004E2050  sub_4E2050
 *   0x00000000004E2390  google::protobuf::MessageLite::SerializeToString(std::string *)
 *   0x00000000004E23D8  google::protobuf::MessageLite::SerializePartialToString(std::string *)
 *   0x00000000004E2540  google::protobuf::MessageLite::SerializeAsString(void)
 *   0x00000000004E260C  google::protobuf::MessageLite::SerializePartialAsString(void)
 *
 * Callees: 1
 *   0x00000000004E22CC  google::protobuf::MessageLite::AppendPartialToString(std::string *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F55F8 string=0x00000000001F55FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::MessageLite::AppendPartialToString()
{
  return _ZNK6google8protobuf11MessageLite21AppendPartialToStringEPSs();
}

