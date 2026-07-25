/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025108C
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver28GroundMeshGeneratorComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::GroundMeshGeneratorComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 17
 *   insn=0x0000000000251098 string=0x000000000025109C "_"
 *   insn=0x00000000002510A0 string=0x00000000002510A4 "("
 *   insn=0x00000000002510AC string=0x00000000002510B0 ")q7"
 *   insn=0x00000000002510B0 string=0x00000000002510B4 "(y"
 *   insn=0x00000000002510B4 string=0x00000000002510B8 ""
 *   insn=0x00000000002510BC string=0x00000000002510F0 "h"
 *   insn=0x00000000002510C4 string=0x000000000025111C "h"
 *   insn=0x00000000002510C8 string=0x00000000002510CC "E"
 *   insn=0x00000000002510D8 string=0x00000000002510DC "h"
 *   insn=0x00000000002510E8 string=0x00000000002510EC ""
 *   insn=0x00000000002510F4 string=0x00000000002510F8 ""
 *   insn=0x00000000002510FC string=0x0000000000251100 "*"
 *   insn=0x0000000000251100 string=0x0000000000251104 "!"
 *   insn=0x0000000000251104 string=0x0000000000251108 "_"
 *   insn=0x0000000000251104 string=0x00000000005859F0 "PFPN5Caver28GroundMeshGeneratorComponentEvE"
 *   insn=0x0000000000251108 string=0x000000000025110C " "
 *   insn=0x0000000000251110 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::GroundMeshGeneratorComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver28GroundMeshGeneratorComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::GroundMeshGeneratorComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

