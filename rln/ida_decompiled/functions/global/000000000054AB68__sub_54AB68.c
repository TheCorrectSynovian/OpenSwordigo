/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054AB68
 * Mangled: sub_54AB68
 * Demangled: sub_54AB68
 *
 * Callers: 2
 *   0x000000000054AB28  sub_54AB28
 *   0x00000000005658BC  sub_5658BC
 *
 * Callees: 4
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000054ABB4  sub_54ABB4
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x000000000054AB68 string=0x000000000054AB6C "b"
 *   insn=0x000000000054AB74 string=0x000000000054AB78 "B@"
 *   insn=0x000000000054AB80 string=0x000000000054AB84 "i~"
 *   insn=0x000000000054AB84 string=0x000000000054AB88 "`"
 *   insn=0x000000000054AB88 string=0x000000000054AB90 "`"
 *   insn=0x000000000054ABA4 string=0x000000000054ABA8 "2"
 *   insn=0x000000000054ABAC string=0x000000000054ABB0 "E"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall **__fastcall sub_54AB68(_QWORD *a1, __int64 a2))(std::exception *this)
{
  __int64 (__fastcall **result)(std::exception *); // x0

  *a1 = off_6B7650;
  sub_56A528(a1 + 1, a2);
  result = off_6B7680;
  *a1 = off_6B7680;
  return result;
}

