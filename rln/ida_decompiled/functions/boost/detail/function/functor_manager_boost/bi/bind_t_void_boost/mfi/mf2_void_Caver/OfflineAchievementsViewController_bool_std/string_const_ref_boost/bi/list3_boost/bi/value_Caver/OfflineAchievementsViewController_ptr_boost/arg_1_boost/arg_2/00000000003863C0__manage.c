/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003863C0
 * Mangled: _ZN5boost6detail8function15functor_managerINS_3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver33OfflineAchievementsViewControllerEbRKSsEENS3_5list3INS3_5valueIPS8_EENS_3argILi1EEENSG_ILi2EEEEEEEE6manageERKNS1_15function_bufferERSM_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OfflineAchievementsViewController,bool,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::OfflineAchievementsViewController*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000385748  Caver::OfflineAchievementsViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 19
 *   insn=0x00000000003863CC string=0x00000000003863D0 "_"
 *   insn=0x00000000003863D8 string=0x00000000003863DC ""
 *   insn=0x00000000003863D8 string=0x00000000003863F0 "_"
 *   insn=0x00000000003863DC string=0x00000000003863E0 "YB"
 *   insn=0x00000000003863E4 string=0x00000000003863E8 "h"
 *   insn=0x00000000003863F4 string=0x000000000038640C "_"
 *   insn=0x00000000003863F8 string=0x00000000003863FC "h\n"
 *   insn=0x0000000000386400 string=0x0000000000386404 "`"
 *   insn=0x0000000000386410 string=0x0000000000386414 "_"
 *   insn=0x0000000000386414 string=0x0000000000386418 "!"
 *   insn=0x0000000000386418 string=0x000000000038641C "h"
 *   insn=0x0000000000386420 string=0x0000000000386424 ""
 *   insn=0x0000000000386428 string=0x000000000038642C "*"
 *   insn=0x000000000038642C string=0x0000000000386430 "!"
 *   insn=0x0000000000386430 string=0x0000000000386434 "_"
 *   insn=0x0000000000386430 string=0x0000000000590B60 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver33OfflineAchievementsViewControllerEbRKSsEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSD_ILi2EEEEEEE"
 *   insn=0x0000000000386434 string=0x0000000000386438 " "
 *   insn=0x0000000000386438 string=0x000000000038643C "9"
 *   insn=0x000000000038643C string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OfflineAchievementsViewController,bool,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::OfflineAchievementsViewController*>,boost::arg<1>,boost::arg<2>>>>::manage(
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
                "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver33OfflineAchievementsViewControllerEbRKSsEENS0_5list3INS0_5valu"
                "eIPS5_EENS_3argILi1EEENSD_ILi2EEEEEEE") )
          v5 = (__int64 **)a1;
        else
          v5 = 0;
        goto LABEL_3;
      }
LABEL_2:
      v5 = &`typeinfo for'boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OfflineAchievementsViewController,bool,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::OfflineAchievementsViewController*>,boost::arg<1>,boost::arg<2>>>;
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

