/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250C9C
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver15SpriteComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::SpriteComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000250CA8 string=0x0000000000250CAC "_"
 *   insn=0x0000000000250CB0 string=0x0000000000250CB4 "("
 *   insn=0x0000000000250CB8 string=0x0000000000584D64 "l"
 *   insn=0x0000000000250CBC string=0x0000000000250CC0 ")"
 *   insn=0x0000000000250CC0 string=0x0000000000250CC4 "(y"
 *   insn=0x0000000000250CC4 string=0x0000000000250CC8 ""
 *   insn=0x0000000000250CCC string=0x0000000000250D00 "h"
 *   insn=0x0000000000250CD4 string=0x0000000000250D2C "h"
 *   insn=0x0000000000250CD8 string=0x0000000000250CDC "AE"
 *   insn=0x0000000000250CE8 string=0x0000000000250CEC "h"
 *   insn=0x0000000000250CF8 string=0x0000000000250CFC ""
 *   insn=0x0000000000250D04 string=0x0000000000250D08 ""
 *   insn=0x0000000000250D0C string=0x0000000000250D10 "*"
 *   insn=0x0000000000250D10 string=0x0000000000250D14 "!d@"
 *   insn=0x0000000000250D14 string=0x0000000000250D18 "_"
 *   insn=0x0000000000250D14 string=0x00000000005857F0 "PFPN5Caver15SpriteComponentEvE"
 *   insn=0x0000000000250D18 string=0x0000000000250D1C " "
 *   insn=0x0000000000250D20 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::SpriteComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver15SpriteComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::SpriteComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

