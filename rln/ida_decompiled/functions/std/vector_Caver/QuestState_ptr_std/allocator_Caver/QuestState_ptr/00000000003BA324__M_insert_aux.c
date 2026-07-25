/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BA324
 * Mangled: _ZNSt6vectorIPN5Caver10QuestStateESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::QuestState **,std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>>>,Caver::QuestState * const&)
 *
 * Callers: 1
 *   0x00000000001FC0B0  std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::QuestState **,std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>>>,Caver::QuestState * const&)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 33
 *   insn=0x00000000003BA33C string=0x00000000003BA340 "h"
 *   insn=0x00000000003BA350 string=0x00000000003BA354 "\t"
 *   insn=0x00000000003BA350 string=0x00000000003BA38C "y"
 *   insn=0x00000000003BA354 string=0x00000000003BA358 "\t"
 *   insn=0x00000000003BA358 string=0x00000000003BA35C "h"
 *   insn=0x00000000003BA35C string=0x00000000003BA360 "\t!"
 *   insn=0x00000000003BA360 string=0x00000000003BA364 "i"
 *   insn=0x00000000003BA368 string=0x00000000003BA36C "\t!"
 *   insn=0x00000000003BA36C string=0x00000000003BA370 """
 *   insn=0x00000000003BA380 string=0x00000000001FBBB0 "0'"
 *   insn=0x00000000003BA384 string=0x00000000003BA388 "2"
 *   insn=0x00000000003BA38C string=0x00000000003BA390 ""
 *   insn=0x00000000003BA390 string=0x00000000003BA394 ""
 *   insn=0x00000000003BA394 string=0x00000000003BA398 "\t"
 *   insn=0x00000000003BA398 string=0x00000000003BA39C "("
 *   insn=0x00000000003BA39C string=0x00000000003BA3A0 "\n"
 *   insn=0x00000000003BA3A4 string=0x00000000003BA3A8 "_"
 *   insn=0x00000000003BA3AC string=0x00000000003BA3B0 ")"
 *   insn=0x00000000003BA3B0 string=0x00000000003BA3B4 "?"
 *   insn=0x00000000003BA3B8 string=0x00000000003BA3BC "8"
 *   insn=0x00000000003BA3C0 string=0x00000000003BA3C4 ""
 *   insn=0x00000000003BA3C4 string=0x00000000003BA3C8 ""
 *   insn=0x00000000003BA3D0 string=0x00000000003BA3D4 "w"
 *   insn=0x00000000003BA3D0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003BA3F0 string=0x00000000003BA3F4 ")"
 *   insn=0x00000000003BA3F4 string=0x00000000003BA3F8 "U"
 *   insn=0x00000000003BA400 string=0x00000000003BA410 "h"
 *   insn=0x00000000003BA414 string=0x00000000003BA418 "5!"
 *   insn=0x00000000003BA41C string=0x00000000003BA420 "Y"
 *   insn=0x00000000003BA434 string=0x00000000003BA438 "w"
 *   insn=0x00000000003BA440 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003BA444 string=0x00000000003BA448 "vR"
 *   insn=0x00000000003BA448 string=0x00000000003BA44C "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::QuestState *>::_M_insert_aux(char **a1, char *a2, _QWORD *a3)
{
  char *v4; // x8
  char *v7; // x8
  __int64 v8; // x19
  char *v9; // x25
  bool v10; // zf
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x9
  bool v14; // cf
  unsigned __int64 v15; // x8
  int v16; // w9
  unsigned __int64 v17; // x24
  __int64 v18; // x0
  char *v19; // x23
  _QWORD *v20; // x22
  char *v21; // x8
  __int64 v22; // x25

  v4 = a1[1];
  if ( v4 == a1[2] )
  {
    v9 = *a1;
    v11 = v4 - *a1;
    v10 = v11 == 0;
    v12 = v11 >> 3;
    if ( v10 )
      v13 = 1;
    else
      v13 = v12;
    v14 = __CFADD__(v13, v12);
    v15 = v13 + v12;
    v16 = v14;
    if ( v16 | (v15 >> 61 != 0) )
      v17 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v17 = v15;
    if ( v17 )
    {
      if ( v17 >> 61 )
        sub_565294();
      v18 = operator new(8 * v17);
      v19 = *a1;
      v20 = (_QWORD *)v18;
    }
    else
    {
      v20 = 0;
      v19 = *a1;
    }
    v20[(a2 - v9) >> 3] = *a3;
    if ( a2 != v19 )
      memmove(v20, v19, a2 - v19);
    v21 = a1[1];
    v22 = (v21 - a2) >> 3;
    if ( v21 != a2 )
      memmove(&v20[((a2 - v19) >> 3) + 1], a2, v21 - a2);
    if ( v19 )
      operator delete(v19);
    *a1 = (char *)v20;
    a1[1] = (char *)&v20[((a2 - v19) >> 3) + 1 + v22];
    a1[2] = (char *)&v20[v17];
  }
  else
  {
    *(_QWORD *)v4 = *((_QWORD *)v4 - 1);
    v7 = a1[1];
    a1[1] = v7 + 8;
    v8 = *a3;
    if ( v7 - 8 != a2 )
      memmove(a2 + 8, a2, v7 - 8 - a2);
    *(_QWORD *)a2 = v8;
  }
}

