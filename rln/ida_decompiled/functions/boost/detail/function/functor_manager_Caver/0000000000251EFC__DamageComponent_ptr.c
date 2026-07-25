/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000251EFC
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver15DamageComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::DamageComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000251F08 string=0x0000000000251F0C "_"
 *   insn=0x0000000000251F10 string=0x0000000000251F14 "("
 *   insn=0x0000000000251F1C string=0x0000000000251F20 ")Q>"
 *   insn=0x0000000000251F20 string=0x0000000000251F24 "(y"
 *   insn=0x0000000000251F24 string=0x0000000000251F28 ""
 *   insn=0x0000000000251F2C string=0x0000000000251F60 "h"
 *   insn=0x0000000000251F34 string=0x0000000000251F8C "h"
 *   insn=0x0000000000251F38 string=0x0000000000251F3C ""
 *   insn=0x0000000000251F48 string=0x0000000000251F4C "h"
 *   insn=0x0000000000251F58 string=0x0000000000251F5C ""
 *   insn=0x0000000000251F64 string=0x0000000000251F68 ""
 *   insn=0x0000000000251F6C string=0x0000000000251F70 "*"
 *   insn=0x0000000000251F70 string=0x0000000000251F74 "!<E"
 *   insn=0x0000000000251F74 string=0x0000000000251F78 "_"
 *   insn=0x0000000000251F74 string=0x0000000000586220 "PFPN5Caver15DamageComponentEvE"
 *   insn=0x0000000000251F78 string=0x0000000000251F7C " "
 *   insn=0x0000000000251F7C string=0x0000000000251F80 "h"
 *   insn=0x0000000000251F80 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::DamageComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver15DamageComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::DamageComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

