/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EC074
 * Mangled: _ZN5boost6detail8function26void_function_obj_invoker3INS_3_bi6bind_tIvNS_4_mfi3mf3IvN5Caver22PurchaseViewControllerERKSsbSA_EENS3_5list4INS3_5valueIPS8_EENS_3argILi1EEENSG_ILi2EEENSG_ILi3EEEEEEEvSA_bSA_E6invokeERNS1_15function_bufferESA_bSA_
 * Demangled: boost::detail::function::void_function_obj_invoker3<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::PurchaseViewController,std::string const&,bool,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::PurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>,void,std::string const&,bool,std::string const&>::invoke(boost::detail::function::function_buffer &,std::string const&,bool,std::string const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000003EC07C string=0x00000000003EC080 "i"
 *   insn=0x00000000003EC080 string=0x00000000003EC084 ""
 *   insn=0x00000000003EC080 string=0x00000000003EC08C "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::function::void_function_obj_invoker3<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::PurchaseViewController,std::string const&,bool,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::PurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>,void,std::string const&,bool,std::string const&>::invoke(
        char **a1,
        __int64 a2,
        char a3)
{
  __int64 v3; // x9
  char *v4; // x4
  char *v5; // x0

  v3 = (__int64)a1[1];
  v4 = *a1;
  v5 = &a1[2][v3 >> 1];
  if ( (v3 & 1) != 0 )
    v4 = *(char **)&v4[*(_QWORD *)v5];
  return ((__int64 (__fastcall *)(char *, __int64, _QWORD))v4)(v5, a2, a3 & 1);
}

