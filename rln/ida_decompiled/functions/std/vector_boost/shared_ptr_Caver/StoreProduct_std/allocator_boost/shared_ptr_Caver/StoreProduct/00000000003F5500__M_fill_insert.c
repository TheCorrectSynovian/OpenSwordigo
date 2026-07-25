/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F5500
 * Mangled: _ZNSt6vectorIN5boost10shared_ptrIN5Caver12StoreProductEEESaIS4_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS4_S6_EEmRKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::StoreProduct>,std::allocator<boost::shared_ptr<Caver::StoreProduct>>>::_M_fill_insert(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::StoreProduct>*,std::vector<boost::shared_ptr<Caver::StoreProduct>,std::allocator<boost::shared_ptr<Caver::StoreProduct>>>>,ulong,boost::shared_ptr<Caver::StoreProduct> const&)
 *
 * Callers: 1
 *   0x0000000000201FE0  std::vector<boost::shared_ptr<Caver::StoreProduct>,std::allocator<boost::shared_ptr<Caver::StoreProduct>>>::_M_fill_insert(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::StoreProduct>*,std::vector<boost::shared_ptr<Caver::StoreProduct>,std::allocator<boost::shared_ptr<Caver::StoreProduct>>>>,ulong,boost::shared_ptr<Caver::StoreProduct> const&)
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA120  .strcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x000000000056554C  sub_56554C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 167
 *   insn=0x00000000003F5524 string=0x00000000003F5528 "6$"
 *   insn=0x00000000003F552C string=0x00000000003F5530 ""
 *   insn=0x00000000003F5530 string=0x00000000003F5534 ""
 *   insn=0x00000000003F5538 string=0x00000000003F553C """
 *   insn=0x00000000003F5540 string=0x00000000003F5544 ""
 *   insn=0x00000000003F5544 string=0x00000000003F5548 "\t"
 *   insn=0x00000000003F554C string=0x00000000003F5550 "\n"
 *   insn=0x00000000003F5550 string=0x00000000003F5554 "_"
 *   insn=0x00000000003F5558 string=0x00000000003F555C "?"
 *   insn=0x00000000003F5560 string=0x00000000003F5564 "I"
 *   insn=0x00000000003F5564 string=0x00000000003F5568 "+"
 *   insn=0x00000000003F5574 string=0x00000000003F5578 "J"
 *   insn=0x00000000003F5578 string=0x00000000003F557C "_"
 *   insn=0x00000000003F5584 string=0x00000000003F5588 ""
 *   insn=0x00000000003F5588 string=0x00000000003F558C "H#"
 *   insn=0x00000000003F558C string=0x00000000003F59F4 "("
 *   insn=0x00000000003F5594 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003F559C string=0x00000000003F57FC "h"
 *   insn=0x00000000003F55A4 string=0x00000000003F55B4 ""
 *   insn=0x00000000003F55A8 string=0x00000000003F55AC ""
 *   insn=0x00000000003F55B4 string=0x00000000003F55B8 "\t"
 *   insn=0x00000000003F55B8 string=0x00000000003F55BC "("
 *   insn=0x00000000003F55C8 string=0x00000000003F55CC ""
 *   insn=0x00000000003F55D0 string=0x00000000003F55D4 ""
 *   insn=0x00000000003F55D4 string=0x00000000003F55D8 "l"
 *   insn=0x00000000003F55D8 string=0x00000000003F55DC ""
 *   insn=0x00000000003F55E0 string=0x00000000003F55E4 "k"
 *   insn=0x00000000003F55EC string=0x00000000003F55F0 "l"
 *   insn=0x00000000003F55EC string=0x00000000003F55FC ")A"
 *   insn=0x00000000003F55F4 string=0x00000000003F55F8 "l"
 *   insn=0x00000000003F55FC string=0x00000000003F5600 "_"
 *   insn=0x00000000003F5604 string=0x00000000003F5608 ""
 *   insn=0x00000000003F5608 string=0x00000000003F560C "\t"
 *   insn=0x00000000003F5614 string=0x00000000003F5618 "K"
 *   insn=0x00000000003F5618 string=0x00000000003F561C ""
 *   insn=0x00000000003F5618 string=0x00000000003F56A0 "v"
 *   insn=0x00000000003F5628 string=0x00000000003F562C "\t"
 *   insn=0x00000000003F562C string=0x00000000003F5630 ")"
 *   insn=0x00000000003F5634 string=0x00000000003F5638 "\n"
 *   insn=0x00000000003F5638 string=0x00000000003F563C "J"
 *   insn=0x00000000003F563C string=0x00000000003F5640 "\n"
 *   insn=0x00000000003F5644 string=0x00000000003F5648 "\t"
 *   insn=0x00000000003F5648 string=0x00000000003F564C "5"
 *   insn=0x00000000003F564C string=0x00000000003F5690 "9"
 *   insn=0x00000000003F5650 string=0x00000000003F5654 ""
 *   insn=0x00000000003F5660 string=0x00000000003F5664 "\t@"
 *   insn=0x00000000003F5670 string=0x00000000003F5674 ""
 *   insn=0x00000000003F5680 string=0x00000000003F5684 "@"
 *   insn=0x00000000003F5690 string=0x00000000003F5694 "?"
 *   insn=0x00000000003F56A4 string=0x00000000003F56B4 "u"
 *   insn=0x00000000003F56A8 string=0x00000000003F56AC ""
 *   insn=0x00000000003F56B4 string=0x00000000003F56B8 "wR"
 *   insn=0x00000000003F56B8 string=0x00000000003F56BC "5"
 *   insn=0x00000000003F56BC string=0x00000000003F5700 "sB"
 *   insn=0x00000000003F56C0 string=0x00000000003F56C4 ""
 *   insn=0x00000000003F56D0 string=0x00000000003F56D4 "\t@"
 *   insn=0x00000000003F56E0 string=0x00000000003F56E4 ""
 *   insn=0x00000000003F56F0 string=0x00000000003F56F4 "@"
 *   insn=0x00000000003F5708 string=0x00000000003F570C "9"
 *   insn=0x00000000003F570C string=0x00000000003F57F0 "t"
 *   insn=0x00000000003F5710 string=0x00000000003F5714 "@"
 *   insn=0x00000000003F5714 string=0x00000000003F573C ""
 *   insn=0x00000000003F5718 string=0x00000000003F571C "WQ"
 *   insn=0x00000000003F5720 string=0x00000000003F5730 ""
 *   insn=0x00000000003F5724 string=0x00000000003F5728 "k"
 *   insn=0x00000000003F5730 string=0x00000000003F5734 "JA"
 *   insn=0x00000000003F5734 string=0x00000000003F5738 "!"
 *   insn=0x00000000003F5744 string=0x00000000003F5748 "@"
 *   insn=0x00000000003F5748 string=0x00000000003F5970 "h"
 *   insn=0x00000000003F574C string=0x00000000003F5750 "*"
 *   insn=0x00000000003F5750 string=0x00000000003F5754 "\n"
 *   insn=0x00000000003F5754 string=0x00000000003F5758 "*"
 *   insn=0x00000000003F5758 string=0x00000000003F575C "\n"
 *   insn=0x00000000003F5760 string=0x00000000003F5764 "K"
 *   insn=0x00000000003F5760 string=0x00000000003F5770 ")A"
 *   insn=0x00000000003F5764 string=0x00000000003F5768 "k"
 *   insn=0x00000000003F5768 string=0x00000000003F576C "K"
 *   insn=0x00000000003F5770 string=0x00000000003F5774 "?"
 *   insn=0x00000000003F5774 string=0x00000000003F5778 "A"
 *   insn=0x00000000003F577C string=0x00000000003F5780 ""
 *   insn=0x00000000003F5788 string=0x00000000003F5798 "u"
 *   insn=0x00000000003F578C string=0x00000000003F5790 ""
 *   insn=0x00000000003F5798 string=0x00000000003F579C "wR"
 *   insn=0x00000000003F579C string=0x00000000003F57A0 "5"
 *   insn=0x00000000003F57A0 string=0x00000000003F57E4 "sB"
 *   insn=0x00000000003F57A4 string=0x00000000003F57A8 ""
 *   insn=0x00000000003F57B4 string=0x00000000003F57B8 "\t@"
 *   insn=0x00000000003F57C4 string=0x00000000003F57C8 ""
 *   insn=0x00000000003F57D4 string=0x00000000003F57D8 "@"
 *   insn=0x00000000003F57F0 string=0x00000000003F57F4 "n"
 *   insn=0x00000000003F57FC string=0x00000000003F5800 ""
 *   insn=0x00000000003F580C string=0x00000000003F5810 "\n"
 *   insn=0x00000000003F5814 string=0x00000000003F5818 "\n"
 *   insn=0x00000000003F581C string=0x00000000003F5820 "K"
 *   insn=0x00000000003F581C string=0x00000000003F582C ")"
 *   insn=0x00000000003F5820 string=0x00000000003F5824 "k"
 *   insn=0x00000000003F5824 string=0x00000000003F5828 "K"
 *   insn=0x00000000003F582C string=0x00000000003F5830 "A"
 *   insn=0x00000000003F5848 string=0x00000000003F584C "hB"
 *   insn=0x00000000003F5850 string=0x00000000003F5854 "K"
 *   insn=0x00000000003F585C string=0x00000000003F5860 "K"
 *   insn=0x00000000003F5868 string=0x00000000003F586C "l"
 *   insn=0x00000000003F5868 string=0x00000000003F5878 "JA"
 *   insn=0x00000000003F5870 string=0x00000000003F5874 "l"
 *   insn=0x00000000003F5878 string=0x00000000003F587C "_"
 *   insn=0x00000000003F587C string=0x00000000003F5880 ")A"
 *   insn=0x00000000003F5880 string=0x00000000003F5884 "a"
 *   insn=0x00000000003F5884 string=0x00000000003F5888 ""
 *   insn=0x00000000003F5888 string=0x00000000003F588C ""
 *   insn=0x00000000003F5890 string=0x00000000003F5894 "A"
 *   insn=0x00000000003F589C string=0x00000000003F58A0 "?"
 *   insn=0x00000000003F58A4 string=0x00000000003F58A8 "(C"
 *   insn=0x00000000003F58B0 string=0x00000000003F58B4 "K"
 *   insn=0x00000000003F58B4 string=0x00000000003F58B8 "+"
 *   insn=0x00000000003F58B8 string=0x00000000003F58BC "K"
 *   insn=0x00000000003F58BC string=0x00000000003F58C0 "+"
 *   insn=0x00000000003F58C4 string=0x00000000003F58C8 "l"
 *   insn=0x00000000003F58C4 string=0x00000000003F58D4 "JA"
 *   insn=0x00000000003F58CC string=0x00000000003F58D0 "l"
 *   insn=0x00000000003F58D4 string=0x00000000003F58D8 "_"
 *   insn=0x00000000003F58D8 string=0x00000000003F58DC ")A"
 *   insn=0x00000000003F58E0 string=0x00000000003F58E4 ""
 *   insn=0x00000000003F58E4 string=0x00000000003F58E8 ""
 *   insn=0x00000000003F58F8 string=0x00000000003F5954 "w"
 *   insn=0x00000000003F58FC string=0x00000000003F5900 "3"
 *   insn=0x00000000003F5900 string=0x00000000003F5904 "h"
 *   insn=0x00000000003F5904 string=0x00000000003F5908 ""
 *   insn=0x00000000003F5908 string=0x00000000003F590C "h"
 *   insn=0x00000000003F5910 string=0x00000000003F5914 "h"
 *   insn=0x00000000003F5918 string=0x00000000003F591C "\t@"
 *   insn=0x00000000003F5920 string=0x00000000003F5924 "h\n@"
 *   insn=0x00000000003F5924 string=0x00000000003F5928 ""
 *   insn=0x00000000003F5928 string=0x00000000003F592C "h\n"
 *   insn=0x00000000003F5930 string=0x00000000003F5934 "h"
 *   insn=0x00000000003F5938 string=0x00000000003F593C "@"
 *   insn=0x00000000003F5944 string=0x00000000003F5948 "?"
 *   insn=0x00000000003F5958 string=0x00000000003F595C "U"
 *   insn=0x00000000003F595C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003F597C string=0x00000000003F5980 ""
 *   insn=0x00000000003F5984 string=0x00000000003F5988 "!"
 *   insn=0x00000000003F5990 string=0x00000000003F5994 "\t@"
 *   insn=0x00000000003F599C string=0x00000000003F59A0 ""
 *   insn=0x00000000003F59E0 string=0x00000000003F59E4 " "
 *   insn=0x00000000003F59E8 string=0x000000000059299C "vector::_M_fill_insert"
 *   insn=0x00000000003F5A10 string=0x00000000003F5A14 "4"
 *   insn=0x00000000003F5A18 string=0x00000000003F5A1C ""
 *   insn=0x00000000003F5A28 string=0x00000000003F5A2C "\t@"
 *   insn=0x00000000003F5A38 string=0x00000000003F5A3C ""
 *   insn=0x00000000003F5A48 string=0x00000000003F5A4C "@"
 *   insn=0x00000000003F5A5C string=0x00000000003F5A60 ";b"
 *   insn=0x00000000003F5A70 string=0x00000000003F5A74 "_"
 *   insn=0x00000000003F5A7C string=0x00000000003F5A94 "_"
 *   insn=0x00000000003F5A80 string=0x00000000003F5A84 ""
 *   insn=0x00000000003F5A88 string=0x00000000003F5A8C "h"
 *   insn=0x00000000003F5A98 string=0x00000000003F5AB0 "_"
 *   insn=0x00000000003F5A9C string=0x00000000003F5AA0 "h\n"
 *   insn=0x00000000003F5AA4 string=0x00000000003F5AA8 "`"
 *   insn=0x00000000003F5AB4 string=0x00000000003F5AB8 "_"
 *   insn=0x00000000003F5AB8 string=0x00000000003F5ABC "!"
 *   insn=0x00000000003F5ABC string=0x00000000003F5AC0 "h"
 *   insn=0x00000000003F5AC4 string=0x00000000003F5AC8 ""
 *   insn=0x00000000003F5ACC string=0x00000000003F5AD0 "*"
 *   insn=0x00000000003F5AD0 string=0x00000000003F5AD4 "!"
 *   insn=0x00000000003F5AD4 string=0x00000000003F5AD8 "_"
 *   insn=0x00000000003F5AD4 string=0x0000000000593630 "N5boost3_bi6bind_tIvNS_4_mfi3mf3IvN5Caver19StoreViewControllerERKSsRKNS_10shared_ptrINS4_12StoreProductEEES7_EENS0_5list4INS0_5valueIPS5_EENS_3argILi1EEENSI_..."
 *   insn=0x00000000003F5AD8 string=0x00000000003F5ADC " "
 *   insn=0x00000000003F5AE0 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::shared_ptr<Caver::StoreProduct>>::_M_fill_insert(
        __int64 *a1,
        char *a2,
        unsigned __int64 a3,
        _QWORD *a4)
{
  char *v6; // x19
  char *v8; // x24
  char *v9; // x25
  unsigned __int64 v10; // x9
  __int64 v11; // x10
  bool v12; // cf
  unsigned __int64 v13; // x9
  int v14; // w10
  unsigned __int64 v15; // x24
  __int64 v16; // x20
  _QWORD *v17; // x20
  __int64 v18; // x23
  unsigned __int64 v19; // x9
  unsigned __int64 v20; // x8
  __int64 v21; // x9
  char *v22; // x8
  char *v23; // x13
  __int64 v24; // x11
  __int64 v25; // x8
  char *v26; // x24
  __int64 v27; // x25
  _QWORD *v28; // x8
  _QWORD *v29; // x9
  _QWORD *v30; // x21
  __int64 v31; // x8
  __int64 v32; // x8
  char *v33; // x22
  _QWORD *v34; // x21
  __int64 v35; // x8
  __int64 v36; // x8
  unsigned __int64 v37; // x9
  char *v38; // x10
  char *v39; // x8
  char *v40; // x9
  __int64 v41; // x10
  _QWORD *v42; // x21
  __int64 v43; // x8
  __int64 v44; // x8
  _QWORD *v45; // x8
  unsigned __int64 v46; // x9
  __int64 v47; // x10
  char *v48; // x23
  unsigned __int64 v49; // x8
  __int64 v50; // x9
  _QWORD *v51; // x12
  __int64 v52; // x11
  __int64 v53; // x10
  char *v54; // x25
  _QWORD *v55; // x22
  _QWORD *v56; // x9
  char *v57; // x10
  __int64 v58; // x11
  _QWORD *v59; // x19
  __int64 v60; // x8
  __int64 v61; // x8
  __int64 v62; // x8
  __int64 v63; // x8

  v6 = a2;
  if ( !a3 )
    return;
  v8 = (char *)a1[1];
  if ( (a1[2] - (__int64)v8) >> 4 < a3 )
  {
    v9 = (char *)*a1;
    v10 = (__int64)&v8[-*a1] >> 4;
    if ( 0xFFFFFFFFFFFFFFFLL - v10 < a3 )
      sub_56554C("vector::_M_fill_insert");
    if ( v10 >= a3 )
      v11 = (__int64)&v8[-*a1] >> 4;
    else
      v11 = a3;
    v12 = __CFADD__(v11, v10);
    v13 = v11 + v10;
    v14 = v12;
    if ( v14 | (v13 >> 60 != 0) )
      v15 = 0xFFFFFFFFFFFFFFFLL;
    else
      v15 = v13;
    if ( v15 )
    {
      if ( v15 >> 60 )
        sub_565294(a1, a2, a3);
      v16 = operator new(16 * v15);
    }
    else
    {
      v16 = 0;
    }
    v45 = (_QWORD *)(v16 + 16 * ((v6 - v9) >> 4));
    v46 = a3;
    do
    {
      *v45 = *a4;
      v47 = a4[1];
      v45[1] = v47;
      if ( v47 )
        ++*(_QWORD *)(v47 + 8);
      --v46;
      v45 += 2;
    }
    while ( v46 );
    v48 = (char *)*a1;
    v49 = v16;
    if ( (char *)*a1 != v6 )
    {
      v50 = 0;
      do
      {
        v51 = (_QWORD *)(v16 + v50);
        *v51 = *(_QWORD *)&v48[v50];
        v52 = *(_QWORD *)&v48[v50 + 8];
        v51[1] = v52;
        if ( v52 )
          ++*(_QWORD *)(v52 + 8);
        v53 = (__int64)&v48[v50 + 16];
        v50 += 16;
      }
      while ( (char *)v53 != v6 );
      v49 = v16 + ((v6 - 16 - v48) & 0xFFFFFFFFFFFFFFF0LL) + 16;
    }
    v54 = (char *)a1[1];
    v55 = (_QWORD *)(v49 + 16 * a3);
    if ( v54 != v6 )
    {
      v56 = v55;
      v57 = v6;
      do
      {
        *v56 = *(_QWORD *)v57;
        v58 = *((_QWORD *)v57 + 1);
        v56[1] = v58;
        if ( v58 )
          ++*(_QWORD *)(v58 + 8);
        v57 += 16;
        v56 += 2;
      }
      while ( v57 != v54 );
      v55 = (_QWORD *)((char *)v55 + ((v54 - 16 - v6) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    }
    if ( v48 != v54 )
    {
      do
      {
        v59 = (_QWORD *)*((_QWORD *)v48 + 1);
        if ( v59 )
        {
          v60 = v59[1] - 1LL;
          v59[1] = v60;
          if ( !v60 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v59 + 16LL))(v59);
            v61 = v59[2] - 1LL;
            v59[2] = v61;
            if ( !v61 )
              (*(void (__fastcall **)(_QWORD *))(*v59 + 24LL))(v59);
          }
        }
        v48 += 16;
      }
      while ( v54 != v48 );
      v48 = (char *)*a1;
    }
    if ( v48 )
      operator delete(v48);
    *a1 = v16;
    a1[1] = (__int64)v55;
    a1[2] = v16 + 16 * v15;
    return;
  }
  v18 = *a4;
  v17 = (_QWORD *)a4[1];
  if ( v17 )
    ++v17[1];
  v19 = (v8 - a2) >> 4;
  v20 = v19 - a3;
  if ( v19 <= a3 )
  {
    v37 = a3 - v19;
    if ( v37 )
    {
      v38 = v8;
      do
      {
        *(_QWORD *)v38 = v18;
        *((_QWORD *)v38 + 1) = v17;
        if ( v17 )
          ++v17[1];
        ++v20;
        v38 += 16;
      }
      while ( v20 );
    }
    v39 = &v8[16 * v37];
    a1[1] = (__int64)v39;
    if ( v8 == a2 )
    {
      a1[1] = (__int64)&a2[16 * a3];
      if ( !v17 )
        return;
      goto LABEL_89;
    }
    v40 = a2;
    do
    {
      *(_QWORD *)v39 = *(_QWORD *)v40;
      v41 = *((_QWORD *)v40 + 1);
      *((_QWORD *)v39 + 1) = v41;
      if ( v41 )
        ++*(_QWORD *)(v41 + 8);
      v40 += 16;
      v39 += 16;
    }
    while ( v40 != v8 );
    a1[1] = (__int64)&v8[16 * a3];
    do
    {
      if ( v17 )
        ++v17[1];
      v42 = (_QWORD *)*((_QWORD *)v6 + 1);
      *(_QWORD *)v6 = v18;
      *((_QWORD *)v6 + 1) = v17;
      if ( v42 )
      {
        v43 = v42[1] - 1LL;
        v42[1] = v43;
        if ( !v43 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v42 + 16LL))(v42);
          v44 = v42[2] - 1LL;
          v42[2] = v44;
          if ( !v44 )
            (*(void (__fastcall **)(_QWORD *))(*v42 + 24LL))(v42);
        }
      }
      v6 += 16;
    }
    while ( v6 != v8 );
  }
  else
  {
    v21 = 0;
    v22 = &v8[-16 * a3];
    do
    {
      v23 = &v8[v21];
      *(_QWORD *)v23 = *(_QWORD *)&v22[v21];
      v24 = *(_QWORD *)&v22[v21 + 8];
      *((_QWORD *)v23 + 1) = v24;
      if ( v24 )
        ++*(_QWORD *)(v24 + 8);
      v21 += 16;
    }
    while ( -16LL * a3 + v21 );
    v25 = v22 - a2;
    a1[1] = (__int64)&v8[16 * a3];
    if ( v25 >= 1 )
    {
      v26 = v8 - 8;
      v27 = ((unsigned __int64)v25 >> 4) + 1;
      do
      {
        v29 = *(_QWORD **)&v26[-16 * a3 - 8];
        v28 = *(_QWORD **)&v26[-16 * a3];
        if ( v28 )
          ++v28[1];
        v30 = *(_QWORD **)v26;
        *((_QWORD *)v26 - 1) = v29;
        *(_QWORD *)v26 = v28;
        if ( v30 )
        {
          v31 = v30[1] - 1LL;
          v30[1] = v31;
          if ( !v31 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
            v32 = v30[2] - 1LL;
            v30[2] = v32;
            if ( !v32 )
              (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
          }
        }
        --v27;
        v26 -= 16;
      }
      while ( v27 > 1 );
    }
    v33 = &v6[16 * a3];
    do
    {
      if ( v17 )
        ++v17[1];
      v34 = (_QWORD *)*((_QWORD *)v6 + 1);
      *(_QWORD *)v6 = v18;
      *((_QWORD *)v6 + 1) = v17;
      if ( v34 )
      {
        v35 = v34[1] - 1LL;
        v34[1] = v35;
        if ( !v35 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v34 + 16LL))(v34);
          v36 = v34[2] - 1LL;
          v34[2] = v36;
          if ( !v36 )
            (*(void (__fastcall **)(_QWORD *))(*v34 + 24LL))(v34);
        }
      }
      v6 += 16;
    }
    while ( v6 != v33 );
  }
  if ( !v17 )
    return;
LABEL_89:
  v62 = v17[1] - 1LL;
  v17[1] = v62;
  if ( !v62 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
    v63 = v17[2] - 1LL;
    v17[2] = v63;
    if ( !v63 )
      (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
  }
}

