/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E23D8
 * Mangled: _ZNK6google8protobuf11MessageLite24SerializePartialToStringEPSs
 * Demangled: google::protobuf::MessageLite::SerializePartialToString(std::string *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F55F0  google::protobuf::MessageLite::AppendPartialToString(std::string *)
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 4
 *   insn=0x00000000004E23E4 string=0x00000000004E23E8 "h"
 *   insn=0x00000000004E23FC string=0x00000000004E2400 "."
 *   insn=0x00000000004E2408 string=0x00000000004E240C "yL"
 *   insn=0x00000000004E240C string=0x00000000001F55F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::MessageLite::SerializePartialToString(__int64 a1, _QWORD *a2)
{
  sub_568CB8(a2, 0, *(_QWORD *)(*a2 - 24LL), 0);
  google::protobuf::MessageLite::AppendPartialToString();
  return 1;
}

