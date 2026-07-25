/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D7100
 * Mangled: _ZN6google8protobuf8internal10LogMessagelsERKSs
 * Demangled: google::protobuf::internal::LogMessage::operator<<(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F4C10  google::protobuf::internal::LogMessage::operator<<(std::string const&)
 *
 * Callees: 1
 *   0x0000000000567614  sub_567614
 *
 * Referenced strings: 2
 *   insn=0x00000000004D710C string=0x00000000004D7110 "`b"
 *   insn=0x00000000004D7110 string=0x00000000004D7114 "@A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::LogMessage::operator<<(__int64 a1, __int64 a2)
{
  sub_567614(a1 + 24, a2);
  return a1;
}

