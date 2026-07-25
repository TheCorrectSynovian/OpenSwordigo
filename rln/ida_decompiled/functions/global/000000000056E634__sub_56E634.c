/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056E634
 * Mangled: sub_56E634
 * Demangled: sub_56E634
 *
 * Callers: 6
 *   0x000000000056E774  sub_56E774
 *   0x000000000056E79C  sub_56E79C
 *   0x000000000056E7C4  sub_56E7C4
 *   0x000000000056E804  sub_56E804
 *   0x000000000056E844  sub_56E844
 *   0x000000000056EFD4  sub_56EFD4
 *
 * Callees: 3
 *   0x0000000000203AC0  .wmemcpy
 *   0x000000000056554C  sub_56554C
 *   0x000000000056E318  sub_56E318
 *
 * Referenced strings: 31
 *   insn=0x000000000056E648 string=0x000000000056E64C "a"
 *   insn=0x000000000056E654 string=0x000000000056E658 "d`"
 *   insn=0x000000000056E660 string=0x000000000056E664 "#"
 *   insn=0x000000000056E664 string=0x000000000056E668 "`"
 *   insn=0x000000000056E668 string=0x000000000056E66C "U"
 *   insn=0x000000000056E670 string=0x000000000056E674 ")"
 *   insn=0x000000000056E67C string=0x000000000056E6EC "a"
 *   insn=0x000000000056E688 string=0x000000000056E68C "#"
 *   insn=0x000000000056E694 string=0x000000000056E698 "a"
 *   insn=0x000000000056E698 string=0x000000000056E69C "_"
 *   insn=0x000000000056E69C string=0x000000000056E6A0 "`"
 *   insn=0x000000000056E6A0 string=0x000000000056E6A4 "!"
 *   insn=0x000000000056E6A4 string=0x000000000056E6A8 "`"
 *   insn=0x000000000056E6A8 string=0x000000000056E6AC "`x!"
 *   insn=0x000000000056E6AC string=0x000000000056E6B0 "`"
 *   insn=0x000000000056E6B0 string=0x000000000056E6B4 "a`"
 *   insn=0x000000000056E6B8 string=0x000000000056E6BC "?"
 *   insn=0x000000000056E6BC string=0x000000000056E6C0 "A"
 *   insn=0x000000000056E6C0 string=0x000000000056E748 "u"
 *   insn=0x000000000056E6F0 string=0x000000000056E6F4 "h"
 *   insn=0x000000000056E6FC string=0x000000000056E700 "s"
 *   insn=0x000000000056E710 string=0x000000000056E714 "s"
 *   insn=0x000000000056E714 string=0x000000000056E718 "a"
 *   insn=0x000000000056E718 string=0x000000000056E71C "_"
 *   insn=0x000000000056E71C string=0x000000000056E720 "`"
 *   insn=0x000000000056E720 string=0x000000000056E724 " "
 *   insn=0x000000000056E730 string=0x000000000056E734 "`"
 *   insn=0x000000000056E734 string=0x000000000056E73C "a`"
 *   insn=0x000000000056E73C string=0x000000000056E740 "?"
 *   insn=0x000000000056E768 string=0x000000000056E770 "w"
 *   insn=0x000000000056E768 string=0x000000000059F998 "basic_string::append"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56E634(const wchar_t **a1, const wchar_t *a2, size_t a3)
{
  const wchar_t *v3; // x3
  __int64 v6; // x1
  unsigned __int64 v7; // x21
  wchar_t *v8; // x0
  __int64 result; // x0
  signed __int64 v10; // x19
  size_t n; // [xsp+38h] [xbp+38h]
  size_t na; // [xsp+38h] [xbp+38h]

  v3 = *a1;
  v6 = *((_QWORD *)*a1 - 3);
  if ( 0xFFFFFFFFFFFFFFELL - v6 < a3 )
    sub_56554C("basic_string::append");
  v7 = a3 + v6;
  if ( a3 + v6 <= *((_QWORD *)v3 - 2) )
  {
    if ( *(*a1 - 2) <= 0 )
    {
LABEL_5:
      v8 = (wchar_t *)&v3[v6];
      if ( a3 == 1 )
        goto LABEL_6;
LABEL_12:
      wmemcpy(v8, a2, a3);
      v3 = *a1;
      if ( *a1 - 6 == (const wchar_t *)&qword_6FD300 )
        return 0;
      goto LABEL_13;
    }
    if ( v3 > a2 )
    {
LABEL_4:
      n = a3;
      sub_56E318(a1, v7);
      v3 = *a1;
      a3 = n;
      v6 = *((_QWORD *)*a1 - 3);
      goto LABEL_5;
    }
  }
  else if ( v3 > a2 )
  {
    goto LABEL_4;
  }
  if ( a2 > &v3[v6] )
    goto LABEL_4;
  v10 = (char *)a2 - (char *)v3;
  na = a3;
  sub_56E318(a1, v7);
  v3 = *a1;
  a3 = na;
  a2 = (const wchar_t *)((char *)*a1 + v10);
  v6 = *((_QWORD *)*a1 - 3);
  v8 = (wchar_t *)&(*a1)[v6];
  if ( na != 1 )
    goto LABEL_12;
LABEL_6:
  v3[v6] = *a2;
  if ( v3 - 6 == (const wchar_t *)&qword_6FD300 )
    return 0;
LABEL_13:
  *((_QWORD *)v3 - 3) = v7;
  result = 0;
  *((_DWORD *)v3 - 2) = 0;
  v3[v7] = 0;
  return result;
}

