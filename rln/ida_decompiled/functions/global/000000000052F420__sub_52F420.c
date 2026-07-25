/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052F420
 * Mangled: sub_52F420
 * Demangled: sub_52F420
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *
 * Referenced strings: 10
 *   insn=0x000000000052F42C string=0x000000000052F430 "`"
 *   insn=0x000000000052F430 string=0x000000000052F438 "&4"
 *   insn=0x000000000052F438 string=0x000000000052F43C "a"
 *   insn=0x000000000052F440 string=0x000000000052F444 "#@"
 *   insn=0x000000000052F444 string=0x000000000052F448 "!"
 *   insn=0x000000000052F44C string=0x000000000052F450 "b"
 *   insn=0x000000000052F450 string=0x000000000052F454 " x`"
 *   insn=0x000000000052F454 string=0x000000000052F458 " "
 *   insn=0x000000000052F45C string=0x000000000052F460 "B"
 *   insn=0x000000000052F468 string=0x000000000052F46C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52F420(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w2
  const void *v4; // x0

  v2 = sub_53C4D0(&qword_6FBDE0);
  v3 = 0;
  if ( v2 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v4 = *(const void **)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2);
    if ( v4 )
      return __dynamic_cast(
               v4,
               (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
               (const struct __class_type_info *)&`typeinfo for'std::money_get<char,std::istreambuf_iterator<char>>,
               0) != 0;
  }
  return v3;
}

