/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C67FC
 * Mangled: _ZNSt6vectorIN5Caver8FontText8LineInfoESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::FontText::LineInfo,std::allocator<Caver::FontText::LineInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FontText::LineInfo*,std::vector<Caver::FontText::LineInfo,std::allocator<Caver::FontText::LineInfo>>>,Caver::FontText::LineInfo const&)
 *
 * Callers: 1
 *   0x0000000000201910  std::vector<Caver::FontText::LineInfo,std::allocator<Caver::FontText::LineInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FontText::LineInfo*,std::vector<Caver::FontText::LineInfo,std::allocator<Caver::FontText::LineInfo>>>,Caver::FontText::LineInfo const&)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 36
 *   insn=0x00000000004C6814 string=0x00000000004C6818 "h"
 *   insn=0x00000000004C6828 string=0x00000000004C682C "\t"
 *   insn=0x00000000004C6828 string=0x00000000004C6864 "y"
 *   insn=0x00000000004C682C string=0x00000000004C6830 "\t"
 *   insn=0x00000000004C6830 string=0x00000000004C6834 "h"
 *   insn=0x00000000004C6834 string=0x00000000004C6838 "\t!"
 *   insn=0x00000000004C6838 string=0x00000000004C683C "i"
 *   insn=0x00000000004C6840 string=0x00000000004C6844 "\t!"
 *   insn=0x00000000004C6844 string=0x00000000004C6848 """
 *   insn=0x00000000004C6858 string=0x00000000001FBBB0 "0'"
 *   insn=0x00000000004C685C string=0x00000000004C6860 "2"
 *   insn=0x00000000004C6864 string=0x00000000004C6868 ""
 *   insn=0x00000000004C6868 string=0x00000000004C686C ""
 *   insn=0x00000000004C686C string=0x00000000004C6870 "\t"
 *   insn=0x00000000004C6870 string=0x00000000004C6874 "("
 *   insn=0x00000000004C6874 string=0x00000000004C6878 "\n"
 *   insn=0x00000000004C687C string=0x00000000004C6880 "_"
 *   insn=0x00000000004C6884 string=0x00000000004C6888 ")"
 *   insn=0x00000000004C6888 string=0x00000000004C688C "?"
 *   insn=0x00000000004C6890 string=0x00000000004C6894 "8"
 *   insn=0x00000000004C6898 string=0x00000000004C689C ""
 *   insn=0x00000000004C689C string=0x00000000004C68A0 ""
 *   insn=0x00000000004C68A0 string=0x00000000004C6940 "Uz"
 *   insn=0x00000000004C68A4 string=0x00000000004C68A8 "N"
 *   insn=0x00000000004C68A8 string=0x00000000004C68AC "w"
 *   insn=0x00000000004C68A8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004C68C8 string=0x00000000004C68CC ")"
 *   insn=0x00000000004C68CC string=0x00000000004C68D0 "U"
 *   insn=0x00000000004C68D8 string=0x00000000004C68E8 "h"
 *   insn=0x00000000004C68EC string=0x00000000004C68F0 "5!"
 *   insn=0x00000000004C68F4 string=0x00000000004C68F8 "Y"
 *   insn=0x00000000004C690C string=0x00000000004C6910 "w"
 *   insn=0x00000000004C6914 string=0x00000000004C6918 "f"
 *   insn=0x00000000004C6918 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C691C string=0x00000000004C6920 "vR"
 *   insn=0x00000000004C6920 string=0x00000000004C6924 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::FontText::LineInfo>::_M_insert_aux(char **a1, char *a2, _QWORD *a3)
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

