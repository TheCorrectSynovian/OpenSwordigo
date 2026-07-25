/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056E538
 * Mangled: sub_56E538
 * Demangled: sub_56E538
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x0000000000203AC0  .wmemcpy
 *   0x00000000005656B4  sub_5656B4
 *   0x000000000056E318  sub_56E318
 *
 * Referenced strings: 24
 *   insn=0x000000000056E53C string=0x000000000056E540 "%"
 *   insn=0x000000000056E558 string=0x000000000056E55C "_"
 *   insn=0x000000000056E570 string=0x000000000056E574 "3"
 *   insn=0x000000000056E578 string=0x000000000056E57C "C"
 *   insn=0x000000000056E57C string=0x000000000056E580 "@"
 *   insn=0x000000000056E580 string=0x000000000056E584 "w"
 *   insn=0x000000000056E588 string=0x000000000056E58C ")"
 *   insn=0x000000000056E58C string=0x000000000056E5F0 "@"
 *   insn=0x000000000056E594 string=0x000000000056E598 "`"
 *   insn=0x000000000056E5A0 string=0x000000000056E5A4 "C"
 *   insn=0x000000000056E5A8 string=0x000000000056E5AC "@"
 *   insn=0x000000000056E5B0 string=0x000000000056E5B4 "`"
 *   insn=0x000000000056E5B8 string=0x000000000056E5BC "AU"
 *   insn=0x000000000056E5C0 string=0x000000000056E5C4 "`"
 *   insn=0x000000000056E5C4 string=0x000000000056E5C8 "A`"
 *   insn=0x000000000056E5CC string=0x000000000056E5D0 "?"
 *   insn=0x000000000056E5D4 string=0x000000000056E60C "_"
 *   insn=0x000000000056E600 string=0x000000000056E604 "@x#"
 *   insn=0x000000000056E60C string=0x000000000056E610 "W"
 *   insn=0x000000000056E610 string=0x000000000056E614 "_x7"
 *   insn=0x000000000056E61C string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056E620 string=0x000000000059F998 "basic_string::append"
 *   insn=0x000000000056E624 string=0x000000000056E628 "!`&"
 *   insn=0x000000000056E62C string=0x000000000056E630 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56E538(const wchar_t **a1, __int64 *a2, unsigned __int64 a3, size_t a4)
{
  __int64 v4; // x5
  unsigned __int64 v5; // x4
  size_t v9; // x4
  size_t v10; // x19
  const wchar_t *v11; // x2
  __int64 v12; // x3
  size_t v13; // x23

  v4 = *a2;
  v5 = *(_QWORD *)(*a2 - 24);
  if ( a3 > v5 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::append", a3, v5);
  v9 = v5 - a3;
  if ( v9 > a4 )
    v10 = a4;
  else
    v10 = v9;
  if ( v10 )
  {
    v11 = *a1;
    v12 = *((_QWORD *)*a1 - 3);
    v13 = v10 + v12;
    if ( v10 + v12 > *((_QWORD *)*a1 - 2) || *(v11 - 2) > 0 )
    {
      sub_56E318(a1, v10 + v12);
      v11 = *a1;
      v4 = *a2;
      v12 = *((_QWORD *)*a1 - 3);
    }
    if ( v10 == 1 )
    {
      v11[v12] = *(_DWORD *)(v4 + 4 * a3);
    }
    else
    {
      wmemcpy((wchar_t *)&v11[v12], (const wchar_t *)(v4 + 4 * a3), v10);
      v11 = *a1;
    }
    if ( v11 - 6 != (const wchar_t *)&qword_6FD300 )
    {
      *((_DWORD *)v11 - 2) = 0;
      *((_QWORD *)v11 - 3) = v13;
      v11[v13] = 0;
    }
  }
  return a1;
}

