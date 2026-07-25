/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049B24C
 * Mangled: _ZN5boost6detail8function13basic_vtable2IvPvPN5Caver8GUIEventEE9assign_toINS_3_bi6bind_tIvNS_4_mfi3mf3IvNS4_23GUINavigationControllerERKNS_10shared_ptrINS4_17GUIViewControllerEEES3_S6_EENS9_5list4INS9_5valueIPSD_EENSL_ISG_EENS_3argILi1EEENSP_ILi2EEEEEEEEEbT_RNS1_15function_bufferENS1_16function_obj_tagE
 * Demangled: boost::detail::function::basic_vtable2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>,boost::detail::function::function_buffer &,boost::detail::function::function_obj_tag)
 *
 * Callers: 2
 *   0x00000000001F3CE0  boost::detail::function::basic_vtable2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>,boost::detail::function::function_buffer &,boost::detail::function::function_obj_tag)
 *   0x000000000049AFD8  boost::detail::function::basic_vtable2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>,boost::detail::function::function_buffer &)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x000000000049B260 string=0x000000000049B264 "V"
 *   insn=0x000000000049B278 string=0x000000000049B27C "=n"
 *   insn=0x000000000049B27C string=0x000000000049B280 "`"
 *   insn=0x000000000049B27C string=0x00000000001F6B70 "0'"
 *   insn=0x000000000049B284 string=0x000000000049B288 "'"
 *   insn=0x000000000049B29C string=0x000000000049B2A0 "h"
 *   insn=0x000000000049B2A0 string=0x000000000049B2A4 ""
 *   insn=0x000000000049B2A4 string=0x000000000049B2A8 "h"
 *   insn=0x000000000049B2B0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000049B2C4 string=0x000000000049B2C8 "h"
 *   insn=0x000000000049B2C8 string=0x000000000049B2CC ""
 *   insn=0x000000000049B2CC string=0x000000000049B2D0 "h"
 *   insn=0x000000000049B2D4 string=0x000000000049B2D8 "h"
 *   insn=0x000000000049B2D8 string=0x000000000049B2DC ""
 *   insn=0x000000000049B2DC string=0x000000000049B2E0 "h"
 *   insn=0x000000000049B2E4 string=0x000000000049B2E8 "h"
 *   insn=0x000000000049B2EC string=0x000000000049B2F0 "\t@"
 *   insn=0x000000000049B2F4 string=0x000000000049B2F8 "h\n@"
 *   insn=0x000000000049B2F8 string=0x000000000049B2FC ""
 *   insn=0x000000000049B2FC string=0x000000000049B300 "h\n"
 *   insn=0x000000000049B304 string=0x000000000049B308 "h"
 *   insn=0x000000000049B30C string=0x000000000049B310 "@"
 *   insn=0x000000000049B34C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000049B350 string=0x000000000049B354 "3"
 *   insn=0x000000000049B354 string=0x000000000049B358 "h"
 *   insn=0x000000000049B358 string=0x000000000049B35C ""
 *   insn=0x000000000049B35C string=0x000000000049B360 "h"
 *   insn=0x000000000049B364 string=0x000000000049B368 "h"
 *   insn=0x000000000049B368 string=0x000000000049B36C "\t@"
 *   insn=0x000000000049B374 string=0x000000000049B378 "h\n@"
 *   insn=0x000000000049B378 string=0x000000000049B37C ""
 *   insn=0x000000000049B37C string=0x000000000049B380 "h\n"
 *   insn=0x000000000049B384 string=0x000000000049B388 "h"
 *   insn=0x000000000049B388 string=0x000000000049B38C "@"
 *   insn=0x000000000049B398 string=0x000000000049B39C "J"
 *   insn=0x000000000049B3B8 string=0x000000000049B3BC ""
 *   insn=0x000000000049B3C0 string=0x000000000049B3C4 "`"
 *   insn=0x000000000049B3CC string=0x000000000049B3D0 ""
 *   insn=0x000000000049B3D4 string=0x000000000049B3D8 ""
 *   insn=0x000000000049B3E8 string=0x000000000049B3EC "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::function::basic_vtable2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(
        __int64 a1,
        __int128 *a2,
        __int64 *a3)
{
  _QWORD *v6; // x19
  __int64 v7; // x21
  __int64 v8; // x23
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 v11; // x8
  __int128 v12; // [xsp+20h] [xbp-50h]

  _ReadStatusReg(TPIDR_EL0);
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
    return 0;
  v12 = *a2;
  v6 = (_QWORD *)*((_QWORD *)a2 + 4);
  v8 = *((_QWORD *)a2 + 2);
  v7 = *((_QWORD *)a2 + 3);
  if ( v6 )
    ++v6[1];
  v9 = operator new(0x28u);
  *(_QWORD *)(v9 + 16) = v8;
  *(_QWORD *)(v9 + 24) = v7;
  *(_QWORD *)(v9 + 32) = v6;
  *(_OWORD *)v9 = v12;
  if ( v6 )
  {
    ++v6[1];
    *a3 = v9;
    v10 = v6[1] - 1LL;
    v6[1] = v10;
    if ( !v10 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v11 = v6[2] - 1LL;
      v6[2] = v11;
      if ( !v11 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  else
  {
    *a3 = v9;
  }
  return 1;
}

