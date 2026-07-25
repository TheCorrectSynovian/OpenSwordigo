/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000251FA4
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver15HealthComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::HealthComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 19
 *   insn=0x0000000000251FB0 string=0x0000000000251FB4 "_"
 *   insn=0x0000000000251FB8 string=0x0000000000251FBC "("
 *   insn=0x0000000000251FC0 string=0x0000000000584FA8 "0"
 *   insn=0x0000000000251FC4 string=0x0000000000251FC8 ")"
 *   insn=0x0000000000251FC8 string=0x0000000000251FCC "(y"
 *   insn=0x0000000000251FCC string=0x0000000000251FD0 ""
 *   insn=0x0000000000251FD4 string=0x0000000000252008 "h"
 *   insn=0x0000000000251FDC string=0x0000000000252034 "h"
 *   insn=0x0000000000251FE0 string=0x0000000000251FE4 ""
 *   insn=0x0000000000251FF0 string=0x0000000000251FF4 "h"
 *   insn=0x0000000000252000 string=0x0000000000252004 ""
 *   insn=0x000000000025200C string=0x0000000000252010 ""
 *   insn=0x0000000000252014 string=0x0000000000252018 "*"
 *   insn=0x0000000000252018 string=0x000000000025201C "! C"
 *   insn=0x000000000025201C string=0x0000000000252020 "_"
 *   insn=0x000000000025201C string=0x0000000000586260 "PFPN5Caver15HealthComponentEvE"
 *   insn=0x0000000000252020 string=0x0000000000252024 " "
 *   insn=0x0000000000252024 string=0x0000000000252028 ">"
 *   insn=0x0000000000252028 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::HealthComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver15HealthComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::HealthComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

