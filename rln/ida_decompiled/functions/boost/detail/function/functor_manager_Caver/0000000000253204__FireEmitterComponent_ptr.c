/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000253204
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver20FireEmitterComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::FireEmitterComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000253210 string=0x0000000000253214 "_"
 *   insn=0x0000000000253218 string=0x000000000025321C "("
 *   insn=0x0000000000253220 string=0x00000000005851D8 "`"
 *   insn=0x0000000000253224 string=0x0000000000253228 ")a"
 *   insn=0x0000000000253228 string=0x000000000025322C "(y"
 *   insn=0x000000000025322C string=0x0000000000253230 ""
 *   insn=0x0000000000253234 string=0x0000000000253268 "h"
 *   insn=0x000000000025323C string=0x0000000000253294 "h"
 *   insn=0x0000000000253240 string=0x0000000000253244 "YD"
 *   insn=0x0000000000253250 string=0x0000000000253254 "h"
 *   insn=0x0000000000253260 string=0x0000000000253264 ""
 *   insn=0x000000000025326C string=0x0000000000253270 ""
 *   insn=0x0000000000253274 string=0x0000000000253278 "*"
 *   insn=0x0000000000253278 string=0x000000000025327C "!dF"
 *   insn=0x000000000025327C string=0x0000000000253280 "_"
 *   insn=0x000000000025327C string=0x0000000000586D20 "PFPN5Caver20FireEmitterComponentEvE"
 *   insn=0x0000000000253280 string=0x0000000000253284 " "
 *   insn=0x0000000000253288 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::FireEmitterComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver20FireEmitterComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::FireEmitterComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

