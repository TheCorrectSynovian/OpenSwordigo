/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D74FC
 * Mangled: _ZN6google8protobuf8internal10LogMessagelsEi
 * Demangled: google::protobuf::internal::LogMessage::operator<<(int)
 *
 * Callers: 1
 *   0x0000000000201FD0  google::protobuf::internal::LogMessage::operator<<(int)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE520  .snprintf
 *   0x0000000000203230  .strlen
 *   0x00000000005677D4  sub_5677D4
 *
 * Referenced strings: 7
 *   insn=0x00000000004D750C string=0x00000000004D7510 "U"
 *   insn=0x00000000004D751C string=0x000000000059A7FF "%d"
 *   insn=0x00000000004D7520 string=0x00000000004D7524 "B"
 *   insn=0x00000000004D7540 string=0x00000000004D7544 "tb"
 *   insn=0x00000000004D7544 string=0x00000000004D7548 ":"
 *   insn=0x00000000004D7568 string=0x00000000004D7584 "S{"
 *   insn=0x00000000004D7584 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::LogMessage::operator<<(__int64 a1, int a2)
{
  size_t v3; // x0
  char s[128]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v6; // [xsp+88h] [xbp-28h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  snprintf(s, 0x80u, "%d", a2);
  s[127] = 0;
  v3 = strlen(s);
  sub_5677D4(a1 + 24, s, v3);
  return a1;
}

