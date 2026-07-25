/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005692D8
 * Mangled: sub_5692D8
 * Demangled: sub_5692D8
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005656B4  sub_5656B4
 *   0x000000000056918C  sub_56918C
 *
 * Referenced strings: 7
 *   insn=0x00000000005692DC string=0x00000000005692E0 "%"
 *   insn=0x00000000005692E8 string=0x00000000005692EC "_"
 *   insn=0x00000000005692F8 string=0x00000000005692FC "_"
 *   insn=0x0000000000569300 string=0x0000000000569304 "B"
 *   insn=0x000000000056930C string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x0000000000569310 string=0x000000000059FA60 "basic_string::assign"
 *   insn=0x0000000000569314 string=0x0000000000569318 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_5692D8(__int64 *a1, __int64 *a2, unsigned __int64 a3, size_t a4)
{
  __int64 v4; // x5
  unsigned __int64 v6; // x4
  size_t v7; // x2
  _BYTE *v8; // x1

  v4 = *a2;
  v6 = *(_QWORD *)(v4 - 24);
  if ( a3 > v6 )
    sub_5656B4(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::assign",
      a3,
      *(_QWORD *)(v4 - 24));
  v7 = v6 - a3;
  v8 = (_BYTE *)(v4 + a3);
  if ( v7 > a4 )
    v7 = a4;
  return sub_56918C(a1, v8, v7);
}

