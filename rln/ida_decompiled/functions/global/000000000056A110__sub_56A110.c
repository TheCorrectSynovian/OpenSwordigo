/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056A110
 * Mangled: sub_56A110
 * Demangled: sub_56A110
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000569E1C  sub_569E1C
 *
 * Referenced strings: 8
 *   insn=0x000000000056A114 string=0x000000000056A118 "c"
 *   insn=0x000000000056A118 string=0x000000000056A11C "f"
 *   insn=0x000000000056A128 string=0x000000000056A12C "c"
 *   insn=0x000000000056A138 string=0x000000000056A13C "8"
 *   insn=0x000000000056A140 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056A144 string=0x000000000059FAA8 "basic_string::replace"
 *   insn=0x000000000056A14C string=0x000000000056A150 "!"
 *   insn=0x000000000056A154 string=0x000000000056A158 "W"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_56A110(
        __int64 *a1,
        size_t a2,
        unsigned __int64 a3,
        __int64 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v6; // x3
  unsigned __int64 v7; // x6
  unsigned __int64 v8; // x6
  _BYTE *v9; // x3
  unsigned __int64 v10; // x4

  v6 = *a4;
  v7 = *(_QWORD *)(v6 - 24);
  if ( a5 > v7 )
    sub_5656B4(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::replace",
      a5,
      *(_QWORD *)(v6 - 24));
  v8 = v7 - a5;
  v9 = (_BYTE *)(v6 + a5);
  if ( v8 > a6 )
    v10 = a6;
  else
    v10 = v8;
  return sub_569E1C(a1, a2, a3, v9, v10);
}

