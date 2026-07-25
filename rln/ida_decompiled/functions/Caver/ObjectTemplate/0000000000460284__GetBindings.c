/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000460284
 * Mangled: _ZN5Caver14ObjectTemplate11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::ObjectTemplate::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001F5A80  Caver::ObjectTemplate::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 8
 *   0x00000000001F5A80  Caver::ObjectTemplate::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 197
 *   insn=0x0000000000460298 string=0x000000000046029C "V"
 *   insn=0x00000000004602AC string=0x000000000059145F "name"
 *   insn=0x00000000004602B8 string=0x00000000004602BC "?"
 *   insn=0x00000000004602D8 string=0x00000000004602DC " "
 *   insn=0x00000000004602E8 string=0x00000000004602EC "t"
 *   insn=0x00000000004602FC string=0x0000000000460300 ""
 *   insn=0x000000000046030C string=0x0000000000460310 "\t\t@"
 *   insn=0x0000000000460314 string=0x0000000000460318 ""
 *   insn=0x000000000046031C string=0x0000000000460320 "h"
 *   insn=0x0000000000460320 string=0x0000000000460324 ""
 *   insn=0x0000000000460324 string=0x0000000000460328 "h"
 *   insn=0x0000000000460338 string=0x000000000046033C "i]"
 *   insn=0x000000000046033C string=0x00000000001F78E0 "0'"
 *   insn=0x0000000000460340 string=0x0000000000460344 "7"
 *   insn=0x0000000000460350 string=0x0000000000460354 "!"
 *   insn=0x0000000000460354 string=0x00000000004604F8 ")"
 *   insn=0x0000000000460364 string=0x000000000046051C ")"
 *   insn=0x0000000000460368 string=0x0000000000595B3C "scaling"
 *   insn=0x0000000000460390 string=0x0000000000460394 "e("
 *   insn=0x0000000000460394 string=0x0000000000460398 "\t"
 *   insn=0x00000000004603A4 string=0x00000000004603A8 "t"
 *   insn=0x00000000004603B8 string=0x00000000004603BC ""
 *   insn=0x00000000004603C0 string=0x00000000004603C4 "Y("
 *   insn=0x00000000004603C4 string=0x00000000004603C8 "C"
 *   insn=0x00000000004603C8 string=0x00000000004603CC "\t\t@"
 *   insn=0x00000000004603D0 string=0x00000000004603D4 ""
 *   insn=0x00000000004603D8 string=0x00000000004603DC "h"
 *   insn=0x00000000004603DC string=0x00000000004603E0 ""
 *   insn=0x00000000004603E0 string=0x00000000004603E4 "h"
 *   insn=0x00000000004603F4 string=0x00000000004603F8 ":]"
 *   insn=0x0000000000460408 string=0x0000000000460540 ")"
 *   insn=0x0000000000460414 string=0x0000000000460418 "a\n"
 *   insn=0x0000000000460418 string=0x000000000046041C "!\t"
 *   insn=0x0000000000460418 string=0x0000000000460564 ")"
 *   insn=0x000000000046041C string=0x0000000000584678 "onLoad"
 *   insn=0x0000000000460444 string=0x0000000000460448 "8("
 *   insn=0x0000000000460448 string=0x000000000046044C "\t"
 *   insn=0x0000000000460458 string=0x000000000046045C "t"
 *   insn=0x000000000046046C string=0x0000000000460470 ""
 *   insn=0x0000000000460474 string=0x0000000000460478 ",("
 *   insn=0x0000000000460478 string=0x000000000046047C "C"
 *   insn=0x000000000046047C string=0x0000000000460480 "\t\t@"
 *   insn=0x0000000000460484 string=0x0000000000460488 ""
 *   insn=0x000000000046048C string=0x0000000000460490 "h"
 *   insn=0x0000000000460490 string=0x0000000000460494 ""
 *   insn=0x0000000000460494 string=0x0000000000460498 "h"
 *   insn=0x00000000004604A8 string=0x00000000004604AC "]"
 *   insn=0x00000000004604B8 string=0x00000000004604BC "a"
 *   insn=0x00000000004604BC string=0x0000000000460588 ")"
 *   insn=0x00000000004604CC string=0x00000000004605AC ")"
 *   insn=0x00000000004604F8 string=0x00000000004604FC ")=G"
 *   insn=0x00000000004604FC string=0x0000000000460500 "!"
 *   insn=0x0000000000460500 string=0x0000000000460504 "i"
 *   insn=0x0000000000460504 string=0x0000000000460508 "\t"
 *   insn=0x0000000000460504 string=0x00000000004605D0 "\t"
 *   insn=0x0000000000460508 string=0x000000000046050C "*"
 *   insn=0x000000000046050C string=0x0000000000460510 "\n"
 *   insn=0x0000000000460514 string=0x0000000000460518 "1"
 *   insn=0x0000000000460518 string=0x00000000004605DC "?"
 *   insn=0x000000000046051C string=0x0000000000460520 ")=G"
 *   insn=0x0000000000460520 string=0x0000000000460524 "!"
 *   insn=0x0000000000460524 string=0x0000000000460528 "I"
 *   insn=0x0000000000460528 string=0x000000000046052C "\t"
 *   insn=0x0000000000460528 string=0x00000000004605F0 "\t"
 *   insn=0x000000000046052C string=0x0000000000460530 "*"
 *   insn=0x0000000000460530 string=0x0000000000460534 "\n"
 *   insn=0x0000000000460538 string=0x000000000046053C "0"
 *   insn=0x000000000046053C string=0x00000000004605FC "?"
 *   insn=0x0000000000460540 string=0x0000000000460544 ")=G"
 *   insn=0x0000000000460544 string=0x0000000000460548 "!"
 *   insn=0x0000000000460548 string=0x000000000046054C ")"
 *   insn=0x000000000046054C string=0x0000000000460550 "\t"
 *   insn=0x000000000046054C string=0x0000000000460610 "\t"
 *   insn=0x0000000000460550 string=0x0000000000460554 "*"
 *   insn=0x0000000000460554 string=0x0000000000460558 "\n"
 *   insn=0x000000000046055C string=0x0000000000460560 "/"
 *   insn=0x0000000000460560 string=0x000000000046061C "?"
 *   insn=0x0000000000460564 string=0x0000000000460568 ")=G"
 *   insn=0x0000000000460568 string=0x000000000046056C "!"
 *   insn=0x000000000046056C string=0x0000000000460570 "\t"
 *   insn=0x0000000000460570 string=0x0000000000460574 "\t"
 *   insn=0x0000000000460570 string=0x0000000000460630 "\t"
 *   insn=0x0000000000460574 string=0x0000000000460578 "*"
 *   insn=0x0000000000460578 string=0x000000000046057C "\n"
 *   insn=0x0000000000460580 string=0x0000000000460584 "."
 *   insn=0x0000000000460584 string=0x000000000046063C "?"
 *   insn=0x0000000000460588 string=0x000000000046058C ")=G"
 *   insn=0x000000000046058C string=0x0000000000460590 "!"
 *   insn=0x0000000000460594 string=0x0000000000460598 "\t"
 *   insn=0x0000000000460594 string=0x0000000000460650 "\t"
 *   insn=0x0000000000460598 string=0x000000000046059C "*"
 *   insn=0x000000000046059C string=0x00000000004605A0 "\n"
 *   insn=0x00000000004605A4 string=0x00000000004605A8 "-"
 *   insn=0x00000000004605A8 string=0x000000000046065C "?"
 *   insn=0x00000000004605AC string=0x00000000004605B0 ")=G"
 *   insn=0x00000000004605B0 string=0x00000000004605B4 "!"
 *   insn=0x00000000004605B8 string=0x00000000004605BC "\t"
 *   insn=0x00000000004605B8 string=0x0000000000460670 "\t"
 *   insn=0x00000000004605BC string=0x00000000004605C0 "*"
 *   insn=0x00000000004605C0 string=0x00000000004605C4 "\n"
 *   insn=0x00000000004605C8 string=0x00000000004605CC ","
 *   insn=0x00000000004605CC string=0x000000000046067C "?"
 *   insn=0x00000000004605D0 string=0x00000000004605D4 "*"
 *   insn=0x00000000004605D4 string=0x00000000004605D8 "\n"
 *   insn=0x00000000004605E4 string=0x00000000004605E8 "o'"
 *   insn=0x00000000004605E8 string=0x00000000004605EC "["
 *   insn=0x00000000004605F0 string=0x00000000004605F4 "*"
 *   insn=0x00000000004605F4 string=0x00000000004605F8 "\n"
 *   insn=0x00000000004605FC string=0x0000000000460600 "L"
 *   insn=0x0000000000460604 string=0x0000000000460608 "g'"
 *   insn=0x0000000000460608 string=0x000000000046060C "W"
 *   insn=0x0000000000460610 string=0x0000000000460614 "*"
 *   insn=0x0000000000460614 string=0x0000000000460618 "\n"
 *   insn=0x000000000046061C string=0x0000000000460620 "l"
 *   insn=0x0000000000460624 string=0x0000000000460628 "_'"
 *   insn=0x0000000000460628 string=0x000000000046062C "x"
 *   insn=0x0000000000460630 string=0x0000000000460634 "*"
 *   insn=0x0000000000460634 string=0x0000000000460638 "\n"
 *   insn=0x0000000000460644 string=0x0000000000460648 "W'"
 *   insn=0x0000000000460648 string=0x000000000046064C "t"
 *   insn=0x0000000000460650 string=0x0000000000460654 "*"
 *   insn=0x0000000000460654 string=0x0000000000460658 "\n"
 *   insn=0x0000000000460664 string=0x0000000000460668 "O'"
 *   insn=0x0000000000460670 string=0x0000000000460674 "*"
 *   insn=0x0000000000460674 string=0x0000000000460678 "\n"
 *   insn=0x0000000000460684 string=0x0000000000460688 "G'"
 *   insn=0x0000000000460690 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000460698 string=0x000000000046069C "(a"
 *   insn=0x00000000004606A4 string=0x00000000004606A8 "*"
 *   insn=0x00000000004606A8 string=0x00000000004606AC "J=G"
 *   insn=0x00000000004606AC string=0x00000000004606B0 ")!"
 *   insn=0x00000000004606B4 string=0x00000000004606B8 "*"
 *   insn=0x00000000004606B4 string=0x00000000004606CC "*"
 *   insn=0x00000000004606B8 string=0x00000000004606BC "K"
 *   insn=0x00000000004606BC string=0x00000000004606C0 "+"
 *   insn=0x00000000004606C8 string=0x00000000004606D8 "_"
 *   insn=0x00000000004606CC string=0x00000000004606D0 "K"
 *   insn=0x00000000004606D0 string=0x00000000004606D4 "+"
 *   insn=0x00000000004606E4 string=0x00000000004606E8 "/'"
 *   insn=0x0000000000460700 string=0x0000000000460704 ")"
 *   insn=0x0000000000460704 string=0x0000000000460708 ")=G"
 *   insn=0x0000000000460708 string=0x000000000046070C "!"
 *   insn=0x000000000046070C string=0x0000000000460710 "i"
 *   insn=0x0000000000460710 string=0x0000000000460714 "\t"
 *   insn=0x0000000000460710 string=0x000000000046087C "\t"
 *   insn=0x0000000000460714 string=0x0000000000460718 "*"
 *   insn=0x0000000000460718 string=0x000000000046071C "\n"
 *   insn=0x0000000000460720 string=0x0000000000460724 "P"
 *   insn=0x0000000000460724 string=0x0000000000460864 "?"
 *   insn=0x0000000000460730 string=0x0000000000460734 "(a"
 *   insn=0x000000000046073C string=0x0000000000460740 "*"
 *   insn=0x0000000000460740 string=0x0000000000460744 "J=G"
 *   insn=0x0000000000460744 string=0x0000000000460748 ")!"
 *   insn=0x000000000046074C string=0x0000000000460750 "*"
 *   insn=0x000000000046074C string=0x0000000000460764 "*"
 *   insn=0x0000000000460750 string=0x0000000000460754 "K"
 *   insn=0x0000000000460754 string=0x0000000000460758 "+"
 *   insn=0x0000000000460760 string=0x0000000000460770 "_"
 *   insn=0x0000000000460764 string=0x0000000000460768 "K"
 *   insn=0x0000000000460768 string=0x000000000046076C "+"
 *   insn=0x000000000046077C string=0x0000000000460780 "\t'"
 *   insn=0x0000000000460798 string=0x000000000046079C ")"
 *   insn=0x000000000046079C string=0x00000000004607A0 ")=G"
 *   insn=0x00000000004607A0 string=0x00000000004607A4 "!"
 *   insn=0x00000000004607A8 string=0x00000000004607AC "\t"
 *   insn=0x00000000004607AC string=0x00000000004607B0 "*"
 *   insn=0x00000000004607B0 string=0x00000000004607B4 "\n"
 *   insn=0x00000000004607B8 string=0x00000000004607BC "*"
 *   insn=0x00000000004607C4 string=0x00000000004607C8 "*"
 *   insn=0x00000000004607C8 string=0x00000000004607CC "J"
 *   insn=0x00000000004607D0 string=0x00000000004607D4 "(a"
 *   insn=0x00000000004607DC string=0x00000000004607E0 "*"
 *   insn=0x00000000004607E0 string=0x00000000004607E4 "J=G"
 *   insn=0x00000000004607E4 string=0x00000000004607E8 ")!"
 *   insn=0x00000000004607EC string=0x00000000004607F0 "*"
 *   insn=0x00000000004607EC string=0x0000000000460804 "*"
 *   insn=0x00000000004607F0 string=0x00000000004607F4 "K"
 *   insn=0x00000000004607F4 string=0x00000000004607F8 "+"
 *   insn=0x0000000000460800 string=0x0000000000460810 "_"
 *   insn=0x0000000000460804 string=0x0000000000460808 "K"
 *   insn=0x0000000000460808 string=0x000000000046080C "+"
 *   insn=0x000000000046082C string=0x0000000000460830 ")"
 *   insn=0x0000000000460830 string=0x0000000000460834 ")"
 *   insn=0x0000000000460840 string=0x0000000000460844 ")"
 *   insn=0x0000000000460844 string=0x0000000000460848 ")=G"
 *   insn=0x0000000000460848 string=0x000000000046084C "!"
 *   insn=0x000000000046084C string=0x0000000000460850 "i"
 *   insn=0x0000000000460850 string=0x0000000000460854 "\t"
 *   insn=0x0000000000460854 string=0x0000000000460858 "*"
 *   insn=0x0000000000460858 string=0x000000000046085C "\n"
 *   insn=0x0000000000460864 string=0x0000000000460868 "l"
 *   insn=0x000000000046087C string=0x0000000000460880 "*"
 *   insn=0x0000000000460880 string=0x0000000000460884 "\n"
 *   insn=0x0000000000460884 string=0x0000000000460888 "?"
 *   insn=0x0000000000460888 string=0x000000000046088C ""
 *   insn=0x0000000000460894 string=0x0000000000460898 "zT"
 *   insn=0x0000000000460898 string=0x00000000001F5A80 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectTemplate::GetBindings(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  void *v4; // x0
  void *v5; // x0
  __int64 v6; // x20
  void *v7; // x0
  void *v8; // x0
  __int64 v9; // x20
  void *v10; // x0
  void *v11; // x0
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  unsigned int *v18; // x8
  int v19; // w9
  unsigned int *v20; // x8
  int v21; // w9
  unsigned int *v22; // x8
  int v23; // w9
  __int64 v24; // [xsp+8h] [xbp-68h] BYREF
  int v25; // [xsp+18h] [xbp-58h]
  __int64 v26; // [xsp+20h] [xbp-50h] BYREF
  __int64 v27; // [xsp+28h] [xbp-48h]
  int v28; // [xsp+30h] [xbp-40h]
  __int64 v29; // [xsp+38h] [xbp-38h]

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)&v24, "name");
  v25 = 100;
  sub_56A528(&v26, &v24);
  v27 = 0x100000001LL;
  v28 = 2;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v25;
    sub_56A528(v3 + 8, &v26);
    *(_DWORD *)(v3 + 24) = v28;
    *(_QWORD *)(v3 + 16) = v27;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v26 - 24);
  if ( (__int64 *)(v26 - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v26 - 8);
    if ( &pthread_create )
    {
      do
        v13 = __ldaxr(v12);
      while ( __stlxr(v13 - 1, v12) );
    }
    else
    {
      v13 = (*v12)--;
    }
    if ( v13 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v24 - 24);
  if ( (__int64 *)(v24 - 24) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v24 - 8);
    if ( &pthread_create )
    {
      do
        v15 = __ldaxr(v14);
      while ( __stlxr(v15 - 1, v14) );
    }
    else
    {
      v15 = (*v14)--;
    }
    if ( v15 <= 0 )
      operator delete(v5);
  }
  sub_566BB8((int)&v24, "scaling");
  v25 = 101;
  sub_56A528(&v26, &v24);
  v28 = 0;
  v27 = 0x500000001LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v25;
    sub_56A528(v6 + 8, &v26);
    *(_DWORD *)(v6 + 24) = v28;
    *(_QWORD *)(v6 + 16) = v27;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v26 - 24);
  if ( (__int64 *)(v26 - 24) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(v26 - 8);
    if ( &pthread_create )
    {
      do
        v17 = __ldaxr(v16);
      while ( __stlxr(v17 - 1, v16) );
    }
    else
    {
      v17 = (*v16)--;
    }
    if ( v17 <= 0 )
      operator delete(v7);
  }
  v8 = (void *)(v24 - 24);
  if ( (__int64 *)(v24 - 24) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v24 - 8);
    if ( &pthread_create )
    {
      do
        v19 = __ldaxr(v18);
      while ( __stlxr(v19 - 1, v18) );
    }
    else
    {
      v19 = (*v18)--;
    }
    if ( v19 <= 0 )
      operator delete(v8);
  }
  sub_566BB8((int)&v24, "onLoad");
  v25 = 102;
  sub_56A528(&v26, &v24);
  v28 = 0;
  v27 = 0x600000001LL;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v9 = v25;
    sub_56A528(v9 + 8, &v26);
    *(_DWORD *)(v9 + 24) = v28;
    *(_QWORD *)(v9 + 16) = v27;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v10 = (void *)(v26 - 24);
  if ( (__int64 *)(v26 - 24) != &qword_6FD2E0 )
  {
    v20 = (unsigned int *)(v26 - 8);
    if ( &pthread_create )
    {
      do
        v21 = __ldaxr(v20);
      while ( __stlxr(v21 - 1, v20) );
    }
    else
    {
      v21 = (*v20)--;
    }
    if ( v21 <= 0 )
      operator delete(v10);
  }
  v11 = (void *)(v24 - 24);
  if ( (__int64 *)(v24 - 24) != &qword_6FD2E0 )
  {
    v22 = (unsigned int *)(v24 - 8);
    if ( &pthread_create )
    {
      do
        v23 = __ldaxr(v22);
      while ( __stlxr(v23 - 1, v22) );
    }
    else
    {
      v23 = (*v22)--;
    }
    if ( v23 <= 0 )
      operator delete(v11);
  }
}

