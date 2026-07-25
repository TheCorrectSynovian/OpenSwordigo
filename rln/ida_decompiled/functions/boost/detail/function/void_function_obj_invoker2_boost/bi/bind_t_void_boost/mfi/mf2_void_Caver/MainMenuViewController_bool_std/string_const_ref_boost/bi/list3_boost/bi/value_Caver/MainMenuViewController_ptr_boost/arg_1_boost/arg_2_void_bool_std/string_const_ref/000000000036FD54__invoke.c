/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036FD54
 * Mangled: _ZN5boost6detail8function26void_function_obj_invoker2INS_3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver22MainMenuViewControllerEbRKSsEENS3_5list3INS3_5valueIPS8_EENS_3argILi1EEENSG_ILi2EEEEEEEvbSA_E6invokeERNS1_15function_bufferEbSA_
 * Demangled: boost::detail::function::void_function_obj_invoker2<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::MainMenuViewController,bool,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::MainMenuViewController*>,boost::arg<1>,boost::arg<2>>>,void,bool,std::string const&>::invoke(boost::detail::function::function_buffer &,bool,std::string const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000036FD5C string=0x000000000036FD60 "i"
 *   insn=0x000000000036FD60 string=0x000000000036FD64 ""
 *   insn=0x000000000036FD60 string=0x000000000036FD6C "!"
 *   insn=0x000000000036FD6C string=0x000000000036FD70 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::detail::function::void_function_obj_invoker2<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::MainMenuViewController,bool,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::MainMenuViewController*>,boost::arg<1>,boost::arg<2>>>,void,bool,std::string const&>::invoke(
        char **a1,
        char a2)
{
  __int64 v2; // x9
  char *v3; // x3
  char *v4; // x0

  v2 = (__int64)a1[1];
  v3 = *a1;
  v4 = &a1[2][v2 >> 1];
  if ( (v2 & 1) != 0 )
    v3 = *(char **)&v3[*(_QWORD *)v4];
  return ((__int64 (__fastcall *)(char *, _QWORD))v3)(v4, a2 & 1);
}

