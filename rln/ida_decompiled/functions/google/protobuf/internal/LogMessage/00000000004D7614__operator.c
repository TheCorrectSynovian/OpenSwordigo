/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D7614
 * Mangled: _ZN6google8protobuf8internal10LogMessagelsEl
 * Demangled: google::protobuf::internal::LogMessage::operator<<(long)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE520  .snprintf
 *   0x0000000000203230  .strlen
 *   0x00000000005677D4  sub_5677D4
 *
 * Referenced strings: 7
 *   insn=0x00000000004D7624 string=0x00000000004D7628 "U"
 *   insn=0x00000000004D7634 string=0x00000000005985A3 "%ld"
 *   insn=0x00000000004D7638 string=0x00000000004D763C "B"
 *   insn=0x00000000004D7658 string=0x00000000004D765C "tb"
 *   insn=0x00000000004D766C string=0x00000000004D7670 "Y@"
 *   insn=0x00000000004D7680 string=0x00000000004D769C "{"
 *   insn=0x00000000004D769C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::LogMessage::operator<<(__int64 a1, __int64 a2)
{
  size_t v3; // x0
  char s[128]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v6; // [xsp+88h] [xbp-28h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  snprintf(s, 0x80u, "%ld", a2);
  s[127] = 0;
  v3 = strlen(s);
  sub_5677D4(a1 + 24, s, v3);
  return a1;
}

