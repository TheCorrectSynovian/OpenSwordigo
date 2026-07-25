/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005676D8
 * Mangled: sub_5676D8
 * Demangled: sub_5676D8
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x0000000000201760  .memcpy
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000567088  sub_567088
 *
 * Referenced strings: 21
 *   insn=0x00000000005676DC string=0x00000000005676E0 "%"
 *   insn=0x00000000005676F8 string=0x00000000005676FC "_"
 *   insn=0x0000000000567710 string=0x0000000000567714 "3"
 *   insn=0x0000000000567718 string=0x000000000056771C "C"
 *   insn=0x000000000056771C string=0x0000000000567720 "@"
 *   insn=0x0000000000567720 string=0x0000000000567724 "w"
 *   insn=0x0000000000567728 string=0x000000000056772C ")"
 *   insn=0x000000000056772C string=0x0000000000567790 "@"
 *   insn=0x0000000000567734 string=0x0000000000567738 "T"
 *   insn=0x0000000000567740 string=0x0000000000567744 "C"
 *   insn=0x0000000000567748 string=0x000000000056774C "@"
 *   insn=0x0000000000567750 string=0x0000000000567754 "`"
 *   insn=0x0000000000567764 string=0x000000000056776C ""`"
 *   insn=0x000000000056776C string=0x0000000000567770 "_"
 *   insn=0x0000000000567774 string=0x00000000005677AC "?"
 *   insn=0x00000000005677A0 string=0x00000000005677A4 "@h#8"
 *   insn=0x00000000005677AC string=0x00000000005677B0 "7"
 *   insn=0x00000000005677B0 string=0x00000000005677B4 "?h78"
 *   insn=0x00000000005677BC string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x00000000005677C0 string=0x000000000059F998 "basic_string::append"
 *   insn=0x00000000005677C4 string=0x00000000005677C8 "!`&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int **__fastcall sub_5676D8(int **a1, __int64 *a2, unsigned __int64 a3, size_t a4)
{
  __int64 v4; // x5
  unsigned __int64 v5; // x4
  size_t v9; // x4
  size_t v10; // x19
  int *v11; // x2
  __int64 v12; // x3
  size_t v13; // x23
  int *v14; // x1

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
      sub_567088((_BYTE **)a1, v10 + v12);
      v11 = *a1;
      v4 = *a2;
      v12 = *((_QWORD *)*a1 - 3);
    }
    if ( v10 == 1 )
      *((_BYTE *)v11 + v12) = *(_BYTE *)(v4 + a3);
    else
      memcpy((char *)v11 + v12, (const void *)(v4 + a3), v10);
    v14 = *a1;
    if ( *a1 - 6 != (int *)&qword_6FD2E0 )
    {
      *(v14 - 2) = 0;
      *((_QWORD *)v14 - 3) = v13;
      *((_BYTE *)v14 + v13) = 0;
    }
  }
  return a1;
}

