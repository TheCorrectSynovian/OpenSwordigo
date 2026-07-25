/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052F12C
 * Mangled: sub_52F12C
 * Demangled: sub_52F12C
 *
 * Callers: 2
 *   0x000000000055EDEC  sub_55EDEC
 *   0x000000000056007C  sub_56007C
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 9
 *   insn=0x000000000052F144 string=0x000000000052F148 "a"
 *   insn=0x000000000052F14C string=0x000000000052F150 "#@"
 *   insn=0x000000000052F150 string=0x000000000052F154 "!"
 *   insn=0x000000000052F158 string=0x000000000052F15C "b"
 *   insn=0x000000000052F15C string=0x000000000052F160 " x`"
 *   insn=0x000000000052F160 string=0x000000000052F164 " "
 *   insn=0x000000000052F170 string=0x000000000052F174 "BTB"
 *   insn=0x000000000052F174 string=0x000000000052F178 "!"
 *   insn=0x000000000052F178 string=0x000000000052F17C "EA"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52F12C(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FD330);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::codecvt<char,char,mbstate_t>,
               0) != 0;
  }
  return v3;
}

