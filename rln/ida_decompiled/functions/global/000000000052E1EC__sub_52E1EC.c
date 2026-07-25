/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052E1EC
 * Mangled: sub_52E1EC
 * Demangled: sub_52E1EC
 *
 * Callers: 3
 *   0x0000000000520D44  sub_520D44
 *   0x00000000005210E8  sub_5210E8
 *   0x00000000005211BC  sub_5211BC
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 10
 *   insn=0x000000000052E1F8 string=0x000000000052E1FC "`"
 *   insn=0x000000000052E204 string=0x000000000052E208 "a"
 *   insn=0x000000000052E208 string=0x000000000052E20C ""@"
 *   insn=0x000000000052E20C string=0x000000000052E210 "!"
 *   insn=0x000000000052E218 string=0x000000000052E21C " x`"
 *   insn=0x000000000052E21C string=0x000000000052E220 "`"
 *   insn=0x000000000052E224 string=0x000000000052E228 "B"
 *   insn=0x000000000052E230 string=0x000000000052E234 "!"
 *   insn=0x000000000052E23C string=0x000000000052E250 "p)"
 *   insn=0x000000000052E250 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_52E1EC(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FBDC8);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::num_get<char,std::istreambuf_iterator<char>>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

