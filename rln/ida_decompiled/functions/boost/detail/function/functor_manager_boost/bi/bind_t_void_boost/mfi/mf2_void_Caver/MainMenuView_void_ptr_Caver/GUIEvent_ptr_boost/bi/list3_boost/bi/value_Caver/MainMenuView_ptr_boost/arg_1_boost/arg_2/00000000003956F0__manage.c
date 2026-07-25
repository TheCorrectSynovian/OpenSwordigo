/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003956F0
 * Mangled: _ZN5boost6detail8function15functor_managerINS_3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver12MainMenuViewEPvPNS7_8GUIEventEEENS3_5list3INS3_5valueIPS8_EENS_3argILi1EEENSH_ILi2EEEEEEEE6manageERKNS1_15function_bufferERSN_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::MainMenuView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::MainMenuView*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 20
 *   insn=0x00000000003956FC string=0x0000000000395700 "_"
 *   insn=0x0000000000395708 string=0x000000000039570C "h"
 *   insn=0x0000000000395708 string=0x0000000000395720 "_"
 *   insn=0x000000000039570C string=0x0000000000395710 ""
 *   insn=0x0000000000395714 string=0x0000000000395718 "h"
 *   insn=0x0000000000395724 string=0x000000000039573C "_"
 *   insn=0x0000000000395728 string=0x000000000039572C "h\n"
 *   insn=0x0000000000395730 string=0x0000000000395734 "`"
 *   insn=0x0000000000395740 string=0x0000000000395744 "_"
 *   insn=0x0000000000395744 string=0x0000000000395748 "!"
 *   insn=0x0000000000395748 string=0x000000000039574C "h"
 *   insn=0x000000000039574C string=0x0000000000395750 "a"
 *   insn=0x0000000000395750 string=0x0000000000395754 ""
 *   insn=0x0000000000395758 string=0x000000000039575C "*"
 *   insn=0x000000000039575C string=0x0000000000395760 "!"
 *   insn=0x0000000000395760 string=0x0000000000395764 "_"
 *   insn=0x0000000000395760 string=0x0000000000591120 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver12MainMenuViewEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x0000000000395764 string=0x0000000000395768 " "
 *   insn=0x0000000000395768 string=0x000000000039576C "m"
 *   insn=0x000000000039576C string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::MainMenuView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::MainMenuView*>,boost::arg<1>,boost::arg<2>>>>::manage(
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
                "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver12MainMenuViewEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EEN"
                "S_3argILi1EEENSE_ILi2EEEEEEE") )
          v5 = (__int64 **)a1;
        else
          v5 = 0;
        goto LABEL_3;
      }
LABEL_2:
      v5 = &`typeinfo for'boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::MainMenuView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::MainMenuView*>,boost::arg<1>,boost::arg<2>>>;
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

