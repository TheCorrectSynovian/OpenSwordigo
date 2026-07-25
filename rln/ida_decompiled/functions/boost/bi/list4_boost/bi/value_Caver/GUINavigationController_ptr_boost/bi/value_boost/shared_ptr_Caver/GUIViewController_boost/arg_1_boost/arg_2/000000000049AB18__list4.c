/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049AB18
 * Mangled: _ZN5boost3_bi5list4INS0_5valueIPN5Caver23GUINavigationControllerEEENS2_INS_10shared_ptrINS3_17GUIViewControllerEEEEENS_3argILi1EEENSB_ILi2EEEEC2ES6_SA_SC_SD_
 * Demangled: boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::list4(boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>)
 *
 * Callers: 2
 *   0x00000000002020F0  boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::list4(boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>)
 *   0x000000000049A550  Caver::GUINavigationController::SetCurrentViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *
 * Callees: 7
 *   0x00000000001F3830  boost::_bi::storage4<boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::storage4(boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>)
 *   0x00000000001F4960  boost::detail::function::basic_vtable2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>,boost::detail::function::function_buffer &)
 *   0x00000000001F53B0  boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9E70  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>::manager(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type,mpl_::bool_<false>)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 113
 *   insn=0x000000000049AB24 string=0x000000000049AB28 "T"
 *   insn=0x000000000049AB30 string=0x000000000049AB34 "H"
 *   insn=0x000000000049AB38 string=0x000000000049AB3C "H"
 *   insn=0x000000000049AB44 string=0x000000000049AB48 "\t"
 *   insn=0x000000000049AB48 string=0x000000000049AB4C ")"
 *   insn=0x000000000049AB4C string=0x000000000049AB50 "\t"
 *   insn=0x000000000049AB54 string=0x000000000049AB58 "6c"
 *   insn=0x000000000049AB58 string=0x00000000001F3830 "P'"
 *   insn=0x000000000049AB5C string=0x000000000049AB60 "3"
 *   insn=0x000000000049AB60 string=0x000000000049AB64 "h"
 *   insn=0x000000000049AB64 string=0x000000000049AB68 ""
 *   insn=0x000000000049AB68 string=0x000000000049AB6C "h"
 *   insn=0x000000000049AB70 string=0x000000000049AB74 "h"
 *   insn=0x000000000049AB78 string=0x000000000049AB7C "\t@"
 *   insn=0x000000000049AB80 string=0x000000000049AB84 "h\n@"
 *   insn=0x000000000049AB84 string=0x000000000049AB88 ""
 *   insn=0x000000000049AB88 string=0x000000000049AB8C "h\n"
 *   insn=0x000000000049AB90 string=0x000000000049AB94 "h"
 *   insn=0x000000000049AB98 string=0x000000000049AB9C "@"
 *   insn=0x000000000049ABC4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000049ABCC string=0x000000000049ABD0 "4"
 *   insn=0x000000000049ABD4 string=0x000000000049ABD8 ""
 *   insn=0x000000000049ABE4 string=0x000000000049ABE8 "\t@"
 *   insn=0x000000000049ABF4 string=0x000000000049ABF8 ""
 *   insn=0x000000000049AC04 string=0x000000000049AC08 "@"
 *   insn=0x000000000049AC14 string=0x000000000049AC18 "+"
 *   insn=0x000000000049AC28 string=0x000000000049AC2C "HL@"
 *   insn=0x000000000049AC30 string=0x000000000049AC34 "i"
 *   insn=0x000000000049AC34 string=0x000000000049AC38 ")\t"
 *   insn=0x000000000049AC38 string=0x000000000049AC3C "i"
 *   insn=0x000000000049AC44 string=0x000000000049AC48 "h"
 *   insn=0x000000000049AC4C string=0x000000000049AC50 "h"
 *   insn=0x000000000049AC4C string=0x000000000049AC80 "h"
 *   insn=0x000000000049AC50 string=0x000000000049AC54 "\t@"
 *   insn=0x000000000049AC5C string=0x000000000049AC60 "h\n@"
 *   insn=0x000000000049AC60 string=0x000000000049AC64 ""
 *   insn=0x000000000049AC64 string=0x000000000049AC68 "h\n"
 *   insn=0x000000000049AC6C string=0x000000000049AC70 "h"
 *   insn=0x000000000049AC70 string=0x000000000049AC74 "@"
 *   insn=0x000000000049AC80 string=0x000000000049AC84 ""
 *   insn=0x000000000049AC84 string=0x000000000049AC88 "h"
 *   insn=0x000000000049AC88 string=0x000000000049AC8C "!"
 *   insn=0x000000000049AC8C string=0x000000000049AC90 "h"
 *   insn=0x000000000049AC94 string=0x000000000049AC98 "\t@"
 *   insn=0x000000000049AC9C string=0x000000000049ACA0 "h\n@"
 *   insn=0x000000000049ACA0 string=0x000000000049ACA4 ""
 *   insn=0x000000000049ACA4 string=0x000000000049ACA8 "h\n"
 *   insn=0x000000000049ACA8 string=0x000000000049ACAC "!"
 *   insn=0x000000000049ACAC string=0x000000000049ACB0 "h"
 *   insn=0x000000000049ACC0 string=0x000000000049ACC4 " "
 *   insn=0x000000000049ACE0 string=0x000000000049ACE4 ""
 *   insn=0x000000000049ACE4 string=0x000000000049ACE8 "h"
 *   insn=0x000000000049ACEC string=0x000000000049ACF0 "h"
 *   insn=0x000000000049ACF0 string=0x000000000049ACF4 "\t@"
 *   insn=0x000000000049ACFC string=0x000000000049AD00 "h\n@"
 *   insn=0x000000000049AD00 string=0x000000000049AD04 ""
 *   insn=0x000000000049AD04 string=0x000000000049AD08 "h\n"
 *   insn=0x000000000049AD0C string=0x000000000049AD10 "h"
 *   insn=0x000000000049AD10 string=0x000000000049AD14 "@"
 *   insn=0x000000000049AD38 string=0x000000000049AD3C "T"
 *   insn=0x000000000049AD48 string=0x000000000049AD4C " "
 *   insn=0x000000000049AD50 string=0x000000000049AD54 " "
 *   insn=0x000000000049AD58 string=0x000000000049AD5C "("
 *   insn=0x000000000049AD64 string=0x000000000049AD68 "\t"
 *   insn=0x000000000049AD68 string=0x000000000049AD6C ")"
 *   insn=0x000000000049AD6C string=0x000000000049AD70 "\t"
 *   insn=0x000000000049AD78 string=0x00000000001F53B0 "P'"
 *   insn=0x000000000049AD7C string=0x000000000049AD80 "3"
 *   insn=0x000000000049AD80 string=0x000000000049AD84 "h"
 *   insn=0x000000000049AD84 string=0x000000000049AD88 ""
 *   insn=0x000000000049AD88 string=0x000000000049AD8C "h"
 *   insn=0x000000000049AD90 string=0x000000000049AD94 "h"
 *   insn=0x000000000049AD98 string=0x000000000049AD9C "\t@"
 *   insn=0x000000000049ADA0 string=0x000000000049ADA4 "h\n@"
 *   insn=0x000000000049ADA4 string=0x000000000049ADA8 ""
 *   insn=0x000000000049ADA8 string=0x000000000049ADAC "h\n"
 *   insn=0x000000000049ADB0 string=0x000000000049ADB4 "h"
 *   insn=0x000000000049ADB8 string=0x000000000049ADBC "@"
 *   insn=0x000000000049ADD0 string=0x000000000049ADE4 ";m"
 *   insn=0x000000000049ADEC string=0x000000000049ADF0 "4"
 *   insn=0x000000000049ADF4 string=0x000000000049ADF8 ""
 *   insn=0x000000000049AE04 string=0x000000000049AE08 "\t@"
 *   insn=0x000000000049AE14 string=0x000000000049AE18 ""
 *   insn=0x000000000049AE24 string=0x000000000049AE28 "@"
 *   insn=0x000000000049AE38 string=0x000000000049AE3C "D"
 *   insn=0x000000000049AE54 string=0x000000000049AE58 "W"
 *   insn=0x000000000049AE64 string=0x000000000049AE68 " "
 *   insn=0x000000000049AE6C string=0x000000000049AE70 " "
 *   insn=0x000000000049AE74 string=0x000000000049AE78 "("
 *   insn=0x000000000049AE80 string=0x000000000049AE84 "\t"
 *   insn=0x000000000049AE80 string=0x000000000049AE90 "b""
 *   insn=0x000000000049AE84 string=0x000000000049AE88 ")"
 *   insn=0x000000000049AE88 string=0x000000000049AE8C "\t"
 *   insn=0x000000000049AE90 string=0x000000000049AE94 "t"
 *   insn=0x000000000049AEA4 string=0x00000000001F4960 "P'"
 *   insn=0x000000000049AEAC string=0x000000000049AEB0 "6"
 *   insn=0x000000000049AEB4 string=0x000000000049AEB8 ""
 *   insn=0x000000000049AEC8 string=0x000000000049AECC "\t@"
 *   insn=0x000000000049AED4 string=0x000000000049AED8 ""
 *   insn=0x000000000049AEE8 string=0x000000000049AEEC "@"
 *   insn=0x000000000049AEF8 string=0x000000000049AEFC "h"
 *   insn=0x000000000049AF30 string=0x000000000049AF34 "4"
 *   insn=0x000000000049AF38 string=0x000000000049AF3C ""
 *   insn=0x000000000049AF48 string=0x000000000049AF4C "\t@"
 *   insn=0x000000000049AF58 string=0x000000000049AF5C ""
 *   insn=0x000000000049AF68 string=0x000000000049AF6C "@"
 *   insn=0x000000000049AF78 string=0x000000000049AF7C "R"
 *   insn=0x000000000049AF80 string=0x000000000049AF84 "_"
 *   insn=0x000000000049AF88 string=0x000000000049AF8C "h"
 *   insn=0x000000000049AF8C string=0x000000000049AF90 "!C"
 *   insn=0x000000000049AF90 string=0x000000000049AF94 "?"
 *   insn=0x000000000049AF94 string=0x000000000049AF98 "("
 *   insn=0x000000000049AFA0 string=0x00000000001F9E70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::list4(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // x8
  __int64 v4; // x8
  __int64 v5; // x8
  _QWORD *v6; // [xsp+D0h] [xbp-20h]

  _ReadStatusReg(TPIDR_EL0);
  v3 = *(_QWORD **)(a3 + 8);
  v6 = v3;
  if ( v3 )
    ++v3[1];
  boost::_bi::storage4<boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::storage4();
  if ( v6 )
  {
    v4 = v6[1] - 1LL;
    v6[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v5 = v6[2] - 1LL;
      v6[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
}

