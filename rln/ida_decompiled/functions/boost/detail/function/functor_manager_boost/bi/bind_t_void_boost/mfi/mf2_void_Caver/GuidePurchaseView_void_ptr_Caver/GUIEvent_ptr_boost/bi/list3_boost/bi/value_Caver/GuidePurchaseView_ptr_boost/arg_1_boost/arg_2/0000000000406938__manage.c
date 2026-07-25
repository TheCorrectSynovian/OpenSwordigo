/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000406938
 * Mangled: _ZN5boost6detail8function15functor_managerINS_3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver17GuidePurchaseViewEPvPNS7_8GUIEventEEENS3_5list3INS3_5valueIPS8_EENS_3argILi1EEENSH_ILi2EEEEEEEE6manageERKNS1_15function_bufferERSN_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GuidePurchaseView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::GuidePurchaseView*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000406900  Caver::GuidePurchaseView::~GuidePurchaseView()
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 17
 *   insn=0x0000000000406944 string=0x0000000000406948 "_"
 *   insn=0x0000000000406950 string=0x0000000000406968 "_"
 *   insn=0x0000000000406954 string=0x0000000000406958 "aF"
 *   insn=0x000000000040695C string=0x0000000000406960 "h"
 *   insn=0x000000000040696C string=0x0000000000406984 "_"
 *   insn=0x0000000000406970 string=0x0000000000406974 "h\n"
 *   insn=0x0000000000406978 string=0x000000000040697C "`"
 *   insn=0x0000000000406988 string=0x000000000040698C "_"
 *   insn=0x000000000040698C string=0x0000000000406990 "!"
 *   insn=0x0000000000406990 string=0x0000000000406994 "h"
 *   insn=0x0000000000406998 string=0x000000000040699C ""
 *   insn=0x00000000004069A0 string=0x00000000004069A4 "*"
 *   insn=0x00000000004069A4 string=0x00000000004069A8 "!"
 *   insn=0x00000000004069A8 string=0x00000000004069AC "_"
 *   insn=0x00000000004069A8 string=0x0000000000593D60 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver17GuidePurchaseViewEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x00000000004069AC string=0x00000000004069B0 " "
 *   insn=0x00000000004069B4 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GuidePurchaseView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::GuidePurchaseView*>,boost::arg<1>,boost::arg<2>>>>::manage(
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
                "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver17GuidePurchaseViewEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS"
                "5_EENS_3argILi1EEENSE_ILi2EEEEEEE") )
          v5 = (__int64 **)a1;
        else
          v5 = 0;
        goto LABEL_3;
      }
LABEL_2:
      v5 = &`typeinfo for'boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GuidePurchaseView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::GuidePurchaseView*>,boost::arg<1>,boost::arg<2>>>;
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

