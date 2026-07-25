/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000253D2C
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver19TextBubbleComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::TextBubbleComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000253D38 string=0x0000000000253D3C "_"
 *   insn=0x0000000000253D40 string=0x0000000000253D44 "("
 *   insn=0x0000000000253D48 string=0x000000000058532C "4"
 *   insn=0x0000000000253D4C string=0x0000000000253D50 ")"
 *   insn=0x0000000000253D50 string=0x0000000000253D54 "(y"
 *   insn=0x0000000000253D54 string=0x0000000000253D58 ""
 *   insn=0x0000000000253D5C string=0x0000000000253D90 "h"
 *   insn=0x0000000000253D64 string=0x0000000000253DBC "h"
 *   insn=0x0000000000253D68 string=0x0000000000253D6C "!G"
 *   insn=0x0000000000253D78 string=0x0000000000253D7C "h"
 *   insn=0x0000000000253D88 string=0x0000000000253D8C ""
 *   insn=0x0000000000253D94 string=0x0000000000253D98 ""
 *   insn=0x0000000000253D9C string=0x0000000000253DA0 "*"
 *   insn=0x0000000000253DA0 string=0x0000000000253DA4 "!"
 *   insn=0x0000000000253DA4 string=0x0000000000253DA8 "_"
 *   insn=0x0000000000253DA4 string=0x0000000000587330 "PFPN5Caver19TextBubbleComponentEvE"
 *   insn=0x0000000000253DA8 string=0x0000000000253DAC " "
 *   insn=0x0000000000253DB0 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::TextBubbleComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver19TextBubbleComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::TextBubbleComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

