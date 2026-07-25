/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F5B18
 * Mangled: _ZN5boost6detail8function15functor_managerINS_3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver19StoreViewControllerERKSt6vectorISsSaISsEERKSsEENS3_5list3INS3_5valueIPS8_EENS_3argILi1EEENSL_ILi2EEEEEEEE6manageERKNS1_15function_bufferERSR_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::StoreViewController,std::vector<std::string,std::allocator<std::string>> const&,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::StoreViewController*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x00000000003F2524  Caver::StoreViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x00000000003F5B24 string=0x00000000003F5B28 "_"
 *   insn=0x00000000003F5B30 string=0x00000000003F5B48 "_"
 *   insn=0x00000000003F5B34 string=0x00000000003F5B38 ""
 *   insn=0x00000000003F5B3C string=0x00000000003F5B40 "h"
 *   insn=0x00000000003F5B4C string=0x00000000003F5B64 "_"
 *   insn=0x00000000003F5B50 string=0x00000000003F5B54 "h\n"
 *   insn=0x00000000003F5B58 string=0x00000000003F5B5C "`"
 *   insn=0x00000000003F5B68 string=0x00000000003F5B6C "_"
 *   insn=0x00000000003F5B6C string=0x00000000003F5B70 "!"
 *   insn=0x00000000003F5B70 string=0x00000000003F5B74 "h"
 *   insn=0x00000000003F5B78 string=0x00000000003F5B7C ""
 *   insn=0x00000000003F5B80 string=0x00000000003F5B84 "*"
 *   insn=0x00000000003F5B84 string=0x00000000003F5B88 "!"
 *   insn=0x00000000003F5B88 string=0x00000000003F5B8C "_"
 *   insn=0x00000000003F5B88 string=0x00000000005936F0 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver19StoreViewControllerERKSt6vectorISsSaISsEERKSsEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSI_ILi2EEEEEEE"
 *   insn=0x00000000003F5B8C string=0x00000000003F5B90 " "
 *   insn=0x00000000003F5B90 string=0x00000000003F5B94 "c"
 *   insn=0x00000000003F5B94 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::StoreViewController,std::vector<std::string> const&,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::StoreViewController*>,boost::arg<1>,boost::arg<2>>>>::manage(
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
                "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver19StoreViewControllerERKSt6vectorISsSaISsEERKSsEENS0_5list3INS0"
                "_5valueIPS5_EENS_3argILi1EEENSI_ILi2EEEEEEE") )
          v5 = (__int64 **)a1;
        else
          v5 = 0;
        goto LABEL_3;
      }
LABEL_2:
      v5 = &`typeinfo for'boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::StoreViewController,std::vector<std::string> const&,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::StoreViewController*>,boost::arg<1>,boost::arg<2>>>;
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

