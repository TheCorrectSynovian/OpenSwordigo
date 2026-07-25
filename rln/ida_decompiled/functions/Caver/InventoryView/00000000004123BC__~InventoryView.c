/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004123BC
 * Mangled: _ZN5Caver13InventoryViewD2Ev
 * Demangled: Caver::InventoryView::~InventoryView()
 *
 * Callers: 1
 *   0x0000000000200DA0  Caver::InventoryView::~InventoryView()
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000200D00  boost::checked_array_delete<boost::shared_ptr<Caver::InventoryItemPanel>>(boost::shared_ptr<Caver::InventoryItemPanel> *)
 *   0x0000000000200DA0  Caver::InventoryView::~InventoryView()
 *   0x0000000000201830  boost::checked_array_delete<boost::shared_ptr<Caver::InventoryTrinketSlot>>(boost::shared_ptr<Caver::InventoryTrinketSlot> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004127BC  boost::checked_array_delete<boost::shared_ptr<Caver::InventoryItemPanel>>(boost::shared_ptr<Caver::InventoryItemPanel> *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 99
 *   insn=0x00000000004123CC string=0x00000000004123D0 "U"
 *   insn=0x00000000004123D8 string=0x00000000004123DC ")"
 *   insn=0x00000000004123E4 string=0x00000000004123E8 "t"
 *   insn=0x00000000004123E8 string=0x00000000004123EC "*"
 *   insn=0x00000000004123EC string=0x00000000004123F0 "@"
 *   insn=0x00000000004123F0 string=0x00000000004123F4 "("
 *   insn=0x00000000004123F4 string=0x00000000004123F8 "+A"
 *   insn=0x00000000004123FC string=0x0000000000412400 "("
 *   insn=0x0000000000412400 string=0x0000000000412404 "k"
 *   insn=0x0000000000412404 string=0x0000000000412408 "`"
 *   insn=0x0000000000412408 string=0x000000000041240C "h"
 *   insn=0x000000000041240C string=0x0000000000412410 "4"
 *   insn=0x0000000000412410 string=0x0000000000412454 "`"
 *   insn=0x0000000000412414 string=0x0000000000412418 ""
 *   insn=0x0000000000412424 string=0x0000000000412428 "\t@"
 *   insn=0x0000000000412434 string=0x0000000000412438 ""
 *   insn=0x0000000000412444 string=0x0000000000412448 "@"
 *   insn=0x0000000000412458 string=0x000000000041245C "t"
 *   insn=0x000000000041245C string=0x0000000000412460 "4"
 *   insn=0x0000000000412460 string=0x00000000004124A4 "t"
 *   insn=0x0000000000412464 string=0x0000000000412468 ""
 *   insn=0x0000000000412474 string=0x0000000000412478 "\t@"
 *   insn=0x0000000000412484 string=0x0000000000412488 ""
 *   insn=0x0000000000412494 string=0x0000000000412498 "@"
 *   insn=0x00000000004124A4 string=0x00000000004124A8 "4"
 *   insn=0x00000000004124A8 string=0x00000000004124EC "`"
 *   insn=0x00000000004124AC string=0x00000000004124B0 ""
 *   insn=0x00000000004124BC string=0x00000000004124C0 "\t@"
 *   insn=0x00000000004124CC string=0x00000000004124D0 ""
 *   insn=0x00000000004124DC string=0x00000000004124E0 "@"
 *   insn=0x00000000004124F0 string=0x00000000004124F4 "t"
 *   insn=0x00000000004124F4 string=0x00000000004124F8 "4"
 *   insn=0x00000000004124F8 string=0x000000000041253C "hz@"
 *   insn=0x00000000004124FC string=0x0000000000412500 ""
 *   insn=0x000000000041250C string=0x0000000000412510 "\t@"
 *   insn=0x000000000041251C string=0x0000000000412520 ""
 *   insn=0x000000000041252C string=0x0000000000412530 "@"
 *   insn=0x0000000000412544 string=0x0000000000412548 ")"
 *   insn=0x0000000000412548 string=0x000000000041254C "J"
 *   insn=0x0000000000412550 string=0x0000000000412554 ")A"
 *   insn=0x0000000000412558 string=0x000000000041255C "i"
 *   insn=0x0000000000412564 string=0x0000000000412568 "2"
 *   insn=0x0000000000412578 string=0x00000000004125D4 "?"
 *   insn=0x0000000000412590 string=0x0000000000412594 ")=G"
 *   insn=0x0000000000412594 string=0x0000000000412598 "!"
 *   insn=0x000000000041259C string=0x00000000004125A0 "\t"
 *   insn=0x000000000041259C string=0x00000000004125B4 "\t"
 *   insn=0x00000000004125A0 string=0x00000000004125A4 "*"
 *   insn=0x00000000004125A4 string=0x00000000004125A8 "\n"
 *   insn=0x00000000004125B0 string=0x00000000004125C0 "?"
 *   insn=0x00000000004125B4 string=0x00000000004125B8 "*"
 *   insn=0x00000000004125B8 string=0x00000000004125BC "\n"
 *   insn=0x00000000004125C8 string=0x00000000004125CC "v_"
 *   insn=0x00000000004125D4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004125D8 string=0x00000000004125DC "I"
 *   insn=0x00000000004125DC string=0x0000000000412700 "hz@"
 *   insn=0x00000000004125E0 string=0x00000000004125E4 "3"
 *   insn=0x00000000004125E4 string=0x00000000004126B0 "`"
 *   insn=0x00000000004125E8 string=0x00000000004125EC "u"
 *   insn=0x00000000004125F0 string=0x00000000004125F4 "/"
 *   insn=0x0000000000412608 string=0x0000000000412620 "u"
 *   insn=0x000000000041260C string=0x0000000000412610 "u"
 *   insn=0x0000000000412610 string=0x0000000000412614 "u"
 *   insn=0x0000000000412614 string=0x0000000000412618 ":"
 *   insn=0x0000000000412620 string=0x0000000000412624 "5"
 *   insn=0x0000000000412624 string=0x0000000000412668 "u"
 *   insn=0x0000000000412628 string=0x000000000041262C ""
 *   insn=0x0000000000412638 string=0x000000000041263C "\t@"
 *   insn=0x0000000000412648 string=0x000000000041264C ""
 *   insn=0x0000000000412658 string=0x000000000041265C "@"
 *   insn=0x0000000000412668 string=0x000000000041266C "5"
 *   insn=0x0000000000412670 string=0x0000000000412674 ""
 *   insn=0x0000000000412680 string=0x0000000000412684 "\t@"
 *   insn=0x0000000000412690 string=0x0000000000412694 ""
 *   insn=0x00000000004126A0 string=0x00000000004126A4 "@"
 *   insn=0x00000000004126B4 string=0x00000000004126B8 "u"
 *   insn=0x00000000004126B8 string=0x00000000004126BC "5"
 *   insn=0x00000000004126C0 string=0x00000000004126C4 ""
 *   insn=0x00000000004126D0 string=0x00000000004126D4 "\t@"
 *   insn=0x00000000004126E0 string=0x00000000004126E4 ""
 *   insn=0x00000000004126F0 string=0x00000000004126F4 "@"
 *   insn=0x0000000000412708 string=0x000000000041270C ")"
 *   insn=0x000000000041270C string=0x0000000000412710 "J"
 *   insn=0x0000000000412714 string=0x0000000000412718 ")A"
 *   insn=0x000000000041271C string=0x0000000000412720 "i"
 *   insn=0x0000000000412728 string=0x000000000041272C ")=G"
 *   insn=0x000000000041272C string=0x0000000000412730 "!"
 *   insn=0x0000000000412734 string=0x0000000000412738 "\t"
 *   insn=0x0000000000412734 string=0x0000000000412768 "\t"
 *   insn=0x0000000000412738 string=0x000000000041273C "*"
 *   insn=0x000000000041273C string=0x0000000000412740 "\n"
 *   insn=0x0000000000412744 string=0x0000000000412748 "?"
 *   insn=0x0000000000412748 string=0x000000000041274C "l"
 *   insn=0x0000000000412760 string=0x0000000000412764 "X"
 *   insn=0x0000000000412768 string=0x000000000041276C "*"
 *   insn=0x000000000041276C string=0x0000000000412770 "\n"
 *   insn=0x0000000000412770 string=0x0000000000412774 "?"
 *   insn=0x00000000004127A4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004127B4 string=0x00000000004127B8 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::InventoryView::~InventoryView(Caver::InventoryView *this)
{
  _QWORD *v2; // x20
  __int128 v3; // q0
  __int64 v4; // x8
  __int64 v5; // x8
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  _QWORD *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x8
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  void *v16; // x0
  unsigned int *v17; // x8
  int v18; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 46);
  *(_QWORD *)&v3 = off_6D2140;
  *((_QWORD *)&v3 + 1) = &off_6D2160;
  *(_QWORD *)this = off_6D1FD0;
  *(_OWORD *)((char *)this + 248) = v3;
  *((_QWORD *)this + 33) = off_6D2178;
  if ( v2 )
  {
    v4 = v2[1] - 1LL;
    v2[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v5 = v2[2] - 1LL;
      v2[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  boost::checked_array_delete<boost::shared_ptr<Caver::InventoryTrinketSlot>>();
  v6 = (_QWORD *)*((_QWORD *)this + 42);
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
  v9 = (_QWORD *)*((_QWORD *)this + 40);
  if ( v9 )
  {
    v10 = v9[1] - 1LL;
    v9[1] = v10;
    if ( !v10 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v11 = v9[2] - 1LL;
      v9[2] = v11;
      if ( !v11 )
        (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    }
  }
  boost::checked_array_delete<boost::shared_ptr<Caver::InventoryItemPanel>>(*((void **)this + 38));
  v12 = (_QWORD *)*((_QWORD *)this + 36);
  if ( v12 )
  {
    v13 = v12[1] - 1LL;
    v12[1] = v13;
    if ( !v13 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
        (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  v15 = *((_QWORD *)this + 30);
  v16 = (void *)(v15 - 24);
  *(_QWORD *)this = off_6D13B8;
  if ( (__int64 *)(v15 - 24) != &qword_6FD2E0 )
  {
    v17 = (unsigned int *)(v15 - 8);
    if ( &pthread_create )
    {
      do
        v18 = __ldaxr(v17);
      while ( __stlxr(v18 - 1, v17) );
    }
    else
    {
      v18 = (*v17)--;
    }
    if ( v18 <= 0 )
      operator delete(v16);
  }
  Caver::GUIView::~GUIView(this);
}

