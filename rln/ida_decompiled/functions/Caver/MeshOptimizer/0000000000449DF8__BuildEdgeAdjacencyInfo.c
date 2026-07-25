/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000449DF8
 * Mangled: _ZN5Caver13MeshOptimizer22BuildEdgeAdjacencyInfoEv
 * Demangled: Caver::MeshOptimizer::BuildEdgeAdjacencyInfo(void)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7DD0  std::vector<Caver::MeshOptimizer::EdgeInfo,std::allocator<Caver::MeshOptimizer::EdgeInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshOptimizer::EdgeInfo*,std::vector<Caver::MeshOptimizer::EdgeInfo,std::allocator<Caver::MeshOptimizer::EdgeInfo>>>,Caver::MeshOptimizer::EdgeInfo const&)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 192
 *   insn=0x0000000000449E14 string=0x0000000000449E18 "W"
 *   insn=0x0000000000449E24 string=0x0000000000449E28 "h""
 *   insn=0x0000000000449E28 string=0x0000000000449E2C "v"
 *   insn=0x0000000000449E2C string=0x0000000000449E30 ""
 *   insn=0x0000000000449E30 string=0x0000000000449E34 ""
 *   insn=0x0000000000449E3C string=0x00000000001F8570 "0'"
 *   insn=0x0000000000449E48 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000449E4C string=0x0000000000449E50 ")aE"
 *   insn=0x0000000000449E5C string=0x0000000000449E60 "(A"
 *   insn=0x0000000000449E60 string=0x0000000000449E64 ""
 *   insn=0x0000000000449E70 string=0x0000000000449E74 "5"
 *   insn=0x0000000000449E74 string=0x0000000000449EB8 "h"@"
 *   insn=0x0000000000449E78 string=0x0000000000449E7C ""
 *   insn=0x0000000000449E8C string=0x0000000000449E90 "\t@"
 *   insn=0x0000000000449E98 string=0x0000000000449E9C ""
 *   insn=0x0000000000449EAC string=0x0000000000449EB0 "@"
 *   insn=0x0000000000449EBC string=0x0000000000449EC0 "+"
 *   insn=0x0000000000449ED8 string=0x0000000000449EDC "i"
 *   insn=0x0000000000449EDC string=0x0000000000449EE0 "h"
 *   insn=0x0000000000449EEC string=0x0000000000449EF0 ","
 *   insn=0x0000000000449EF0 string=0x0000000000449EF4 ")\t"
 *   insn=0x0000000000449EF8 string=0x0000000000449EFC "*"
 *   insn=0x0000000000449F04 string=0x0000000000449F14 "l"
 *   insn=0x0000000000449F18 string=0x0000000000449F1C "k!"
 *   insn=0x0000000000449F1C string=0x0000000000449F20 "J!"
 *   insn=0x0000000000449F20 string=0x0000000000449F24 "{@"
 *   insn=0x0000000000449F24 string=0x0000000000449F28 "Y@"
 *   insn=0x0000000000449F2C string=0x0000000000449F30 "*!8"
 *   insn=0x0000000000449F34 string=0x0000000000449F38 "\@"
 *   insn=0x0000000000449F3C string=0x0000000000449F40 "-y4x"
 *   insn=0x0000000000449F44 string=0x0000000000449F48 "i"
 *   insn=0x0000000000449F44 string=0x0000000000449F9C "("
 *   insn=0x0000000000449F50 string=0x0000000000449F54 "*!"
 *   insn=0x0000000000449F54 string=0x0000000000449F58 "A"
 *   insn=0x0000000000449F58 string=0x0000000000449F5C "K"
 *   insn=0x0000000000449F5C string=0x0000000000449F60 "?"
 *   insn=0x0000000000449F64 string=0x0000000000449F80 "(!"
 *   insn=0x0000000000449F68 string=0x0000000000449F6C "("
 *   insn=0x0000000000449F6C string=0x0000000000449F70 "H"
 *   insn=0x0000000000449F70 string=0x0000000000449F74 "!"
 *   insn=0x0000000000449F74 string=0x0000000000449F78 "H"
 *   insn=0x0000000000449F7C string=0x0000000000449F94 "h"
 *   insn=0x0000000000449F8C string=0x00000000001F7DD0 "0'"
 *   insn=0x0000000000449F94 string=0x0000000000449F98 "\tu@"
 *   insn=0x0000000000449F9C string=0x0000000000449FA0 "?"
 *   insn=0x0000000000449FA0 string=0x0000000000449FA4 ""
 *   insn=0x0000000000449FA8 string=0x0000000000449FAC "h"
 *   insn=0x0000000000449FA8 string=0x000000000044A004 "("
 *   insn=0x0000000000449FAC string=0x0000000000449FB0 ")"
 *   insn=0x0000000000449FB8 string=0x0000000000449FBC "*!"
 *   insn=0x0000000000449FBC string=0x0000000000449FC0 "A"
 *   insn=0x0000000000449FC0 string=0x0000000000449FC4 "K"
 *   insn=0x0000000000449FC4 string=0x0000000000449FC8 "?"
 *   insn=0x0000000000449FCC string=0x0000000000449FE8 "(!"
 *   insn=0x0000000000449FD0 string=0x0000000000449FD4 "("
 *   insn=0x0000000000449FD4 string=0x0000000000449FD8 "H"
 *   insn=0x0000000000449FD8 string=0x0000000000449FDC "!"
 *   insn=0x0000000000449FDC string=0x0000000000449FE0 "H"
 *   insn=0x0000000000449FE4 string=0x0000000000449FFC "h"
 *   insn=0x0000000000449FF0 string=0x0000000000449FF4 "w"
 *   insn=0x0000000000449FFC string=0x000000000044A000 "\tu@"
 *   insn=0x000000000044A008 string=0x000000000044A00C "\t"
 *   insn=0x000000000044A010 string=0x000000000044A014 "h"
 *   insn=0x000000000044A010 string=0x000000000044A064 "h""
 *   insn=0x000000000044A020 string=0x000000000044A024 "*!"
 *   insn=0x000000000044A024 string=0x000000000044A028 "A"
 *   insn=0x000000000044A028 string=0x000000000044A02C "K"
 *   insn=0x000000000044A02C string=0x000000000044A030 "?"
 *   insn=0x000000000044A034 string=0x000000000044A050 "(!"
 *   insn=0x000000000044A038 string=0x000000000044A03C "("
 *   insn=0x000000000044A03C string=0x000000000044A040 "H"
 *   insn=0x000000000044A040 string=0x000000000044A044 "!"
 *   insn=0x000000000044A044 string=0x000000000044A048 "H"
 *   insn=0x000000000044A058 string=0x000000000044A05C "]"
 *   insn=0x000000000044A074 string=0x000000000044A078 "+"
 *   insn=0x000000000044A07C string=0x000000000044A080 "}@"
 *   insn=0x000000000044A088 string=0x000000000044A08C "j"
 *   insn=0x000000000044A08C string=0x000000000044A090 "k"
 *   insn=0x000000000044A098 string=0x000000000044A09C "1"
 *   insn=0x000000000044A09C string=0x000000000044A0A0 "."
 *   insn=0x000000000044A0A0 string=0x000000000044A0A4 "-\n"
 *   insn=0x000000000044A0A8 string=0x000000000044A0AC "Ry"
 *   insn=0x000000000044A0AC string=0x000000000044A0B0 "Py"
 *   insn=0x000000000044A0B0 string=0x000000000044A0B4 "Oym"
 *   insn=0x000000000044A0B8 string=0x000000000044A0C8 "R."
 *   insn=0x000000000044A0CC string=0x000000000044A0D0 "P"
 *   insn=0x000000000044A0E4 string=0x000000000044A0E8 "m"
 *   insn=0x000000000044A0E8 string=0x000000000044A0EC "A."
 *   insn=0x000000000044A0E8 string=0x000000000044A114 "_"
 *   insn=0x000000000044A0EC string=0x000000000044A0F0 " "
 *   insn=0x000000000044A0FC string=0x000000000044A100 "_"
 *   insn=0x000000000044A100 string=0x000000000044A104 " "
 *   insn=0x000000000044A104 string=0x000000000044A148 "a"
 *   insn=0x000000000044A108 string=0x000000000044A10C "?"
 *   insn=0x000000000044A10C string=0x000000000044A110 "a"
 *   insn=0x000000000044A120 string=0x000000000044A124 "?"
 *   insn=0x000000000044A124 string=0x000000000044A128 "`"
 *   insn=0x000000000044A128 string=0x000000000044A12C "!"
 *   insn=0x000000000044A12C string=0x000000000044A130 "?"
 *   insn=0x000000000044A134 string=0x000000000044A138 "1""
 *   insn=0x000000000044A134 string=0x000000000044A164 "r"
 *   insn=0x000000000044A13C string=0x000000000044A140 "a"
 *   insn=0x000000000044A14C string=0x000000000044A150 "!t@"
 *   insn=0x000000000044A150 string=0x000000000044A154 "1x x_"
 *   insn=0x000000000044A154 string=0x000000000044A158 "_"
 *   insn=0x000000000044A164 string=0x000000000044A168 "1"
 *   insn=0x000000000044A168 string=0x000000000044A16C "Rv@"
 *   insn=0x000000000044A16C string=0x000000000044A170 "Nz1x"
 *   insn=0x000000000044A174 string=0x000000000044A178 ""
 *   insn=0x000000000044A178 string=0x000000000044A1B8 ")"
 *   insn=0x000000000044A18C string=0x000000000044A190 "?"
 *   insn=0x000000000044A194 string=0x000000000044A1A8 "o"
 *   insn=0x000000000044A19C string=0x000000000044A1A0 "a"
 *   insn=0x000000000044A1B8 string=0x000000000044A1BC "?"
 *   insn=0x000000000044A1CC string=0x000000000044A1D0 "!"
 *   insn=0x000000000044A1D0 string=0x000000000044A1F4 "7"
 *   insn=0x000000000044A1F4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000044A1F8 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000044A1FC string=0x000000000044A200 "X"
 *   insn=0x000000000044A200 string=0x000000000044A204 "["
 *   insn=0x000000000044A200 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000044A20C string=0x00000000001FD590 "0'"
 *   insn=0x000000000044A214 string=0x000000000044A218 "M"
 *   insn=0x000000000044A230 string=0x000000000044A234 "h"
 *   insn=0x000000000044A244 string=0x000000000044A248 "\t"
 *   insn=0x000000000044A244 string=0x000000000044A29C "x"
 *   insn=0x000000000044A248 string=0x000000000044A24C "\t"
 *   insn=0x000000000044A24C string=0x000000000044A250 "i"
 *   insn=0x000000000044A250 string=0x000000000044A254 "(!"
 *   insn=0x000000000044A254 string=0x000000000044A258 "h"
 *   insn=0x000000000044A25C string=0x000000000044A260 ")!"
 *   insn=0x000000000044A260 string=0x000000000044A264 "*"
 *   insn=0x000000000044A264 string=0x000000000044A268 "_"
 *   insn=0x000000000044A268 string=0x000000000044A26C "K"
 *   insn=0x000000000044A26C string=0x000000000044A270 "J"
 *   insn=0x000000000044A270 string=0x000000000044A274 "J"
 *   insn=0x000000000044A278 string=0x000000000044A27C "l"
 *   insn=0x000000000044A27C string=0x000000000044A280 "J"
 *   insn=0x000000000044A280 string=0x000000000044A284 "_"
 *   insn=0x000000000044A284 string=0x000000000044A288 ","
 *   insn=0x000000000044A28C string=0x000000000044A290 "l"
 *   insn=0x000000000044A294 string=0x000000000044A298 "|"
 *   insn=0x000000000044A29C string=0x000000000044A2A0 ""
 *   insn=0x000000000044A2A0 string=0x000000000044A2A4 ""
 *   insn=0x000000000044A2A4 string=0x000000000044A2A8 "\t"
 *   insn=0x000000000044A2A8 string=0x000000000044A2AC "("
 *   insn=0x000000000044A2AC string=0x000000000044A2B0 "\n"
 *   insn=0x000000000044A2B4 string=0x000000000044A2B8 "_"
 *   insn=0x000000000044A2BC string=0x000000000044A2C0 ")"
 *   insn=0x000000000044A2C0 string=0x000000000044A2C4 "?"
 *   insn=0x000000000044A2C8 string=0x000000000044A2CC "7"
 *   insn=0x000000000044A2D4 string=0x000000000044A2D8 "("
 *   insn=0x000000000044A2D8 string=0x000000000044A49C "~k"
 *   insn=0x000000000044A2E0 string=0x000000000044A2E4 "j"
 *   insn=0x000000000044A2FC string=0x000000000044A300 ")"
 *   insn=0x000000000044A300 string=0x000000000044A304 "_"
 *   insn=0x000000000044A30C string=0x000000000044A310 " "
 *   insn=0x000000000044A310 string=0x000000000044A3B4 "h"
 *   insn=0x000000000044A314 string=0x000000000044A318 ""
 *   insn=0x000000000044A318 string=0x000000000044A31C "\t"
 *   insn=0x000000000044A31C string=0x000000000044A320 "+"
 *   insn=0x000000000044A324 string=0x000000000044A328 "b"
 *   insn=0x000000000044A328 string=0x000000000044A334 "\t"
 *   insn=0x000000000044A330 string=0x000000000044A398 "K"
 *   insn=0x000000000044A334 string=0x000000000044A338 ")!"
 *   insn=0x000000000044A338 string=0x000000000044A33C "L"
 *   insn=0x000000000044A344 string=0x000000000044A35C "l"
 *   insn=0x000000000044A348 string=0x000000000044A34C "_"
 *   insn=0x000000000044A34C string=0x000000000044A350 "b"
 *   insn=0x000000000044A360 string=0x000000000044A364 "MA"
 *   insn=0x000000000044A368 string=0x000000000044A36C "J"
 *   insn=0x000000000044A388 string=0x000000000044A38C "a"
 *   insn=0x000000000044A394 string=0x000000000044A3A8 ""
 *   insn=0x000000000044A39C string=0x000000000044A3A0 "+"
 *   insn=0x000000000044A3AC string=0x000000000044A3B0 "!"
 *   insn=0x000000000044A3B8 string=0x000000000044A3BC "\n"
 *   insn=0x000000000044A3C0 string=0x000000000044A3C4 "\t!"
 *   insn=0x000000000044A3C0 string=0x000000000044A470 "`"
 *   insn=0x000000000044A3C4 string=0x000000000044A3C8 ")"
 *   insn=0x000000000044A3C8 string=0x000000000044A3CC "+"
 *   insn=0x000000000044A3CC string=0x000000000044A3D0 "k"
 *   insn=0x000000000044A3D8 string=0x000000000044A3E8 "J!"
 *   insn=0x000000000044A3E8 string=0x000000000044A3EC "J"
 *   insn=0x000000000044A3FC string=0x000000000044A418 "n"
 *   insn=0x000000000044A400 string=0x000000000044A404 "JA"
 *   insn=0x000000000044A444 string=0x000000000044A448 "a"
 *   insn=0x000000000044A450 string=0x000000000044A464 "("
 *   insn=0x000000000044A458 string=0x000000000044A45C "K"
 *   insn=0x000000000044A470 string=0x000000000044A474 "@"
 *   insn=0x000000000044A478 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000044A47C string=0x000000000044A480 "tZ"
 *   insn=0x000000000044A480 string=0x000000000044A484 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MeshOptimizer::BuildEdgeAdjacencyInfo(Caver::MeshOptimizer *this)
{
  __int64 v2; // x22
  unsigned __int64 v3; // x0
  __int64 v4; // x20
  __int64 v5; // x0
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  __int64 v11; // x23
  __int64 v12; // x9
  __int64 v13; // x8
  __int64 v14; // x11
  __int64 v15; // x10
  int v16; // w9
  signed int v17; // w27
  signed int v18; // w25
  __int64 v19; // x10
  __int64 v20; // x9
  signed int v21; // w28
  __int64 v22; // x10
  _QWORD *v23; // x1
  _QWORD *v24; // x10
  _QWORD *v25; // t1
  __int64 v26; // x10
  _QWORD *v27; // x1
  _QWORD *v28; // x10
  _QWORD *v29; // t1
  __int64 v30; // x10
  _QWORD *v31; // x1
  _QWORD *v32; // x10
  _QWORD *v33; // t1
  __int64 v34; // x8
  __int64 v35; // x10
  __int64 v36; // x11
  __int64 v37; // x9
  __int64 v38; // x14
  __int64 v39; // x13
  __int64 v40; // x18
  __int64 v41; // x16
  int v42; // w15
  __int64 v43; // x0
  __int64 v44; // x16
  __int64 v45; // x18
  __int64 v46; // x15
  __int64 v47; // x1
  int *v48; // x0
  int *v49; // x1
  __int64 v50; // x0
  int *v51; // x0
  int *v52; // x17
  __int64 v53; // x16
  int *v54; // x14
  int *v55; // x16

  _ReadStatusReg(TPIDR_EL0);
  v2 = *(_QWORD *)this;
  if ( __CFADD__(3LL * *((int *)this + 8), 3LL * *((int *)this + 8)) )
    v3 = -1;
  else
    v3 = 6LL * *((int *)this + 8);
  v4 = operator new[](v3);
  v5 = operator new(0x28u);
  *(int64x2_t *)(v5 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v5 = &off_6C4AE8;
  *(_QWORD *)(v5 + 24) = v4;
  v6 = *(_QWORD **)(v2 + 240);
  *(_QWORD *)(v2 + 232) = v4;
  *(_QWORD *)(v2 + 240) = v5;
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  if ( *((int *)this + 8) >= 1 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 8;
    do
    {
      v12 = *((_QWORD *)this + 5);
      v13 = *((_QWORD *)this + 3);
      if ( v12 )
      {
        v14 = *(int *)(v12 + v11 - 8);
        v15 = *(int *)(v12 + 4 * v9 + 4);
        v16 = *(_DWORD *)(v12 + v11);
      }
      else
      {
        v15 = v9 + 1;
        v14 = v9;
        v16 = v9 + 2;
      }
      v17 = *(_DWORD *)(v13 + 40 * v14 + 12);
      v18 = *(_DWORD *)(v13 + 40 * v15 + 12);
      v19 = v13 + 40LL * v16;
      v20 = *(_QWORD *)(*(_QWORD *)this + 232LL);
      v21 = *(_DWORD *)(v19 + 12);
      *(_WORD *)(v20 + 2 * v9) = -1;
      if ( v17 < v18 )
      {
        v22 = v13 + 40LL * v17;
        v25 = *(_QWORD **)(v22 + 24);
        v24 = (_QWORD *)(v22 + 24);
        v23 = v25;
        if ( v25 == (_QWORD *)v24[1] )
        {
          std::vector<Caver::MeshOptimizer::EdgeInfo>::_M_insert_aux();
        }
        else
        {
          *v23 = __PAIR64__(v18, v9);
          *v24 += 8LL;
        }
        v20 = *(_QWORD *)(*(_QWORD *)this + 232LL);
      }
      *(_WORD *)(v20 + 2 * v9 + 2) = -1;
      if ( v18 < v21 )
      {
        v26 = *((_QWORD *)this + 3) + 40LL * v18;
        v29 = *(_QWORD **)(v26 + 24);
        v28 = (_QWORD *)(v26 + 24);
        v27 = v29;
        if ( v29 == (_QWORD *)v28[1] )
        {
          std::vector<Caver::MeshOptimizer::EdgeInfo>::_M_insert_aux();
        }
        else
        {
          *v27 = __PAIR64__(v21, (int)v9 + 1);
          *v28 += 8LL;
        }
        v20 = *(_QWORD *)(*(_QWORD *)this + 232LL);
      }
      *(_WORD *)(v20 + 2 * v9 + 4) = -1;
      if ( v21 < v17 )
      {
        v30 = *((_QWORD *)this + 3) + 40LL * v21;
        v33 = *(_QWORD **)(v30 + 24);
        v32 = (_QWORD *)(v30 + 24);
        v31 = v33;
        if ( v33 == (_QWORD *)v32[1] )
        {
          std::vector<Caver::MeshOptimizer::EdgeInfo>::_M_insert_aux();
        }
        else
        {
          *v31 = __PAIR64__(v17, (int)v9 + 2);
          *v32 += 8LL;
        }
      }
      ++v10;
      v9 += 3;
      v11 += 12;
    }
    while ( v10 < *((int *)this + 8) );
    v34 = *((unsigned int *)this + 8);
    if ( (int)v34 >= 1 )
    {
      v35 = *((_QWORD *)this + 5);
      v36 = *((_QWORD *)this + 3);
      v37 = 0;
      while ( 1 )
      {
        v38 = 3 * v37 + 1;
        v39 = 3 * v37 + 2;
        if ( v35 )
        {
          v40 = *(int *)(v35 + 12 * v37);
          v41 = *(int *)(v35 + 4 * v38);
          v42 = *(_DWORD *)(v35 + 4 * v39);
        }
        else
        {
          v41 = 3 * v37 + 1;
          v40 = 3 * v37;
          v42 = 3 * v37 + 2;
        }
        v43 = v36 + 40 * v41;
        v44 = *(int *)(v36 + 40 * v40 + 12);
        v45 = *(int *)(v43 + 12);
        v46 = *(int *)(v36 + 40LL * v42 + 12);
        if ( (int)v44 > (int)v45 )
        {
          v47 = v36 + 40 * v45;
          v48 = *(int **)(v47 + 16);
          v49 = *(int **)(v47 + 24);
          if ( v48 != v49 )
            break;
        }
LABEL_37:
        if ( (int)v45 > (int)v46 )
          goto LABEL_38;
LABEL_45:
        if ( (int)v46 > (int)v44 )
        {
          v53 = v36 + 40 * v44;
          v54 = *(int **)(v53 + 16);
          v55 = *(int **)(v53 + 24);
          if ( v54 != v55 )
          {
            while ( v54[1] != (_DWORD)v46 )
            {
              v54 += 2;
              if ( v55 == v54 )
                goto LABEL_51;
            }
            *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 232LL) + 2LL * *v54) = v39;
          }
        }
LABEL_51:
        if ( ++v37 == v34 )
          return;
      }
      while ( v48[1] != (_DWORD)v44 )
      {
        v48 += 2;
        if ( v49 == v48 )
          goto LABEL_37;
      }
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 232LL) + 2LL * *v48) = 3 * v37;
      if ( (int)v45 <= (int)v46 )
        goto LABEL_45;
LABEL_38:
      v50 = v36 + 40 * v46;
      v52 = *(int **)(v50 + 16);
      v51 = *(int **)(v50 + 24);
      if ( v52 != v51 )
      {
        while ( v52[1] != (_DWORD)v45 )
        {
          v52 += 2;
          if ( v51 == v52 )
            goto LABEL_45;
        }
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 232LL) + 2LL * *v52) = v38;
      }
      goto LABEL_45;
    }
  }
}

