/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000415200
 * Mangled: _ZNSt6vectorIPN5Caver16ProgramComponentESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ProgramComponent **,std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>>>,Caver::ProgramComponent * const&)
 *
 * Callers: 1
 *   0x00000000001F6940  std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ProgramComponent **,std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>>>,Caver::ProgramComponent * const&)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 36
 *   insn=0x0000000000415218 string=0x000000000041521C "h"
 *   insn=0x000000000041522C string=0x0000000000415230 "\t"
 *   insn=0x000000000041522C string=0x0000000000415268 "y"
 *   insn=0x0000000000415230 string=0x0000000000415234 "\t"
 *   insn=0x0000000000415234 string=0x0000000000415238 "h"
 *   insn=0x0000000000415238 string=0x000000000041523C "\t!"
 *   insn=0x000000000041523C string=0x0000000000415240 "i"
 *   insn=0x0000000000415244 string=0x0000000000415248 "\t!"
 *   insn=0x0000000000415248 string=0x000000000041524C """
 *   insn=0x0000000000415258 string=0x000000000041525C "U"
 *   insn=0x000000000041525C string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000415260 string=0x0000000000415264 "2"
 *   insn=0x0000000000415268 string=0x000000000041526C ""
 *   insn=0x000000000041526C string=0x0000000000415270 ""
 *   insn=0x0000000000415270 string=0x0000000000415274 "\t"
 *   insn=0x0000000000415274 string=0x0000000000415278 "("
 *   insn=0x0000000000415278 string=0x000000000041527C "\n"
 *   insn=0x0000000000415280 string=0x0000000000415284 "_"
 *   insn=0x0000000000415288 string=0x000000000041528C ")"
 *   insn=0x000000000041528C string=0x0000000000415290 "?"
 *   insn=0x0000000000415294 string=0x0000000000415298 "8"
 *   insn=0x000000000041529C string=0x00000000004152A0 ""
 *   insn=0x00000000004152A0 string=0x00000000004152A4 ""
 *   insn=0x00000000004152AC string=0x00000000004152B0 "w"
 *   insn=0x00000000004152AC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004152CC string=0x00000000004152D0 ")"
 *   insn=0x00000000004152D0 string=0x00000000004152D4 "U"
 *   insn=0x00000000004152DC string=0x00000000004152EC "h"
 *   insn=0x00000000004152E4 string=0x00000000004152E8 "2"
 *   insn=0x00000000004152F0 string=0x00000000004152F4 "5!"
 *   insn=0x00000000004152F8 string=0x00000000004152FC "Y"
 *   insn=0x0000000000415308 string=0x000000000041530C ")"
 *   insn=0x0000000000415310 string=0x0000000000415314 "w"
 *   insn=0x000000000041531C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000415320 string=0x0000000000415324 "vR"
 *   insn=0x0000000000415324 string=0x0000000000415328 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::ProgramComponent *>::_M_insert_aux(char **a1, char *a2, _QWORD *a3)
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

