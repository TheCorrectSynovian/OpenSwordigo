/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000407214
 * Mangled: _ZN5Caver15GuideToggleViewD2Ev
 * Demangled: Caver::GuideToggleView::~GuideToggleView()
 *
 * Callers: 1
 *   0x0000000000203450  Caver::GuideToggleView::~GuideToggleView()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000203450  Caver::GuideToggleView::~GuideToggleView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000040737C  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GuideToggleView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::GuideToggleView*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x0000000000407228 string=0x000000000040722C "t"
 *   insn=0x000000000040722C string=0x0000000000407230 ""
 *   insn=0x0000000000407230 string=0x0000000000407234 "A"
 *   insn=0x0000000000407234 string=0x0000000000407238 "h"
 *   insn=0x0000000000407238 string=0x000000000040723C "4"
 *   insn=0x000000000040723C string=0x0000000000407280 "t"
 *   insn=0x0000000000407240 string=0x0000000000407244 ""
 *   insn=0x0000000000407250 string=0x0000000000407254 "\t@"
 *   insn=0x0000000000407260 string=0x0000000000407264 ""
 *   insn=0x0000000000407270 string=0x0000000000407274 "@"
 *   insn=0x0000000000407280 string=0x0000000000407284 "4"
 *   insn=0x0000000000407288 string=0x000000000040728C ""
 *   insn=0x0000000000407298 string=0x000000000040729C "\t@"
 *   insn=0x00000000004072A8 string=0x00000000004072AC ""
 *   insn=0x00000000004072B8 string=0x00000000004072BC "@"
 *   insn=0x00000000004072E8 string=0x00000000004072EC "5"
 *   insn=0x00000000004072F0 string=0x00000000004072F4 ""
 *   insn=0x0000000000407300 string=0x0000000000407304 "\t@"
 *   insn=0x0000000000407310 string=0x0000000000407314 ""
 *   insn=0x0000000000407320 string=0x0000000000407324 "@"
 *   insn=0x0000000000407338 string=0x000000000040733C "b"
 *   insn=0x0000000000407350 string=0x0000000000407354 "?"
 *   insn=0x0000000000407364 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000407374 string=0x0000000000407378 "S"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GuideToggleView::~GuideToggleView(Caver::GuideToggleView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 34);
  *(_QWORD *)this = off_6D19F0;
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
  v5 = (_QWORD *)*((_QWORD *)this + 32);
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
  Caver::GUIView::~GUIView(this);
}

