/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002522EC
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver19WeaponGlowComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::WeaponGlowComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x00000000002522F8 string=0x00000000002522FC "_"
 *   insn=0x0000000000252300 string=0x0000000000252304 "("
 *   insn=0x000000000025230C string=0x0000000000252310 ")1"
 *   insn=0x0000000000252310 string=0x0000000000252314 "(y"
 *   insn=0x0000000000252314 string=0x0000000000252318 ""
 *   insn=0x000000000025231C string=0x0000000000252350 "h"
 *   insn=0x0000000000252324 string=0x000000000025237C "h"
 *   insn=0x0000000000252328 string=0x000000000025232C ""
 *   insn=0x0000000000252338 string=0x000000000025233C "h"
 *   insn=0x0000000000252348 string=0x000000000025234C ""
 *   insn=0x0000000000252354 string=0x0000000000252358 ""
 *   insn=0x000000000025235C string=0x0000000000252360 "*"
 *   insn=0x0000000000252360 string=0x0000000000252364 "!8F"
 *   insn=0x0000000000252364 string=0x0000000000252368 "_"
 *   insn=0x0000000000252364 string=0x0000000000586420 "PFPN5Caver19WeaponGlowComponentEvE"
 *   insn=0x0000000000252368 string=0x000000000025236C " "
 *   insn=0x000000000025236C string=0x0000000000252370 "l"
 *   insn=0x0000000000252370 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::WeaponGlowComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver19WeaponGlowComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::WeaponGlowComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

