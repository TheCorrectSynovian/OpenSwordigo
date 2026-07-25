/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D7474
 * Mangled: _ZN6google8protobuf8internal10LogMessagelsEc
 * Demangled: google::protobuf::internal::LogMessage::operator<<(char)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE520  .snprintf
 *   0x0000000000203230  .strlen
 *   0x00000000005677D4  sub_5677D4
 *
 * Referenced strings: 8
 *   insn=0x00000000004D7484 string=0x00000000004D7488 "U"
 *   insn=0x00000000004D7490 string=0x000000000059859D "%c"
 *   insn=0x00000000004D7494 string=0x00000000004D7498 "#"
 *   insn=0x00000000004D7498 string=0x00000000004D749C "Bt"
 *   insn=0x00000000004D74B4 string=0x00000000004D74B8 "tb"
 *   insn=0x00000000004D74B8 string=0x00000000004D74BC "]"
 *   insn=0x00000000004D74DC string=0x00000000004D74F8 "v{"
 *   insn=0x00000000004D74F8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::LogMessage::operator<<(__int64 a1, char a2)
{
  size_t v3; // x0
  char s[128]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v6; // [xsp+88h] [xbp-28h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  snprintf(s, 0x80u, "%c", (unsigned int)a2);
  s[127] = 0;
  v3 = strlen(s);
  sub_5677D4(a1 + 24, s, v3);
  return a1;
}

