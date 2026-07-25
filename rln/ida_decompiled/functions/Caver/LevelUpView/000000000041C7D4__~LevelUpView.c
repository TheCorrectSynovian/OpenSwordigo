/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041C7D4
 * Mangled: _ZN5Caver11LevelUpViewD2Ev
 * Demangled: Caver::LevelUpView::~LevelUpView()
 *
 * Callers: 1
 *   0x00000000001F4600  Caver::LevelUpView::~LevelUpView()
 *
 * Callees: 7
 *   0x00000000001F4600  Caver::LevelUpView::~LevelUpView()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000203190  boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(boost::shared_ptr<Caver::GUIView> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000041C99C  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::LevelUpView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::LevelUpView*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x000000000041C7E4 string=0x000000000041C7E8 "H"
 *   insn=0x000000000041C7E8 string=0x000000000041C7EC "`"
 *   insn=0x000000000041C7EC string=0x000000000041C7F0 ""
 *   insn=0x000000000041C7F0 string=0x000000000041C7F4 "A"
 *   insn=0x000000000041C7F4 string=0x000000000041C7F8 "h"
 *   insn=0x000000000041C7F8 string=0x000000000041C7FC "e"
 *   insn=0x000000000041C7FC string=0x000000000041C800 "t"
 *   insn=0x000000000041C800 string=0x000000000041C804 "4"
 *   insn=0x000000000041C804 string=0x000000000041C848 "t"
 *   insn=0x000000000041C808 string=0x000000000041C80C ""
 *   insn=0x000000000041C818 string=0x000000000041C81C "\t@"
 *   insn=0x000000000041C828 string=0x000000000041C82C ""
 *   insn=0x000000000041C838 string=0x000000000041C83C "@"
 *   insn=0x000000000041C848 string=0x000000000041C84C "4"
 *   insn=0x000000000041C850 string=0x000000000041C854 ""
 *   insn=0x000000000041C860 string=0x000000000041C864 "\t@"
 *   insn=0x000000000041C870 string=0x000000000041C874 ""
 *   insn=0x000000000041C880 string=0x000000000041C884 "@"
 *   insn=0x000000000041C89C string=0x000000000041C8A0 "d"
 *   insn=0x000000000041C8A4 string=0x000000000041C8A8 "*"
 *   insn=0x000000000041C8AC string=0x000000000041C8B0 "u"
 *   insn=0x000000000041C8B4 string=0x000000000041C8B8 "&"
 *   insn=0x000000000041C8C0 string=0x000000000041C8C4 "5"
 *   insn=0x000000000041C8C4 string=0x000000000041C908 "u"
 *   insn=0x000000000041C8C8 string=0x000000000041C8CC ""
 *   insn=0x000000000041C8D8 string=0x000000000041C8DC "\t@"
 *   insn=0x000000000041C8E8 string=0x000000000041C8EC ""
 *   insn=0x000000000041C8F8 string=0x000000000041C8FC "@"
 *   insn=0x000000000041C908 string=0x000000000041C90C "5"
 *   insn=0x000000000041C910 string=0x000000000041C914 ""
 *   insn=0x000000000041C920 string=0x000000000041C924 "\t@"
 *   insn=0x000000000041C930 string=0x000000000041C934 ""
 *   insn=0x000000000041C940 string=0x000000000041C944 "@"
 *   insn=0x000000000041C950 string=0x000000000041C954 "7"
 *   insn=0x000000000041C95C string=0x000000000041C960 "{"
 *   insn=0x000000000041C970 string=0x000000000041C974 "#_"
 *   insn=0x000000000041C974 string=0x00000000001F4600 "P'"
 *   insn=0x000000000041C980 string=0x000000000041C984 "Kj"
 *   insn=0x000000000041C984 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000041C98C string=0x000000000041C990 "Hj"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::LevelUpView::~LevelUpView(Caver::LevelUpView *this)
{
  void *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8

  v2 = (void *)*((_QWORD *)this + 36);
  *(_QWORD *)this = off_6D2700;
  boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(v2);
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
  Caver::GUIView::~GUIView(this);
}

