/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BD23C
 * Mangled: _ZNSt6vectorIN5boost10shared_ptrIN5Caver7MapNodeEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MapNode>*,std::vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>>,boost::shared_ptr<Caver::MapNode> const&)
 *
 * Callers: 2
 *   0x00000000001FE5B0  std::vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MapNode>*,std::vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>>,boost::shared_ptr<Caver::MapNode> const&)
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FDEC0  Caver::MapZone::~MapZone()
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 115
 *   insn=0x00000000003BD260 string=0x00000000003BD264 "?"
 *   insn=0x00000000003BD26C string=0x00000000003BD270 "_"
 *   insn=0x00000000003BD270 string=0x00000000003BD274 "*"
 *   insn=0x00000000003BD274 string=0x00000000003BD278 "+)"
 *   insn=0x00000000003BD27C string=0x00000000003BD280 "K"
 *   insn=0x00000000003BD27C string=0x00000000003BD28C ")A"
 *   insn=0x00000000003BD280 string=0x00000000003BD284 "k"
 *   insn=0x00000000003BD284 string=0x00000000003BD288 "K"
 *   insn=0x00000000003BD298 string=0x00000000003BD2A8 "\t"
 *   insn=0x00000000003BD29C string=0x00000000003BD2A0 ")"
 *   insn=0x00000000003BD2A8 string=0x00000000003BD2AC "?"
 *   insn=0x00000000003BD2AC string=0x00000000003BD2B0 "+"
 *   insn=0x00000000003BD2B0 string=0x00000000003BD2B4 ")"
 *   insn=0x00000000003BD2B4 string=0x00000000003BD2B8 "7"
 *   insn=0x00000000003BD2BC string=0x00000000003BD2C0 "\t"
 *   insn=0x00000000003BD2C0 string=0x00000000003BD2C4 "\n@"
 *   insn=0x00000000003BD2C8 string=0x00000000003BD2CC "K"
 *   insn=0x00000000003BD2CC string=0x00000000003BD2D0 "k"
 *   insn=0x00000000003BD2D0 string=0x00000000003BD2D4 "K"
 *   insn=0x00000000003BD2D8 string=0x00000000003BD2DC "\t)"
 *   insn=0x00000000003BD2DC string=0x00000000003BD2E0 "5"
 *   insn=0x00000000003BD2E4 string=0x00000000003BD2E8 ""
 *   insn=0x00000000003BD2F4 string=0x00000000003BD2F8 "\t@"
 *   insn=0x00000000003BD304 string=0x00000000003BD308 ""
 *   insn=0x00000000003BD314 string=0x00000000003BD318 "@"
 *   insn=0x00000000003BD334 string=0x00000000003BD344 "u"
 *   insn=0x00000000003BD338 string=0x00000000003BD33C ""
 *   insn=0x00000000003BD344 string=0x00000000003BD348 "vR"
 *   insn=0x00000000003BD348 string=0x00000000003BD34C "5"
 *   insn=0x00000000003BD34C string=0x00000000003BD390 "t"
 *   insn=0x00000000003BD350 string=0x00000000003BD354 ""
 *   insn=0x00000000003BD360 string=0x00000000003BD364 "\t@"
 *   insn=0x00000000003BD370 string=0x00000000003BD374 ""
 *   insn=0x00000000003BD380 string=0x00000000003BD384 "@"
 *   insn=0x00000000003BD394 string=0x00000000003BD398 ""
 *   insn=0x00000000003BD3A8 string=0x00000000003BD3AC "\t@"
 *   insn=0x00000000003BD3B4 string=0x00000000003BD3B8 ""
 *   insn=0x00000000003BD3E0 string=0x00000000003BD3E4 " "
 *   insn=0x00000000003BD3E8 string=0x00000000003BD3EC "("
 *   insn=0x00000000003BD3EC string=0x00000000003BD3F0 ""
 *   insn=0x00000000003BD3F0 string=0x00000000003BD3F4 "\t"
 *   insn=0x00000000003BD3F4 string=0x00000000003BD3F8 "("
 *   insn=0x00000000003BD3F8 string=0x00000000003BD3FC "\n"
 *   insn=0x00000000003BD400 string=0x00000000003BD404 "_"
 *   insn=0x00000000003BD408 string=0x00000000003BD40C ")"
 *   insn=0x00000000003BD40C string=0x00000000003BD410 "?"
 *   insn=0x00000000003BD414 string=0x00000000003BD418 "7"
 *   insn=0x00000000003BD424 string=0x00000000003BD5B4 "8"
 *   insn=0x00000000003BD428 string=0x00000000003BD42C "m"
 *   insn=0x00000000003BD42C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003BD43C string=0x00000000003BD440 "i"
 *   insn=0x00000000003BD440 string=0x00000000003BD444 ")"
 *   insn=0x00000000003BD448 string=0x00000000003BD44C "("
 *   insn=0x00000000003BD450 string=0x00000000003BD454 "("
 *   insn=0x00000000003BD458 string=0x00000000003BD45C "\t"
 *   insn=0x00000000003BD45C string=0x00000000003BD460 ")"
 *   insn=0x00000000003BD460 string=0x00000000003BD464 "\t"
 *   insn=0x00000000003BD478 string=0x00000000003BD47C "hB"
 *   insn=0x00000000003BD480 string=0x00000000003BD484 "K"
 *   insn=0x00000000003BD48C string=0x00000000003BD490 "K"
 *   insn=0x00000000003BD498 string=0x00000000003BD49C "l"
 *   insn=0x00000000003BD498 string=0x00000000003BD4A8 "JA"
 *   insn=0x00000000003BD4A0 string=0x00000000003BD4A4 "l"
 *   insn=0x00000000003BD4A8 string=0x00000000003BD4AC "_"
 *   insn=0x00000000003BD4AC string=0x00000000003BD4B0 ")A"
 *   insn=0x00000000003BD4B0 string=0x00000000003BD4B4 "a"
 *   insn=0x00000000003BD4B4 string=0x00000000003BD4B8 ""
 *   insn=0x00000000003BD4B8 string=0x00000000003BD4BC ""
 *   insn=0x00000000003BD4C0 string=0x00000000003BD4C4 "A"
 *   insn=0x00000000003BD4CC string=0x00000000003BD4D0 "?"
 *   insn=0x00000000003BD4D4 string=0x00000000003BD4D8 "(C"
 *   insn=0x00000000003BD4E0 string=0x00000000003BD4E4 "K"
 *   insn=0x00000000003BD4E4 string=0x00000000003BD4E8 "+"
 *   insn=0x00000000003BD4E8 string=0x00000000003BD4EC "K"
 *   insn=0x00000000003BD4EC string=0x00000000003BD4F0 "+"
 *   insn=0x00000000003BD4F4 string=0x00000000003BD4F8 "l"
 *   insn=0x00000000003BD4F4 string=0x00000000003BD504 "JA"
 *   insn=0x00000000003BD4FC string=0x00000000003BD500 "l"
 *   insn=0x00000000003BD504 string=0x00000000003BD508 "_"
 *   insn=0x00000000003BD508 string=0x00000000003BD50C ")A"
 *   insn=0x00000000003BD510 string=0x00000000003BD514 ""
 *   insn=0x00000000003BD514 string=0x00000000003BD518 ""
 *   insn=0x00000000003BD518 string=0x00000000003BD51C ""
 *   insn=0x00000000003BD528 string=0x00000000003BD584 "v"
 *   insn=0x00000000003BD52C string=0x00000000003BD530 "3"
 *   insn=0x00000000003BD530 string=0x00000000003BD534 "h"
 *   insn=0x00000000003BD534 string=0x00000000003BD538 ""
 *   insn=0x00000000003BD538 string=0x00000000003BD53C "h"
 *   insn=0x00000000003BD540 string=0x00000000003BD544 "h"
 *   insn=0x00000000003BD548 string=0x00000000003BD54C "\t@"
 *   insn=0x00000000003BD550 string=0x00000000003BD554 "h\n@"
 *   insn=0x00000000003BD554 string=0x00000000003BD558 ""
 *   insn=0x00000000003BD558 string=0x00000000003BD55C "h\n"
 *   insn=0x00000000003BD560 string=0x00000000003BD564 "h"
 *   insn=0x00000000003BD568 string=0x00000000003BD56C "@"
 *   insn=0x00000000003BD574 string=0x00000000003BD578 "?"
 *   insn=0x00000000003BD588 string=0x00000000003BD58C "I"
 *   insn=0x00000000003BD58C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003BD5C4 string=0x00000000003BD5C8 "4"
 *   insn=0x00000000003BD5CC string=0x00000000003BD5D0 ""
 *   insn=0x00000000003BD5DC string=0x00000000003BD5E0 "\t@"
 *   insn=0x00000000003BD5EC string=0x00000000003BD5F0 ""
 *   insn=0x00000000003BD5FC string=0x00000000003BD600 "@"
 *   insn=0x00000000003BD610 string=0x00000000003BD614 "NC"
 *   insn=0x00000000003BD634 string=0x00000000003BD638 "I"
 *   insn=0x00000000003BD638 string=0x00000000003BD63C ")"
 *   insn=0x00000000003BD648 string=0x00000000003BD64C "(A"
 *   insn=0x00000000003BD650 string=0x00000000003BD654 ""
 *   insn=0x00000000003BD668 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003BD66C string=0x00000000003BD680 "<"
 *   insn=0x00000000003BD674 string=0x00000000001FDEC0 "0'"
 *   insn=0x00000000003BD678 string=0x00000000003BD67C ""
 *   insn=0x00000000003BD688 string=0x00000000003BD68C "\t"
 *   insn=0x00000000003BD698 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003BD6A0 string=0x00000000003BD6A4 "*C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::shared_ptr<Caver::MapNode>>::_M_insert_aux(__int64 *a1, char *a2, _QWORD *a3)
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
        sub_565294();
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

