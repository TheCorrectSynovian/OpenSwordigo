/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E4C7C
 * Mangled: _ZN5Caver11TargetFrameD2Ev
 * Demangled: Caver::TargetFrame::~TargetFrame()
 *
 * Callers: 1
 *   0x00000000002020C0  Caver::TargetFrame::~TargetFrame()
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8990  Caver::FontText::~FontText()
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000002020C0  Caver::TargetFrame::~TargetFrame()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003E4F04  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::TargetFrame,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::TargetFrame*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 67
 *   insn=0x00000000003E4C8C string=0x00000000003E4C90 "U"
 *   insn=0x00000000003E4C9C string=0x00000000003E4CA0 ""
 *   insn=0x00000000003E4CA0 string=0x00000000003E4CA4 "t"
 *   insn=0x00000000003E4CA4 string=0x00000000003E4CA8 "QE"
 *   insn=0x00000000003E4CA8 string=0x00000000003E4CAC "A"
 *   insn=0x00000000003E4CAC string=0x00000000003E4CB0 "h"
 *   insn=0x00000000003E4CB0 string=0x00000000003E4CB4 "4"
 *   insn=0x00000000003E4CB4 string=0x00000000003E4CF8 "`B"
 *   insn=0x00000000003E4CB8 string=0x00000000003E4CBC ""
 *   insn=0x00000000003E4CC8 string=0x00000000003E4CCC "\t@"
 *   insn=0x00000000003E4CD8 string=0x00000000003E4CDC ""
 *   insn=0x00000000003E4CE8 string=0x00000000003E4CEC "@"
 *   insn=0x00000000003E4CF8 string=0x00000000003E4CFC "%O"
 *   insn=0x00000000003E4CFC string=0x00000000003E4D00 "`"
 *   insn=0x00000000003E4CFC string=0x00000000001F8990 "0'"
 *   insn=0x00000000003E4D00 string=0x00000000003E4D04 "#O"
 *   insn=0x00000000003E4D04 string=0x00000000003E4D08 "t"
 *   insn=0x00000000003E4D08 string=0x00000000003E4D0C "4"
 *   insn=0x00000000003E4D0C string=0x00000000003E4D50 "h~@"
 *   insn=0x00000000003E4D10 string=0x00000000003E4D14 ""
 *   insn=0x00000000003E4D20 string=0x00000000003E4D24 "\t@"
 *   insn=0x00000000003E4D30 string=0x00000000003E4D34 ""
 *   insn=0x00000000003E4D40 string=0x00000000003E4D44 "@"
 *   insn=0x00000000003E4D50 string=0x00000000003E4D54 "\t"
 *   insn=0x00000000003E4D54 string=0x00000000003E4D58 ")"
 *   insn=0x00000000003E4D64 string=0x00000000003E4D94 "\t"
 *   insn=0x00000000003E4D68 string=0x00000000003E4D6C "1h"
 *   insn=0x00000000003E4D7C string=0x00000000003E4DD8 ">E"
 *   insn=0x00000000003E4D94 string=0x00000000003E4D98 ")=G"
 *   insn=0x00000000003E4D98 string=0x00000000003E4D9C "!"
 *   insn=0x00000000003E4DA0 string=0x00000000003E4DA4 "\t"
 *   insn=0x00000000003E4DA0 string=0x00000000003E4DB8 "\t"
 *   insn=0x00000000003E4DA4 string=0x00000000003E4DA8 "*"
 *   insn=0x00000000003E4DA8 string=0x00000000003E4DAC "\n"
 *   insn=0x00000000003E4DB4 string=0x00000000003E4DC4 "?"
 *   insn=0x00000000003E4DB8 string=0x00000000003E4DBC "*"
 *   insn=0x00000000003E4DBC string=0x00000000003E4DC0 "\n"
 *   insn=0x00000000003E4DCC string=0x00000000003E4DD0 "u"
 *   insn=0x00000000003E4DD8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003E4DE0 string=0x00000000003E4E58 "h~@"
 *   insn=0x00000000003E4DE4 string=0x00000000003E4DE8 "`B"
 *   insn=0x00000000003E4DF0 string=0x00000000003E4E08 "`"
 *   insn=0x00000000003E4DF4 string=0x00000000003E4DF8 "u"
 *   insn=0x00000000003E4E0C string=0x00000000003E4E10 "u"
 *   insn=0x00000000003E4E10 string=0x00000000003E4E14 "5"
 *   insn=0x00000000003E4E18 string=0x00000000003E4E1C ""
 *   insn=0x00000000003E4E28 string=0x00000000003E4E2C "\t@"
 *   insn=0x00000000003E4E38 string=0x00000000003E4E3C ""
 *   insn=0x00000000003E4E48 string=0x00000000003E4E4C "@"
 *   insn=0x00000000003E4E58 string=0x00000000003E4E5C "\t"
 *   insn=0x00000000003E4E5C string=0x00000000003E4E60 ")"
 *   insn=0x00000000003E4E6C string=0x00000000003E4E70 "\t"
 *   insn=0x00000000003E4E70 string=0x00000000003E4E74 ")=G"
 *   insn=0x00000000003E4E74 string=0x00000000003E4E78 "!"
 *   insn=0x00000000003E4E7C string=0x00000000003E4E80 "\t"
 *   insn=0x00000000003E4E7C string=0x00000000003E4EB0 "\t"
 *   insn=0x00000000003E4E80 string=0x00000000003E4E84 "*"
 *   insn=0x00000000003E4E84 string=0x00000000003E4E88 "\n"
 *   insn=0x00000000003E4E8C string=0x00000000003E4E90 "?"
 *   insn=0x00000000003E4E90 string=0x00000000003E4E94 "l"
 *   insn=0x00000000003E4E98 string=0x00000000003E4E9C "B"
 *   insn=0x00000000003E4EB0 string=0x00000000003E4EB4 "*"
 *   insn=0x00000000003E4EB4 string=0x00000000003E4EB8 "\n"
 *   insn=0x00000000003E4EB8 string=0x00000000003E4EBC "?"
 *   insn=0x00000000003E4ED8 string=0x00000000003E4EDC "yt"
 *   insn=0x00000000003E4EEC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003E4EFC string=0x00000000003E4F00 "qr"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TargetFrame::~TargetFrame(Caver::TargetFrame *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  void *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 97);
  *(_QWORD *)this = off_6D0790;
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  Caver::FontText::~FontText((Caver::TargetFrame *)((char *)this + 528));
  Caver::FontText::~FontText((Caver::TargetFrame *)((char *)this + 288));
  v5 = (_QWORD *)*((_QWORD *)this + 35);
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v8 = *((_QWORD *)this + 31);
  v9 = (void *)(v8 - 24);
  if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v8 - 8);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      operator delete(v9);
  }
  Caver::GUIView::~GUIView(this);
}

