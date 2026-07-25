/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004805FC
 * Mangled: _ZNSt6vectorIN5boost13intrusive_ptrIN5Caver17SoundEffectSourceEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SoundEffectSource>*,std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>>,boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *
 * Callers: 1
 *   0x00000000001F48F0  std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SoundEffectSource>*,std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>>,boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 88
 *   insn=0x0000000000480628 string=0x000000000048062C "\t"
 *   insn=0x000000000048062C string=0x0000000000480630 "\t"
 *   insn=0x0000000000480634 string=0x0000000000480638 "*\t@"
 *   insn=0x0000000000480634 string=0x0000000000480644 "\t!"
 *   insn=0x0000000000480638 string=0x000000000048063C "J"
 *   insn=0x000000000048063C string=0x0000000000480640 "*\t"
 *   insn=0x0000000000480650 string=0x0000000000480660 "!"
 *   insn=0x0000000000480654 string=0x0000000000480658 ")"
 *   insn=0x0000000000480660 string=0x0000000000480664 "\t"
 *   insn=0x0000000000480664 string=0x0000000000480668 "?"
 *   insn=0x000000000048066C string=0x0000000000480670 ")"
 *   insn=0x0000000000480670 string=0x0000000000480674 "5"
 *   insn=0x0000000000480680 string=0x0000000000480684 "*\t@"
 *   insn=0x0000000000480684 string=0x0000000000480688 "J"
 *   insn=0x0000000000480688 string=0x000000000048068C "*\t"
 *   insn=0x0000000000480690 string=0x0000000000480694 "\t"
 *   insn=0x0000000000480698 string=0x000000000048069C "@"
 *   insn=0x000000000048069C string=0x00000000004806A0 ""
 *   insn=0x00000000004806A0 string=0x00000000004806A4 ""
 *   insn=0x00000000004806A8 string=0x00000000004806AC ""
 *   insn=0x00000000004806AC string=0x00000000004806B0 ""
 *   insn=0x00000000004806C8 string=0x00000000004806D8 "`"
 *   insn=0x00000000004806CC string=0x00000000004806D0 ""
 *   insn=0x00000000004806D8 string=0x00000000004806DC "t"
 *   insn=0x00000000004806E0 string=0x00000000004806E4 "@"
 *   insn=0x00000000004806E4 string=0x00000000004806E8 ""
 *   insn=0x00000000004806E8 string=0x00000000004806EC ""
 *   insn=0x00000000004806F0 string=0x00000000004806F4 ""
 *   insn=0x00000000004806F4 string=0x00000000004806F8 ""
 *   insn=0x0000000000480704 string=0x0000000000480708 ""
 *   insn=0x000000000048070C string=0x0000000000480710 "A"
 *   insn=0x0000000000480730 string=0x0000000000480734 " "
 *   insn=0x0000000000480738 string=0x000000000048073C ""
 *   insn=0x000000000048073C string=0x0000000000480740 ""
 *   insn=0x0000000000480740 string=0x0000000000480744 "\n"
 *   insn=0x0000000000480744 string=0x0000000000480748 "H"
 *   insn=0x0000000000480748 string=0x000000000048074C ""
 *   insn=0x0000000000480758 string=0x000000000048075C "J"
 *   insn=0x000000000048075C string=0x0000000000480760 "_"
 *   insn=0x0000000000480764 string=0x0000000000480768 "W"
 *   insn=0x000000000048076C string=0x0000000000480770 "\n"
 *   insn=0x0000000000480770 string=0x00000000004808B0 "y"
 *   insn=0x0000000000480774 string=0x0000000000480778 "v"
 *   insn=0x000000000048077C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000048078C string=0x0000000000480790 "\t\t@"
 *   insn=0x0000000000480790 string=0x0000000000480794 ")"
 *   insn=0x0000000000480794 string=0x0000000000480798 "\t\t"
 *   insn=0x00000000004807A0 string=0x00000000004807A4 "@"
 *   insn=0x00000000004807A8 string=0x00000000004807AC "h""
 *   insn=0x00000000004807AC string=0x00000000004807B0 "j"
 *   insn=0x00000000004807BC string=0x00000000004807C0 "l\t@"
 *   insn=0x00000000004807BC string=0x00000000004807CC ")!"
 *   insn=0x00000000004807C4 string=0x00000000004807C8 "l\t"
 *   insn=0x00000000004807CC string=0x00000000004807D0 "_"
 *   insn=0x00000000004807D4 string=0x00000000004807D8 ""
 *   insn=0x00000000004807D8 string=0x00000000004807DC ""
 *   insn=0x00000000004807E0 string=0x00000000004807E4 "!"
 *   insn=0x00000000004807F4 string=0x00000000004807F8 "?"
 *   insn=0x00000000004807F8 string=0x00000000004807FC "@"
 *   insn=0x00000000004807FC string=0x0000000000480800 "(#"
 *   insn=0x0000000000480808 string=0x000000000048080C "K"
 *   insn=0x000000000048080C string=0x0000000000480810 "+"
 *   insn=0x0000000000480814 string=0x0000000000480818 "l\t@"
 *   insn=0x0000000000480814 string=0x0000000000480824 "J!"
 *   insn=0x000000000048081C string=0x0000000000480820 "l\t"
 *   insn=0x0000000000480824 string=0x0000000000480828 "?"
 *   insn=0x0000000000480828 string=0x000000000048082C ")!"
 *   insn=0x0000000000480830 string=0x0000000000480834 ""
 *   insn=0x0000000000480834 string=0x0000000000480838 ""
 *   insn=0x0000000000480838 string=0x000000000048083C ""
 *   insn=0x0000000000480848 string=0x0000000000480880 "v"
 *   insn=0x0000000000480850 string=0x0000000000480854 "@"
 *   insn=0x0000000000480854 string=0x0000000000480858 ""
 *   insn=0x0000000000480858 string=0x000000000048085C ""
 *   insn=0x0000000000480860 string=0x0000000000480864 ""
 *   insn=0x0000000000480864 string=0x0000000000480868 ""
 *   insn=0x0000000000480870 string=0x0000000000480874 "?"
 *   insn=0x0000000000480888 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004808B8 string=0x00000000004808BC ""
 *   insn=0x00000000004808C0 string=0x00000000004808C4 "4"
 *   insn=0x00000000004808C8 string=0x00000000004808CC ""
 *   insn=0x00000000004808D8 string=0x00000000004808DC ""
 *   insn=0x00000000004808F8 string=0x00000000004808FC ""
 *   insn=0x00000000004808FC string=0x0000000000480900 ""
 *   insn=0x0000000000480900 string=0x0000000000480904 " "
 *   insn=0x0000000000480918 string=0x000000000048091C "\t"
 *   insn=0x000000000048091C string=0x0000000000480920 "\t("
 *   insn=0x0000000000480930 string=0x0000000000480934 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>>::_M_insert_aux(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  char *v4; // x8
  __int64 v7; // x9
  _DWORD *v8; // x20
  char *v9; // x8
  __int64 v10; // x21
  char *v11; // x22
  _DWORD *v12; // x9
  _DWORD *v13; // t1
  _DWORD *v14; // x0
  int v15; // w8
  _DWORD *v16; // x0
  int v17; // w8
  int v18; // w8
  bool v19; // zf
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x10
  bool v23; // cf
  unsigned __int64 v24; // x8
  int v25; // w10
  unsigned __int64 v26; // x23
  char *v27; // x22
  __int64 v28; // x0
  _DWORD *v29; // x8
  __int64 v30; // x21
  char *v31; // x22
  __int64 v32; // x9
  __int64 v33; // x11
  unsigned __int64 v34; // x8
  char *v35; // x25
  unsigned __int64 v36; // x24
  _QWORD *v37; // x9
  char *v38; // x10
  __int64 v39; // x11
  _DWORD *v40; // x0
  int v41; // w8

  v4 = a1[1];
  if ( v4 == a1[2] )
  {
    v20 = v4 - *a1;
    v19 = v20 == 0;
    v21 = v20 >> 3;
    if ( v19 )
      v22 = 1;
    else
      v22 = v21;
    v23 = __CFADD__(v22, v21);
    v24 = v22 + v21;
    v25 = v23;
    if ( v25 | (v24 >> 61 != 0) )
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v26 = v24;
    if ( v26 >> 61 )
      sub_565294(a1, a2, a3);
    v27 = (char *)(a2 - *a1);
    v28 = operator new(8 * v26);
    v29 = (_DWORD *)*a3;
    v30 = v28;
    *(_QWORD *)&v27[v28] = v29;
    if ( v29 )
      ++v29[2];
    v31 = *a1;
    if ( *a1 == a2 )
    {
      v34 = v28;
    }
    else
    {
      v32 = 0;
      do
      {
        v33 = *(_QWORD *)&v31[v32];
        *(_QWORD *)(v28 + v32) = v33;
        if ( v33 )
          ++*(_DWORD *)(v33 + 8);
        v32 += 8;
      }
      while ( a2 - v31 != v32 );
      v34 = v28 + ((a2 - 8 - v31) & 0xFFFFFFFFFFFFFFF8LL) + 8;
    }
    v35 = a1[1];
    v36 = v34 + 8;
    if ( v35 != a2 )
    {
      v37 = (_QWORD *)(v34 + 8);
      v38 = a2;
      do
      {
        v39 = *(_QWORD *)v38;
        *v37 = *(_QWORD *)v38;
        if ( v39 )
          ++*(_DWORD *)(v39 + 8);
        v38 += 8;
        ++v37;
      }
      while ( v35 != v38 );
      v36 += ((v35 - 8 - a2) & 0xFFFFFFFFFFFFFFF8LL) + 8;
    }
    if ( v31 != v35 )
    {
      do
      {
        v40 = *(_DWORD **)v31;
        if ( *(_QWORD *)v31 )
        {
          v41 = v40[2] - 1;
          v40[2] = v41;
          if ( !v41 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v40 + 8LL))(v40);
        }
        v31 += 8;
      }
      while ( v35 != v31 );
      v31 = *a1;
    }
    if ( v31 )
      operator delete(v31);
    *a1 = (char *)v30;
    a1[1] = (char *)v36;
    a1[2] = (char *)(v30 + 8 * v26);
  }
  else
  {
    v7 = *((_QWORD *)v4 - 1);
    *(_QWORD *)v4 = v7;
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    a1[1] = v4 + 8;
    v8 = (_DWORD *)*a3;
    if ( *a3 )
      ++v8[2];
    v9 = v4 - 8;
    if ( v9 - a2 >= 1 )
    {
      v10 = ((unsigned __int64)(v9 - a2) >> 3) + 1;
      v11 = v9;
      do
      {
        v13 = (_DWORD *)*((_QWORD *)v11 - 1);
        v11 -= 8;
        v12 = v13;
        if ( v13 )
          ++v12[2];
        v14 = *(_DWORD **)v9;
        *(_QWORD *)v9 = v12;
        if ( v14 )
        {
          v15 = v14[2] - 1;
          v14[2] = v15;
          if ( !v15 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
        }
        --v10;
        v9 = v11;
      }
      while ( v10 > 1 );
    }
    if ( v8 )
      ++v8[2];
    v16 = *(_DWORD **)a2;
    *(_QWORD *)a2 = v8;
    if ( v16 )
    {
      v17 = v16[2] - 1;
      v16[2] = v17;
      if ( !v17 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 8LL))(v16);
    }
    if ( v8 )
    {
      v18 = v8[2] - 1;
      v8[2] = v18;
      if ( !v18 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
}

