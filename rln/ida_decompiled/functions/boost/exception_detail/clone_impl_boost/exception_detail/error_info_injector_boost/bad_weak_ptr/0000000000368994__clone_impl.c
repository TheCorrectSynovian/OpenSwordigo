/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000368994
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEEC2ERKS5_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> const&)
 *
 * Callers: 1
 *   0x00000000001FC270  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> const&)
 *
 * Callees: 3
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000368A38  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GuidePurchaseViewController,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::GuidePurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x00000000003689A0 string=0x00000000003689A4 ""
 *   insn=0x00000000003689A8 string=0x00000000003689AC ")"
 *   insn=0x00000000003689B0 string=0x00000000003689B4 "A"
 *   insn=0x00000000003689B8 string=0x00000000003689BC "(A"
 *   insn=0x00000000003689C4 string=0x00000000003689C8 "`"
 *   insn=0x00000000003689CC string=0x00000000003689D0 "`\n"
 *   insn=0x00000000003689D4 string=0x00000000003689D8 ""
 *   insn=0x00000000003689D8 string=0x00000000003689DC "@"
 *   insn=0x00000000003689E8 string=0x00000000003689EC ")1G"
 *   insn=0x00000000003689EC string=0x00000000003689F0 "h*"
 *   insn=0x00000000003689F4 string=0x00000000003689F8 "*A"
 *   insn=0x00000000003689F8 string=0x00000000003689FC "+!"
 *   insn=0x00000000003689FC string=0x0000000000368A00 "A"
 *   insn=0x0000000000368A00 string=0x0000000000368A04 "("
 *   insn=0x0000000000368A04 string=0x0000000000368A08 "a"
 *   insn=0x0000000000368A08 string=0x0000000000368A0C "a"
 *   insn=0x0000000000368A0C string=0x0000000000368A10 "`"
 *   insn=0x0000000000368A10 string=0x0000000000368A14 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl(
        __int64 a1,
        __int64 a2)
{
  __int128 v3; // q0
  __int64 v5; // x0
  long double result; // q0
  __int128 v7; // q1

  *(_QWORD *)&v3 = off_6CC4E8;
  *((_QWORD *)&v3 + 1) = off_6BC9E0;
  *(_OWORD *)a1 = v3;
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  result = *(long double *)(a2 + 24);
  *(_QWORD *)&v7 = off_6CC418;
  *((_QWORD *)&v7 + 1) = off_6CC450;
  *(_OWORD *)a1 = v7;
  *(long double *)(a1 + 24) = result;
  *(_QWORD *)(a1 + 48) = &off_6CC470;
  return result;
}

