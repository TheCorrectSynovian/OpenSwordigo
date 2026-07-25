/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025132C
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver25EntityControllerComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::EntityControllerComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 19
 *   insn=0x0000000000251338 string=0x000000000025133C "_"
 *   insn=0x0000000000251340 string=0x0000000000251344 "("
 *   insn=0x0000000000251348 string=0x0000000000584E2C "4"
 *   insn=0x000000000025134C string=0x0000000000251350 ")"
 *   insn=0x0000000000251350 string=0x0000000000251354 "(y"
 *   insn=0x0000000000251354 string=0x0000000000251358 ""
 *   insn=0x000000000025135C string=0x0000000000251390 "h"
 *   insn=0x0000000000251364 string=0x00000000002513BC "h"
 *   insn=0x0000000000251368 string=0x000000000025136C "qA"
 *   insn=0x0000000000251378 string=0x000000000025137C "h"
 *   insn=0x0000000000251388 string=0x000000000025138C ""
 *   insn=0x0000000000251394 string=0x0000000000251398 ""
 *   insn=0x000000000025139C string=0x00000000002513A0 "*"
 *   insn=0x00000000002513A0 string=0x00000000002513A4 "!HE"
 *   insn=0x00000000002513A4 string=0x00000000002513A8 "_"
 *   insn=0x00000000002513A4 string=0x0000000000585B50 "PFPN5Caver25EntityControllerComponentEvE"
 *   insn=0x00000000002513A8 string=0x00000000002513AC " "
 *   insn=0x00000000002513AC string=0x00000000002513B0 "\"
 *   insn=0x00000000002513B0 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::EntityControllerComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver25EntityControllerComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::EntityControllerComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

