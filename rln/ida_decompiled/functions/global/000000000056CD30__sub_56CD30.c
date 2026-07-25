/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056CD30
 * Mangled: sub_56CD30
 * Demangled: sub_56CD30
 *
 * Callers: 4
 *   0x000000000056CF1C  sub_56CF1C
 *   0x000000000056CF2C  sub_56CF2C
 *   0x000000000056CF78  sub_56CF78
 *   0x000000000056CFB4  sub_56CFB4
 *
 * Callees: 4
 *   0x0000000000203AC0  .wmemcpy
 *   0x000000000056554C  sub_56554C
 *   0x00000000005656B4  sub_5656B4
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 21
 *   insn=0x000000000056CD50 string=0x000000000056CD54 "?"
 *   insn=0x000000000056CD68 string=0x000000000056CD6C "B"
 *   insn=0x000000000056CD70 string=0x000000000056CD74 ""
 *   insn=0x000000000056CD98 string=0x000000000056CD9C "-"
 *   insn=0x000000000056CDC0 string=0x000000000056CDC4 "_"
 *   insn=0x000000000056CDC4 string=0x000000000056CDC8 ","
 *   insn=0x000000000056CDD0 string=0x000000000056CDD4 "x"
 *   insn=0x000000000056CDE4 string=0x000000000056CDE8 """
 *   insn=0x000000000056CDF0 string=0x000000000056CE24 "?"
 *   insn=0x000000000056CE00 string=0x000000000056CE04 "/["
 *   insn=0x000000000056CE2C string=0x000000000056CE30 "Y"
 *   insn=0x000000000056CE30 string=0x000000000056CE34 "?"
 *   insn=0x000000000056CE40 string=0x000000000056CE44 "b"
 *   insn=0x000000000056CE48 string=0x000000000056CE4C "_"
 *   insn=0x000000000056CE60 string=0x000000000056CE64 "!"
 *   insn=0x000000000056CE64 string=0x000000000056CE68 "!"
 *   insn=0x000000000056CE9C string=0x000000000056CEA0 " "
 *   insn=0x000000000056CEDC string=0x000000000056CEE0 " x6"
 *   insn=0x000000000056CEF4 string=0x000000000059FA78 "basic_string::insert"
 *   insn=0x000000000056CF00 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056CF08 string=0x000000000056CF0C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56CD30(const wchar_t **a1, size_t a2, const wchar_t *a3, unsigned __int64 a4)
{
  const wchar_t *v4; // x5
  size_t v5; // x4
  signed __int64 v11; // x20
  __int64 v12; // x24
  const wchar_t *v13; // x0
  char *v14; // x1
  unsigned __int64 v15; // x23
  unsigned __int64 v16; // x26
  __int64 v17; // x25

  v4 = *a1;
  v5 = *((_QWORD *)*a1 - 3);
  if ( a2 > v5 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a2, v5);
  if ( a4 > 0xFFFFFFFFFFFFFFELL - v5 )
    sub_56554C("basic_string::insert");
  if ( a3 < v4 || a3 > &v4[v5] || *(v4 - 2) > 0 )
  {
    sub_56C650(a1, a2, 0, a4);
    if ( a4 )
    {
      if ( a4 == 1 )
        (*a1)[a2] = *a3;
      else
        wmemcpy((wchar_t *)&(*a1)[a2], a3, a4);
    }
    return a1;
  }
  v11 = (char *)a3 - (char *)v4;
  v12 = 4 * a4;
  sub_56C650(a1, a2, 0, a4);
  v13 = *a1;
  v14 = (char *)*a1 + v11;
  v15 = (unsigned __int64)&(*a1)[a2];
  if ( v15 < (unsigned __int64)&v14[v12] )
  {
    if ( (unsigned __int64)v14 >= v15 )
    {
      if ( a4 == 1 )
        v13[a2] = *((_DWORD *)v14 + 1);
      else
        wmemcpy((wchar_t *)&(*a1)[a2], (const wchar_t *)&v14[v12], a4);
    }
    else
    {
      v16 = v15 - (_QWORD)v14;
      v17 = (__int64)(v15 - (_QWORD)v14) >> 2;
      if ( v17 == 1 )
        v13[a2] = *(const wchar_t *)((char *)v13 + v11);
      else
        wmemcpy((wchar_t *)&(*a1)[a2], (const wchar_t *)v14, (__int64)(v15 - (_QWORD)v14) >> 2);
      if ( a4 - v17 == 1 )
        *(_DWORD *)(v15 + v16) = *(_DWORD *)(v15 + 4 * a4);
      else
        wmemcpy((wchar_t *)(v15 + v16), (const wchar_t *)(v15 + v12), a4 - v17);
    }
    return a1;
  }
  if ( a4 == 1 )
    v13[a2] = *(const wchar_t *)((char *)v13 + v11);
  else
    wmemcpy((wchar_t *)&(*a1)[a2], (const wchar_t *)v14, a4);
  return a1;
}

