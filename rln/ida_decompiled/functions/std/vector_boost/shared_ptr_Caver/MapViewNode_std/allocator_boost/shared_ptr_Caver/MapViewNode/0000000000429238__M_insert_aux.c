/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000429238
 * Mangled: _ZNSt6vectorIN5boost10shared_ptrIN5Caver11MapViewNodeEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MapViewNode>*,std::vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>>>,boost::shared_ptr<Caver::MapViewNode> const&)
 *
 * Callers: 1
 *   0x00000000001F3980  std::vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MapViewNode>*,std::vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>>>,boost::shared_ptr<Caver::MapViewNode> const&)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 106
 *   insn=0x000000000042925C string=0x0000000000429260 "?"
 *   insn=0x0000000000429268 string=0x000000000042926C "_"
 *   insn=0x000000000042926C string=0x0000000000429270 "*"
 *   insn=0x0000000000429270 string=0x0000000000429274 "+)"
 *   insn=0x0000000000429278 string=0x000000000042927C "K"
 *   insn=0x0000000000429278 string=0x0000000000429288 ")A"
 *   insn=0x000000000042927C string=0x0000000000429280 "k"
 *   insn=0x0000000000429280 string=0x0000000000429284 "K"
 *   insn=0x0000000000429294 string=0x00000000004292A4 "\t"
 *   insn=0x0000000000429298 string=0x000000000042929C ")"
 *   insn=0x00000000004292A4 string=0x00000000004292A8 "?"
 *   insn=0x00000000004292A8 string=0x00000000004292AC "+"
 *   insn=0x00000000004292AC string=0x00000000004292B0 ")"
 *   insn=0x00000000004292B0 string=0x00000000004292B4 "7"
 *   insn=0x00000000004292B8 string=0x00000000004292BC "\t"
 *   insn=0x00000000004292BC string=0x00000000004292C0 "\n@"
 *   insn=0x00000000004292C4 string=0x00000000004292C8 "K"
 *   insn=0x00000000004292C8 string=0x00000000004292CC "k"
 *   insn=0x00000000004292CC string=0x00000000004292D0 "K"
 *   insn=0x00000000004292D4 string=0x00000000004292D8 "\t)"
 *   insn=0x00000000004292D8 string=0x00000000004292DC "5"
 *   insn=0x00000000004292E0 string=0x00000000004292E4 ""
 *   insn=0x00000000004292F0 string=0x00000000004292F4 "\t@"
 *   insn=0x0000000000429300 string=0x0000000000429304 ""
 *   insn=0x0000000000429310 string=0x0000000000429314 "@"
 *   insn=0x0000000000429330 string=0x0000000000429340 "u"
 *   insn=0x0000000000429334 string=0x0000000000429338 ""
 *   insn=0x0000000000429340 string=0x0000000000429344 "vR"
 *   insn=0x0000000000429344 string=0x0000000000429348 "5"
 *   insn=0x0000000000429348 string=0x000000000042938C "t"
 *   insn=0x000000000042934C string=0x0000000000429350 ""
 *   insn=0x000000000042935C string=0x0000000000429360 "\t@"
 *   insn=0x000000000042936C string=0x0000000000429370 ""
 *   insn=0x000000000042937C string=0x0000000000429380 "@"
 *   insn=0x0000000000429390 string=0x0000000000429394 ""
 *   insn=0x00000000004293A4 string=0x00000000004293A8 "\t@"
 *   insn=0x00000000004293B0 string=0x00000000004293B4 ""
 *   insn=0x00000000004293DC string=0x00000000004293E0 " "
 *   insn=0x00000000004293E4 string=0x00000000004293E8 "("
 *   insn=0x00000000004293E8 string=0x00000000004293EC ""
 *   insn=0x00000000004293EC string=0x00000000004293F0 "\t"
 *   insn=0x00000000004293F0 string=0x00000000004293F4 "("
 *   insn=0x00000000004293F4 string=0x00000000004293F8 "\n"
 *   insn=0x00000000004293FC string=0x0000000000429400 "_"
 *   insn=0x0000000000429404 string=0x0000000000429408 ")"
 *   insn=0x0000000000429408 string=0x000000000042940C "?"
 *   insn=0x0000000000429410 string=0x0000000000429414 "7"
 *   insn=0x0000000000429420 string=0x00000000004295B0 "9"
 *   insn=0x0000000000429424 string=0x0000000000429428 "n0"
 *   insn=0x0000000000429428 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000429438 string=0x000000000042943C "i"
 *   insn=0x000000000042943C string=0x0000000000429440 ")"
 *   insn=0x0000000000429444 string=0x0000000000429448 "("
 *   insn=0x000000000042944C string=0x0000000000429450 "("
 *   insn=0x0000000000429454 string=0x0000000000429458 "\t"
 *   insn=0x0000000000429458 string=0x000000000042945C ")"
 *   insn=0x000000000042945C string=0x0000000000429460 "\t"
 *   insn=0x0000000000429474 string=0x0000000000429478 "hB"
 *   insn=0x000000000042947C string=0x0000000000429480 "K"
 *   insn=0x0000000000429488 string=0x000000000042948C "K"
 *   insn=0x0000000000429494 string=0x0000000000429498 "l"
 *   insn=0x0000000000429494 string=0x00000000004294A4 "JA"
 *   insn=0x000000000042949C string=0x00000000004294A0 "l"
 *   insn=0x00000000004294A4 string=0x00000000004294A8 "_"
 *   insn=0x00000000004294A8 string=0x00000000004294AC ")A"
 *   insn=0x00000000004294AC string=0x00000000004294B0 "a"
 *   insn=0x00000000004294B0 string=0x00000000004294B4 ""
 *   insn=0x00000000004294B4 string=0x00000000004294B8 ""
 *   insn=0x00000000004294BC string=0x00000000004294C0 "A"
 *   insn=0x00000000004294C8 string=0x00000000004294CC "?"
 *   insn=0x00000000004294D0 string=0x00000000004294D4 "(C"
 *   insn=0x00000000004294DC string=0x00000000004294E0 "K"
 *   insn=0x00000000004294E0 string=0x00000000004294E4 "+"
 *   insn=0x00000000004294E4 string=0x00000000004294E8 "K"
 *   insn=0x00000000004294E8 string=0x00000000004294EC "+"
 *   insn=0x00000000004294F0 string=0x00000000004294F4 "l"
 *   insn=0x00000000004294F0 string=0x0000000000429500 "JA"
 *   insn=0x00000000004294F8 string=0x00000000004294FC "l"
 *   insn=0x0000000000429500 string=0x0000000000429504 "_"
 *   insn=0x0000000000429504 string=0x0000000000429508 ")A"
 *   insn=0x000000000042950C string=0x0000000000429510 ""
 *   insn=0x0000000000429510 string=0x0000000000429514 ""
 *   insn=0x0000000000429514 string=0x0000000000429518 ""
 *   insn=0x0000000000429524 string=0x0000000000429580 "v"
 *   insn=0x0000000000429528 string=0x000000000042952C "3"
 *   insn=0x000000000042952C string=0x0000000000429530 "h"
 *   insn=0x0000000000429530 string=0x0000000000429534 ""
 *   insn=0x0000000000429534 string=0x0000000000429538 "h"
 *   insn=0x000000000042953C string=0x0000000000429540 "h"
 *   insn=0x0000000000429544 string=0x0000000000429548 "\t@"
 *   insn=0x000000000042954C string=0x0000000000429550 "h\n@"
 *   insn=0x0000000000429550 string=0x0000000000429554 ""
 *   insn=0x0000000000429554 string=0x0000000000429558 "h\n"
 *   insn=0x000000000042955C string=0x0000000000429560 "h"
 *   insn=0x0000000000429564 string=0x0000000000429568 "@"
 *   insn=0x0000000000429570 string=0x0000000000429574 "?"
 *   insn=0x0000000000429584 string=0x0000000000429588 "J7"
 *   insn=0x0000000000429588 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004295C0 string=0x00000000004295C4 "4"
 *   insn=0x00000000004295C8 string=0x00000000004295CC ""
 *   insn=0x00000000004295D8 string=0x00000000004295DC "\t@"
 *   insn=0x00000000004295E8 string=0x00000000004295EC ""
 *   insn=0x00000000004295F8 string=0x00000000004295FC "@"
 *   insn=0x000000000042960C string=0x0000000000429610 "O"
 *   insn=0x0000000000429628 string=0x000000000042962C ""
 *   insn=0x000000000042962C string=0x0000000000429630 "\t8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::shared_ptr<Caver::MapViewNode>>::_M_insert_aux(__int64 *a1, char *a2, _QWORD *a3)
{
  _QWORD *v4; // x9
  char *v7; // x8
  __int64 v8; // x10
  _QWORD *v9; // x20
  __int64 v10; // x22
  __int64 v11; // x23
  char *v12; // x24
  __int64 v13; // x9
  __int64 v14; // t1
  __int64 v15; // x10
  _QWORD *v16; // x21
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x21
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  char *v24; // x24
  __int64 v25; // x8
  __int64 v26; // x9
  bool v27; // cf
  unsigned __int64 v28; // x8
  int v29; // w9
  unsigned __int64 v30; // x23
  __int64 v31; // x21
  _QWORD *v32; // x9
  __int64 v33; // x8
  char *v34; // x22
  unsigned __int64 v35; // x8
  __int64 v36; // x9
  _QWORD *v37; // x12
  __int64 v38; // x11
  __int64 v39; // x10
  char *v40; // x25
  unsigned __int64 v41; // x24
  _QWORD *v42; // x9
  char *v43; // x10
  __int64 v44; // x11
  _QWORD *v45; // x19
  __int64 v46; // x8
  __int64 v47; // x8

  v4 = (_QWORD *)a1[1];
  if ( v4 == (_QWORD *)a1[2] )
  {
    v24 = (char *)*a1;
    v25 = ((__int64)v4 - *a1) >> 4;
    if ( v4 == (_QWORD *)*a1 )
      v26 = 1;
    else
      v26 = ((__int64)v4 - *a1) >> 4;
    v27 = __CFADD__(v26, v25);
    v28 = v26 + v25;
    v29 = v27;
    if ( v29 | (v28 >> 60 != 0) )
      v30 = 0xFFFFFFFFFFFFFFFLL;
    else
      v30 = v28;
    if ( v30 )
    {
      if ( v30 >> 60 )
        sub_565294(a1, a2, a3);
      v31 = operator new(16 * v30);
    }
    else
    {
      v31 = 0;
    }
    v32 = (_QWORD *)(v31 + 16 * ((a2 - v24) >> 4));
    *v32 = *a3;
    v33 = a3[1];
    v32[1] = v33;
    if ( v33 )
      ++*(_QWORD *)(v33 + 8);
    v34 = (char *)*a1;
    v35 = v31;
    if ( (char *)*a1 != a2 )
    {
      v36 = 0;
      do
      {
        v37 = (_QWORD *)(v31 + v36);
        *v37 = *(_QWORD *)&v34[v36];
        v38 = *(_QWORD *)&v34[v36 + 8];
        v37[1] = v38;
        if ( v38 )
          ++*(_QWORD *)(v38 + 8);
        v39 = (__int64)&v34[v36 + 16];
        v36 += 16;
      }
      while ( (char *)v39 != a2 );
      v35 = v31 + ((a2 - 16 - v34) & 0xFFFFFFFFFFFFFFF0LL) + 16;
    }
    v40 = (char *)a1[1];
    v41 = v35 + 16;
    if ( v40 != a2 )
    {
      v42 = (_QWORD *)(v35 + 16);
      v43 = a2;
      do
      {
        *v42 = *(_QWORD *)v43;
        v44 = *((_QWORD *)v43 + 1);
        v42[1] = v44;
        if ( v44 )
          ++*(_QWORD *)(v44 + 8);
        v43 += 16;
        v42 += 2;
      }
      while ( v43 != v40 );
      v41 += ((v40 - 16 - a2) & 0xFFFFFFFFFFFFFFF0LL) + 16;
    }
    if ( v34 != v40 )
    {
      do
      {
        v45 = (_QWORD *)*((_QWORD *)v34 + 1);
        if ( v45 )
        {
          v46 = v45[1] - 1LL;
          v45[1] = v46;
          if ( !v46 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v45 + 16LL))(v45);
            v47 = v45[2] - 1LL;
            v45[2] = v47;
            if ( !v47 )
              (*(void (__fastcall **)(_QWORD *))(*v45 + 24LL))(v45);
          }
        }
        v34 += 16;
      }
      while ( v40 != v34 );
      v34 = (char *)*a1;
    }
    if ( v34 )
      operator delete(v34);
    *a1 = v31;
    a1[1] = v41;
    a1[2] = v31 + 16 * v30;
  }
  else
  {
    v7 = (char *)(v4 - 2);
    v8 = *(v4 - 1);
    *v4 = *(v4 - 2);
    v4[1] = v8;
    if ( v8 )
      ++*(_QWORD *)(v8 + 8);
    a1[1] = (__int64)(v4 + 2);
    v10 = *a3;
    v9 = (_QWORD *)a3[1];
    if ( v9 )
      ++v9[1];
    if ( v7 - a2 >= 1 )
    {
      v11 = ((unsigned __int64)(v7 - a2) >> 4) + 1;
      v12 = (char *)(v4 - 2);
      do
      {
        v14 = *((_QWORD *)v12 - 2);
        v12 -= 16;
        v13 = v14;
        v15 = *((_QWORD *)v12 + 1);
        if ( v15 )
          ++*(_QWORD *)(v15 + 8);
        v16 = (_QWORD *)*((_QWORD *)v7 + 1);
        *(_QWORD *)v7 = v13;
        *((_QWORD *)v7 + 1) = v15;
        if ( v16 )
        {
          v17 = v16[1] - 1LL;
          v16[1] = v17;
          if ( !v17 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
            v18 = v16[2] - 1LL;
            v16[2] = v18;
            if ( !v18 )
              (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
          }
        }
        --v11;
        v7 = v12;
      }
      while ( v11 > 1 );
    }
    if ( v9 )
      ++v9[1];
    v19 = (_QWORD *)*((_QWORD *)a2 + 1);
    *(_QWORD *)a2 = v10;
    *((_QWORD *)a2 + 1) = v9;
    if ( v19 )
    {
      v20 = v19[1] - 1LL;
      v19[1] = v20;
      if ( !v20 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
        v21 = v19[2] - 1LL;
        v19[2] = v21;
        if ( !v21 )
          (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
      }
    }
    if ( v9 )
    {
      v22 = v9[1] - 1LL;
      v9[1] = v22;
      if ( !v22 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
        v23 = v9[2] - 1LL;
        v9[2] = v23;
        if ( !v23 )
          (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
      }
    }
  }
}

