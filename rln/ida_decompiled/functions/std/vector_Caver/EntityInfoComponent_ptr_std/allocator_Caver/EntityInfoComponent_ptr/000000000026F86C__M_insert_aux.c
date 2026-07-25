/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026F86C
 * Mangled: _ZNSt6vectorIPN5Caver19EntityInfoComponentESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::EntityInfoComponent **,std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>>>,Caver::EntityInfoComponent * const&)
 *
 * Callers: 1
 *   0x00000000001FE890  std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::EntityInfoComponent **,std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>>>,Caver::EntityInfoComponent * const&)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 36
 *   insn=0x000000000026F884 string=0x000000000026F888 "h"
 *   insn=0x000000000026F898 string=0x000000000026F89C "\t"
 *   insn=0x000000000026F898 string=0x000000000026F8D4 "y"
 *   insn=0x000000000026F89C string=0x000000000026F8A0 "\t"
 *   insn=0x000000000026F8A0 string=0x000000000026F8A4 "h"
 *   insn=0x000000000026F8A4 string=0x000000000026F8A8 "\t!"
 *   insn=0x000000000026F8A8 string=0x000000000026F8AC "i"
 *   insn=0x000000000026F8B0 string=0x000000000026F8B4 "\t!"
 *   insn=0x000000000026F8B4 string=0x000000000026F8B8 """
 *   insn=0x000000000026F8C8 string=0x00000000001FBBB0 "0'"
 *   insn=0x000000000026F8CC string=0x000000000026F8D0 "2"
 *   insn=0x000000000026F8D4 string=0x000000000026F8D8 ""
 *   insn=0x000000000026F8D8 string=0x000000000026F8DC ""
 *   insn=0x000000000026F8DC string=0x000000000026F8E0 "\t"
 *   insn=0x000000000026F8E0 string=0x000000000026F8E4 "("
 *   insn=0x000000000026F8E4 string=0x000000000026F8E8 "\n"
 *   insn=0x000000000026F8EC string=0x000000000026F8F0 "_"
 *   insn=0x000000000026F8F4 string=0x000000000026F8F8 ")"
 *   insn=0x000000000026F8F8 string=0x000000000026F8FC "?"
 *   insn=0x000000000026F900 string=0x000000000026F904 "8"
 *   insn=0x000000000026F908 string=0x000000000026F90C ""
 *   insn=0x000000000026F90C string=0x000000000026F910 ""
 *   insn=0x000000000026F910 string=0x000000000026F9B0 "9"
 *   insn=0x000000000026F914 string=0x000000000026F918 "2"
 *   insn=0x000000000026F918 string=0x000000000026F91C "w"
 *   insn=0x000000000026F918 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000026F938 string=0x000000000026F93C ")"
 *   insn=0x000000000026F93C string=0x000000000026F940 "U"
 *   insn=0x000000000026F948 string=0x000000000026F958 "h"
 *   insn=0x000000000026F95C string=0x000000000026F960 "5!"
 *   insn=0x000000000026F964 string=0x000000000026F968 "Y"
 *   insn=0x000000000026F97C string=0x000000000026F980 "w"
 *   insn=0x000000000026F984 string=0x000000000026F988 "J"
 *   insn=0x000000000026F988 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000026F98C string=0x000000000026F990 "vR"
 *   insn=0x000000000026F990 string=0x000000000026F994 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::EntityInfoComponent *>::_M_insert_aux(char **a1, char *a2, _QWORD *a3)
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

