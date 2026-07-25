/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D70B8
 * Mangled: _ZN6google8protobuf8internal10LogMessagelsEPKc
 * Demangled: google::protobuf::internal::LogMessage::operator<<(char const*)
 *
 * Callers: 1
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *
 * Callees: 2
 *   0x0000000000203230  .strlen
 *   0x00000000005677D4  sub_5677D4
 *
 * Referenced strings: 1
 *   insn=0x00000000004D70D4 string=0x00000000004D70D8 "V"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::LogMessage::operator<<(__int64 a1, char *a2)
{
  size_t v4; // x0

  v4 = strlen(a2);
  sub_5677D4(a1 + 24, a2, v4);
  return a1;
}

