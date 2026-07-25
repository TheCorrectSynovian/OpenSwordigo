/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000251D04
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver21UtilityShapeComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::UtilityShapeComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 17
 *   insn=0x0000000000251D10 string=0x0000000000251D14 "_"
 *   insn=0x0000000000251D18 string=0x0000000000251D1C "("
 *   insn=0x0000000000251D24 string=0x0000000000251D28 ")a="
 *   insn=0x0000000000251D28 string=0x0000000000251D2C "(y"
 *   insn=0x0000000000251D2C string=0x0000000000251D30 ""
 *   insn=0x0000000000251D34 string=0x0000000000251D68 "h"
 *   insn=0x0000000000251D3C string=0x0000000000251D94 "h"
 *   insn=0x0000000000251D40 string=0x0000000000251D44 ""
 *   insn=0x0000000000251D50 string=0x0000000000251D54 "h"
 *   insn=0x0000000000251D60 string=0x0000000000251D64 ""
 *   insn=0x0000000000251D6C string=0x0000000000251D70 ""
 *   insn=0x0000000000251D74 string=0x0000000000251D78 "*"
 *   insn=0x0000000000251D78 string=0x0000000000251D7C "!LF"
 *   insn=0x0000000000251D7C string=0x0000000000251D80 "_"
 *   insn=0x0000000000251D7C string=0x00000000005860E0 "PFPN5Caver21UtilityShapeComponentEvE"
 *   insn=0x0000000000251D80 string=0x0000000000251D84 " "
 *   insn=0x0000000000251D88 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::UtilityShapeComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver21UtilityShapeComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::UtilityShapeComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

