/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000474D6C
 * Mangled: _ZNSt6vectorIPN5Caver9ComponentESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::Component *,std::allocator<Caver::Component *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Component **,std::vector<Caver::Component *,std::allocator<Caver::Component *>>>,Caver::Component * const&)
 *
 * Callers: 1
 *   0x00000000001FB810  std::vector<Caver::Component *,std::allocator<Caver::Component *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Component **,std::vector<Caver::Component *,std::allocator<Caver::Component *>>>,Caver::Component * const&)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 37
 *   insn=0x0000000000474D84 string=0x0000000000474D88 "h"
 *   insn=0x0000000000474D98 string=0x0000000000474D9C "\t"
 *   insn=0x0000000000474D98 string=0x0000000000474DD4 "y"
 *   insn=0x0000000000474D9C string=0x0000000000474DA0 "\t"
 *   insn=0x0000000000474DA0 string=0x0000000000474DA4 "h"
 *   insn=0x0000000000474DA4 string=0x0000000000474DA8 "\t!"
 *   insn=0x0000000000474DA8 string=0x0000000000474DAC "i"
 *   insn=0x0000000000474DB0 string=0x0000000000474DB4 "\t!"
 *   insn=0x0000000000474DB4 string=0x0000000000474DB8 """
 *   insn=0x0000000000474DC4 string=0x0000000000474DC8 "z"
 *   insn=0x0000000000474DC8 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000474DCC string=0x0000000000474DD0 "2"
 *   insn=0x0000000000474DD4 string=0x0000000000474DD8 ""
 *   insn=0x0000000000474DD8 string=0x0000000000474DDC ""
 *   insn=0x0000000000474DDC string=0x0000000000474DE0 "\t"
 *   insn=0x0000000000474DE0 string=0x0000000000474DE4 "("
 *   insn=0x0000000000474DE4 string=0x0000000000474DE8 "\n"
 *   insn=0x0000000000474DEC string=0x0000000000474DF0 "_"
 *   insn=0x0000000000474DF4 string=0x0000000000474DF8 ")"
 *   insn=0x0000000000474DF8 string=0x0000000000474DFC "?"
 *   insn=0x0000000000474E00 string=0x0000000000474E04 "8"
 *   insn=0x0000000000474E08 string=0x0000000000474E0C ""
 *   insn=0x0000000000474E0C string=0x0000000000474E10 ""
 *   insn=0x0000000000474E18 string=0x0000000000474E1C "w"
 *   insn=0x0000000000474E18 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000474E38 string=0x0000000000474E3C ")"
 *   insn=0x0000000000474E3C string=0x0000000000474E40 "U"
 *   insn=0x0000000000474E48 string=0x0000000000474E58 "h"
 *   insn=0x0000000000474E50 string=0x0000000000474E54 "W"
 *   insn=0x0000000000474E5C string=0x0000000000474E60 "5!"
 *   insn=0x0000000000474E64 string=0x0000000000474E68 "Y"
 *   insn=0x0000000000474E74 string=0x0000000000474E78 "N"
 *   insn=0x0000000000474E7C string=0x0000000000474E80 "w"
 *   insn=0x0000000000474E84 string=0x0000000000474E88 "\n\t"
 *   insn=0x0000000000474E88 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000474E8C string=0x0000000000474E90 "vR"
 *   insn=0x0000000000474E90 string=0x0000000000474E94 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::Component *>::_M_insert_aux(char **a1, char *a2, _QWORD *a3)
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
        sub_565294(a1, a2, a3);
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

