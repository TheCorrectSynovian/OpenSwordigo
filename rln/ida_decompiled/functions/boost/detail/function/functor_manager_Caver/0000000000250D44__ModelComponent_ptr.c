/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250D44
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver14ModelComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::ModelComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 17
 *   insn=0x0000000000250D50 string=0x0000000000250D54 "_"
 *   insn=0x0000000000250D58 string=0x0000000000250D5C "("
 *   insn=0x0000000000250D64 string=0x0000000000250D68 ")"
 *   insn=0x0000000000250D68 string=0x0000000000250D6C "(y"
 *   insn=0x0000000000250D6C string=0x0000000000250D70 ""
 *   insn=0x0000000000250D74 string=0x0000000000250DA8 "h"
 *   insn=0x0000000000250D7C string=0x0000000000250DD4 "h"
 *   insn=0x0000000000250D80 string=0x0000000000250D84 "uA"
 *   insn=0x0000000000250D90 string=0x0000000000250D94 "h"
 *   insn=0x0000000000250DA0 string=0x0000000000250DA4 ""
 *   insn=0x0000000000250DAC string=0x0000000000250DB0 ""
 *   insn=0x0000000000250DB4 string=0x0000000000250DB8 "*"
 *   insn=0x0000000000250DB8 string=0x0000000000250DBC "!"
 *   insn=0x0000000000250DBC string=0x0000000000250DC0 "_"
 *   insn=0x0000000000250DBC string=0x0000000000585830 "PFPN5Caver14ModelComponentEvE"
 *   insn=0x0000000000250DC0 string=0x0000000000250DC4 " "
 *   insn=0x0000000000250DC8 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::ModelComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver14ModelComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::ModelComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

