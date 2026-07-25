/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000252394
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver14LightComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::LightComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x00000000002523A0 string=0x00000000002523A4 "_"
 *   insn=0x00000000002523A8 string=0x00000000002523AC "("
 *   insn=0x00000000002523B4 string=0x00000000002523B8 ")"
 *   insn=0x00000000002523B8 string=0x00000000002523BC "(y"
 *   insn=0x00000000002523BC string=0x00000000002523C0 ""
 *   insn=0x00000000002523C4 string=0x00000000002523F8 "h"
 *   insn=0x00000000002523CC string=0x0000000000252424 "h"
 *   insn=0x00000000002523D0 string=0x00000000002523D4 "]C"
 *   insn=0x00000000002523E0 string=0x00000000002523E4 "h"
 *   insn=0x00000000002523F0 string=0x00000000002523F4 ""
 *   insn=0x00000000002523FC string=0x0000000000252400 ""
 *   insn=0x0000000000252404 string=0x0000000000252408 "*"
 *   insn=0x0000000000252408 string=0x000000000025240C "!"
 *   insn=0x000000000025240C string=0x0000000000252410 "_"
 *   insn=0x000000000025240C string=0x0000000000586480 "PFPN5Caver14LightComponentEvE"
 *   insn=0x0000000000252410 string=0x0000000000252414 " "
 *   insn=0x0000000000252414 string=0x0000000000252418 "B"
 *   insn=0x0000000000252418 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::LightComponent * (*)(void)>::manage(
        void (__fastcall ***result)(__cxxabiv1::__pointer_type_info *__hidden this),
        _WORD *a2,
        int a3))(__cxxabiv1::__pointer_type_info *__hidden this)
{
  void (__fastcall **v4)(__cxxabiv1::__pointer_type_info *__hidden); // x20
  void (__fastcall **v5)(__cxxabiv1::__pointer_type_info *__hidden); // x8
  unsigned __int8 *v6; // x9
  const char *v7; // x9
  int v8; // t1
  const char *v9; // x0

  v4 = (void (__fastcall **)(__cxxabiv1::__pointer_type_info *__hidden))result;
  switch ( a3 )
  {
    case 0:
      v5 = *result;
      goto LABEL_12;
    case 1:
      *(_QWORD *)a2 = *result;
      *result = 0;
      return result;
    case 2:
      *(_QWORD *)a2 = 0;
      return result;
    case 3:
      v6 = *(unsigned __int8 **)(*(_QWORD *)a2 + 8LL);
      v8 = *v6;
      v7 = (const char *)(v6 + 1);
      if ( v8 == 42 )
        v9 = v7;
      else
        v9 = *(const char **)(*(_QWORD *)a2 + 8LL);
      result = (void (__fastcall ***)(__cxxabiv1::__pointer_type_info *__hidden))strcmp(
                                                                                   v9,
                                                                                   "PFPN5Caver14LightComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::LightComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

