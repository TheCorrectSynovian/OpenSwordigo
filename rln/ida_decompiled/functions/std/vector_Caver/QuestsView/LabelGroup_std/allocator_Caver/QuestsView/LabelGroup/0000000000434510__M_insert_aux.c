/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000434510
 * Mangled: _ZNSt6vectorIN5Caver10QuestsView10LabelGroupESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup const&)
 *
 * Callers: 1
 *   0x00000000001FBA70  std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup const&)
 *
 * Callees: 13
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F67B0  __gnu_cxx::new_allocator<Caver::QuestsView::LabelGroup>::construct(Caver::QuestsView::LabelGroup*,Caver::QuestsView::LabelGroup const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FADD0  Caver::QuestsView::LabelGroup::~LabelGroup()
 *   0x00000000001FB8D0  std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::operator=(std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>> const&)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x00000000002033C0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 131
 *   insn=0x0000000000434528 string=0x000000000043452C "Y"
 *   insn=0x000000000043452C string=0x0000000000434530 "("
 *   insn=0x000000000043455C string=0x00000000001F67B0 "0'"
 *   insn=0x0000000000434560 string=0x0000000000434564 ""
 *   insn=0x0000000000434574 string=0x0000000000434578 " "
 *   insn=0x0000000000434580 string=0x0000000000434594 "\n"
 *   insn=0x0000000000434588 string=0x0000000000434958 "O"
 *   insn=0x000000000043458C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000434594 string=0x0000000000434598 "?"
 *   insn=0x00000000004345A4 string=0x00000000004345A8 "*A"
 *   insn=0x00000000004345B4 string=0x00000000004345B8 "m"
 *   insn=0x00000000004345BC string=0x00000000004345C0 "m"
 *   insn=0x00000000004345D8 string=0x00000000004345DC "kA"
 *   insn=0x00000000004345E0 string=0x00000000004345E4 "H"
 *   insn=0x00000000004345E4 string=0x00000000004345E8 ""
 *   insn=0x00000000004345E8 string=0x00000000004345EC ""
 *   insn=0x0000000000434608 string=0x000000000043460C "\t"
 *   insn=0x000000000043460C string=0x0000000000434610 ")"
 *   insn=0x0000000000434610 string=0x0000000000434614 "\t"
 *   insn=0x0000000000434628 string=0x000000000043462C "\t"
 *   insn=0x000000000043462C string=0x0000000000434630 ")"
 *   insn=0x0000000000434630 string=0x0000000000434634 "\t"
 *   insn=0x0000000000434638 string=0x000000000043463C "\t"
 *   insn=0x000000000043463C string=0x0000000000434640 ")"
 *   insn=0x0000000000434640 string=0x0000000000434644 "?"
 *   insn=0x0000000000434644 string=0x0000000000434648 ""
 *   insn=0x0000000000434648 string=0x000000000043464C "j"
 *   insn=0x000000000043464C string=0x0000000000434658 ")"
 *   insn=0x0000000000434658 string=0x000000000043465C "J"
 *   insn=0x000000000043465C string=0x0000000000434660 ")}"
 *   insn=0x0000000000434660 string=0x0000000000434664 "5"
 *   insn=0x0000000000434674 string=0x00000000001FB8D0 "0'"
 *   insn=0x000000000043467C string=0x0000000000434680 "\n"
 *   insn=0x0000000000434680 string=0x0000000000434684 "J"
 *   insn=0x0000000000434684 string=0x0000000000434688 "\n"
 *   insn=0x0000000000434690 string=0x0000000000434694 "4"
 *   insn=0x0000000000434698 string=0x000000000043469C ""
 *   insn=0x00000000004346A8 string=0x00000000004346AC "\t@"
 *   insn=0x00000000004346B8 string=0x00000000004346BC ""
 *   insn=0x00000000004346C8 string=0x00000000004346CC "@"
 *   insn=0x00000000004346DC string=0x00000000004346E0 "\n"
 *   insn=0x00000000004346E0 string=0x00000000004346E4 "J"
 *   insn=0x00000000004346E4 string=0x00000000004346E8 "\n"
 *   insn=0x00000000004346F0 string=0x00000000004346F4 "4"
 *   insn=0x00000000004346F8 string=0x00000000004346FC ""
 *   insn=0x0000000000434708 string=0x000000000043470C "\t@"
 *   insn=0x0000000000434718 string=0x000000000043471C ""
 *   insn=0x0000000000434728 string=0x000000000043472C "@"
 *   insn=0x0000000000434740 string=0x0000000000434744 "L"
 *   insn=0x000000000043474C string=0x0000000000434750 "`"
 *   insn=0x0000000000434758 string=0x000000000043475C "\n"
 *   insn=0x0000000000434758 string=0x0000000000434768 "t"
 *   insn=0x000000000043475C string=0x0000000000434760 "J"
 *   insn=0x0000000000434760 string=0x0000000000434764 "\n"
 *   insn=0x0000000000434768 string=0x000000000043476C "i"
 *   insn=0x000000000043476C string=0x0000000000434770 "4"
 *   insn=0x0000000000434774 string=0x0000000000434778 ""
 *   insn=0x0000000000434784 string=0x0000000000434788 "\t@"
 *   insn=0x0000000000434794 string=0x0000000000434798 ""
 *   insn=0x00000000004347A4 string=0x00000000004347A8 "@"
 *   insn=0x00000000004347B8 string=0x00000000004347BC "\n"
 *   insn=0x00000000004347B8 string=0x00000000004347C8 "t"
 *   insn=0x00000000004347BC string=0x00000000004347C0 "J"
 *   insn=0x00000000004347C0 string=0x00000000004347C4 "\n"
 *   insn=0x00000000004347C8 string=0x00000000004347CC "i"
 *   insn=0x00000000004347CC string=0x00000000004347D0 "4"
 *   insn=0x00000000004347D4 string=0x00000000004347D8 ""
 *   insn=0x00000000004347E4 string=0x00000000004347E8 "\t@"
 *   insn=0x00000000004347F4 string=0x00000000004347F8 ""
 *   insn=0x0000000000434804 string=0x0000000000434808 "@"
 *   insn=0x0000000000434814 string=0x0000000000434818 "n"
 *   insn=0x0000000000434818 string=0x000000000043481C "C"
 *   insn=0x0000000000434818 string=0x00000000001FADD0 "0'"
 *   insn=0x000000000043481C string=0x0000000000434928 "("
 *   insn=0x0000000000434824 string=0x0000000000434830 ""
 *   insn=0x0000000000434830 string=0x0000000000434834 "I"
 *   insn=0x0000000000434838 string=0x000000000043483C ""
 *   insn=0x000000000043483C string=0x0000000000434840 ")I"
 *   insn=0x0000000000434840 string=0x0000000000434844 "}"
 *   insn=0x0000000000434848 string=0x000000000043484C "\n"
 *   insn=0x000000000043484C string=0x0000000000434850 "I"
 *   insn=0x0000000000434850 string=0x0000000000434854 "H"
 *   insn=0x0000000000434860 string=0x0000000000434864 "J"
 *   insn=0x0000000000434864 string=0x0000000000434868 "_"
 *   insn=0x0000000000434868 string=0x000000000043486C ":"
 *   insn=0x0000000000434870 string=0x0000000000434874 "_"
 *   insn=0x0000000000434874 string=0x0000000000434878 ""
 *   insn=0x000000000043487C string=0x0000000000434880 "@"
 *   insn=0x0000000000434880 string=0x0000000000434884 "W"
 *   insn=0x000000000043488C string=0x0000000000434894 "h"
 *   insn=0x0000000000434894 string=0x0000000000434898 ""
 *   insn=0x0000000000434898 string=0x000000000043489C "}"
 *   insn=0x00000000004348F0 string=0x000000000043490C "u"
 *   insn=0x00000000004348F4 string=0x00000000004348F8 "6"
 *   insn=0x0000000000434910 string=0x0000000000434914 "g\n"
 *   insn=0x0000000000434914 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000434918 string=0x000000000043491C "H["
 *   insn=0x0000000000434934 string=0x0000000000434954 "_"
 *   insn=0x0000000000434954 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000434960 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000043496C string=0x0000000000434988 "v"
 *   insn=0x0000000000434978 string=0x000000000043497C "s"
 *   insn=0x0000000000434988 string=0x0000000000434994 "w8"
 *   insn=0x000000000043498C string=0x0000000000434990 "H\n"
 *   insn=0x0000000000434998 string=0x000000000043499C ""
 *   insn=0x00000000004349AC string=0x00000000001FD590 "0'"
 *   insn=0x00000000004349C4 string=0x00000000004349C8 "af"
 *   insn=0x00000000004349EC string=0x00000000004349F0 " "
 *   insn=0x00000000004349F8 string=0x0000000000434A08 ""
 *   insn=0x00000000004349FC string=0x0000000000434A00 ""
 *   insn=0x0000000000434A08 string=0x0000000000434A0C "`"
 *   insn=0x0000000000434A0C string=0x0000000000434A10 "h\n"
 *   insn=0x0000000000434A14 string=0x0000000000434A18 "?"
 *   insn=0x0000000000434A1C string=0x0000000000434A20 "*A"
 *   insn=0x0000000000434A1C string=0x0000000000434A6C "`"
 *   insn=0x0000000000434A2C string=0x0000000000434A30 "m"
 *   insn=0x0000000000434A34 string=0x0000000000434A38 "m"
 *   insn=0x0000000000434A50 string=0x0000000000434A54 "kA"
 *   insn=0x0000000000434A58 string=0x0000000000434A5C "H"
 *   insn=0x0000000000434A5C string=0x0000000000434A60 ""
 *   insn=0x0000000000434A60 string=0x0000000000434A64 ""
 *   insn=0x0000000000434A70 string=0x0000000000434A74 "h"
 *   insn=0x0000000000434A78 string=0x0000000000434A7C "h"
 *   insn=0x0000000000434A80 string=0x0000000000434A84 "\t"
 *   insn=0x0000000000434A84 string=0x0000000000434A88 ")"
 *   insn=0x0000000000434A88 string=0x0000000000434A8C "\t"
 *   insn=0x0000000000434A90 string=0x0000000000434A94 "h"
 *   insn=0x0000000000434A98 string=0x0000000000434A9C "h"
 *   insn=0x0000000000434AA0 string=0x0000000000434AA4 "\t"
 *   insn=0x0000000000434AA4 string=0x0000000000434AA8 ")"
 *   insn=0x0000000000434AA8 string=0x0000000000434AAC "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::QuestsView::LabelGroup>::_M_insert_aux(
        Caver::QuestsView::LabelGroup **a1,
        Caver::QuestsView::LabelGroup *a2,
        char **a3)
{
  Caver::QuestsView::LabelGroup **v3; // x20
  Caver::QuestsView::LabelGroup *v6; // x8
  char *v7; // x8
  char *v8; // x9
  unsigned __int64 v9; // x22
  Caver::QuestsView::LabelGroup **v10; // x11
  char *v11; // x12
  Caver::QuestsView::LabelGroup *v12; // x13
  char *v13; // x8
  char *v14; // x8
  Caver::QuestsView::LabelGroup *v15; // x8
  __int64 v16; // x9
  signed __int64 v17; // x21
  __int64 v18; // x22
  __int64 v19; // x8
  __int64 v20; // x9
  _QWORD *v21; // x20
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x9
  _QWORD *v26; // x20
  __int64 v27; // x8
  __int64 v28; // x8
  char *v29; // x8
  char *v30; // x9
  _QWORD *v31; // x20
  __int64 v32; // x8
  __int64 v33; // x8
  char *v34; // x8
  char *v35; // x9
  _QWORD *v36; // x20
  __int64 v37; // x8
  __int64 v38; // x8
  bool v39; // zf
  __int64 v40; // x8
  __int64 v41; // x8
  __int64 v42; // x10
  bool v43; // cf
  unsigned __int64 v44; // x8
  int v45; // w10
  unsigned __int64 v46; // x26
  char *v47; // x22
  __int64 v48; // x0
  __int64 v49; // x19
  Caver::QuestsView::LabelGroup *v50; // x21
  Caver::QuestsView::LabelGroup *v51; // x23
  Caver::QuestsView::LabelGroup **v52; // [xsp+30h] [xbp-80h] BYREF
  Caver::QuestsView::LabelGroup **v53; // [xsp+38h] [xbp-78h]
  Caver::QuestsView::LabelGroup **v54; // [xsp+40h] [xbp-70h]
  char *v55; // [xsp+48h] [xbp-68h]
  char *v56; // [xsp+50h] [xbp-60h]
  char *v57; // [xsp+58h] [xbp-58h]
  char *v58; // [xsp+60h] [xbp-50h]
  __int64 v59; // [xsp+68h] [xbp-48h]

  v3 = a1;
  v59 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = a1[1];
  if ( v6 != a1[2] )
  {
    __gnu_cxx::new_allocator<Caver::QuestsView::LabelGroup>::construct();
    v3[1] = (Caver::QuestsView::LabelGroup *)((char *)v3[1] + 56);
    v7 = *a3;
    v8 = a3[1];
    v52 = 0;
    v53 = 0;
    v54 = 0;
    a1 = (Caver::QuestsView::LabelGroup **)(v8 - v7);
    v9 = (v8 - v7) >> 4;
    if ( v8 == v7 )
    {
LABEL_5:
      v52 = a1;
      v53 = a1;
      v54 = &a1[2 * v9];
      if ( v8 != v7 )
      {
        v10 = a1;
        v11 = v7;
        do
        {
          *v10 = *(Caver::QuestsView::LabelGroup **)v11;
          v12 = (Caver::QuestsView::LabelGroup *)*((_QWORD *)v11 + 1);
          v10[1] = v12;
          if ( v12 )
            ++*((_QWORD *)v12 + 1);
          v11 += 16;
          v10 += 2;
        }
        while ( v11 != v8 );
        a1 = (Caver::QuestsView::LabelGroup **)((char *)a1 + ((v8 - 16 - v7) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      }
      v53 = a1;
      v55 = a3[3];
      v13 = a3[4];
      v56 = v13;
      if ( v13 )
        ++*((_QWORD *)v13 + 1);
      v57 = a3[5];
      v14 = a3[6];
      v58 = v14;
      if ( v14 )
        ++*((_QWORD *)v14 + 1);
      v15 = v3[1];
      v16 = (Caver::QuestsView::LabelGroup *)((char *)v15 - 112) - a2;
      if ( v16 >= 1 )
      {
        v17 = v16 / 0x38uLL + 1;
        v18 = (__int64)v15 - 80;
        do
        {
          std::vector<boost::shared_ptr<Caver::GUILabel>>::operator=();
          v20 = *(_QWORD *)(v18 - 64);
          v19 = *(_QWORD *)(v18 - 56);
          if ( v19 )
            ++*(_QWORD *)(v19 + 8);
          v21 = *(_QWORD **)v18;
          *(_QWORD *)(v18 - 8) = v20;
          *(_QWORD *)v18 = v19;
          if ( v21 )
          {
            v22 = v21[1] - 1LL;
            v21[1] = v22;
            if ( !v22 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
              v23 = v21[2] - 1LL;
              v21[2] = v23;
              if ( !v23 )
                (*(void (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
            }
          }
          v25 = *(_QWORD *)(v18 - 48);
          v24 = *(_QWORD *)(v18 - 40);
          if ( v24 )
            ++*(_QWORD *)(v24 + 8);
          v26 = *(_QWORD **)(v18 + 16);
          *(_QWORD *)(v18 + 8) = v25;
          *(_QWORD *)(v18 + 16) = v24;
          if ( v26 )
          {
            v27 = v26[1] - 1LL;
            v26[1] = v27;
            if ( !v27 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
              v28 = v26[2] - 1LL;
              v26[2] = v28;
              if ( !v28 )
                (*(void (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
            }
          }
          --v17;
          v18 -= 56;
        }
        while ( v17 > 1 );
      }
      std::vector<boost::shared_ptr<Caver::GUILabel>>::operator=();
      v30 = v55;
      v29 = v56;
      if ( v56 )
        ++*((_QWORD *)v56 + 1);
      v31 = (_QWORD *)*((_QWORD *)a2 + 4);
      *((_QWORD *)a2 + 3) = v30;
      *((_QWORD *)a2 + 4) = v29;
      if ( v31 )
      {
        v32 = v31[1] - 1LL;
        v31[1] = v32;
        if ( !v32 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
          v33 = v31[2] - 1LL;
          v31[2] = v33;
          if ( !v33 )
            (*(void (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
        }
      }
      v35 = v57;
      v34 = v58;
      if ( v58 )
        ++*((_QWORD *)v58 + 1);
      v36 = (_QWORD *)*((_QWORD *)a2 + 6);
      *((_QWORD *)a2 + 5) = v35;
      *((_QWORD *)a2 + 6) = v34;
      if ( v36 )
      {
        v37 = v36[1] - 1LL;
        v36[1] = v37;
        if ( !v37 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v36 + 16LL))(v36);
          v38 = v36[2] - 1LL;
          v36[2] = v38;
          if ( !v38 )
            (*(void (__fastcall **)(_QWORD *))(*v36 + 24LL))(v36);
        }
      }
      Caver::QuestsView::LabelGroup::~LabelGroup((Caver::QuestsView::LabelGroup *)&v52);
      return;
    }
    if ( !(v9 >> 60) )
    {
      a1 = (Caver::QuestsView::LabelGroup **)operator new((unsigned __int64)a1);
      v7 = *a3;
      v8 = a3[1];
      goto LABEL_5;
    }
LABEL_63:
    sub_565294(a1, a2, a3);
  }
  v40 = v6 - *a1;
  v39 = v40 == 0;
  v41 = 0x6DB6DB6DB6DB6DB7LL * (v40 >> 3);
  if ( v39 )
    v42 = 1;
  else
    v42 = v41;
  v43 = __CFADD__(v42, v41);
  v44 = v42 + v41;
  v45 = v43;
  if ( v45 | (v44 > 0x492492492492492LL) )
    v46 = 0x492492492492492LL;
  else
    v46 = v44;
  if ( v46 )
  {
    if ( v46 > 0x492492492492492LL )
      goto LABEL_63;
    v47 = (char *)operator new(56 * v46);
  }
  else
  {
    v47 = 0;
  }
  __gnu_cxx::new_allocator<Caver::QuestsView::LabelGroup>::construct();
  v48 = std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(
          (int)*v3,
          (int)a2,
          v47);
  v49 = std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(
          (int)a2,
          (int)v3[1],
          (void *)(v48 + 56));
  v50 = *v3;
  v51 = v3[1];
  if ( *v3 != v51 )
  {
    do
    {
      Caver::QuestsView::LabelGroup::~LabelGroup(v50);
      v50 = (Caver::QuestsView::LabelGroup *)((char *)v50 + 56);
    }
    while ( v51 != v50 );
    v50 = *v3;
  }
  if ( v50 )
    operator delete(v50);
  *v3 = (Caver::QuestsView::LabelGroup *)v47;
  v3[1] = (Caver::QuestsView::LabelGroup *)v49;
  v3[2] = (Caver::QuestsView::LabelGroup *)&v47[56 * v46];
}

