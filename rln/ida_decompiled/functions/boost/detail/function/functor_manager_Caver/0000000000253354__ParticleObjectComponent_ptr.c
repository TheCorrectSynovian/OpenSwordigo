/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000253354
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver23ParticleObjectComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::ParticleObjectComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000253360 string=0x0000000000253364 "_"
 *   insn=0x0000000000253368 string=0x000000000025336C "("
 *   insn=0x0000000000253374 string=0x0000000000253378 ")"
 *   insn=0x0000000000253378 string=0x000000000025337C "(y"
 *   insn=0x000000000025337C string=0x0000000000253380 ""
 *   insn=0x0000000000253384 string=0x00000000002533B8 "h"
 *   insn=0x000000000025338C string=0x00000000002533E4 "h"
 *   insn=0x0000000000253390 string=0x0000000000253394 "!D"
 *   insn=0x00000000002533A0 string=0x00000000002533A4 "h"
 *   insn=0x00000000002533B0 string=0x00000000002533B4 ""
 *   insn=0x00000000002533BC string=0x00000000002533C0 ""
 *   insn=0x00000000002533C4 string=0x00000000002533C8 "*"
 *   insn=0x00000000002533C8 string=0x00000000002533CC "!"
 *   insn=0x00000000002533CC string=0x00000000002533D0 "_"
 *   insn=0x00000000002533CC string=0x0000000000586DE0 "PFPN5Caver23ParticleObjectComponentEvE"
 *   insn=0x00000000002533D0 string=0x00000000002533D4 " "
 *   insn=0x00000000002533D4 string=0x00000000002533D8 "R"
 *   insn=0x00000000002533D8 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::ParticleObjectComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver23ParticleObjectComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::ParticleObjectComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

