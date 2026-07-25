/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000368A38
 * Mangled: _ZN5boost6detail8function15functor_managerINS_3_bi6bind_tIvNS_4_mfi3mf3IvN5Caver27GuidePurchaseViewControllerERKSsRKNS_10shared_ptrINS7_12StoreProductEEESA_EENS3_5list4INS3_5valueIPS8_EENS_3argILi1EEENSL_ILi2EEENSL_ILi3EEEEEEEE6manageERKNS1_15function_bufferERSS_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GuidePurchaseViewController,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::GuidePurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 2
 *   0x00000000003656F4  Caver::GuidePurchaseViewController::LoadView(void)
 *   0x0000000000368994  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> const&)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 17
 *   insn=0x0000000000368A44 string=0x0000000000368A48 "_"
 *   insn=0x0000000000368A50 string=0x0000000000368A68 "_"
 *   insn=0x0000000000368A54 string=0x0000000000368A58 "uE"
 *   insn=0x0000000000368A5C string=0x0000000000368A60 "h"
 *   insn=0x0000000000368A6C string=0x0000000000368A84 "_"
 *   insn=0x0000000000368A70 string=0x0000000000368A74 "h\n"
 *   insn=0x0000000000368A78 string=0x0000000000368A7C "`"
 *   insn=0x0000000000368A88 string=0x0000000000368A8C "_"
 *   insn=0x0000000000368A8C string=0x0000000000368A90 "!"
 *   insn=0x0000000000368A90 string=0x0000000000368A94 "h"
 *   insn=0x0000000000368A98 string=0x0000000000368A9C ""
 *   insn=0x0000000000368AA0 string=0x0000000000368AA4 "*"
 *   insn=0x0000000000368AA4 string=0x0000000000368AA8 "!F"
 *   insn=0x0000000000368AA8 string=0x0000000000368AAC "_"
 *   insn=0x0000000000368AA8 string=0x000000000058F870 "N5boost3_bi6bind_tIvNS_4_mfi3mf3IvN5Caver27GuidePurchaseViewControllerERKSsRKNS_10shared_ptrINS4_12StoreProductEEES7_EENS0_5list4INS0_5valueIPS5_EENS_3argILi..."
 *   insn=0x0000000000368AAC string=0x0000000000368AB0 " "
 *   insn=0x0000000000368AB4 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GuidePurchaseViewController,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::GuidePurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>>::manage(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 **v5; // x8
  long double result; // q0
  unsigned __int8 *v7; // x9
  const char *v8; // x9
  int v9; // t1
  const char *v10; // x0

  if ( a3 == 4 )
    goto LABEL_2;
  if ( a3 > 1 )
  {
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
      {
        v7 = *(unsigned __int8 **)(*(_QWORD *)a2 + 8LL);
        v9 = *v7;
        v8 = (const char *)(v7 + 1);
        if ( v9 == 42 )
          v10 = v8;
        else
          v10 = *(const char **)(*(_QWORD *)a2 + 8LL);
        if ( !strcmp(
                v10,
                "N5boost3_bi6bind_tIvNS_4_mfi3mf3IvN5Caver27GuidePurchaseViewControllerERKSsRKNS_10shared_ptrINS4_12Store"
                "ProductEEES7_EENS0_5list4INS0_5valueIPS5_EENS_3argILi1EEENSI_ILi2EEENSI_ILi3EEEEEEE") )
          v5 = (__int64 **)a1;
        else
          v5 = 0;
        goto LABEL_3;
      }
LABEL_2:
      v5 = &`typeinfo for'boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GuidePurchaseViewController,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::GuidePurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>;
      *(_WORD *)(a2 + 8) = 0;
LABEL_3:
      *(_QWORD *)a2 = v5;
    }
  }
  else
  {
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
    result = *(long double *)a1;
    *(_OWORD *)a2 = *(_OWORD *)a1;
  }
  return result;
}

