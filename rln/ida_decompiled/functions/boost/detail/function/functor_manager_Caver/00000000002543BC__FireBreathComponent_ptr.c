/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002543BC
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver19FireBreathComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::FireBreathComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x00000000002543C8 string=0x00000000002543CC "_"
 *   insn=0x00000000002543D0 string=0x00000000002543D4 "("
 *   insn=0x00000000002543DC string=0x00000000002543E0 ")"
 *   insn=0x00000000002543E0 string=0x00000000002543E4 "(y"
 *   insn=0x00000000002543E4 string=0x00000000002543E8 ""
 *   insn=0x00000000002543EC string=0x0000000000254420 "h"
 *   insn=0x00000000002543F4 string=0x000000000025444C "h"
 *   insn=0x00000000002543F8 string=0x00000000002543FC ""
 *   insn=0x0000000000254408 string=0x000000000025440C "h"
 *   insn=0x0000000000254418 string=0x000000000025441C ""
 *   insn=0x0000000000254424 string=0x0000000000254428 ""
 *   insn=0x000000000025442C string=0x0000000000254430 "*"
 *   insn=0x0000000000254430 string=0x0000000000254434 "!"
 *   insn=0x0000000000254434 string=0x0000000000254438 "_"
 *   insn=0x0000000000254434 string=0x00000000005876D0 "PFPN5Caver19FireBreathComponentEvE"
 *   insn=0x0000000000254438 string=0x000000000025443C " "
 *   insn=0x000000000025443C string=0x0000000000254440 "8"
 *   insn=0x0000000000254440 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::FireBreathComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver19FireBreathComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::FireBreathComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

