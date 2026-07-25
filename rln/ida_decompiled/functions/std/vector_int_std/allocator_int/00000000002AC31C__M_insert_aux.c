/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC31C
 * Mangled: _ZNSt6vectorIiSaIiEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPiS1_EERKi
 * Demangled: std::vector<int,std::allocator<int>>::_M_insert_aux(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,int const&)
 *
 * Callers: 1
 *   0x00000000001FC4A0  std::vector<int,std::allocator<int>>::_M_insert_aux(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,int const&)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 30
 *   insn=0x00000000002AC334 string=0x00000000002AC338 "h"
 *   insn=0x00000000002AC348 string=0x00000000002AC380 "y"
 *   insn=0x00000000002AC34C string=0x00000000002AC350 "*"
 *   insn=0x00000000002AC354 string=0x00000000002AC358 "jE"
 *   insn=0x00000000002AC358 string=0x00000000002AC35C "k"
 *   insn=0x00000000002AC360 string=0x00000000002AC364 """
 *   insn=0x00000000002AC374 string=0x00000000001FBBB0 "0'"
 *   insn=0x00000000002AC378 string=0x00000000002AC37C "2"
 *   insn=0x00000000002AC380 string=0x00000000002AC384 ""
 *   insn=0x00000000002AC384 string=0x00000000002AC388 ""
 *   insn=0x00000000002AC388 string=0x00000000002AC38C "\t"
 *   insn=0x00000000002AC38C string=0x00000000002AC390 "("
 *   insn=0x00000000002AC390 string=0x00000000002AC394 "\n"
 *   insn=0x00000000002AC398 string=0x00000000002AC39C "_"
 *   insn=0x00000000002AC3A0 string=0x00000000002AC3A4 ")"
 *   insn=0x00000000002AC3A4 string=0x00000000002AC3A8 "?"
 *   insn=0x00000000002AC3AC string=0x00000000002AC3B0 "8"
 *   insn=0x00000000002AC3B4 string=0x00000000002AC3B8 ""
 *   insn=0x00000000002AC3B8 string=0x00000000002AC3BC ""
 *   insn=0x00000000002AC3C4 string=0x00000000002AC3C8 "w"
 *   insn=0x00000000002AC3C4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002AC3E4 string=0x00000000002AC3E8 ")"
 *   insn=0x00000000002AC3E8 string=0x00000000002AC3EC "U"
 *   insn=0x00000000002AC3F4 string=0x00000000002AC404 "h"
 *   insn=0x00000000002AC408 string=0x00000000002AC40C "5"
 *   insn=0x00000000002AC410 string=0x00000000002AC414 "Y"
 *   insn=0x00000000002AC428 string=0x00000000002AC42C "w"
 *   insn=0x00000000002AC434 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002AC438 string=0x00000000002AC43C "vR"
 *   insn=0x00000000002AC43C string=0x00000000002AC440 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<int>::_M_insert_aux(char **a1, char *a2, _DWORD *a3)
{
  char *v4; // x8
  int v7; // w19
  char *v8; // x25
  bool v9; // zf
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x9
  bool v13; // cf
  unsigned __int64 v14; // x8
  int v15; // w9
  unsigned __int64 v16; // x24
  __int64 v17; // x0
  char *v18; // x23
  _DWORD *v19; // x22
  char *v20; // x8
  __int64 v21; // x25

  v4 = a1[1];
  if ( v4 == a1[2] )
  {
    v8 = *a1;
    v10 = v4 - *a1;
    v9 = v10 == 0;
    v11 = v10 >> 2;
    if ( v9 )
      v12 = 1;
    else
      v12 = v11;
    v13 = __CFADD__(v12, v11);
    v14 = v12 + v11;
    v15 = v13;
    if ( v15 | (v14 >> 62 != 0) )
      v16 = 0x3FFFFFFFFFFFFFFFLL;
    else
      v16 = v14;
    if ( v16 )
    {
      if ( v16 >> 62 )
        sub_565294();
      v17 = operator new(4 * v16);
      v18 = *a1;
      v19 = (_DWORD *)v17;
    }
    else
    {
      v19 = 0;
      v18 = *a1;
    }
    v19[(a2 - v8) >> 2] = *a3;
    if ( a2 != v18 )
      memmove(v19, v18, a2 - v18);
    v20 = a1[1];
    v21 = (v20 - a2) >> 2;
    if ( v20 != a2 )
      memmove(&v19[((a2 - v18) >> 2) + 1], a2, v20 - a2);
    if ( v18 )
      operator delete(v18);
    *a1 = (char *)v19;
    a1[1] = (char *)&v19[((a2 - v18) >> 2) + 1 + v21];
    a1[2] = (char *)&v19[v16];
  }
  else
  {
    *(_DWORD *)v4 = *((_DWORD *)v4 - 1);
    a1[1] = v4 + 4;
    v7 = *a3;
    if ( v4 - 4 != a2 )
      memmove(a2 + 4, a2, v4 - 4 - a2);
    *(_DWORD *)a2 = v7;
  }
}

