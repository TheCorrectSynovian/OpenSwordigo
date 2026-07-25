/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EBE00
 * Mangled: _ZN5boost6detail8function15functor_managerINS_3_bi6bind_tIvNS_4_mfi3mf3IvN5Caver22PurchaseViewControllerERKSsRKNS_10shared_ptrINS7_12StoreProductEEESA_EENS3_5list4INS3_5valueIPS8_EENS_3argILi1EEENSL_ILi2EEENSL_ILi3EEEEEEEE6manageERKNS1_15function_bufferERSS_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::PurchaseViewController,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::PurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x00000000003EA4EC  Caver::PurchaseViewController::FetchProduct(std::string const&)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 17
 *   insn=0x00000000003EBE0C string=0x00000000003EBE10 "_"
 *   insn=0x00000000003EBE18 string=0x00000000003EBE30 "_"
 *   insn=0x00000000003EBE1C string=0x00000000003EBE20 "A@"
 *   insn=0x00000000003EBE24 string=0x00000000003EBE28 "h"
 *   insn=0x00000000003EBE34 string=0x00000000003EBE4C "_"
 *   insn=0x00000000003EBE38 string=0x00000000003EBE3C "h\n"
 *   insn=0x00000000003EBE40 string=0x00000000003EBE44 "`"
 *   insn=0x00000000003EBE50 string=0x00000000003EBE54 "_"
 *   insn=0x00000000003EBE54 string=0x00000000003EBE58 "!"
 *   insn=0x00000000003EBE58 string=0x00000000003EBE5C "h"
 *   insn=0x00000000003EBE60 string=0x00000000003EBE64 ""
 *   insn=0x00000000003EBE68 string=0x00000000003EBE6C "*"
 *   insn=0x00000000003EBE6C string=0x00000000003EBE70 "!\D"
 *   insn=0x00000000003EBE70 string=0x00000000003EBE74 "_"
 *   insn=0x00000000003EBE70 string=0x0000000000593100 "N5boost3_bi6bind_tIvNS_4_mfi3mf3IvN5Caver22PurchaseViewControllerERKSsRKNS_10shared_ptrINS4_12StoreProductEEES7_EENS0_5list4INS0_5valueIPS5_EENS_3argILi1EEEN..."
 *   insn=0x00000000003EBE74 string=0x00000000003EBE78 " "
 *   insn=0x00000000003EBE7C string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::PurchaseViewController,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::PurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>>::manage(
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
                "N5boost3_bi6bind_tIvNS_4_mfi3mf3IvN5Caver22PurchaseViewControllerERKSsRKNS_10shared_ptrINS4_12StoreProdu"
                "ctEEES7_EENS0_5list4INS0_5valueIPS5_EENS_3argILi1EEENSI_ILi2EEENSI_ILi3EEEEEEE") )
          v5 = (__int64 **)a1;
        else
          v5 = 0;
        goto LABEL_3;
      }
LABEL_2:
      v5 = &`typeinfo for'boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::PurchaseViewController,std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::PurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>;
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

