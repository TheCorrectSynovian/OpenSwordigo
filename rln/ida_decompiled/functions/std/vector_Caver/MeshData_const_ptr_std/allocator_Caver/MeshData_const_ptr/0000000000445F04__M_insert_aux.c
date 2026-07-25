/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000445F04
 * Mangled: _ZNSt6vectorIPKN5Caver8MeshDataESaIS3_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS3_S5_EERKS3_
 * Demangled: std::vector<Caver::MeshData const*,std::allocator<Caver::MeshData const*>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshData const**,std::vector<Caver::MeshData const*,std::allocator<Caver::MeshData const*>>>,Caver::MeshData const* const&)
 *
 * Callers: 1
 *   0x00000000001F6A80  std::vector<Caver::MeshData const*,std::allocator<Caver::MeshData const*>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshData const**,std::vector<Caver::MeshData const*,std::allocator<Caver::MeshData const*>>>,Caver::MeshData const* const&)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 33
 *   insn=0x0000000000445F1C string=0x0000000000445F20 "h"
 *   insn=0x0000000000445F30 string=0x0000000000445F34 "\t"
 *   insn=0x0000000000445F30 string=0x0000000000445F6C "y"
 *   insn=0x0000000000445F34 string=0x0000000000445F38 "\t"
 *   insn=0x0000000000445F38 string=0x0000000000445F3C "h"
 *   insn=0x0000000000445F3C string=0x0000000000445F40 "\t!"
 *   insn=0x0000000000445F40 string=0x0000000000445F44 "i"
 *   insn=0x0000000000445F48 string=0x0000000000445F4C "\t!"
 *   insn=0x0000000000445F4C string=0x0000000000445F50 """
 *   insn=0x0000000000445F60 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000445F64 string=0x0000000000445F68 "2"
 *   insn=0x0000000000445F6C string=0x0000000000445F70 ""
 *   insn=0x0000000000445F70 string=0x0000000000445F74 ""
 *   insn=0x0000000000445F74 string=0x0000000000445F78 "\t"
 *   insn=0x0000000000445F78 string=0x0000000000445F7C "("
 *   insn=0x0000000000445F7C string=0x0000000000445F80 "\n"
 *   insn=0x0000000000445F84 string=0x0000000000445F88 "_"
 *   insn=0x0000000000445F8C string=0x0000000000445F90 ")"
 *   insn=0x0000000000445F90 string=0x0000000000445F94 "?"
 *   insn=0x0000000000445F98 string=0x0000000000445F9C "8"
 *   insn=0x0000000000445FA0 string=0x0000000000445FA4 ""
 *   insn=0x0000000000445FA4 string=0x0000000000445FA8 ""
 *   insn=0x0000000000445FB0 string=0x0000000000445FB4 "w"
 *   insn=0x0000000000445FB0 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000445FD0 string=0x0000000000445FD4 ")"
 *   insn=0x0000000000445FD4 string=0x0000000000445FD8 "U"
 *   insn=0x0000000000445FE0 string=0x0000000000445FF0 "h"
 *   insn=0x0000000000445FF4 string=0x0000000000445FF8 "5!"
 *   insn=0x0000000000445FFC string=0x0000000000446000 "Y"
 *   insn=0x0000000000446014 string=0x0000000000446018 "w"
 *   insn=0x0000000000446020 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000446024 string=0x0000000000446028 "vR"
 *   insn=0x0000000000446028 string=0x000000000044602C "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::MeshData const*>::_M_insert_aux(char **a1, char *a2, _QWORD *a3)
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

