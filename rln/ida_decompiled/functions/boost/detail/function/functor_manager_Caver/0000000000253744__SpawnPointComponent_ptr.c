/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000253744
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver19SpawnPointComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::SpawnPointComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000253750 string=0x0000000000253754 "_"
 *   insn=0x0000000000253758 string=0x000000000025375C "("
 *   insn=0x0000000000253764 string=0x0000000000253768 ")"
 *   insn=0x0000000000253768 string=0x000000000025376C "(y"
 *   insn=0x000000000025376C string=0x0000000000253770 ""
 *   insn=0x0000000000253774 string=0x00000000002537A8 "h"
 *   insn=0x000000000025377C string=0x00000000002537D4 "h"
 *   insn=0x0000000000253780 string=0x0000000000253784 ""
 *   insn=0x0000000000253790 string=0x0000000000253794 "h"
 *   insn=0x00000000002537A0 string=0x00000000002537A4 ""
 *   insn=0x00000000002537AC string=0x00000000002537B0 ""
 *   insn=0x00000000002537B4 string=0x00000000002537B8 "*"
 *   insn=0x00000000002537B8 string=0x00000000002537BC "!"
 *   insn=0x00000000002537BC string=0x00000000002537C0 "_"
 *   insn=0x00000000002537BC string=0x0000000000587000 "PFPN5Caver19SpawnPointComponentEvE"
 *   insn=0x00000000002537C0 string=0x00000000002537C4 " "
 *   insn=0x00000000002537C4 string=0x00000000002537C8 "V"
 *   insn=0x00000000002537C8 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::SpawnPointComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver19SpawnPointComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::SpawnPointComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

