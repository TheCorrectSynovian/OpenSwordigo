/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000253BDC
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver16ProgramComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::ProgramComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000253BE8 string=0x0000000000253BEC "_"
 *   insn=0x0000000000253BF0 string=0x0000000000253BF4 "("
 *   insn=0x0000000000253BFC string=0x0000000000253C00 ")"
 *   insn=0x0000000000253C00 string=0x0000000000253C04 "(y"
 *   insn=0x0000000000253C04 string=0x0000000000253C08 ""
 *   insn=0x0000000000253C0C string=0x0000000000253C40 "h"
 *   insn=0x0000000000253C14 string=0x0000000000253C6C "h"
 *   insn=0x0000000000253C18 string=0x0000000000253C1C "1F"
 *   insn=0x0000000000253C28 string=0x0000000000253C2C "h"
 *   insn=0x0000000000253C38 string=0x0000000000253C3C ""
 *   insn=0x0000000000253C44 string=0x0000000000253C48 ""
 *   insn=0x0000000000253C4C string=0x0000000000253C50 "*"
 *   insn=0x0000000000253C50 string=0x0000000000253C54 "!"
 *   insn=0x0000000000253C54 string=0x0000000000253C58 "_"
 *   insn=0x0000000000253C54 string=0x0000000000587290 "PFPN5Caver16ProgramComponentEvE"
 *   insn=0x0000000000253C58 string=0x0000000000253C5C " "
 *   insn=0x0000000000253C5C string=0x0000000000253C60 "0"
 *   insn=0x0000000000253C60 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::ProgramComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver16ProgramComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::ProgramComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

