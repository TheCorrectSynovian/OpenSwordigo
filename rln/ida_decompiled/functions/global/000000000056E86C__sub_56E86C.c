/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056E86C
 * Mangled: sub_56E86C
 * Demangled: sub_56E86C
 *
 * Callers: 3
 *   0x000000000056E96C  sub_56E96C
 *   0x000000000056E994  sub_56E994
 *   0x000000000056EFD4  sub_56EFD4
 *
 * Callees: 3
 *   0x00000000001F6A30  .wmemset
 *   0x000000000056554C  sub_56554C
 *   0x000000000056E318  sub_56E318
 *
 * Referenced strings: 23
 *   insn=0x000000000056E888 string=0x000000000056E88C "$`"
 *   insn=0x000000000056E88C string=0x000000000056E890 "#"
 *   insn=0x000000000056E898 string=0x000000000056E89C "#"
 *   insn=0x000000000056E89C string=0x000000000056E8A0 " "
 *   insn=0x000000000056E8A0 string=0x000000000056E8A4 "u"
 *   insn=0x000000000056E8A8 string=0x000000000056E8AC ")"
 *   insn=0x000000000056E8C8 string=0x000000000056E8CC "#"
 *   insn=0x000000000056E8CC string=0x000000000056E8D0 " "
 *   insn=0x000000000056E8D4 string=0x000000000056E928 "`"
 *   insn=0x000000000056E8DC string=0x000000000056E8E0 "T "
 *   insn=0x000000000056E8E0 string=0x00000000001F6A30 "0'"
 *   insn=0x000000000056E8E4 string=0x000000000056E8E8 "`"
 *   insn=0x000000000056E8E8 string=0x000000000056E8F0 ""`"
 *   insn=0x000000000056E8F0 string=0x000000000056E8F4 "_"
 *   insn=0x000000000056E8F4 string=0x000000000056E8F8 "A"
 *   insn=0x000000000056E8F8 string=0x000000000056E940 "5"
 *   insn=0x000000000056E91C string=0x000000000056E920 " "
 *   insn=0x000000000056E928 string=0x000000000056E92C ""x#"
 *   insn=0x000000000056E930 string=0x000000000056E934 ""`"
 *   insn=0x000000000056E934 string=0x000000000056E938 "_"
 *   insn=0x000000000056E944 string=0x000000000056E948 "?"
 *   insn=0x000000000056E948 string=0x000000000056E94C "?x5"
 *   insn=0x000000000056E960 string=0x000000000059F998 "basic_string::append"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56E86C(const wchar_t **a1, size_t a2, wchar_t a3)
{
  const wchar_t *v4; // x1
  __int64 v6; // x3
  size_t v7; // x21
  wchar_t *v8; // x0
  __int64 result; // x0
  wchar_t c; // [xsp+38h] [xbp+38h]

  v4 = *a1;
  v6 = *((_QWORD *)*a1 - 3);
  if ( 0xFFFFFFFFFFFFFFELL - v6 < a2 )
    sub_56554C("basic_string::append");
  v7 = a2 + v6;
  if ( a2 + v6 > *((_QWORD *)v4 - 2) || *(*a1 - 2) > 0 )
  {
    c = a3;
    sub_56E318(a1, a2 + v6);
    v4 = *a1;
    a3 = c;
    v6 = *((_QWORD *)*a1 - 3);
    v8 = (wchar_t *)&(*a1)[v6];
    if ( a2 == 1 )
      goto LABEL_8;
  }
  else
  {
    v8 = (wchar_t *)&v4[v6];
    if ( a2 == 1 )
    {
LABEL_8:
      v4[v6] = a3;
      if ( v4 - 6 != (const wchar_t *)&qword_6FD300 )
        goto LABEL_9;
      return 0;
    }
  }
  wmemset(v8, a3, a2);
  v4 = *a1;
  if ( *a1 - 6 == (const wchar_t *)&qword_6FD300 )
    return 0;
LABEL_9:
  *((_QWORD *)v4 - 3) = v7;
  result = 0;
  *((_DWORD *)v4 - 2) = 0;
  v4[v7] = 0;
  return result;
}

