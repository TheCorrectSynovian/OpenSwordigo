/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2390
 * Mangled: _ZNK6google8protobuf11MessageLite17SerializeToStringEPSs
 * Demangled: google::protobuf::MessageLite::SerializeToString(std::string *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F55F0  google::protobuf::MessageLite::AppendPartialToString(std::string *)
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 3
 *   insn=0x00000000004E239C string=0x00000000004E23A0 "h"
 *   insn=0x00000000004E23B4 string=0x00000000004E23B8 "@"
 *   insn=0x00000000004E23C4 string=0x00000000001F55F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::MessageLite::SerializeToString(__int64 a1, _QWORD *a2)
{
  sub_568CB8(a2, 0, *(_QWORD *)(*a2 - 24LL), 0);
  google::protobuf::MessageLite::AppendPartialToString();
  return 1;
}

