/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000432350
 * Mangled: _ZNSt3mapISsSt6vectorIN5Caver10QuestsView10LabelGroupESaIS3_EESt4lessISsESaISt4pairIKSsS5_EEEixERS9_
 * Demangled: std::map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000001FA7D0  std::map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::operator[](std::string const&)
 *
 * Callees: 14
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FADD0  Caver::QuestsView::LabelGroup::~LabelGroup()
 *   0x00000000001FF260  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::string const&)
 *   0x00000000002011B0  std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup*>(__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup*)
 *   0x0000000000203800  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::_M_create_node(std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004327B0  Caver::QuestsView::LabelGroup::~LabelGroup()
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 100
 *   insn=0x000000000043236C string=0x0000000000432370 "I"
 *   insn=0x0000000000432370 string=0x0000000000432374 "("
 *   insn=0x0000000000432388 string=0x000000000043238C "7"
 *   insn=0x00000000004323AC string=0x00000000004323B0 ""
 *   insn=0x00000000004323B4 string=0x00000000004323B8 """
 *   insn=0x00000000004323B8 string=0x00000000004323BC "u"
 *   insn=0x00000000004323BC string=0x00000000001F5190 "P'"
 *   insn=0x00000000004323C0 string=0x00000000004323C4 "@"
 *   insn=0x00000000004323D0 string=0x00000000004323D4 ""
 *   insn=0x0000000000432410 string=0x0000000000432414 "@"
 *   insn=0x0000000000432418 string=0x000000000043241C "a"
 *   insn=0x000000000043241C string=0x0000000000432420 ""
 *   insn=0x0000000000432420 string=0x0000000000432424 ")"
 *   insn=0x0000000000432428 string=0x000000000043242C """
 *   insn=0x000000000043242C string=0x0000000000432430 "X"
 *   insn=0x0000000000432440 string=0x0000000000432444 "9"
 *   insn=0x0000000000432458 string=0x000000000043245C "U;"
 *   insn=0x000000000043246C string=0x0000000000432470 "|3"
 *   insn=0x0000000000432478 string=0x000000000043247C "6"
 *   insn=0x0000000000432480 string=0x0000000000432484 "s"
 *   insn=0x0000000000432488 string=0x000000000043248C " "
 *   insn=0x0000000000432494 string=0x0000000000432498 ""
 *   insn=0x0000000000432498 string=0x000000000043249C ")"
 *   insn=0x00000000004324A0 string=0x00000000004324A4 """
 *   insn=0x00000000004324A4 string=0x00000000004324A8 ":"
 *   insn=0x00000000004324C4 string=0x00000000004324C8 "`"
 *   insn=0x00000000004324F4 string=0x00000000004324F8 ""
 *   insn=0x0000000000432508 string=0x0000000000432524 "t"
 *   insn=0x000000000043250C string=0x0000000000432510 "0""
 *   insn=0x0000000000432510 string=0x00000000001FADD0 "0'"
 *   insn=0x0000000000432528 string=0x000000000043252C "a"
 *   insn=0x000000000043252C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000432534 string=0x0000000000432538 ")"
 *   insn=0x0000000000432540 string=0x0000000000432544 "@"
 *   insn=0x0000000000432548 string=0x000000000043254C ")=G"
 *   insn=0x000000000043254C string=0x0000000000432550 "!"
 *   insn=0x0000000000432554 string=0x0000000000432558 "\t"
 *   insn=0x0000000000432554 string=0x00000000004325C4 "\t"
 *   insn=0x0000000000432558 string=0x000000000043255C "*"
 *   insn=0x000000000043255C string=0x0000000000432560 "\n"
 *   insn=0x0000000000432568 string=0x00000000004325D0 "?"
 *   insn=0x000000000043258C string=0x0000000000432590 ""
 *   insn=0x0000000000432598 string=0x000000000043259C "A"
 *   insn=0x000000000043259C string=0x00000000004325A0 "`"
 *   insn=0x000000000043259C string=0x00000000004325E4 ";"
 *   insn=0x00000000004325C4 string=0x00000000004325C8 "*"
 *   insn=0x00000000004325C8 string=0x00000000004325CC "\n"
 *   insn=0x00000000004325D8 string=0x00000000004325DC "r"
 *   insn=0x00000000004325E4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004325EC string=0x00000000004325F0 "h"
 *   insn=0x00000000004325F4 string=0x00000000004325F8 "."
 *   insn=0x0000000000432600 string=0x0000000000432604 ")"
 *   insn=0x0000000000432614 string=0x0000000000432618 ")=G"
 *   insn=0x0000000000432618 string=0x000000000043261C "!"
 *   insn=0x0000000000432620 string=0x0000000000432624 "\t"
 *   insn=0x0000000000432620 string=0x0000000000432794 "\t"
 *   insn=0x0000000000432624 string=0x0000000000432628 "*"
 *   insn=0x0000000000432628 string=0x000000000043262C "\n"
 *   insn=0x0000000000432630 string=0x0000000000432634 "R"
 *   insn=0x0000000000432634 string=0x000000000043277C "?"
 *   insn=0x0000000000432650 string=0x000000000043266C "t"
 *   insn=0x000000000043267C string=0x0000000000432680 ")"
 *   insn=0x0000000000432690 string=0x0000000000432694 ")=G"
 *   insn=0x0000000000432694 string=0x0000000000432698 "!"
 *   insn=0x000000000043269C string=0x00000000004326A0 "\t"
 *   insn=0x00000000004326A0 string=0x00000000004326A4 "*"
 *   insn=0x00000000004326A4 string=0x00000000004326A8 "\n"
 *   insn=0x00000000004326AC string=0x00000000004326B0 "3"
 *   insn=0x00000000004326B8 string=0x00000000004326BC "h"
 *   insn=0x00000000004326CC string=0x00000000004326D0 ")"
 *   insn=0x00000000004326E0 string=0x00000000004326E4 ")=G"
 *   insn=0x00000000004326E4 string=0x00000000004326E8 "!"
 *   insn=0x00000000004326E8 string=0x00000000004326EC "i"
 *   insn=0x00000000004326EC string=0x00000000004326F0 "\t"
 *   insn=0x00000000004326EC string=0x0000000000432718 "\t"
 *   insn=0x00000000004326F0 string=0x00000000004326F4 "*"
 *   insn=0x00000000004326F4 string=0x00000000004326F8 "\n"
 *   insn=0x00000000004326FC string=0x0000000000432700 "?"
 *   insn=0x0000000000432700 string=0x0000000000432704 "l"
 *   insn=0x0000000000432708 string=0x000000000043270C "&"
 *   insn=0x0000000000432718 string=0x000000000043271C "*"
 *   insn=0x000000000043271C string=0x0000000000432720 "\n"
 *   insn=0x0000000000432720 string=0x0000000000432724 "?"
 *   insn=0x0000000000432724 string=0x0000000000432728 ""
 *   insn=0x0000000000432734 string=0x0000000000432738 "h"
 *   insn=0x0000000000432748 string=0x000000000043274C ")"
 *   insn=0x000000000043275C string=0x0000000000432760 ")=G"
 *   insn=0x0000000000432760 string=0x0000000000432764 "!"
 *   insn=0x0000000000432764 string=0x0000000000432768 "i"
 *   insn=0x0000000000432768 string=0x000000000043276C "\t"
 *   insn=0x000000000043276C string=0x0000000000432770 "*"
 *   insn=0x0000000000432770 string=0x0000000000432774 "\n"
 *   insn=0x000000000043277C string=0x0000000000432780 "L"
 *   insn=0x0000000000432784 string=0x0000000000432788 ""
 *   insn=0x000000000043278C string=0x0000000000432790 "M<"
 *   insn=0x0000000000432794 string=0x0000000000432798 "*"
 *   insn=0x0000000000432798 string=0x000000000043279C "\n"
 *   insn=0x000000000043279C string=0x00000000004327A0 "?"
 *   insn=0x00000000004327A0 string=0x00000000004327A4 ""
 *   insn=0x00000000004327A8 string=0x00000000004327AC "F<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,std::vector<Caver::QuestsView::LabelGroup>>::operator[](
        __int64 a1,
        const void **a2)
{
  __int64 node; // x19
  _QWORD *v3; // x28
  const void *v4; // x23
  const void **v5; // x22
  unsigned __int64 v6; // x25
  __int64 v7; // x20
  _QWORD *v8; // x0
  unsigned __int64 v9; // x8
  __int64 v10; // x21
  size_t v11; // x2
  int v12; // w0
  int v13; // w0
  _QWORD *v14; // x1
  unsigned __int64 v15; // x8
  unsigned __int64 v16; // x9
  __int64 v17; // x23
  size_t v18; // x2
  int v19; // w0
  Caver::QuestsView::LabelGroup *v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x22
  unsigned int v24; // w23
  _QWORD *v25; // x1
  unsigned __int64 v26; // x8
  unsigned __int64 v27; // x9
  __int64 v28; // x19
  size_t v29; // x2
  unsigned int v30; // w0
  Caver::QuestsView::LabelGroup *v31; // x20
  Caver::QuestsView::LabelGroup *v32; // x21
  char *v33; // x0
  unsigned int *v34; // x8
  int v35; // w9
  int v36; // w0
  void *v39; // [xsp+10h] [xbp-80h] BYREF
  void *p; // [xsp+18h] [xbp-78h]
  Caver::QuestsView::LabelGroup *v41; // [xsp+20h] [xbp-70h]
  __int64 v42; // [xsp+28h] [xbp-68h]
  __int64 v43; // [xsp+38h] [xbp-58h]

  node = a1 + 8;
  v43 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD **)(a1 + 16);
  if ( v3 )
  {
    v4 = *a2;
    v5 = a2;
    v6 = *((_QWORD *)*a2 - 3);
    v7 = a1 + 8;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = (_QWORD *)v3[4];
        v9 = *(v8 - 3);
        v10 = v9 - v6;
        v11 = v9 <= v6 ? *(v8 - 3) : v6;
        v12 = memcmp(v8, v4, v11);
        if ( v12 )
          break;
        if ( v10 <= 0x7FFFFFFF )
        {
          v13 = v10 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v10;
          if ( v13 < 0 )
            goto LABEL_8;
        }
LABEL_15:
        node = (__int64)v3;
        v3 = (_QWORD *)v3[2];
        if ( !v3 )
          goto LABEL_18;
      }
      if ( (v12 & 0x80000000) == 0 )
        goto LABEL_15;
LABEL_8:
      v3 = (_QWORD *)v3[3];
      if ( !v3 )
        goto LABEL_18;
    }
  }
  v5 = a2;
  v7 = a1 + 8;
LABEL_18:
  if ( node != v7 )
  {
    v14 = *(_QWORD **)(node + 32);
    v15 = *((_QWORD *)*v5 - 3);
    v16 = *(v14 - 3);
    v17 = v15 - v16;
    if ( v15 <= v16 )
      v18 = *((_QWORD *)*v5 - 3);
    else
      v18 = *(v14 - 3);
    v19 = memcmp(*v5, v14, v18);
    if ( v19 )
    {
      if ( (v19 & 0x80000000) == 0 )
        return node + 40;
    }
    else
    {
      if ( v17 > 0x7FFFFFFF )
        return node + 40;
      v36 = v17 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v17;
      if ( (v36 & 0x80000000) == 0 )
        return node + 40;
    }
  }
  sub_56A528(&v39, v5);
  p = 0;
  v41 = 0;
  v42 = 0;
  std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup const*,std::vector<Caver::QuestsView::LabelGroup>>,Caver::QuestsView::LabelGroup*>();
  v41 = v20;
  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup>>>>::_M_get_insert_hint_unique_pos();
  node = v21;
  v23 = v22;
  if ( v22 )
  {
    v24 = 1;
    if ( !v21 && v7 != v22 )
    {
      v25 = *(_QWORD **)(v22 + 32);
      v26 = *((_QWORD *)v39 - 3);
      v27 = *(v25 - 3);
      v28 = v26 - v27;
      if ( v26 <= v27 )
        v29 = *((_QWORD *)v39 - 3);
      else
        v29 = *(v25 - 3);
      v30 = memcmp(v39, v25, v29);
      if ( !v30 )
      {
        v30 = 0x7FFFFFFF;
        if ( v28 <= 0x7FFFFFFF )
        {
          if ( v28 <= (__int64)0xFFFFFFFF80000000LL )
            v30 = 0x80000000;
          else
            v30 = v28;
        }
      }
      v24 = v30 >> 31;
    }
    node = std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup>>>>::_M_create_node();
    sub_54C8A0(v24, node, v23, v7);
    ++*(_QWORD *)(a1 + 40);
  }
  v31 = (Caver::QuestsView::LabelGroup *)p;
  v32 = v41;
  if ( p != v41 )
  {
    do
    {
      Caver::QuestsView::LabelGroup::~LabelGroup(v31);
      v31 = (Caver::QuestsView::LabelGroup *)((char *)v31 + 56);
    }
    while ( v32 != v31 );
    v31 = (Caver::QuestsView::LabelGroup *)p;
  }
  if ( v31 )
    operator delete(v31);
  v33 = (char *)v39 - 24;
  if ( (char *)v39 - 24 != (char *)&qword_6FD2E0 )
  {
    v34 = (unsigned int *)((char *)v39 - 8);
    if ( &pthread_create )
    {
      do
        v35 = __ldaxr(v34);
      while ( __stlxr(v35 - 1, v34) );
    }
    else
    {
      v35 = (*v34)--;
    }
    if ( v35 <= 0 )
      operator delete(v33);
  }
  return node + 40;
}

