/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E4F04
 * Mangled: _ZN5boost6detail8function15functor_managerINS_3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver11TargetFrameEPvPNS7_8GUIEventEEENS3_5list3INS3_5valueIPS8_EENS_3argILi1EEENSH_ILi2EEEEEEEE6manageERKNS1_15function_bufferERSN_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::TargetFrame,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::TargetFrame*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 2
 *   0x00000000003E4378  Caver::TargetFrame::Update(float)
 *   0x00000000003E4C7C  Caver::TargetFrame::~TargetFrame()
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 19
 *   insn=0x00000000003E4F10 string=0x00000000003E4F14 "_"
 *   insn=0x00000000003E4F1C string=0x00000000003E4F20 ""
 *   insn=0x00000000003E4F1C string=0x00000000003E4F34 "_"
 *   insn=0x00000000003E4F20 string=0x00000000003E4F24 "AC"
 *   insn=0x00000000003E4F28 string=0x00000000003E4F2C "h"
 *   insn=0x00000000003E4F38 string=0x00000000003E4F50 "_"
 *   insn=0x00000000003E4F3C string=0x00000000003E4F40 "h\n"
 *   insn=0x00000000003E4F44 string=0x00000000003E4F48 "`"
 *   insn=0x00000000003E4F54 string=0x00000000003E4F58 "_"
 *   insn=0x00000000003E4F58 string=0x00000000003E4F5C "!"
 *   insn=0x00000000003E4F5C string=0x00000000003E4F60 "h"
 *   insn=0x00000000003E4F64 string=0x00000000003E4F68 ""
 *   insn=0x00000000003E4F6C string=0x00000000003E4F70 "*"
 *   insn=0x00000000003E4F70 string=0x00000000003E4F74 "!"
 *   insn=0x00000000003E4F74 string=0x00000000003E4F78 "_"
 *   insn=0x00000000003E4F74 string=0x0000000000592C50 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver11TargetFrameEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x00000000003E4F78 string=0x00000000003E4F7C " "
 *   insn=0x00000000003E4F7C string=0x00000000003E4F80 "hT"
 *   insn=0x00000000003E4F80 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::TargetFrame,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::TargetFrame*>,boost::arg<1>,boost::arg<2>>>>::manage(
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
                "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver11TargetFrameEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS"
                "_3argILi1EEENSE_ILi2EEEEEEE") )
          v5 = (__int64 **)a1;
        else
          v5 = 0;
        goto LABEL_3;
      }
LABEL_2:
      v5 = &`typeinfo for'boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::TargetFrame,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::TargetFrame*>,boost::arg<1>,boost::arg<2>>>;
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

