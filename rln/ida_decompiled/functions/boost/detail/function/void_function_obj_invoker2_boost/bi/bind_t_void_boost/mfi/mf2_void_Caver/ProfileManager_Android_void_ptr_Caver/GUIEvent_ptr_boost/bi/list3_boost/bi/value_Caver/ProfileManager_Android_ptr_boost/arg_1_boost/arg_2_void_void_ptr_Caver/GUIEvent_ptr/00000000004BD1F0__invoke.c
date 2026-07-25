/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BD1F0
 * Mangled: _ZN5boost6detail8function26void_function_obj_invoker2INS_3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver22ProfileManager_AndroidEPvPNS7_8GUIEventEEENS3_5list3INS3_5valueIPS8_EENS_3argILi1EEENSH_ILi2EEEEEEEvS9_SB_E6invokeERNS1_15function_bufferES9_SB_
 * Demangled: boost::detail::function::void_function_obj_invoker2<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::ProfileManager_Android,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::ProfileManager_Android*>,boost::arg<1>,boost::arg<2>>>,void,void *,Caver::GUIEvent *>::invoke(boost::detail::function::function_buffer &,void *,Caver::GUIEvent *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004BD1F8 string=0x00000000004BD1FC "i"
 *   insn=0x00000000004BD1FC string=0x00000000004BD200 ""
 *   insn=0x00000000004BD1FC string=0x00000000004BD208 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::function::void_function_obj_invoker2<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::ProfileManager_Android,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::ProfileManager_Android*>,boost::arg<1>,boost::arg<2>>>,void,void *,Caver::GUIEvent *>::invoke(
        __int64 a1)
{
  __int64 v1; // x9
  __int64 (__fastcall *v2)(_QWORD); // x3
  _QWORD *v3; // x0

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(__int64 (__fastcall **)(_QWORD))a1;
  v3 = (_QWORD *)(*(_QWORD *)(a1 + 16) + (v1 >> 1));
  if ( (v1 & 1) != 0 )
    v2 = *(__int64 (__fastcall **)(_QWORD))((char *)v2 + *v3);
  return v2(v3);
}

