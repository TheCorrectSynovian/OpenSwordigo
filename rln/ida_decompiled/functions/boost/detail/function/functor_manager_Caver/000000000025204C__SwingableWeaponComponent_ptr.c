/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025204C
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver24SwingableWeaponComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::SwingableWeaponComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 17
 *   insn=0x0000000000252058 string=0x000000000025205C "_"
 *   insn=0x0000000000252060 string=0x0000000000252064 "("
 *   insn=0x000000000025206C string=0x0000000000252070 ")"
 *   insn=0x0000000000252070 string=0x0000000000252074 "(y"
 *   insn=0x0000000000252074 string=0x0000000000252078 ""
 *   insn=0x000000000025207C string=0x00000000002520B0 "h"
 *   insn=0x0000000000252084 string=0x00000000002520DC "h"
 *   insn=0x0000000000252088 string=0x000000000025208C ""
 *   insn=0x0000000000252098 string=0x000000000025209C "h"
 *   insn=0x00000000002520A8 string=0x00000000002520AC ""
 *   insn=0x00000000002520B4 string=0x00000000002520B8 ""
 *   insn=0x00000000002520BC string=0x00000000002520C0 "*"
 *   insn=0x00000000002520C0 string=0x00000000002520C4 "!x@"
 *   insn=0x00000000002520C4 string=0x00000000002520C8 "_"
 *   insn=0x00000000002520C4 string=0x00000000005862A0 "PFPN5Caver24SwingableWeaponComponentEvE"
 *   insn=0x00000000002520C8 string=0x00000000002520CC " "
 *   insn=0x00000000002520D0 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::SwingableWeaponComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver24SwingableWeaponComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::SwingableWeaponComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

