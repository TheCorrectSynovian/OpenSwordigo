/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049A2AC
 * Mangled: _ZN5boost4bindIvN5Caver23GUINavigationControllerERKNS_10shared_ptrINS1_17GUIViewControllerEEEPvPNS1_8GUIEventEPS2_S5_NS_3argILi1EEENSC_ILi2EEEEENS_3_bi6bind_tIT_NS_4_mfi3mf3ISH_T0_T1_T2_T3_EENSF_9list_av_4IT4_T5_T6_T7_E4typeEEEMSK_FSH_SL_SM_SN_ESQ_SR_SS_ST_
 * Demangled: boost::bind<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *,Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>>(void (Caver::GUINavigationController::*)(boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *),Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>)
 *
 * Callers: 2
 *   0x00000000001FECE0  boost::bind<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *,Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>>(void (Caver::GUINavigationController::*)(boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *),Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>)
 *   0x00000000004997FC  Caver::GUINavigationController::TransitionToViewController(boost::shared_ptr<Caver::GUIViewController> const&,float,float,bool)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000002020F0  boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::list4(boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>)
 *   0x00000000002024B0  Caver::GUINavigationController::SetCurrentViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x000000000049A2C0 string=0x000000000049A2C4 "W"
 *   insn=0x000000000049A2DC string=0x000000000049A2E0 "h"
 *   insn=0x000000000049A2E4 string=0x000000000049A2E8 "h"
 *   insn=0x000000000049A2F0 string=0x000000000049A2F4 "\n"
 *   insn=0x000000000049A2F4 string=0x000000000049A2F8 "J"
 *   insn=0x000000000049A2F8 string=0x000000000049A2FC "\n"
 *   insn=0x000000000049A308 string=0x000000000049A30C "y"
 *   insn=0x000000000049A330 string=0x000000000049A334 "\t@"
 *   insn=0x000000000049A340 string=0x000000000049A344 ""
 *   insn=0x000000000049A350 string=0x000000000049A354 "@"
 *   insn=0x000000000049A360 string=0x000000000049A364 "3"
 *   insn=0x000000000049A364 string=0x000000000049A368 "h"
 *   insn=0x000000000049A368 string=0x000000000049A36C ""
 *   insn=0x000000000049A36C string=0x000000000049A370 "h"
 *   insn=0x000000000049A374 string=0x000000000049A378 "h"
 *   insn=0x000000000049A37C string=0x000000000049A380 "\t@"
 *   insn=0x000000000049A384 string=0x000000000049A388 "h\n@"
 *   insn=0x000000000049A388 string=0x000000000049A38C ""
 *   insn=0x000000000049A38C string=0x000000000049A390 "h\n"
 *   insn=0x000000000049A394 string=0x000000000049A398 "h"
 *   insn=0x000000000049A39C string=0x000000000049A3A0 "@"
 *   insn=0x000000000049A3D0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000049A3D8 string=0x000000000049A3DC "4"
 *   insn=0x000000000049A3E0 string=0x000000000049A3E4 ""
 *   insn=0x000000000049A3F0 string=0x000000000049A3F4 "\t@"
 *   insn=0x000000000049A400 string=0x000000000049A404 ""
 *   insn=0x000000000049A410 string=0x000000000049A414 "@"
 *   insn=0x000000000049A420 string=0x000000000049A424 "("
 *   insn=0x000000000049A428 string=0x000000000049A42C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall boost::bind<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *,Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>>@<X0>(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        __int64 a3@<X3>,
        __int64 a4@<X8>)
{
  _QWORD *v7; // x8
  __int64 result; // x0
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  _QWORD *v12; // [xsp+8h] [xbp-58h]
  __int128 v13; // [xsp+10h] [xbp-50h]
  _QWORD *v14; // [xsp+20h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  v7 = *(_QWORD **)(a3 + 8);
  v12 = v7;
  if ( v7 )
    ++v7[1];
  result = boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::list4();
  *(_QWORD *)a4 = a1;
  *(_QWORD *)(a4 + 8) = a2;
  *(_OWORD *)(a4 + 16) = v13;
  *(_QWORD *)(a4 + 32) = v14;
  if ( v14 )
  {
    if ( !v14[1] )
    {
      result = (*(__int64 (__fastcall **)())(*v14 + 16LL))();
      v9 = v14[2] - 1LL;
      v14[2] = v9;
      if ( !v9 )
        result = (*(__int64 (__fastcall **)())(*v14 + 24LL))();
    }
  }
  if ( v12 )
  {
    v10 = v12[1] - 1LL;
    v12[1] = v10;
    if ( !v10 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v11 = v12[2] - 1LL;
      v12[2] = v11;
      if ( !v11 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  return result;
}

