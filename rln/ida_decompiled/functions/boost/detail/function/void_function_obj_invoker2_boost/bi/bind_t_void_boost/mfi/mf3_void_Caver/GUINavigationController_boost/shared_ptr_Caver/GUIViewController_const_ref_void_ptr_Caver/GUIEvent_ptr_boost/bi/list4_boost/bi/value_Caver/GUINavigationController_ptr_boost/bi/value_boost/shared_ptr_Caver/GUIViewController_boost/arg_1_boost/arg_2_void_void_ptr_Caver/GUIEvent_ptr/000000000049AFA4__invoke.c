/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049AFA4
 * Mangled: _ZN5boost6detail8function26void_function_obj_invoker2INS_3_bi6bind_tIvNS_4_mfi3mf3IvN5Caver23GUINavigationControllerERKNS_10shared_ptrINS7_17GUIViewControllerEEEPvPNS7_8GUIEventEEENS3_5list4INS3_5valueIPS8_EENSJ_ISB_EENS_3argILi1EEENSN_ILi2EEEEEEEvSE_SG_E6invokeERNS1_15function_bufferESE_SG_
 * Demangled: boost::detail::function::void_function_obj_invoker2<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>,void,void *,Caver::GUIEvent *>::invoke(boost::detail::function::function_buffer &,void *,Caver::GUIEvent *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x000000000049AFAC string=0x000000000049AFB0 "L"
 *   insn=0x000000000049AFB0 string=0x000000000049AFB4 "D"
 *   insn=0x000000000049AFB4 string=0x000000000049AFB8 "Aa"
 *   insn=0x000000000049AFB8 string=0x000000000049AFBC "`"
 *   insn=0x000000000049AFBC string=0x000000000049AFC0 "l"
 *   insn=0x000000000049AFC0 string=0x000000000049AFC4 "\n"
 *   insn=0x000000000049AFC4 string=0x000000000049AFC8 "Did"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::function::void_function_obj_invoker2<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>,void,void *,Caver::GUIEvent *>::invoke(
        __int64 (__fastcall ***a1)(char *, __int64, __int64, __int64),
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // x12
  __int64 (__fastcall *v5)(char *, __int64, __int64, __int64); // x4
  __int64 v6; // x1
  char *v7; // x0

  v4 = (__int64)(*a1)[1];
  v5 = **a1;
  v6 = (__int64)(*a1 + 3);
  v7 = (char *)(*a1)[2] + (v4 >> 1);
  if ( (v4 & 1) != 0 )
    v5 = *(__int64 (__fastcall **)(char *, __int64, __int64, __int64))((char *)v5 + *(_QWORD *)v7);
  return v5(v7, v6, a2, a3);
}

