/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E2A5C
 * Mangled: _ZN5boost6detail8function15functor_managerINS_3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver17OverlayMenuButtonEPvPNS7_8GUIEventEEENS3_5list3INS3_5valueIPS8_EENS_3argILi1EEENSH_ILi2EEEEEEEE6manageERKNS1_15function_bufferERSN_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OverlayMenuButton,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OverlayMenuButton*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 2
 *   0x00000000003E1704  Caver::OverlayMenuButton::FadeOutAnimationFinished(void *,Caver::GUIEvent *)
 *   0x00000000003E1EC0  Caver::OverlayMenuButton::FadeInAnimationFinished(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 19
 *   insn=0x00000000003E2A68 string=0x00000000003E2A6C "_"
 *   insn=0x00000000003E2A74 string=0x00000000003E2A78 "("
 *   insn=0x00000000003E2A74 string=0x00000000003E2A8C "_"
 *   insn=0x00000000003E2A78 string=0x00000000003E2A7C ""
 *   insn=0x00000000003E2A80 string=0x00000000003E2A84 "h"
 *   insn=0x00000000003E2A90 string=0x00000000003E2AA8 "_"
 *   insn=0x00000000003E2A94 string=0x00000000003E2A98 "h\n"
 *   insn=0x00000000003E2A9C string=0x00000000003E2AA0 "`"
 *   insn=0x00000000003E2AAC string=0x00000000003E2AB0 "_"
 *   insn=0x00000000003E2AB0 string=0x00000000003E2AB4 "!"
 *   insn=0x00000000003E2AB4 string=0x00000000003E2AB8 "h"
 *   insn=0x00000000003E2AB8 string=0x00000000003E2ABC "!"
 *   insn=0x00000000003E2ABC string=0x00000000003E2AC0 ""
 *   insn=0x00000000003E2AC4 string=0x00000000003E2AC8 "*"
 *   insn=0x00000000003E2AC8 string=0x00000000003E2ACC "!lE"
 *   insn=0x00000000003E2ACC string=0x00000000003E2AD0 "_"
 *   insn=0x00000000003E2ACC string=0x0000000000592B70 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver17OverlayMenuButtonEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x00000000003E2AD0 string=0x00000000003E2AD4 " "
 *   insn=0x00000000003E2AD8 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OverlayMenuButton,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OverlayMenuButton*>,boost::arg<1>,boost::arg<2>>>>::manage(
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
                "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver17OverlayMenuButtonEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS"
                "5_EENS_3argILi1EEENSE_ILi2EEEEEEE") )
          v5 = (__int64 **)a1;
        else
          v5 = 0;
        goto LABEL_3;
      }
LABEL_2:
      v5 = &`typeinfo for'boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OverlayMenuButton,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OverlayMenuButton*>,boost::arg<1>,boost::arg<2>>>;
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

