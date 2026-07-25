/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000251E54
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver37BoneControlledCollisionShapeComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::BoneControlledCollisionShapeComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000251E60 string=0x0000000000251E64 "_"
 *   insn=0x0000000000251E68 string=0x0000000000251E6C "("
 *   insn=0x0000000000251E70 string=0x0000000000584F80 ""
 *   insn=0x0000000000251E74 string=0x0000000000251E78 ")"
 *   insn=0x0000000000251E78 string=0x0000000000251E7C "(y"
 *   insn=0x0000000000251E7C string=0x0000000000251E80 ""
 *   insn=0x0000000000251E84 string=0x0000000000251EB8 "h"
 *   insn=0x0000000000251E8C string=0x0000000000251EE4 "h"
 *   insn=0x0000000000251E90 string=0x0000000000251E94 "\tB"
 *   insn=0x0000000000251EA0 string=0x0000000000251EA4 "h"
 *   insn=0x0000000000251EB0 string=0x0000000000251EB4 ""
 *   insn=0x0000000000251EBC string=0x0000000000251EC0 ""
 *   insn=0x0000000000251EC4 string=0x0000000000251EC8 "*"
 *   insn=0x0000000000251EC8 string=0x0000000000251ECC "!"
 *   insn=0x0000000000251ECC string=0x0000000000251ED0 "_"
 *   insn=0x0000000000251ECC string=0x00000000005861A0 "PFPN5Caver37BoneControlledCollisionShapeComponentEvE"
 *   insn=0x0000000000251ED0 string=0x0000000000251ED4 " "
 *   insn=0x0000000000251ED8 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::BoneControlledCollisionShapeComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver37BoneControlledCollisionShapeComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::BoneControlledCollisionShapeComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

