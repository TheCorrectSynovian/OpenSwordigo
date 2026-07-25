/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025258C
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver24BreakableObjectComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::BreakableObjectComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000252598 string=0x000000000025259C "_"
 *   insn=0x00000000002525A0 string=0x00000000002525A4 "("
 *   insn=0x00000000002525A8 string=0x000000000058505C "d"
 *   insn=0x00000000002525AC string=0x00000000002525B0 ")q"
 *   insn=0x00000000002525B0 string=0x00000000002525B4 "(y"
 *   insn=0x00000000002525B4 string=0x00000000002525B8 ""
 *   insn=0x00000000002525BC string=0x00000000002525F0 "h"
 *   insn=0x00000000002525C4 string=0x000000000025261C "h"
 *   insn=0x00000000002525C8 string=0x00000000002525CC ""
 *   insn=0x00000000002525D8 string=0x00000000002525DC "h"
 *   insn=0x00000000002525E8 string=0x00000000002525EC ""
 *   insn=0x00000000002525F4 string=0x00000000002525F8 ""
 *   insn=0x00000000002525FC string=0x0000000000252600 "*"
 *   insn=0x0000000000252600 string=0x0000000000252604 "!"
 *   insn=0x0000000000252604 string=0x0000000000252608 "_"
 *   insn=0x0000000000252604 string=0x0000000000586580 "PFPN5Caver24BreakableObjectComponentEvE"
 *   insn=0x0000000000252608 string=0x000000000025260C " "
 *   insn=0x0000000000252610 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::BreakableObjectComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver24BreakableObjectComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::BreakableObjectComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

