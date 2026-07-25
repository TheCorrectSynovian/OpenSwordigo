/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000363AEC
 * Mangled: _ZNSt6vectorIN5boost10shared_ptrIN5Caver9QuestTextEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::QuestText>*,std::vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>>,boost::shared_ptr<Caver::QuestText> const&)
 *
 * Callers: 1
 *   0x00000000001F5700  std::vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::QuestText>*,std::vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>>,boost::shared_ptr<Caver::QuestText> const&)
 *
 * Callees: 9
 *   0x00000000001F4350  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoView,Caver::ItemInfoView>(boost::shared_ptr<Caver::ItemInfoView> const*,Caver::ItemInfoView *)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 120
 *   insn=0x0000000000363B10 string=0x0000000000363B14 "?"
 *   insn=0x0000000000363B1C string=0x0000000000363B20 "_"
 *   insn=0x0000000000363B20 string=0x0000000000363B24 "*"
 *   insn=0x0000000000363B24 string=0x0000000000363B28 "+)"
 *   insn=0x0000000000363B2C string=0x0000000000363B30 "K"
 *   insn=0x0000000000363B2C string=0x0000000000363B3C ")A"
 *   insn=0x0000000000363B30 string=0x0000000000363B34 "k"
 *   insn=0x0000000000363B34 string=0x0000000000363B38 "K"
 *   insn=0x0000000000363B48 string=0x0000000000363B58 "\t"
 *   insn=0x0000000000363B4C string=0x0000000000363B50 ")"
 *   insn=0x0000000000363B58 string=0x0000000000363B5C "?"
 *   insn=0x0000000000363B5C string=0x0000000000363B60 "+"
 *   insn=0x0000000000363B60 string=0x0000000000363B64 ")"
 *   insn=0x0000000000363B64 string=0x0000000000363B68 "7"
 *   insn=0x0000000000363B6C string=0x0000000000363B70 "\t"
 *   insn=0x0000000000363B70 string=0x0000000000363B74 "\n@"
 *   insn=0x0000000000363B78 string=0x0000000000363B7C "K"
 *   insn=0x0000000000363B7C string=0x0000000000363B80 "k"
 *   insn=0x0000000000363B80 string=0x0000000000363B84 "K"
 *   insn=0x0000000000363B88 string=0x0000000000363B8C "\t)"
 *   insn=0x0000000000363B8C string=0x0000000000363B90 "5"
 *   insn=0x0000000000363B94 string=0x0000000000363B98 ""
 *   insn=0x0000000000363BA4 string=0x0000000000363BA8 "\t@"
 *   insn=0x0000000000363BB4 string=0x0000000000363BB8 ""
 *   insn=0x0000000000363BC4 string=0x0000000000363BC8 "@"
 *   insn=0x0000000000363BE4 string=0x0000000000363BF4 "u"
 *   insn=0x0000000000363BE8 string=0x0000000000363BEC ""
 *   insn=0x0000000000363BF4 string=0x0000000000363BF8 "vR"
 *   insn=0x0000000000363BF8 string=0x0000000000363BFC "5"
 *   insn=0x0000000000363BFC string=0x0000000000363C40 "t"
 *   insn=0x0000000000363C00 string=0x0000000000363C04 ""
 *   insn=0x0000000000363C10 string=0x0000000000363C14 "\t@"
 *   insn=0x0000000000363C20 string=0x0000000000363C24 ""
 *   insn=0x0000000000363C30 string=0x0000000000363C34 "@"
 *   insn=0x0000000000363C44 string=0x0000000000363C48 ""
 *   insn=0x0000000000363C58 string=0x0000000000363C5C "\t@"
 *   insn=0x0000000000363C64 string=0x0000000000363C68 ""
 *   insn=0x0000000000363C90 string=0x0000000000363C94 " "
 *   insn=0x0000000000363C98 string=0x0000000000363C9C "("
 *   insn=0x0000000000363C9C string=0x0000000000363CA0 ""
 *   insn=0x0000000000363CA0 string=0x0000000000363CA4 "\t"
 *   insn=0x0000000000363CA4 string=0x0000000000363CA8 "("
 *   insn=0x0000000000363CA8 string=0x0000000000363CAC "\n"
 *   insn=0x0000000000363CB0 string=0x0000000000363CB4 "_"
 *   insn=0x0000000000363CB8 string=0x0000000000363CBC ")"
 *   insn=0x0000000000363CBC string=0x0000000000363CC0 "?"
 *   insn=0x0000000000363CC4 string=0x0000000000363CC8 "7"
 *   insn=0x0000000000363CD8 string=0x0000000000363CDC "AF"
 *   insn=0x0000000000363CDC string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000363CEC string=0x0000000000363CF0 "i"
 *   insn=0x0000000000363CF0 string=0x0000000000363CF4 ")"
 *   insn=0x0000000000363CF8 string=0x0000000000363CFC "("
 *   insn=0x0000000000363D00 string=0x0000000000363D04 "("
 *   insn=0x0000000000363D08 string=0x0000000000363D0C "\t"
 *   insn=0x0000000000363D0C string=0x0000000000363D10 ")"
 *   insn=0x0000000000363D10 string=0x0000000000363D14 "\t"
 *   insn=0x0000000000363D28 string=0x0000000000363D2C "hB"
 *   insn=0x0000000000363D30 string=0x0000000000363D34 "K"
 *   insn=0x0000000000363D3C string=0x0000000000363D40 "K"
 *   insn=0x0000000000363D48 string=0x0000000000363D4C "l"
 *   insn=0x0000000000363D48 string=0x0000000000363D58 "JA"
 *   insn=0x0000000000363D50 string=0x0000000000363D54 "l"
 *   insn=0x0000000000363D58 string=0x0000000000363D5C "_"
 *   insn=0x0000000000363D5C string=0x0000000000363D60 ")A"
 *   insn=0x0000000000363D60 string=0x0000000000363D64 "a"
 *   insn=0x0000000000363D64 string=0x0000000000363D68 ""
 *   insn=0x0000000000363D68 string=0x0000000000363D6C ""
 *   insn=0x0000000000363D70 string=0x0000000000363D74 "A"
 *   insn=0x0000000000363D7C string=0x0000000000363D80 "?"
 *   insn=0x0000000000363D84 string=0x0000000000363D88 "(C"
 *   insn=0x0000000000363D90 string=0x0000000000363D94 "K"
 *   insn=0x0000000000363D94 string=0x0000000000363D98 "+"
 *   insn=0x0000000000363D98 string=0x0000000000363D9C "K"
 *   insn=0x0000000000363D9C string=0x0000000000363DA0 "+"
 *   insn=0x0000000000363DA4 string=0x0000000000363DA8 "l"
 *   insn=0x0000000000363DA4 string=0x0000000000363DB4 "JA"
 *   insn=0x0000000000363DAC string=0x0000000000363DB0 "l"
 *   insn=0x0000000000363DB4 string=0x0000000000363DB8 "_"
 *   insn=0x0000000000363DB8 string=0x0000000000363DBC ")A"
 *   insn=0x0000000000363DC0 string=0x0000000000363DC4 ""
 *   insn=0x0000000000363DC4 string=0x0000000000363DC8 ""
 *   insn=0x0000000000363DC8 string=0x0000000000363DCC ""
 *   insn=0x0000000000363DD8 string=0x0000000000363E34 "v"
 *   insn=0x0000000000363DDC string=0x0000000000363DE0 "3"
 *   insn=0x0000000000363DE0 string=0x0000000000363DE4 "h"
 *   insn=0x0000000000363DE4 string=0x0000000000363DE8 ""
 *   insn=0x0000000000363DE8 string=0x0000000000363DEC "h"
 *   insn=0x0000000000363DF0 string=0x0000000000363DF4 "h"
 *   insn=0x0000000000363DF8 string=0x0000000000363DFC "\t@"
 *   insn=0x0000000000363E00 string=0x0000000000363E04 "h\n@"
 *   insn=0x0000000000363E04 string=0x0000000000363E08 ""
 *   insn=0x0000000000363E08 string=0x0000000000363E0C "h\n"
 *   insn=0x0000000000363E10 string=0x0000000000363E14 "h"
 *   insn=0x0000000000363E18 string=0x0000000000363E1C "@"
 *   insn=0x0000000000363E24 string=0x0000000000363E28 "?"
 *   insn=0x0000000000363E3C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000363E74 string=0x0000000000363E78 "4"
 *   insn=0x0000000000363E7C string=0x0000000000363E80 ""
 *   insn=0x0000000000363E8C string=0x0000000000363E90 "\t@"
 *   insn=0x0000000000363E9C string=0x0000000000363EA0 ""
 *   insn=0x0000000000363EAC string=0x0000000000363EB0 "@"
 *   insn=0x0000000000363EC0 string=0x0000000000363EC4 """
 *   insn=0x0000000000363EE4 string=0x0000000000363EE8 "\t"
 *   insn=0x0000000000363EE8 string=0x0000000000363EEC ")qG"
 *   insn=0x0000000000363EF8 string=0x0000000000363EFC "(A"
 *   insn=0x0000000000363F00 string=0x0000000000363F04 ""
 *   insn=0x0000000000363F0C string=0x0000000000363F10 "`""
 *   insn=0x0000000000363F18 string=0x0000000000363F1C "A"
 *   insn=0x0000000000363F1C string=0x00000000001F4350 "P'"
 *   insn=0x0000000000363F30 string=0x0000000000363F34 "4"
 *   insn=0x0000000000363F38 string=0x0000000000363F3C ""
 *   insn=0x0000000000363F48 string=0x0000000000363F4C "\t@"
 *   insn=0x0000000000363F58 string=0x0000000000363F5C ""
 *   insn=0x0000000000363F68 string=0x0000000000363F6C "@"
 *   insn=0x0000000000363F78 string=0x0000000000363F7C "Rv"
 *   insn=0x0000000000363F84 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000363F88 string=0x0000000000363F8C "h"
 *   insn=0x0000000000363F8C string=0x0000000000363F90 "!@"
 *   insn=0x0000000000363FA0 string=0x0000000000363FA4 "{e"
 *   insn=0x0000000000363FA4 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::shared_ptr<Caver::QuestText>>::_M_insert_aux(__int64 *a1, char *a2, _QWORD *a3)
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

