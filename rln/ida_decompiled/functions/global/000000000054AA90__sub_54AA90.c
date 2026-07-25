/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054AA90
 * Mangled: sub_54AA90
 * Demangled: sub_54AA90
 *
 * Callers: 2
 *   0x000000000054AA44  sub_54AA44
 *   0x000000000056554C  sub_56554C
 *
 * Callees: 4
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000054AADC  sub_54AADC
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x000000000054AA90 string=0x000000000054AA94 "b"
 *   insn=0x000000000054AA9C string=0x000000000054AAA0 "B"
 *   insn=0x000000000054AAAC string=0x000000000054AAB0 "`"
 *   insn=0x000000000054AAB0 string=0x000000000054AAB8 "`"
 *   insn=0x000000000054AACC string=0x000000000054AAD0 "h"
 *   insn=0x000000000054AAD4 string=0x000000000054AAD8 "{"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall **__fastcall sub_54AA90(_QWORD *a1, __int64 a2))(std::exception *this)
{
  __int64 (__fastcall **result)(std::exception *); // x0

  *a1 = off_6B7560;
  sub_56A528(a1 + 1, a2);
  result = off_6B75F0;
  *a1 = off_6B75F0;
  return result;
}

