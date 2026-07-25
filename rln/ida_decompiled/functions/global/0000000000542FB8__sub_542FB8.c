/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000542FB8
 * Mangled: sub_542FB8
 * Demangled: sub_542FB8
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000542B74  sub_542B74
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 6
 *   insn=0x0000000000542FB8 string=0x0000000000542FBC "!"
 *   insn=0x0000000000542FD0 string=0x0000000000542FD4 "`"
 *   insn=0x0000000000542FE0 string=0x0000000000542FE4 "B(@"
 *   insn=0x0000000000542FE4 string=0x0000000000542FE8 "@"
 *   insn=0x0000000000542FEC string=0x0000000000542FF0 """
 *   insn=0x0000000000542FF0 string=0x0000000000542FF4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_542FB8(__int64 *a1)
{
  __int64 v2; // x0
  int v4; // [xsp+2Ch] [xbp+2Ch] BYREF

  v2 = *(__int64 *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 240);
  if ( !v2 )
    sub_5652C8(0);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
  return sub_542B74(a1, (__int64)&v4, 1);
}

