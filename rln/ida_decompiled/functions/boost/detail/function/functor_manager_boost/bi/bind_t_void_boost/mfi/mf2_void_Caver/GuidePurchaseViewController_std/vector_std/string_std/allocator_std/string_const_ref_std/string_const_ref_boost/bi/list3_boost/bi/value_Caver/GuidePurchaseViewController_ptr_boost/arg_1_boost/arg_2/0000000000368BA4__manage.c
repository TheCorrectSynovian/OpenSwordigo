/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000368BA4
 * Mangled: _ZN5boost6detail8function15functor_managerINS_3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver27GuidePurchaseViewControllerERKSt6vectorISsSaISsEERKSsEENS3_5list3INS3_5valueIPS8_EENS_3argILi1EEENSL_ILi2EEEEEEEE6manageERKNS1_15function_bufferERSR_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GuidePurchaseViewController,std::vector<std::string,std::allocator<std::string>> const&,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::GuidePurchaseViewController*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x00000000003671C8  Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000368BB0 string=0x0000000000368BB4 "_"
 *   insn=0x0000000000368BBC string=0x0000000000368BD4 "_"
 *   insn=0x0000000000368BC0 string=0x0000000000368BC4 ""
 *   insn=0x0000000000368BC8 string=0x0000000000368BCC "h"
 *   insn=0x0000000000368BD8 string=0x0000000000368BF0 "_"
 *   insn=0x0000000000368BDC string=0x0000000000368BE0 "h\n"
 *   insn=0x0000000000368BE4 string=0x0000000000368BE8 "`"
 *   insn=0x0000000000368BF4 string=0x0000000000368BF8 "_"
 *   insn=0x0000000000368BF8 string=0x0000000000368BFC "!"
 *   insn=0x0000000000368BFC string=0x0000000000368C00 "h"
 *   insn=0x0000000000368C04 string=0x0000000000368C08 ""
 *   insn=0x0000000000368C0C string=0x0000000000368C10 "*"
 *   insn=0x0000000000368C10 string=0x0000000000368C14 "!"
 *   insn=0x0000000000368C14 string=0x0000000000368C18 "_"
 *   insn=0x0000000000368C14 string=0x000000000058F9D0 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver27GuidePurchaseViewControllerERKSt6vectorISsSaISsEERKSsEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSI_ILi2EEEEEEE"
 *   insn=0x0000000000368C18 string=0x0000000000368C1C " "
 *   insn=0x0000000000368C1C string=0x0000000000368C20 "@E"
 *   insn=0x0000000000368C20 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GuidePurchaseViewController,std::vector<std::string> const&,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::GuidePurchaseViewController*>,boost::arg<1>,boost::arg<2>>>>::manage(
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
                "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver27GuidePurchaseViewControllerERKSt6vectorISsSaISsEERKSsEENS0_5l"
                "ist3INS0_5valueIPS5_EENS_3argILi1EEENSI_ILi2EEEEEEE") )
          v5 = (__int64 **)a1;
        else
          v5 = 0;
        goto LABEL_3;
      }
LABEL_2:
      v5 = &`typeinfo for'boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GuidePurchaseViewController,std::vector<std::string> const&,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::GuidePurchaseViewController*>,boost::arg<1>,boost::arg<2>>>;
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

