/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D7FEC
 * Mangled: _ZNSt6vectorIPFvvESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_
 * Demangled: std::vector<void (*)(void),std::allocator<void (*)(void)>>::_M_insert_aux(__gnu_cxx::__normal_iterator<void (**)(void),std::vector<void (*)(void),std::allocator<void (*)(void)>>>,void (* const&)(void))
 *
 * Callers: 1
 *   0x00000000001FB690  std::vector<void (*)(void),std::allocator<void (*)(void)>>::_M_insert_aux(__gnu_cxx::__normal_iterator<void (**)(void),std::vector<void (*)(void),std::allocator<void (*)(void)>>>,void (* const&)(void))
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 36
 *   insn=0x00000000004D8004 string=0x00000000004D8008 "h"
 *   insn=0x00000000004D8018 string=0x00000000004D801C "\t"
 *   insn=0x00000000004D8018 string=0x00000000004D8054 "y"
 *   insn=0x00000000004D801C string=0x00000000004D8020 "\t"
 *   insn=0x00000000004D8020 string=0x00000000004D8024 "h"
 *   insn=0x00000000004D8024 string=0x00000000004D8028 "\t!"
 *   insn=0x00000000004D8028 string=0x00000000004D802C "i"
 *   insn=0x00000000004D8030 string=0x00000000004D8034 "\t!"
 *   insn=0x00000000004D8034 string=0x00000000004D8038 """
 *   insn=0x00000000004D8048 string=0x00000000001FBBB0 "0'"
 *   insn=0x00000000004D804C string=0x00000000004D8050 "2"
 *   insn=0x00000000004D8054 string=0x00000000004D8058 ""
 *   insn=0x00000000004D8058 string=0x00000000004D805C ""
 *   insn=0x00000000004D805C string=0x00000000004D8060 "\t"
 *   insn=0x00000000004D8060 string=0x00000000004D8064 "("
 *   insn=0x00000000004D8064 string=0x00000000004D8068 "\n"
 *   insn=0x00000000004D806C string=0x00000000004D8070 "_"
 *   insn=0x00000000004D8074 string=0x00000000004D8078 ")"
 *   insn=0x00000000004D8078 string=0x00000000004D807C "?"
 *   insn=0x00000000004D8080 string=0x00000000004D8084 "8"
 *   insn=0x00000000004D8088 string=0x00000000004D808C ""
 *   insn=0x00000000004D808C string=0x00000000004D8090 ""
 *   insn=0x00000000004D8090 string=0x00000000004D8130 "Y4"
 *   insn=0x00000000004D8094 string=0x00000000004D8098 "Ru"
 *   insn=0x00000000004D8098 string=0x00000000004D809C "w"
 *   insn=0x00000000004D8098 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004D80B8 string=0x00000000004D80BC ")"
 *   insn=0x00000000004D80BC string=0x00000000004D80C0 "U"
 *   insn=0x00000000004D80C8 string=0x00000000004D80D8 "h"
 *   insn=0x00000000004D80DC string=0x00000000004D80E0 "5!"
 *   insn=0x00000000004D80E4 string=0x00000000004D80E8 "Y"
 *   insn=0x00000000004D80FC string=0x00000000004D8100 "w"
 *   insn=0x00000000004D8104 string=0x00000000004D8108 "j|"
 *   insn=0x00000000004D8108 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004D810C string=0x00000000004D8110 "vR"
 *   insn=0x00000000004D8110 string=0x00000000004D8114 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<void (*)(void)>::_M_insert_aux(char **a1, char *a2, _QWORD *a3)
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

