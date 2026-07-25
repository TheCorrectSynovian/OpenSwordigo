/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056CF2C
 * Mangled: sub_56CF2C
 * Demangled: sub_56CF2C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005656B4  sub_5656B4
 *   0x000000000056CD30  sub_56CD30
 *
 * Referenced strings: 7
 *   insn=0x000000000056CF30 string=0x000000000056CF34 "B"
 *   insn=0x000000000056CF34 string=0x000000000056CF38 "E"
 *   insn=0x000000000056CF44 string=0x000000000056CF48 "B"
 *   insn=0x000000000056CF54 string=0x000000000056CF58 "v"
 *   insn=0x000000000056CF5C string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056CF60 string=0x000000000059FA78 "basic_string::insert"
 *   insn=0x000000000056CF68 string=0x000000000056CF6C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56CF2C(
        const wchar_t **a1,
        size_t a2,
        __int64 *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  __int64 v5; // x2
  unsigned __int64 v6; // x5
  unsigned __int64 v7; // x5
  const wchar_t *v8; // x2
  unsigned __int64 v9; // x3

  v5 = *a3;
  v6 = *(_QWORD *)(v5 - 24);
  if ( a4 > v6 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a4, v6);
  v7 = v6 - a4;
  v8 = (const wchar_t *)(v5 + 4 * a4);
  if ( v7 > a5 )
    v9 = a5;
  else
    v9 = v7;
  return sub_56CD30(a1, a2, v8, v9);
}

