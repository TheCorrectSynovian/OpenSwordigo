/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056CB34
 * Mangled: sub_56CB34
 * Demangled: sub_56CB34
 *
 * Callers: 12
 *   0x0000000000547F70  sub_547F70
 *   0x00000000005480EC  sub_5480EC
 *   0x0000000000548C18  sub_548C18
 *   0x00000000005494F0  sub_5494F0
 *   0x0000000000549F38  sub_549F38
 *   0x000000000055201C  sub_55201C
 *   0x0000000000552738  sub_552738
 *   0x000000000056CC54  sub_56CC54
 *   0x000000000056CC78  sub_56CC78
 *   0x000000000056CCC4  sub_56CCC4
 *   0x000000000056CCF8  sub_56CCF8
 *   0x000000000056CD2C  sub_56CD2C
 *
 * Callees: 4
 *   0x00000000001F68E0  .wmemmove
 *   0x0000000000203AC0  .wmemcpy
 *   0x000000000056554C  sub_56554C
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 12
 *   insn=0x000000000056CB44 string=0x000000000056CB48 "_"
 *   insn=0x000000000056CB60 string=0x000000000056CB64 "("
 *   insn=0x000000000056CB64 string=0x000000000056CB68 "?"
 *   insn=0x000000000056CB70 string=0x000000000056CB74 "?"
 *   insn=0x000000000056CBAC string=0x000000000056CBB0 "l"
 *   insn=0x000000000056CBB4 string=0x000000000056CBB8 "c"
 *   insn=0x000000000056CBBC string=0x000000000056CBC0 "("
 *   insn=0x000000000056CBEC string=0x000000000056CBF0 " "
 *   insn=0x000000000056CC0C string=0x000000000056CC10 "4'"
 *   insn=0x000000000056CC10 string=0x00000000001F68E0 "0'"
 *   insn=0x000000000056CC48 string=0x000000000056CC50 "?"
 *   insn=0x000000000056CC48 string=0x000000000059FA60 "basic_string::assign"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56CB34(const wchar_t **a1, const wchar_t *a2, size_t a3)
{
  wchar_t *v6; // x0
  __int64 *v7; // x4
  unsigned __int64 v9; // x3
  wchar_t *v10; // x0

  v6 = (wchar_t *)*a1;
  v7 = (__int64 *)(v6 - 6);
  if ( a3 > 0xFFFFFFFFFFFFFFELL )
    sub_56554C("basic_string::assign");
  if ( a2 >= v6 && a2 <= &v6[*((_QWORD *)v6 - 3)] && *(v6 - 2) <= 0 )
  {
    v9 = a2 - v6;
    if ( a3 <= v9 )
    {
      if ( a3 != 1 )
      {
        wmemcpy(v6, a2, a3);
        v6 = (wchar_t *)*a1;
        v7 = (__int64 *)(*a1 - 6);
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( v9 )
    {
      if ( a3 == 1 )
      {
LABEL_10:
        *v6 = *a2;
        goto LABEL_11;
      }
      wmemmove(v6, a2, a3);
      v6 = (wchar_t *)*a1;
      v7 = (__int64 *)(*a1 - 6);
    }
LABEL_11:
    if ( v7 != &qword_6FD300 )
    {
      *(v6 - 2) = 0;
      *((_QWORD *)v6 - 3) = a3;
      v6[a3] = 0;
    }
    return a1;
  }
  sub_56C650(a1, 0, *((_QWORD *)v6 - 3), a3);
  if ( a3 )
  {
    v10 = (wchar_t *)*a1;
    if ( a3 == 1 )
      *v10 = *a2;
    else
      wmemcpy(v10, a2, a3);
  }
  return a1;
}

