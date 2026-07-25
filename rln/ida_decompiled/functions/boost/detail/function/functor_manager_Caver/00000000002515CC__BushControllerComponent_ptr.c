/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002515CC
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver23BushControllerComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::BushControllerComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 17
 *   insn=0x00000000002515D8 string=0x00000000002515DC "_"
 *   insn=0x00000000002515E0 string=0x00000000002515E4 "("
 *   insn=0x00000000002515EC string=0x00000000002515F0 ")"
 *   insn=0x00000000002515F0 string=0x00000000002515F4 "(y"
 *   insn=0x00000000002515F4 string=0x00000000002515F8 ""
 *   insn=0x00000000002515FC string=0x0000000000251630 "h"
 *   insn=0x0000000000251604 string=0x000000000025165C "h"
 *   insn=0x0000000000251608 string=0x000000000025160C "@"
 *   insn=0x0000000000251618 string=0x000000000025161C "h"
 *   insn=0x0000000000251628 string=0x000000000025162C ""
 *   insn=0x0000000000251634 string=0x0000000000251638 ""
 *   insn=0x000000000025163C string=0x0000000000251640 "*"
 *   insn=0x0000000000251640 string=0x0000000000251644 "!"
 *   insn=0x0000000000251644 string=0x0000000000251648 "_"
 *   insn=0x0000000000251644 string=0x0000000000585CD0 "PFPN5Caver23BushControllerComponentEvE"
 *   insn=0x0000000000251648 string=0x000000000025164C " "
 *   insn=0x0000000000251650 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::BushControllerComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver23BushControllerComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::BushControllerComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

