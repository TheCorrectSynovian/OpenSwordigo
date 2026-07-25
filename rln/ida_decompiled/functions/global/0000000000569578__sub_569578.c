/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000569578
 * Mangled: sub_569578
 * Demangled: sub_569578
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000569390  sub_569390
 *
 * Referenced strings: 8
 *   insn=0x000000000056957C string=0x0000000000569580 "B"
 *   insn=0x0000000000569580 string=0x0000000000569584 "E"
 *   insn=0x0000000000569590 string=0x0000000000569594 "B"
 *   insn=0x00000000005695A0 string=0x00000000005695A4 "{"
 *   insn=0x00000000005695A8 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x00000000005695AC string=0x000000000059FA78 "basic_string::insert"
 *   insn=0x00000000005695B4 string=0x00000000005695B8 "!"
 *   insn=0x00000000005695BC string=0x00000000005695C0 "="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_569578(__int64 *a1, size_t a2, __int64 *a3, unsigned __int64 a4, unsigned __int64 a5)
{
  __int64 v5; // x2
  unsigned __int64 v6; // x5
  unsigned __int64 v7; // x5
  _BYTE *v8; // x2
  unsigned __int64 v9; // x3

  v5 = *a3;
  v6 = *(_QWORD *)(v5 - 24);
  if ( a4 > v6 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a4, v6);
  v7 = v6 - a4;
  v8 = (_BYTE *)(v5 + a4);
  if ( v7 > a5 )
    v9 = a5;
  else
    v9 = v7;
  return sub_569390(a1, a2, v8, v9);
}

