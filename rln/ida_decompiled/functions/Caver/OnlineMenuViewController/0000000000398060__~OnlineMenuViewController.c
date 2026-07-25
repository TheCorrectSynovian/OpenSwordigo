/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000398060
 * Mangled: _ZN5Caver24OnlineMenuViewControllerD2Ev
 * Demangled: Caver::OnlineMenuViewController::~OnlineMenuViewController()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000398198  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OnlineMenuViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OnlineMenuViewController*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 27
 *   insn=0x000000000039806C string=0x0000000000398070 "h"
 *   insn=0x0000000000398070 string=0x0000000000398074 "t*@"
 *   insn=0x0000000000398074 string=0x0000000000398078 ""
 *   insn=0x0000000000398078 string=0x000000000039807C "A"
 *   insn=0x000000000039807C string=0x0000000000398080 "h"
 *   insn=0x0000000000398080 string=0x0000000000398084 "4"
 *   insn=0x0000000000398088 string=0x000000000039808C ""
 *   insn=0x0000000000398098 string=0x000000000039809C "\t@"
 *   insn=0x00000000003980A8 string=0x00000000003980AC ""
 *   insn=0x00000000003980B8 string=0x00000000003980BC "@"
 *   insn=0x00000000003980D0 string=0x00000000003980D4 "/y"
 *   insn=0x00000000003980D4 string=0x00000000001F6590 "0'"
 *   insn=0x00000000003980DC string=0x00000000003980E0 ",y"
 *   insn=0x00000000003980FC string=0x0000000000398100 "h"
 *   insn=0x0000000000398100 string=0x0000000000398104 "t*@"
 *   insn=0x0000000000398104 string=0x0000000000398108 ""
 *   insn=0x0000000000398108 string=0x000000000039810C "A"
 *   insn=0x000000000039810C string=0x0000000000398110 "h"
 *   insn=0x0000000000398110 string=0x0000000000398114 "4"
 *   insn=0x0000000000398118 string=0x000000000039811C ""
 *   insn=0x0000000000398128 string=0x000000000039812C "\t@"
 *   insn=0x0000000000398138 string=0x000000000039813C ""
 *   insn=0x0000000000398148 string=0x000000000039814C "@"
 *   insn=0x0000000000398158 string=0x000000000039815C "y"
 *   insn=0x0000000000398168 string=0x000000000039816C "Q|"
 *   insn=0x000000000039816C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000398188 string=0x000000000039818C "I|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OnlineMenuViewController::~OnlineMenuViewController(Caver::OnlineMenuViewController *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 10);
  *(_QWORD *)this = off_6CE0E0;
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
  Caver::GUIViewController::~GUIViewController(this);
}

