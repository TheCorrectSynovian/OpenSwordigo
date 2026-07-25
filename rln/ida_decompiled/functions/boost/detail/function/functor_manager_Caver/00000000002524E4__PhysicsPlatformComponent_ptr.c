/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002524E4
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver24PhysicsPlatformComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::PhysicsPlatformComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 17
 *   insn=0x00000000002524F0 string=0x00000000002524F4 "_"
 *   insn=0x00000000002524F8 string=0x00000000002524FC "("
 *   insn=0x0000000000252504 string=0x0000000000252508 ")!"
 *   insn=0x0000000000252508 string=0x000000000025250C "(y"
 *   insn=0x000000000025250C string=0x0000000000252510 ""
 *   insn=0x0000000000252514 string=0x0000000000252548 "h"
 *   insn=0x000000000025251C string=0x0000000000252574 "h"
 *   insn=0x0000000000252520 string=0x0000000000252524 ""
 *   insn=0x0000000000252530 string=0x0000000000252534 "h"
 *   insn=0x0000000000252540 string=0x0000000000252544 ""
 *   insn=0x000000000025254C string=0x0000000000252550 ""
 *   insn=0x0000000000252554 string=0x0000000000252558 "*"
 *   insn=0x0000000000252558 string=0x000000000025255C "!`F"
 *   insn=0x000000000025255C string=0x0000000000252560 "_"
 *   insn=0x000000000025255C string=0x0000000000586520 "PFPN5Caver24PhysicsPlatformComponentEvE"
 *   insn=0x0000000000252560 string=0x0000000000252564 " "
 *   insn=0x0000000000252568 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::PhysicsPlatformComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver24PhysicsPlatformComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::PhysicsPlatformComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

