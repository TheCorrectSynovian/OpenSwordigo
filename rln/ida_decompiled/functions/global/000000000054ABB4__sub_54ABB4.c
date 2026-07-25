/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054ABB4
 * Mangled: sub_54ABB4
 * Demangled: sub_54ABB4
 *
 * Callers: 2
 *   0x000000000054AB68  sub_54AB68
 *   0x0000000000565970  sub_565970
 *
 * Callees: 4
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000054AC00  sub_54AC00
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x000000000054ABB4 string=0x000000000054ABB8 "b"
 *   insn=0x000000000054ABC0 string=0x000000000054ABC4 "B@"
 *   insn=0x000000000054ABCC string=0x000000000054ABD0 "V~"
 *   insn=0x000000000054ABD0 string=0x000000000054ABD4 "`"
 *   insn=0x000000000054ABD4 string=0x000000000054ABDC "`"
 *   insn=0x000000000054ABF8 string=0x000000000054ABFC "2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall **__fastcall sub_54ABB4(_QWORD *a1, __int64 a2))(std::exception *this)
{
  __int64 (__fastcall **result)(std::exception *); // x0

  *a1 = off_6B7650;
  sub_56A528(a1 + 1, a2);
  result = off_6B76B0;
  *a1 = off_6B76B0;
  return result;
}

