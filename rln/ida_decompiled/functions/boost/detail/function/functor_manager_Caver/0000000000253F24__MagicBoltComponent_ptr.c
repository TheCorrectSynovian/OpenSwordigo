/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000253F24
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver18MagicBoltComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::MagicBoltComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000253F30 string=0x0000000000253F34 "_"
 *   insn=0x0000000000253F38 string=0x0000000000253F3C "("
 *   insn=0x0000000000253F44 string=0x0000000000253F48 ")"
 *   insn=0x0000000000253F48 string=0x0000000000253F4C "(y"
 *   insn=0x0000000000253F4C string=0x0000000000253F50 ""
 *   insn=0x0000000000253F54 string=0x0000000000253F88 "h"
 *   insn=0x0000000000253F5C string=0x0000000000253FB4 "h"
 *   insn=0x0000000000253F60 string=0x0000000000253F64 ""
 *   insn=0x0000000000253F70 string=0x0000000000253F74 "h"
 *   insn=0x0000000000253F80 string=0x0000000000253F84 ""
 *   insn=0x0000000000253F8C string=0x0000000000253F90 ""
 *   insn=0x0000000000253F94 string=0x0000000000253F98 "*"
 *   insn=0x0000000000253F98 string=0x0000000000253F9C "!<C"
 *   insn=0x0000000000253F9C string=0x0000000000253FA0 "_"
 *   insn=0x0000000000253F9C string=0x0000000000587450 "PFPN5Caver18MagicBoltComponentEvE"
 *   insn=0x0000000000253FA0 string=0x0000000000253FA4 " "
 *   insn=0x0000000000253FA4 string=0x0000000000253FA8 "^"
 *   insn=0x0000000000253FA8 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::MagicBoltComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver18MagicBoltComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::MagicBoltComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

