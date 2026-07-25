/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000252F64
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver33GenericMonsterControllerComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::GenericMonsterControllerComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000252F70 string=0x0000000000252F74 "_"
 *   insn=0x0000000000252F78 string=0x0000000000252F7C "("
 *   insn=0x0000000000252F84 string=0x0000000000252F88 ")!"
 *   insn=0x0000000000252F88 string=0x0000000000252F8C "(y"
 *   insn=0x0000000000252F8C string=0x0000000000252F90 ""
 *   insn=0x0000000000252F94 string=0x0000000000252FC8 "h"
 *   insn=0x0000000000252F9C string=0x0000000000252FF4 "h"
 *   insn=0x0000000000252FA0 string=0x0000000000252FA4 ""
 *   insn=0x0000000000252FB0 string=0x0000000000252FB4 "h"
 *   insn=0x0000000000252FC0 string=0x0000000000252FC4 ""
 *   insn=0x0000000000252FCC string=0x0000000000252FD0 ""
 *   insn=0x0000000000252FD4 string=0x0000000000252FD8 "*"
 *   insn=0x0000000000252FD8 string=0x0000000000252FDC "!LE"
 *   insn=0x0000000000252FDC string=0x0000000000252FE0 "_"
 *   insn=0x0000000000252FDC string=0x0000000000586BA0 "PFPN5Caver33GenericMonsterControllerComponentEvE"
 *   insn=0x0000000000252FE0 string=0x0000000000252FE4 " "
 *   insn=0x0000000000252FE4 string=0x0000000000252FE8 "N"
 *   insn=0x0000000000252FE8 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::GenericMonsterControllerComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver33GenericMonsterControllerComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::GenericMonsterControllerComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

