/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F5AFC
 * Mangled: _ZN5boost6detail8function26void_function_obj_invoker3INS_3_bi6bind_tIvNS_4_mfi3mf3IvN5Caver19StoreViewControllerERKSsRKNS_10shared_ptrINS7_12StoreProductEEESA_EENS3_5list4INS3_5valueIPS8_EENS_3argILi1EEENSL_ILi2EEENSL_ILi3EEEEEEEvSA_SF_SA_E6invokeERNS1_15function_bufferESA_SF_SA_
 * Demangled: boost::detail::function::void_function_obj_invoker3<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::StoreViewController,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::StoreViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>,void,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>::invoke(boost::detail::function::function_buffer &,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000003F5B04 string=0x00000000003F5B08 "i"
 *   insn=0x00000000003F5B08 string=0x00000000003F5B0C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::function::void_function_obj_invoker3<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::StoreViewController,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::StoreViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>,void,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>::invoke(
        __int64 a1)
{
  __int64 v1; // x9
  __int64 (__fastcall *v2)(_QWORD); // x4
  _QWORD *v3; // x0

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(__int64 (__fastcall **)(_QWORD))a1;
  v3 = (_QWORD *)(*(_QWORD *)(a1 + 16) + (v1 >> 1));
  if ( (v1 & 1) != 0 )
    v2 = *(__int64 (__fastcall **)(_QWORD))((char *)v2 + *v3);
  return v2(v3);
}

