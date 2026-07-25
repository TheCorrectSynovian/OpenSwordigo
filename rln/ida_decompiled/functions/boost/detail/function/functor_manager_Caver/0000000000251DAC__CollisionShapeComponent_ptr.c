/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000251DAC
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver23CollisionShapeComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::CollisionShapeComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000251DB8 string=0x0000000000251DBC "_"
 *   insn=0x0000000000251DC0 string=0x0000000000251DC4 "("
 *   insn=0x0000000000251DC8 string=0x0000000000584F6C "t"
 *   insn=0x0000000000251DCC string=0x0000000000251DD0 ")"
 *   insn=0x0000000000251DD0 string=0x0000000000251DD4 "(y"
 *   insn=0x0000000000251DD4 string=0x0000000000251DD8 ""
 *   insn=0x0000000000251DDC string=0x0000000000251E10 "h"
 *   insn=0x0000000000251DE4 string=0x0000000000251E3C "h"
 *   insn=0x0000000000251DE8 string=0x0000000000251DEC "qF"
 *   insn=0x0000000000251DF8 string=0x0000000000251DFC "h"
 *   insn=0x0000000000251E08 string=0x0000000000251E0C ""
 *   insn=0x0000000000251E14 string=0x0000000000251E18 ""
 *   insn=0x0000000000251E1C string=0x0000000000251E20 "*"
 *   insn=0x0000000000251E20 string=0x0000000000251E24 "!"
 *   insn=0x0000000000251E24 string=0x0000000000251E28 "_"
 *   insn=0x0000000000251E24 string=0x0000000000586140 "PFPN5Caver23CollisionShapeComponentEvE"
 *   insn=0x0000000000251E28 string=0x0000000000251E2C " "
 *   insn=0x0000000000251E30 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::CollisionShapeComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver23CollisionShapeComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::CollisionShapeComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

