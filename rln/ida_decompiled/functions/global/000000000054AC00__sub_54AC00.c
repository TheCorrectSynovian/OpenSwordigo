/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054AC00
 * Mangled: sub_54AC00
 * Demangled: sub_54AC00
 *
 * Callers: 2
 *   0x000000000054ABB4  sub_54ABB4
 *   0x0000000000565A24  sub_565A24
 *
 * Callees: 3
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000054AC00 string=0x000000000054AC04 "b"
 *   insn=0x000000000054AC0C string=0x000000000054AC10 "B@"
 *   insn=0x000000000054AC18 string=0x000000000054AC1C "C~"
 *   insn=0x000000000054AC1C string=0x000000000054AC20 "`"
 *   insn=0x000000000054AC20 string=0x000000000054AC28 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall **__fastcall sub_54AC00(_QWORD *a1, __int64 a2))(std::exception *this)
{
  __int64 (__fastcall **result)(std::exception *); // x0

  *a1 = off_6B7650;
  sub_56A528(a1 + 1, a2);
  result = off_6B76E0;
  *a1 = off_6B76E0;
  return result;
}

