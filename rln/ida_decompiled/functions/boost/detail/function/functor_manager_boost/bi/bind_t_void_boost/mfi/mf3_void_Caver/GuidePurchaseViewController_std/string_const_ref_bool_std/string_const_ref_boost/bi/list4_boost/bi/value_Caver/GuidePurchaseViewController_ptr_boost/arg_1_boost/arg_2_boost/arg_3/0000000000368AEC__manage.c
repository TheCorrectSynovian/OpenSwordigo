/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000368AEC
 * Mangled: _ZN5boost6detail8function15functor_managerINS_3_bi6bind_tIvNS_4_mfi3mf3IvN5Caver27GuidePurchaseViewControllerERKSsbSA_EENS3_5list4INS3_5valueIPS8_EENS_3argILi1EEENSG_ILi2EEENSG_ILi3EEEEEEEE6manageERKNS1_15function_bufferERSN_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GuidePurchaseViewController,std::string const&,bool,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::GuidePurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000366570  Caver::GuidePurchaseViewController::SetRestoreButtonEnabled(bool)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000368AF8 string=0x0000000000368AFC "_"
 *   insn=0x0000000000368B04 string=0x0000000000368B1C "_"
 *   insn=0x0000000000368B08 string=0x0000000000368B0C "YE"
 *   insn=0x0000000000368B10 string=0x0000000000368B14 "h"
 *   insn=0x0000000000368B20 string=0x0000000000368B38 "_"
 *   insn=0x0000000000368B24 string=0x0000000000368B28 "h\n"
 *   insn=0x0000000000368B2C string=0x0000000000368B30 "`"
 *   insn=0x0000000000368B3C string=0x0000000000368B40 "_"
 *   insn=0x0000000000368B40 string=0x0000000000368B44 "!"
 *   insn=0x0000000000368B44 string=0x0000000000368B48 "h"
 *   insn=0x0000000000368B4C string=0x0000000000368B50 ""
 *   insn=0x0000000000368B54 string=0x0000000000368B58 "*"
 *   insn=0x0000000000368B58 string=0x0000000000368B5C "!"
 *   insn=0x0000000000368B5C string=0x0000000000368B60 "_"
 *   insn=0x0000000000368B5C string=0x000000000058F930 "N5boost3_bi6bind_tIvNS_4_mfi3mf3IvN5Caver27GuidePurchaseViewControllerERKSsbS7_EENS0_5list4INS0_5valueIPS5_EENS_3argILi1EEENSD_ILi2EEENSD_ILi3EEEEEEE"
 *   insn=0x0000000000368B60 string=0x0000000000368B64 " "
 *   insn=0x0000000000368B64 string=0x0000000000368B68 "nE"
 *   insn=0x0000000000368B68 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GuidePurchaseViewController,std::string const&,bool,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::GuidePurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>>::manage(
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
                "N5boost3_bi6bind_tIvNS_4_mfi3mf3IvN5Caver27GuidePurchaseViewControllerERKSsbS7_EENS0_5list4INS0_5valueIP"
                "S5_EENS_3argILi1EEENSD_ILi2EEENSD_ILi3EEEEEEE") )
          v5 = (__int64 **)a1;
        else
          v5 = 0;
        goto LABEL_3;
      }
LABEL_2:
      v5 = &`typeinfo for'boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GuidePurchaseViewController,std::string const&,bool,std::string const&>,boost::_bi::list4<boost::_bi::value<Caver::GuidePurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>;
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

