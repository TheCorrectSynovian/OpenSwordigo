/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000252EBC
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver31MonsterDeathControllerComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::MonsterDeathControllerComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 19
 *   insn=0x0000000000252EC8 string=0x0000000000252ECC "_"
 *   insn=0x0000000000252ED0 string=0x0000000000252ED4 "("
 *   insn=0x0000000000252ED8 string=0x0000000000585174 "|"
 *   insn=0x0000000000252EDC string=0x0000000000252EE0 ")"
 *   insn=0x0000000000252EE0 string=0x0000000000252EE4 "(y"
 *   insn=0x0000000000252EE4 string=0x0000000000252EE8 ""
 *   insn=0x0000000000252EEC string=0x0000000000252F20 "h"
 *   insn=0x0000000000252EF4 string=0x0000000000252F4C "h"
 *   insn=0x0000000000252EF8 string=0x0000000000252EFC "aD"
 *   insn=0x0000000000252F08 string=0x0000000000252F0C "h"
 *   insn=0x0000000000252F18 string=0x0000000000252F1C ""
 *   insn=0x0000000000252F24 string=0x0000000000252F28 ""
 *   insn=0x0000000000252F2C string=0x0000000000252F30 "*"
 *   insn=0x0000000000252F30 string=0x0000000000252F34 "!"
 *   insn=0x0000000000252F34 string=0x0000000000252F38 "_"
 *   insn=0x0000000000252F34 string=0x0000000000586B40 "PFPN5Caver31MonsterDeathControllerComponentEvE"
 *   insn=0x0000000000252F38 string=0x0000000000252F3C " "
 *   insn=0x0000000000252F3C string=0x0000000000252F40 "x"
 *   insn=0x0000000000252F40 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::MonsterDeathControllerComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver31MonsterDeathControllerComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::MonsterDeathControllerComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

