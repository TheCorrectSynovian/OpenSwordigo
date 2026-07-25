/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A9F8
 * Mangled: sub_54A9F8
 * Demangled: sub_54A9F8
 *
 * Callers: 2
 *   0x000000000054A9B8  sub_54A9B8
 *   0x00000000005653E4  sub_5653E4
 *
 * Callees: 4
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000054AA44  sub_54AA44
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000054A9F8 string=0x000000000054A9FC "b"
 *   insn=0x000000000054AA04 string=0x000000000054AA08 "B"
 *   insn=0x000000000054AA14 string=0x000000000054AA18 "`"
 *   insn=0x000000000054AA18 string=0x000000000054AA20 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall **__fastcall sub_54A9F8(_QWORD *a1, __int64 a2))(std::exception *this)
{
  __int64 (__fastcall **result)(std::exception *); // x0

  *a1 = off_6B7560;
  sub_56A528(a1 + 1, a2);
  result = off_6B7590;
  *a1 = off_6B7590;
  return result;
}

