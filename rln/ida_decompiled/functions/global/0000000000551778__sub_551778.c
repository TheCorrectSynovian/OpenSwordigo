/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000551778
 * Mangled: sub_551778
 * Demangled: sub_551778
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 10
 *   insn=0x0000000000551784 string=0x0000000000551788 "`"
 *   insn=0x0000000000551788 string=0x0000000000551790 "P"
 *   insn=0x0000000000551790 string=0x0000000000551794 "a"
 *   insn=0x0000000000551798 string=0x000000000055179C "#@"
 *   insn=0x000000000055179C string=0x00000000005517A0 "!"
 *   insn=0x00000000005517A4 string=0x00000000005517A8 "b"
 *   insn=0x00000000005517A8 string=0x00000000005517AC " x`"
 *   insn=0x00000000005517AC string=0x00000000005517B0 " "
 *   insn=0x00000000005517B4 string=0x00000000005517B8 "B"
 *   insn=0x00000000005517C0 string=0x00000000005517C4 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_551778(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FD2A8);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::numpunct<wchar_t>,
               0) != 0;
  }
  return v3;
}

