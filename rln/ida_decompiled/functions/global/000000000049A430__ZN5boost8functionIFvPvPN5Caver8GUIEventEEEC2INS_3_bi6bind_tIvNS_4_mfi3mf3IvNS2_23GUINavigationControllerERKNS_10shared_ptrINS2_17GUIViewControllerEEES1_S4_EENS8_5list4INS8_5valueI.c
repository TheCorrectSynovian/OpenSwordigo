/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049A430
 * Mangled: _ZN5boost8functionIFvPvPN5Caver8GUIEventEEEC2INS_3_bi6bind_tIvNS_4_mfi3mf3IvNS2_23GUINavigationControllerERKNS_10shared_ptrINS2_17GUIViewControllerEEES1_S4_EENS8_5list4INS8_5valueIPSC_EENSK_ISF_EENS_3argILi1EEENSO_ILi2EEEEEEEEET_NS_11enable_if_cIXsr5boost11type_traits7ice_notIXsr11is_integralIST_EE5valueEEE5valueEiE4typeE
 * Demangled: _ZN5boost8functionIFvPvPN5Caver8GUIEventEEEC2INS_3_bi6bind_tIvNS_4_mfi3mf3IvNS2_23GUINavigationControllerERKNS_10shared_ptrINS2_17GUIViewControllerEEES1_S4_EENS8_5list4INS8_5valueIPSC_EENSK_ISF_EENS_3argILi1EEENSO_ILi2EEEEEEEEET_NS_11enable_if_cIXsr5boost11type_traits7ice_notIXsr11is_integralIST_EE5valueEEE5valueEiE4typeE
 *
 * Callers: 1
 *   0x00000000001F3F00  ._ZN5boost8functionIFvPvPN5Caver8GUIEventEEEC2INS_3_bi6bind_tIvNS_4_mfi3mf3IvNS2_23GUINavigationControllerERKNS_10shared_ptrINS2_17GUIViewControllerEEES1_S4_EENS8_5list4INS8_5valueIPSC_EENSK_ISF_EENS_3argILi1EEENSO_ILi2EEEEEEEEET_NS_11enable_if_cIXsr5boost11type_traits7ice_notIXsr11is_integralIST_EE5valueEEE5valueEiE4typeE
 *
 * Callees: 5
 *   0x00000000001F5080  Caver::GUINavigationController::TransitionToViewController(boost::shared_ptr<Caver::GUIViewController> const&,float,float,bool)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202BE0  ._ZN5boost9function2IvPvPN5Caver8GUIEventEEC2INS_3_bi6bind_tIvNS_4_mfi3mf3IvNS2_23GUINavigationControllerERKNS_10shared_ptrINS2_17GUIViewControllerEEES1_S4_EENS7_5list4INS7_5valueIPSB_EENSJ_ISE_EENS_3argILi1EEENSN_ILi2EEEEEEEEET_NS_11enable_if_cIXsr5boost11type_traits7ice_notIXsr11is_integralISS_EE5valueEEE5valueEiE4typeE
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 27
 *   insn=0x000000000049A43C string=0x000000000049A440 "T"
 *   insn=0x000000000049A448 string=0x000000000049A44C " "
 *   insn=0x000000000049A450 string=0x000000000049A454 " "
 *   insn=0x000000000049A458 string=0x000000000049A45C "("
 *   insn=0x000000000049A464 string=0x000000000049A468 "\t"
 *   insn=0x000000000049A468 string=0x000000000049A46C ")"
 *   insn=0x000000000049A46C string=0x000000000049A470 "\t"
 *   insn=0x000000000049A480 string=0x000000000049A484 "3"
 *   insn=0x000000000049A484 string=0x000000000049A488 "h"
 *   insn=0x000000000049A488 string=0x000000000049A48C ""
 *   insn=0x000000000049A48C string=0x000000000049A490 "h"
 *   insn=0x000000000049A494 string=0x000000000049A498 "h"
 *   insn=0x000000000049A49C string=0x000000000049A4A0 "\t@"
 *   insn=0x000000000049A4A4 string=0x000000000049A4A8 "h\n@"
 *   insn=0x000000000049A4A8 string=0x000000000049A4AC ""
 *   insn=0x000000000049A4AC string=0x000000000049A4B0 "h\n"
 *   insn=0x000000000049A4B4 string=0x000000000049A4B8 "h"
 *   insn=0x000000000049A4BC string=0x000000000049A4C0 "@"
 *   insn=0x000000000049A4D4 string=0x000000000049A4E8 "zo"
 *   insn=0x000000000049A4E8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000049A4F0 string=0x000000000049A4F4 "4"
 *   insn=0x000000000049A4F8 string=0x000000000049A4FC ""
 *   insn=0x000000000049A508 string=0x000000000049A50C "\t@"
 *   insn=0x000000000049A518 string=0x000000000049A51C ""
 *   insn=0x000000000049A528 string=0x000000000049A52C "@"
 *   insn=0x000000000049A544 string=0x000000000049A548 "B"
 *   insn=0x000000000049A54C string=0x00000000001F5080 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::function<void ()(void *,Caver::GUIEvent *)>::function<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // x8
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // [xsp+20h] [xbp-20h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = *(_QWORD **)(a2 + 32);
  v5 = v2;
  if ( v2 )
    ++v2[1];
  boost::function2<void,void *,Caver::GUIEvent *>::function2<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>();
  if ( v5 )
  {
    v3 = v5[1] - 1LL;
    v5[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v4 = v5[2] - 1LL;
      v5[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
}

