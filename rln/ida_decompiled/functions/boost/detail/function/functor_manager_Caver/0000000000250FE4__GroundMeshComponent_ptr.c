/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250FE4
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver19GroundMeshComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::GroundMeshComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 19
 *   insn=0x0000000000250FF0 string=0x0000000000250FF4 "_"
 *   insn=0x0000000000250FF8 string=0x0000000000250FFC "("
 *   insn=0x0000000000251000 string=0x0000000000584DC8 "P"
 *   insn=0x0000000000251004 string=0x0000000000251008 ")!7"
 *   insn=0x0000000000251008 string=0x000000000025100C "(y"
 *   insn=0x000000000025100C string=0x0000000000251010 ""
 *   insn=0x0000000000251014 string=0x0000000000251048 "h"
 *   insn=0x000000000025101C string=0x0000000000251074 "h"
 *   insn=0x0000000000251020 string=0x0000000000251024 "!F"
 *   insn=0x0000000000251030 string=0x0000000000251034 "h"
 *   insn=0x0000000000251040 string=0x0000000000251044 ""
 *   insn=0x000000000025104C string=0x0000000000251050 ""
 *   insn=0x0000000000251054 string=0x0000000000251058 "*"
 *   insn=0x0000000000251058 string=0x000000000025105C "!dG"
 *   insn=0x000000000025105C string=0x0000000000251060 "_"
 *   insn=0x000000000025105C string=0x0000000000585990 "PFPN5Caver19GroundMeshComponentEvE"
 *   insn=0x0000000000251060 string=0x0000000000251064 " "
 *   insn=0x0000000000251064 string=0x0000000000251068 "."
 *   insn=0x0000000000251068 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::GroundMeshComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver19GroundMeshComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::GroundMeshComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

