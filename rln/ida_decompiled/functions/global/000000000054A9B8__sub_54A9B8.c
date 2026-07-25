/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A9B8
 * Mangled: sub_54A9B8
 * Demangled: sub_54A9B8
 *
 * Callers: 2
 *   0x0000000000565330  sub_565330
 *   0x0000000000565C40  sub_565C40
 *
 * Callees: 4
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000054A9F8  sub_54A9F8
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x000000000054A9B8 string=0x000000000054A9BC "b"
 *   insn=0x000000000054A9C4 string=0x000000000054A9C8 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54A9B8(_QWORD *a1, __int64 a2)
{
  *a1 = off_6B7560;
  return sub_56A528(a1 + 1, a2);
}

