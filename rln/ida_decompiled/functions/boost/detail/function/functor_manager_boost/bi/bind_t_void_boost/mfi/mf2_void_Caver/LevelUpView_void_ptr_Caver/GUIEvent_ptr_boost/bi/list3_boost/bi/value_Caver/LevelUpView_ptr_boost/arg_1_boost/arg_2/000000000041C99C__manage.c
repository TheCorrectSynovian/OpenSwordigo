/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041C99C
 * Mangled: _ZN5boost6detail8function15functor_managerINS_3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver11LevelUpViewEPvPNS7_8GUIEventEEENS3_5list3INS3_5valueIPS8_EENS_3argILi1EEENSH_ILi2EEEEEEEE6manageERKNS1_15function_bufferERSN_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::LevelUpView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::LevelUpView*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x000000000041C7D4  Caver::LevelUpView::~LevelUpView()
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 19
 *   insn=0x000000000041C9A8 string=0x000000000041C9AC "_"
 *   insn=0x000000000041C9B4 string=0x000000000041C9B8 "H"
 *   insn=0x000000000041C9B4 string=0x000000000041C9CC "_"
 *   insn=0x000000000041C9B8 string=0x000000000041C9BC ""
 *   insn=0x000000000041C9C0 string=0x000000000041C9C4 "h"
 *   insn=0x000000000041C9D0 string=0x000000000041C9E8 "_"
 *   insn=0x000000000041C9D4 string=0x000000000041C9D8 "h\n"
 *   insn=0x000000000041C9DC string=0x000000000041C9E0 "`"
 *   insn=0x000000000041C9EC string=0x000000000041C9F0 "_"
 *   insn=0x000000000041C9F0 string=0x000000000041C9F4 "!"
 *   insn=0x000000000041C9F4 string=0x000000000041C9F8 "h"
 *   insn=0x000000000041C9F8 string=0x000000000041C9FC "A"
 *   insn=0x000000000041C9FC string=0x000000000041CA00 ""
 *   insn=0x000000000041CA04 string=0x000000000041CA08 "*"
 *   insn=0x000000000041CA08 string=0x000000000041CA0C "!,G"
 *   insn=0x000000000041CA0C string=0x000000000041CA10 "_"
 *   insn=0x000000000041CA0C string=0x0000000000594640 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver11LevelUpViewEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x000000000041CA10 string=0x000000000041CA14 " "
 *   insn=0x000000000041CA18 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::LevelUpView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::LevelUpView*>,boost::arg<1>,boost::arg<2>>>>::manage(
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
                "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver11LevelUpViewEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS"
                "_3argILi1EEENSE_ILi2EEEEEEE") )
          v5 = (__int64 **)a1;
        else
          v5 = 0;
        goto LABEL_3;
      }
LABEL_2:
      v5 = &`typeinfo for'boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::LevelUpView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::LevelUpView*>,boost::arg<1>,boost::arg<2>>>;
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

