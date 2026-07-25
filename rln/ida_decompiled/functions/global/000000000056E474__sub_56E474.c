/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056E474
 * Mangled: sub_56E474
 * Demangled: sub_56E474
 *
 * Callers: 4
 *   0x000000000055201C  sub_55201C
 *   0x0000000000552738  sub_552738
 *   0x000000000056E534  sub_56E534
 *   0x000000000056EFD4  sub_56EFD4
 *
 * Callees: 2
 *   0x0000000000203AC0  .wmemcpy
 *   0x000000000056E318  sub_56E318
 *
 * Referenced strings: 18
 *   insn=0x000000000056E480 string=0x000000000056E484 "!"
 *   insn=0x000000000056E48C string=0x000000000056E490 "4"
 *   insn=0x000000000056E498 string=0x000000000056E49C "b"
 *   insn=0x000000000056E49C string=0x000000000056E4A0 "`"
 *   insn=0x000000000056E4A0 string=0x000000000056E4A4 "V"
 *   insn=0x000000000056E4AC string=0x000000000056E508 "`"
 *   insn=0x000000000056E4B8 string=0x000000000056E4BC "c"
 *   insn=0x000000000056E4C0 string=0x000000000056E4C4 "b"
 *   insn=0x000000000056E4C8 string=0x000000000056E4CC "`"
 *   insn=0x000000000056E4CC string=0x000000000056E4D0 "@"
 *   insn=0x000000000056E4D0 string=0x000000000056E518 " "
 *   insn=0x000000000056E4D4 string=0x000000000056E4D8 "zU"
 *   insn=0x000000000056E4D8 string=0x000000000056E4DC "c"
 *   insn=0x000000000056E4DC string=0x000000000056E4E0 "`"
 *   insn=0x000000000056E4E0 string=0x000000000056E4E4 "a`"
 *   insn=0x000000000056E4E8 string=0x000000000056E4EC "?"
 *   insn=0x000000000056E518 string=0x000000000056E51C "`x""
 *   insn=0x000000000056E524 string=0x000000000056E528 "v"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56E474(const wchar_t **a1, const wchar_t **a2)
{
  const wchar_t *v3; // x1
  size_t v5; // x20
  const wchar_t *v6; // x3
  __int64 v7; // x2
  size_t v8; // x22

  v3 = *a2;
  v5 = *((_QWORD *)v3 - 3);
  if ( v5 )
  {
    v6 = *a1;
    v7 = *((_QWORD *)*a1 - 3);
    v8 = v7 + v5;
    if ( v7 + v5 > *((_QWORD *)*a1 - 2) || *(v6 - 2) > 0 )
    {
      sub_56E318(a1, v7 + v5);
      v6 = *a1;
      v3 = *a2;
      v7 = *((_QWORD *)*a1 - 3);
    }
    if ( v5 == 1 )
    {
      v6[v7] = *v3;
    }
    else
    {
      wmemcpy((wchar_t *)&v6[v7], v3, v5);
      v6 = *a1;
    }
    if ( v6 - 6 != (const wchar_t *)&qword_6FD300 )
    {
      *((_DWORD *)v6 - 2) = 0;
      *((_QWORD *)v6 - 3) = v8;
      v6[v8] = 0;
    }
  }
  return a1;
}

