/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052F0C0
 * Mangled: sub_52F0C0
 * Demangled: sub_52F0C0
 *
 * Callers: 3
 *   0x0000000000520D44  sub_520D44
 *   0x00000000005210E8  sub_5210E8
 *   0x00000000005211BC  sub_5211BC
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 9
 *   insn=0x000000000052F0D8 string=0x000000000052F0DC "a"
 *   insn=0x000000000052F0E0 string=0x000000000052F0E4 "#@"
 *   insn=0x000000000052F0E4 string=0x000000000052F0E8 "!"
 *   insn=0x000000000052F0EC string=0x000000000052F0F0 "b"
 *   insn=0x000000000052F0F0 string=0x000000000052F0F4 " x`"
 *   insn=0x000000000052F0F4 string=0x000000000052F0F8 " "
 *   insn=0x000000000052F104 string=0x000000000052F108 "B"
 *   insn=0x000000000052F108 string=0x000000000052F10C "!"
 *   insn=0x000000000052F10C string=0x000000000052F110 "`A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52F0C0(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FBD20);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::ctype<char>,
               0) != 0;
  }
  return v3;
}

