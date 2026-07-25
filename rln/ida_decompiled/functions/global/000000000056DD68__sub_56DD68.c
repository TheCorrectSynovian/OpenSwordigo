/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056DD68
 * Mangled: sub_56DD68
 * Demangled: sub_56DD68
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005656B4  sub_5656B4
 *   0x000000000056DA58  sub_56DA58
 *
 * Referenced strings: 8
 *   insn=0x000000000056DD6C string=0x000000000056DD70 "c"
 *   insn=0x000000000056DD70 string=0x000000000056DD74 "f"
 *   insn=0x000000000056DD80 string=0x000000000056DD84 "c"
 *   insn=0x000000000056DD90 string=0x000000000056DD94 "1"
 *   insn=0x000000000056DD98 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056DD9C string=0x000000000059FAA8 "basic_string::replace"
 *   insn=0x000000000056DDA4 string=0x000000000056DDA8 "!"
 *   insn=0x000000000056DDAC string=0x000000000056DDB0 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56DD68(
        const wchar_t **a1,
        size_t a2,
        unsigned __int64 a3,
        __int64 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v6; // x3
  unsigned __int64 v7; // x6
  unsigned __int64 v8; // x6
  const wchar_t *v9; // x3
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
  v9 = (const wchar_t *)(v6 + 4 * a5);
  if ( v8 > a6 )
    v10 = a6;
  else
    v10 = v8;
  return sub_56DA58(a1, a2, a3, v9, v10);
}

