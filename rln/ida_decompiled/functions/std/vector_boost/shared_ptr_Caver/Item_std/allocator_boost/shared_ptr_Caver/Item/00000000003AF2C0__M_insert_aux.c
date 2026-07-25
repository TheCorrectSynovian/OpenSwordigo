/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AF2C0
 * Mangled: _ZNSt6vectorIN5boost10shared_ptrIN5Caver4ItemEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Item>*,std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>>>,boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000001F5D00  std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Item>*,std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>>>,boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 107
 *   insn=0x00000000003AF2E4 string=0x00000000003AF2E8 "?"
 *   insn=0x00000000003AF2F0 string=0x00000000003AF2F4 "_"
 *   insn=0x00000000003AF2F4 string=0x00000000003AF2F8 "*"
 *   insn=0x00000000003AF2F8 string=0x00000000003AF2FC "+)"
 *   insn=0x00000000003AF300 string=0x00000000003AF304 "K"
 *   insn=0x00000000003AF300 string=0x00000000003AF310 ")A"
 *   insn=0x00000000003AF304 string=0x00000000003AF308 "k"
 *   insn=0x00000000003AF308 string=0x00000000003AF30C "K"
 *   insn=0x00000000003AF31C string=0x00000000003AF32C "\t"
 *   insn=0x00000000003AF320 string=0x00000000003AF324 ")"
 *   insn=0x00000000003AF32C string=0x00000000003AF330 "?"
 *   insn=0x00000000003AF330 string=0x00000000003AF334 "+"
 *   insn=0x00000000003AF334 string=0x00000000003AF338 ")"
 *   insn=0x00000000003AF338 string=0x00000000003AF33C "7"
 *   insn=0x00000000003AF340 string=0x00000000003AF344 "\t"
 *   insn=0x00000000003AF344 string=0x00000000003AF348 "\n@"
 *   insn=0x00000000003AF34C string=0x00000000003AF350 "K"
 *   insn=0x00000000003AF350 string=0x00000000003AF354 "k"
 *   insn=0x00000000003AF354 string=0x00000000003AF358 "K"
 *   insn=0x00000000003AF35C string=0x00000000003AF360 "\t)"
 *   insn=0x00000000003AF360 string=0x00000000003AF364 "5"
 *   insn=0x00000000003AF368 string=0x00000000003AF36C ""
 *   insn=0x00000000003AF378 string=0x00000000003AF37C "\t@"
 *   insn=0x00000000003AF388 string=0x00000000003AF38C ""
 *   insn=0x00000000003AF398 string=0x00000000003AF39C "@"
 *   insn=0x00000000003AF3B8 string=0x00000000003AF3C8 "u"
 *   insn=0x00000000003AF3BC string=0x00000000003AF3C0 ""
 *   insn=0x00000000003AF3C8 string=0x00000000003AF3CC "vR"
 *   insn=0x00000000003AF3CC string=0x00000000003AF3D0 "5"
 *   insn=0x00000000003AF3D0 string=0x00000000003AF414 "t"
 *   insn=0x00000000003AF3D4 string=0x00000000003AF3D8 ""
 *   insn=0x00000000003AF3E4 string=0x00000000003AF3E8 "\t@"
 *   insn=0x00000000003AF3F4 string=0x00000000003AF3F8 ""
 *   insn=0x00000000003AF404 string=0x00000000003AF408 "@"
 *   insn=0x00000000003AF418 string=0x00000000003AF41C ""
 *   insn=0x00000000003AF42C string=0x00000000003AF430 "\t@"
 *   insn=0x00000000003AF438 string=0x00000000003AF43C ""
 *   insn=0x00000000003AF464 string=0x00000000003AF468 " "
 *   insn=0x00000000003AF46C string=0x00000000003AF470 "("
 *   insn=0x00000000003AF470 string=0x00000000003AF474 ""
 *   insn=0x00000000003AF474 string=0x00000000003AF478 "\t"
 *   insn=0x00000000003AF478 string=0x00000000003AF47C "("
 *   insn=0x00000000003AF47C string=0x00000000003AF480 "\n"
 *   insn=0x00000000003AF484 string=0x00000000003AF488 "_"
 *   insn=0x00000000003AF48C string=0x00000000003AF490 ")"
 *   insn=0x00000000003AF490 string=0x00000000003AF494 "?"
 *   insn=0x00000000003AF498 string=0x00000000003AF49C "7"
 *   insn=0x00000000003AF4AC string=0x00000000003AF4B0 "L"
 *   insn=0x00000000003AF4B0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003AF4C0 string=0x00000000003AF4C4 "i"
 *   insn=0x00000000003AF4C4 string=0x00000000003AF4C8 ")"
 *   insn=0x00000000003AF4CC string=0x00000000003AF4D0 "("
 *   insn=0x00000000003AF4D4 string=0x00000000003AF4D8 "("
 *   insn=0x00000000003AF4DC string=0x00000000003AF4E0 "\t"
 *   insn=0x00000000003AF4E0 string=0x00000000003AF4E4 ")"
 *   insn=0x00000000003AF4E4 string=0x00000000003AF4E8 "\t"
 *   insn=0x00000000003AF4FC string=0x00000000003AF500 "hB"
 *   insn=0x00000000003AF504 string=0x00000000003AF508 "K"
 *   insn=0x00000000003AF510 string=0x00000000003AF514 "K"
 *   insn=0x00000000003AF51C string=0x00000000003AF520 "l"
 *   insn=0x00000000003AF51C string=0x00000000003AF52C "JA"
 *   insn=0x00000000003AF524 string=0x00000000003AF528 "l"
 *   insn=0x00000000003AF52C string=0x00000000003AF530 "_"
 *   insn=0x00000000003AF530 string=0x00000000003AF534 ")A"
 *   insn=0x00000000003AF534 string=0x00000000003AF538 "a"
 *   insn=0x00000000003AF538 string=0x00000000003AF53C ""
 *   insn=0x00000000003AF53C string=0x00000000003AF540 ""
 *   insn=0x00000000003AF544 string=0x00000000003AF548 "A"
 *   insn=0x00000000003AF550 string=0x00000000003AF554 "?"
 *   insn=0x00000000003AF558 string=0x00000000003AF55C "(C"
 *   insn=0x00000000003AF564 string=0x00000000003AF568 "K"
 *   insn=0x00000000003AF568 string=0x00000000003AF56C "+"
 *   insn=0x00000000003AF56C string=0x00000000003AF570 "K"
 *   insn=0x00000000003AF570 string=0x00000000003AF574 "+"
 *   insn=0x00000000003AF578 string=0x00000000003AF57C "l"
 *   insn=0x00000000003AF578 string=0x00000000003AF588 "JA"
 *   insn=0x00000000003AF580 string=0x00000000003AF584 "l"
 *   insn=0x00000000003AF588 string=0x00000000003AF58C "_"
 *   insn=0x00000000003AF58C string=0x00000000003AF590 ")A"
 *   insn=0x00000000003AF594 string=0x00000000003AF598 ""
 *   insn=0x00000000003AF598 string=0x00000000003AF59C ""
 *   insn=0x00000000003AF59C string=0x00000000003AF5A0 ""
 *   insn=0x00000000003AF5AC string=0x00000000003AF608 "v"
 *   insn=0x00000000003AF5B0 string=0x00000000003AF5B4 "3"
 *   insn=0x00000000003AF5B4 string=0x00000000003AF5B8 "h"
 *   insn=0x00000000003AF5B8 string=0x00000000003AF5BC ""
 *   insn=0x00000000003AF5BC string=0x00000000003AF5C0 "h"
 *   insn=0x00000000003AF5C4 string=0x00000000003AF5C8 "h"
 *   insn=0x00000000003AF5CC string=0x00000000003AF5D0 "\t@"
 *   insn=0x00000000003AF5D4 string=0x00000000003AF5D8 "h\n@"
 *   insn=0x00000000003AF5D8 string=0x00000000003AF5DC ""
 *   insn=0x00000000003AF5DC string=0x00000000003AF5E0 "h\n"
 *   insn=0x00000000003AF5E4 string=0x00000000003AF5E8 "h"
 *   insn=0x00000000003AF5EC string=0x00000000003AF5F0 "@"
 *   insn=0x00000000003AF5F8 string=0x00000000003AF5FC "?"
 *   insn=0x00000000003AF60C string=0x00000000003AF610 "("
 *   insn=0x00000000003AF610 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003AF648 string=0x00000000003AF64C "4"
 *   insn=0x00000000003AF650 string=0x00000000003AF654 ""
 *   insn=0x00000000003AF660 string=0x00000000003AF664 "\t@"
 *   insn=0x00000000003AF670 string=0x00000000003AF674 ""
 *   insn=0x00000000003AF680 string=0x00000000003AF684 "@"
 *   insn=0x00000000003AF694 string=0x00000000003AF698 "-{"
 *   insn=0x00000000003AF69C string=0x00000000003AF6A0 ""
 *   insn=0x00000000003AF6A0 string=0x00000000003AF6A4 "\t "
 *   insn=0x00000000003AF6AC string=0x00000000003AF6B0 "a"
 *   insn=0x00000000003AF6B8 string=0x00000000003AF6BC "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::shared_ptr<Caver::Item>>::_M_insert_aux(__int64 *a1, char *a2, _QWORD *a3)
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

