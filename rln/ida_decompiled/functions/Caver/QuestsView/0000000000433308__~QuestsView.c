/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000433308
 * Mangled: _ZN5Caver10QuestsViewD2Ev
 * Demangled: Caver::QuestsView::~QuestsView()
 *
 * Callers: 1
 *   0x00000000001F4490  Caver::QuestsView::~QuestsView()
 *
 * Callees: 11
 *   0x00000000001F3550  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>> *)
 *   0x00000000001F4490  Caver::QuestsView::~QuestsView()
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA8F0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>> *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000043361C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>> *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 84
 *   insn=0x0000000000433318 string=0x000000000043331C "U"
 *   insn=0x0000000000433324 string=0x0000000000433328 "`"
 *   insn=0x0000000000433330 string=0x0000000000433334 ""
 *   insn=0x0000000000433334 string=0x0000000000433338 "a"
 *   insn=0x0000000000433338 string=0x000000000043333C "A"
 *   insn=0x000000000043333C string=0x0000000000433340 "h"
 *   insn=0x0000000000433340 string=0x0000000000433344 "k"
 *   insn=0x0000000000433344 string=0x0000000000433348 "a"
 *   insn=0x0000000000433344 string=0x00000000001FA8F0 "0'"
 *   insn=0x0000000000433348 string=0x000000000043334C "`"
 *   insn=0x0000000000433350 string=0x0000000000433354 "`"
 *   insn=0x0000000000433350 string=0x00000000001F3550 "P'"
 *   insn=0x0000000000433354 string=0x0000000000433358 "@"
 *   insn=0x0000000000433358 string=0x0000000000433360 "t"
 *   insn=0x000000000043335C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000433360 string=0x0000000000433364 "4"
 *   insn=0x0000000000433364 string=0x00000000004333A8 "t"
 *   insn=0x0000000000433368 string=0x000000000043336C ""
 *   insn=0x0000000000433378 string=0x000000000043337C "\t@"
 *   insn=0x0000000000433388 string=0x000000000043338C ""
 *   insn=0x0000000000433398 string=0x000000000043339C "@"
 *   insn=0x00000000004333A8 string=0x00000000004333AC "4"
 *   insn=0x00000000004333AC string=0x00000000004333F0 "hz@"
 *   insn=0x00000000004333B0 string=0x00000000004333B4 ""
 *   insn=0x00000000004333C0 string=0x00000000004333C4 "\t@"
 *   insn=0x00000000004333D0 string=0x00000000004333D4 ""
 *   insn=0x00000000004333E0 string=0x00000000004333E4 "@"
 *   insn=0x00000000004333F8 string=0x00000000004333FC ")"
 *   insn=0x00000000004333FC string=0x0000000000433400 "J"
 *   insn=0x0000000000433404 string=0x0000000000433408 ")A"
 *   insn=0x000000000043340C string=0x0000000000433410 "i"
 *   insn=0x0000000000433444 string=0x0000000000433448 ")=G"
 *   insn=0x0000000000433448 string=0x000000000043344C "!"
 *   insn=0x0000000000433450 string=0x0000000000433454 "\t"
 *   insn=0x0000000000433450 string=0x0000000000433468 "\t"
 *   insn=0x0000000000433454 string=0x0000000000433458 "*"
 *   insn=0x0000000000433458 string=0x000000000043345C "\n"
 *   insn=0x0000000000433464 string=0x0000000000433474 "?"
 *   insn=0x0000000000433468 string=0x000000000043346C "*"
 *   insn=0x000000000043346C string=0x0000000000433470 "\n"
 *   insn=0x0000000000433488 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000043348C string=0x0000000000433490 "4"
 *   insn=0x0000000000433490 string=0x0000000000433560 "hz@"
 *   insn=0x0000000000433494 string=0x0000000000433498 "u"
 *   insn=0x0000000000433498 string=0x000000000043349C "5"
 *   insn=0x000000000043349C string=0x00000000004334A0 "0"
 *   insn=0x00000000004334A4 string=0x00000000004334A8 "`"
 *   insn=0x00000000004334AC string=0x00000000004334B0 ""
 *   insn=0x00000000004334AC string=0x00000000004334CC "y"
 *   insn=0x00000000004334B0 string=0x00000000004334D0 "u"
 *   insn=0x00000000004334B8 string=0x00000000004334BC "`"
 *   insn=0x00000000004334BC string=0x00000000004334C0 "$"
 *   insn=0x00000000004334C0 string=0x00000000004334C4 "`"
 *   insn=0x00000000004334C4 string=0x00000000004334C8 "@"
 *   insn=0x00000000004334D0 string=0x00000000004334D4 "5"
 *   insn=0x00000000004334D4 string=0x0000000000433518 "u"
 *   insn=0x00000000004334D8 string=0x00000000004334DC ""
 *   insn=0x00000000004334E8 string=0x00000000004334EC "\t@"
 *   insn=0x00000000004334F8 string=0x00000000004334FC ""
 *   insn=0x0000000000433508 string=0x000000000043350C "@"
 *   insn=0x0000000000433518 string=0x000000000043351C "5"
 *   insn=0x0000000000433520 string=0x0000000000433524 ""
 *   insn=0x0000000000433530 string=0x0000000000433534 "\t@"
 *   insn=0x0000000000433540 string=0x0000000000433544 ""
 *   insn=0x0000000000433550 string=0x0000000000433554 "@"
 *   insn=0x0000000000433568 string=0x000000000043356C ")"
 *   insn=0x000000000043356C string=0x0000000000433570 "J"
 *   insn=0x0000000000433574 string=0x0000000000433578 ")A"
 *   insn=0x000000000043357C string=0x0000000000433580 "i"
 *   insn=0x0000000000433588 string=0x000000000043358C ")=G"
 *   insn=0x000000000043358C string=0x0000000000433590 "!"
 *   insn=0x0000000000433594 string=0x0000000000433598 "\t"
 *   insn=0x0000000000433594 string=0x00000000004335C8 "\t"
 *   insn=0x0000000000433598 string=0x000000000043359C "*"
 *   insn=0x000000000043359C string=0x00000000004335A0 "\n"
 *   insn=0x00000000004335A4 string=0x00000000004335A8 "?"
 *   insn=0x00000000004335A8 string=0x00000000004335AC "l"
 *   insn=0x00000000004335B0 string=0x00000000004335B4 "|"
 *   insn=0x00000000004335C8 string=0x00000000004335CC "*"
 *   insn=0x00000000004335CC string=0x00000000004335D0 "\n"
 *   insn=0x00000000004335D0 string=0x00000000004335D4 "?"
 *   insn=0x00000000004335F4 string=0x00000000001F4490 "P'"
 *   insn=0x0000000000433600 string=0x0000000000433604 "+"
 *   insn=0x000000000043360C string=0x0000000000433610 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::QuestsView::~QuestsView(Caver::QuestsView *this)
{
  void *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  void *v10; // x0
  unsigned int *v11; // x8
  int v12; // w9

  _ReadStatusReg(TPIDR_EL0);
  *(_QWORD *)this = off_6D3600;
  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_erase();
  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup>>>>::_M_erase();
  v2 = (void *)*((_QWORD *)this + 35);
  if ( v2 )
    operator delete(v2);
  v3 = (_QWORD *)*((_QWORD *)this + 34);
  if ( v3 )
  {
    v4 = v3[1] - 1LL;
    v3[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v5 = v3[2] - 1LL;
      v3[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  v6 = (_QWORD *)*((_QWORD *)this + 32);
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
  v9 = *((_QWORD *)this + 30);
  v10 = (void *)(v9 - 24);
  *(_QWORD *)this = off_6D13B8;
  if ( (__int64 *)(v9 - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v9 - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v10);
  }
  Caver::GUIView::~GUIView(this);
}

