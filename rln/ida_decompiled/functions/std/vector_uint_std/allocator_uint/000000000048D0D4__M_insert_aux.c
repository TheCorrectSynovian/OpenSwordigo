/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048D0D4
 * Mangled: _ZNSt6vectorIjSaIjEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPjS1_EERKj
 * Demangled: std::vector<uint,std::allocator<uint>>::_M_insert_aux(__gnu_cxx::__normal_iterator<uint *,std::vector<uint,std::allocator<uint>>>,uint const&)
 *
 * Callers: 1
 *   0x00000000001FC580  std::vector<uint,std::allocator<uint>>::_M_insert_aux(__gnu_cxx::__normal_iterator<uint *,std::vector<uint,std::allocator<uint>>>,uint const&)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 34
 *   insn=0x000000000048D0EC string=0x000000000048D0F0 "h"
 *   insn=0x000000000048D100 string=0x000000000048D138 "y"
 *   insn=0x000000000048D104 string=0x000000000048D108 "*"
 *   insn=0x000000000048D10C string=0x000000000048D110 "jE"
 *   insn=0x000000000048D110 string=0x000000000048D114 "k"
 *   insn=0x000000000048D118 string=0x000000000048D11C """
 *   insn=0x000000000048D12C string=0x00000000001FBBB0 "0'"
 *   insn=0x000000000048D130 string=0x000000000048D134 "2"
 *   insn=0x000000000048D138 string=0x000000000048D13C ""
 *   insn=0x000000000048D13C string=0x000000000048D140 ""
 *   insn=0x000000000048D140 string=0x000000000048D144 "\t"
 *   insn=0x000000000048D144 string=0x000000000048D148 "("
 *   insn=0x000000000048D148 string=0x000000000048D14C "\n"
 *   insn=0x000000000048D150 string=0x000000000048D154 "_"
 *   insn=0x000000000048D158 string=0x000000000048D15C ")"
 *   insn=0x000000000048D15C string=0x000000000048D160 "?"
 *   insn=0x000000000048D164 string=0x000000000048D168 "8"
 *   insn=0x000000000048D16C string=0x000000000048D170 ""
 *   insn=0x000000000048D170 string=0x000000000048D174 ""
 *   insn=0x000000000048D174 string=0x000000000048D214 " `"
 *   insn=0x000000000048D17C string=0x000000000048D180 "w"
 *   insn=0x000000000048D17C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000048D19C string=0x000000000048D1A0 ")"
 *   insn=0x000000000048D1A0 string=0x000000000048D1A4 "U"
 *   insn=0x000000000048D1AC string=0x000000000048D1BC "h"
 *   insn=0x000000000048D1B4 string=0x000000000048D1B8 "~"
 *   insn=0x000000000048D1C0 string=0x000000000048D1C4 "5"
 *   insn=0x000000000048D1C8 string=0x000000000048D1CC "Y"
 *   insn=0x000000000048D1D8 string=0x000000000048D1DC "u"
 *   insn=0x000000000048D1E0 string=0x000000000048D1E4 "w"
 *   insn=0x000000000048D1E8 string=0x000000000048D1EC "1"
 *   insn=0x000000000048D1EC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000048D1F0 string=0x000000000048D1F4 "vR"
 *   insn=0x000000000048D1F4 string=0x000000000048D1F8 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<unsigned int>::_M_insert_aux(char **a1, char *a2, _DWORD *a3)
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
        sub_565294(a1, a2, a3);
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

