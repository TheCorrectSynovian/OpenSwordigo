/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005518BC
 * Mangled: sub_5518BC
 * Demangled: sub_5518BC
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 10
 *   insn=0x00000000005518C8 string=0x00000000005518CC "`"
 *   insn=0x00000000005518D4 string=0x00000000005518D8 "a"
 *   insn=0x00000000005518DC string=0x00000000005518E0 "#@"
 *   insn=0x00000000005518E0 string=0x00000000005518E4 "!"
 *   insn=0x00000000005518E8 string=0x00000000005518EC "b"
 *   insn=0x00000000005518EC string=0x00000000005518F0 " x`"
 *   insn=0x00000000005518F0 string=0x00000000005518F4 " "
 *   insn=0x00000000005518F8 string=0x00000000005518FC "B"
 *   insn=0x0000000000551904 string=0x0000000000551908 "!"
 *   insn=0x0000000000551908 string=0x000000000055190C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5518BC(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FD2C8);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::moneypunct<wchar_t,false>,
               0) != 0;
  }
  return v3;
}

