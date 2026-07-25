/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002511DC
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver15EntityComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::EntityComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 17
 *   insn=0x00000000002511E8 string=0x00000000002511EC "_"
 *   insn=0x00000000002511F0 string=0x00000000002511F4 "("
 *   insn=0x00000000002511FC string=0x0000000000251200 ")"
 *   insn=0x0000000000251200 string=0x0000000000251204 "(y"
 *   insn=0x0000000000251204 string=0x0000000000251208 ""
 *   insn=0x000000000025120C string=0x0000000000251240 "h"
 *   insn=0x0000000000251214 string=0x000000000025126C "h"
 *   insn=0x0000000000251218 string=0x000000000025121C ""
 *   insn=0x0000000000251228 string=0x000000000025122C "h"
 *   insn=0x0000000000251238 string=0x000000000025123C ""
 *   insn=0x0000000000251244 string=0x0000000000251248 ""
 *   insn=0x000000000025124C string=0x0000000000251250 "*"
 *   insn=0x0000000000251250 string=0x0000000000251254 "!"
 *   insn=0x0000000000251254 string=0x0000000000251258 "_"
 *   insn=0x0000000000251254 string=0x0000000000585AB0 "PFPN5Caver15EntityComponentEvE"
 *   insn=0x0000000000251258 string=0x000000000025125C " "
 *   insn=0x0000000000251260 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::EntityComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver15EntityComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::EntityComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

