/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F9678
 * Mangled: _ZN5boost6detail8function15functor_managerINS_3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver19AttributePointsViewEPvPNS7_8GUIEventEEENS3_5list3INS3_5valueIPS8_EENS_3argILi1EEENSH_ILi2EEEEEEEE6manageERKNS1_15function_bufferERSN_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::AttributePointsView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::AttributePointsView*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x00000000003F8BE4  Caver::AttributePointsView::UpdateSprite(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 19
 *   insn=0x00000000003F9684 string=0x00000000003F9688 "_"
 *   insn=0x00000000003F9690 string=0x00000000003F9694 "h"
 *   insn=0x00000000003F9690 string=0x00000000003F96A8 "_"
 *   insn=0x00000000003F9694 string=0x00000000003F9698 ""
 *   insn=0x00000000003F969C string=0x00000000003F96A0 "h"
 *   insn=0x00000000003F96AC string=0x00000000003F96C4 "_"
 *   insn=0x00000000003F96B0 string=0x00000000003F96B4 "h\n"
 *   insn=0x00000000003F96B8 string=0x00000000003F96BC "`"
 *   insn=0x00000000003F96C8 string=0x00000000003F96CC "_"
 *   insn=0x00000000003F96CC string=0x00000000003F96D0 "!"
 *   insn=0x00000000003F96D0 string=0x00000000003F96D4 "h"
 *   insn=0x00000000003F96D4 string=0x00000000003F96D8 "a"
 *   insn=0x00000000003F96D8 string=0x00000000003F96DC ""
 *   insn=0x00000000003F96E0 string=0x00000000003F96E4 "*"
 *   insn=0x00000000003F96E4 string=0x00000000003F96E8 "!"
 *   insn=0x00000000003F96E8 string=0x00000000003F96EC "_"
 *   insn=0x00000000003F96E8 string=0x0000000000593890 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver19AttributePointsViewEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x00000000003F96EC string=0x00000000003F96F0 " "
 *   insn=0x00000000003F96F4 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::AttributePointsView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::AttributePointsView*>,boost::arg<1>,boost::arg<2>>>>::manage(
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
                "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver19AttributePointsViewEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueI"
                "PS5_EENS_3argILi1EEENSE_ILi2EEEEEEE") )
          v5 = (__int64 **)a1;
        else
          v5 = 0;
        goto LABEL_3;
      }
LABEL_2:
      v5 = &`typeinfo for'boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::AttributePointsView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::AttributePointsView*>,boost::arg<1>,boost::arg<2>>>;
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

