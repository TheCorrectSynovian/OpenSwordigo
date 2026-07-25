/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F5BB0
 * Mangled: _ZN5boost6detail8function26void_function_obj_invoker2INS_3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver19StoreViewControllerERKSt6vectorISsSaISsEERKSsEENS3_5list3INS3_5valueIPS8_EENS_3argILi1EEENSL_ILi2EEEEEEEvSD_SF_E6invokeERNS1_15function_bufferESD_SF_
 * Demangled: boost::detail::function::void_function_obj_invoker2<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::StoreViewController,std::vector<std::string,std::allocator<std::string>> const&,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::StoreViewController*>,boost::arg<1>,boost::arg<2>>>,void,std::vector<std::string,std::allocator<std::string>> const&,std::string const&>::invoke(boost::detail::function::function_buffer &,std::vector<std::string,std::allocator<std::string>> const&,std::string const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000003F5BB8 string=0x00000000003F5BBC "i"
 *   insn=0x00000000003F5BBC string=0x00000000003F5BC0 ""
 *   insn=0x00000000003F5BBC string=0x00000000003F5BC8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::function::void_function_obj_invoker2<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::StoreViewController,std::vector<std::string> const&,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::StoreViewController*>,boost::arg<1>,boost::arg<2>>>,void,std::vector<std::string> const&,std::string const&>::invoke(
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

