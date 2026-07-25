/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049AFD8
 * Mangled: _ZN5boost6detail8function13basic_vtable2IvPvPN5Caver8GUIEventEE9assign_toINS_3_bi6bind_tIvNS_4_mfi3mf3IvNS4_23GUINavigationControllerERKNS_10shared_ptrINS4_17GUIViewControllerEEES3_S6_EENS9_5list4INS9_5valueIPSD_EENSL_ISG_EENS_3argILi1EEENSP_ILi2EEEEEEEEEbT_RNS1_15function_bufferE
 * Demangled: boost::detail::function::basic_vtable2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>,boost::detail::function::function_buffer &)
 *
 * Callers: 1
 *   0x00000000001F4960  boost::detail::function::basic_vtable2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>,boost::detail::function::function_buffer &)
 *
 * Callees: 8
 *   0x00000000001F3CE0  boost::detail::function::basic_vtable2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>,boost::detail::function::function_buffer &,boost::detail::function::function_obj_tag)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA120  .strcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000049B24C  boost::detail::function::basic_vtable2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>,boost::detail::function::function_buffer &,boost::detail::function::function_obj_tag)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 60
 *   insn=0x000000000049AFE8 string=0x000000000049AFEC "U"
 *   insn=0x000000000049AFF4 string=0x000000000049AFF8 " "
 *   insn=0x000000000049AFFC string=0x000000000049B000 " "
 *   insn=0x000000000049B004 string=0x000000000049B008 "("
 *   insn=0x000000000049B010 string=0x000000000049B014 "\t"
 *   insn=0x000000000049B014 string=0x000000000049B018 ")"
 *   insn=0x000000000049B018 string=0x000000000049B01C "\t"
 *   insn=0x000000000049B020 string=0x000000000049B024 "/c"
 *   insn=0x000000000049B024 string=0x00000000001F3CE0 "P'"
 *   insn=0x000000000049B02C string=0x000000000049B030 "4"
 *   insn=0x000000000049B034 string=0x000000000049B038 ""
 *   insn=0x000000000049B048 string=0x000000000049B04C "\t@"
 *   insn=0x000000000049B054 string=0x000000000049B058 ""
 *   insn=0x000000000049B068 string=0x000000000049B06C "@"
 *   insn=0x000000000049B080 string=0x000000000049B084 "`"
 *   insn=0x000000000049B09C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000049B0A4 string=0x000000000049B0A8 "4"
 *   insn=0x000000000049B0AC string=0x000000000049B0B0 ""
 *   insn=0x000000000049B0BC string=0x000000000049B0C0 "\t@"
 *   insn=0x000000000049B0CC string=0x000000000049B0D0 ""
 *   insn=0x000000000049B0DC string=0x000000000049B0E0 "@"
 *   insn=0x000000000049B108 string=0x000000000049B10C "_"
 *   insn=0x000000000049B110 string=0x000000000049B114 ""
 *   insn=0x000000000049B114 string=0x000000000049B174 "h"
 *   insn=0x000000000049B11C string=0x000000000049B120 ")"
 *   insn=0x000000000049B120 string=0x000000000049B124 "(y"
 *   insn=0x000000000049B124 string=0x000000000049B128 ""
 *   insn=0x000000000049B12C string=0x000000000049B194 "t"
 *   insn=0x000000000049B12C string=0x000000000049B1F4 "h"
 *   insn=0x000000000049B134 string=0x000000000049B138 "*i"
 *   insn=0x000000000049B138 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000049B144 string=0x000000000049B148 ""
 *   insn=0x000000000049B14C string=0x000000000049B150 ""
 *   insn=0x000000000049B154 string=0x000000000049B158 ""
 *   insn=0x000000000049B15C string=0x000000000049B160 "\t"
 *   insn=0x000000000049B15C string=0x000000000049B16C "`"
 *   insn=0x000000000049B160 string=0x000000000049B164 ")"
 *   insn=0x000000000049B164 string=0x000000000049B168 "\t"
 *   insn=0x000000000049B16C string=0x000000000049B170 "."
 *   insn=0x000000000049B174 string=0x000000000049B178 "!C"
 *   insn=0x000000000049B17C string=0x000000000049B180 ")"
 *   insn=0x000000000049B180 string=0x000000000049B224 "h"
 *   insn=0x000000000049B184 string=0x000000000049B188 "h"
 *   insn=0x000000000049B18C string=0x000000000049B190 "&"
 *   insn=0x000000000049B19C string=0x000000000049B1A0 "5"
 *   insn=0x000000000049B1A4 string=0x000000000049B1A8 ""
 *   insn=0x000000000049B1B4 string=0x000000000049B1B8 "\t@"
 *   insn=0x000000000049B1C4 string=0x000000000049B1C8 ""
 *   insn=0x000000000049B1D4 string=0x000000000049B1D8 "@"
 *   insn=0x000000000049B1E4 string=0x000000000049B1E8 "2p"
 *   insn=0x000000000049B1E8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000049B1F4 string=0x000000000049B1F8 "A"
 *   insn=0x000000000049B1F8 string=0x000000000049B1FC ""
 *   insn=0x000000000049B200 string=0x000000000049B204 "*"
 *   insn=0x000000000049B204 string=0x000000000049B208 "!G"
 *   insn=0x000000000049B208 string=0x000000000049B20C "_"
 *   insn=0x000000000049B208 string=0x0000000000596F20 "N5boost3_bi6bind_tIvNS_4_mfi3mf3IvN5Caver23GUINavigationControllerERKNS_10shared_ptrINS4_17GUIViewControllerEEEPvPNS4_8GUIEventEEENS0_5list4INS0_5valueIPS5_E..."
 *   insn=0x000000000049B20C string=0x000000000049B210 " "
 *   insn=0x000000000049B214 string=0x00000000001FA120 "0'"
 *   insn=0x000000000049B21C string=0x000000000049B220 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::function::basic_vtable2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // x8
  char v3; // w19
  __int64 v4; // x8
  __int64 v5; // x8
  _QWORD *v7; // [xsp+50h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = *(_QWORD **)(a2 + 32);
  v7 = v2;
  if ( v2 )
    ++v2[1];
  v3 = boost::detail::function::basic_vtable2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>();
  if ( v7 )
  {
    v4 = v7[1] - 1LL;
    v7[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v5 = v7[2] - 1LL;
      v7[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  return v3 & 1;
}

