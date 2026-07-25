/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000569390
 * Mangled: sub_569390
 * Demangled: sub_569390
 *
 * Callers: 4
 *   0x000000000056956C  sub_56956C
 *   0x0000000000569578  sub_569578
 *   0x00000000005695C4  sub_5695C4
 *   0x0000000000569600  sub_569600
 *
 * Callees: 4
 *   0x0000000000201760  .memcpy
 *   0x000000000056554C  sub_56554C
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 24
 *   insn=0x00000000005693B0 string=0x00000000005693B4 "?"
 *   insn=0x00000000005693C4 string=0x00000000005693CC "B"
 *   insn=0x00000000005693F8 string=0x00000000005693FC "/"
 *   insn=0x00000000005693FC string=0x0000000000569400 "3"
 *   insn=0x000000000056941C string=0x0000000000569420 "_"
 *   insn=0x0000000000569420 string=0x0000000000569424 "L"
 *   insn=0x000000000056942C string=0x0000000000569430 """
 *   insn=0x000000000056943C string=0x0000000000569440 """
 *   insn=0x0000000000569448 string=0x0000000000569478 "?"
 *   insn=0x000000000056947C string=0x0000000000569480 "w"
 *   insn=0x0000000000569490 string=0x0000000000569494 "b"
 *   insn=0x0000000000569494 string=0x0000000000569498 "`"
 *   insn=0x0000000000569498 string=0x000000000056949C "_"
 *   insn=0x000000000056949C string=0x00000000005694A0 "a"
 *   insn=0x00000000005694A4 string=0x0000000000569538 "`hs8`h78"
 *   insn=0x00000000005694B0 string=0x00000000005694B4 "!"
 *   insn=0x00000000005694B4 string=0x00000000005694B8 "!"
 *   insn=0x00000000005694E8 string=0x00000000005694EC " "
 *   insn=0x000000000056952C string=0x0000000000569530 " h68"
 *   insn=0x0000000000569538 string=0x000000000056953C "`h78"
 *   insn=0x0000000000569544 string=0x000000000059FA78 "basic_string::insert"
 *   insn=0x0000000000569550 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x0000000000569558 string=0x000000000056955C "!"
 *   insn=0x0000000000569564 string=0x0000000000569568 "S"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_569390(__int64 *a1, size_t a2, _BYTE *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // x5
  size_t v5; // x4
  _BYTE *v11; // x20
  __int64 v12; // x0
  _BYTE *v13; // x1
  _BYTE *v14; // x3
  __int64 v15; // x23

  v4 = *a1;
  v5 = *(_QWORD *)(*a1 - 24);
  if ( a2 > v5 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a2, v5);
  if ( a4 > 0x3FFFFFFFFFFFFFF9LL - v5 )
    sub_56554C("basic_string::insert");
  if ( (unsigned __int64)a3 < v4 || (unsigned __int64)a3 > v4 + v5 || *(int *)(v4 - 8) > 0 )
  {
    sub_568CB8(a1, a2, 0, a4);
    if ( a4 )
    {
      if ( a4 == 1 )
        *(_BYTE *)(*a1 + a2) = *a3;
      else
        memcpy((void *)(*a1 + a2), a3, a4);
    }
    return a1;
  }
  v11 = &a3[-v4];
  sub_568CB8(a1, a2, 0, a4);
  v12 = *a1;
  v13 = &v11[*a1];
  v14 = (_BYTE *)(*a1 + a2);
  if ( v14 < &v13[a4] )
  {
    if ( v13 >= v14 )
    {
      if ( a4 == 1 )
        *(_BYTE *)(v12 + a2) = v13[1];
      else
        memcpy((void *)(*a1 + a2), &v13[a4], a4);
    }
    else
    {
      v15 = v14 - v13;
      if ( v14 - v13 == 1 )
        *(_BYTE *)(v12 + a2) = v11[v12];
      else
        v14 = memcpy((void *)(*a1 + a2), v13, v14 - v13);
      if ( a4 - v15 == 1 )
        v14[v15] = v14[a4];
      else
        memcpy(&v14[v15], &v14[a4], a4 - v15);
    }
    return a1;
  }
  if ( a4 == 1 )
    *(_BYTE *)(v12 + a2) = v11[v12];
  else
    memcpy((void *)(*a1 + a2), v13, a4);
  return a1;
}

