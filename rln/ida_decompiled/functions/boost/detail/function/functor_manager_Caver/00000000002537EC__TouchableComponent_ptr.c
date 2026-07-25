/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002537EC
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver18TouchableComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::TouchableComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x00000000002537F8 string=0x00000000002537FC "_"
 *   insn=0x0000000000253800 string=0x0000000000253804 "("
 *   insn=0x000000000025380C string=0x0000000000253810 ")1\n"
 *   insn=0x0000000000253810 string=0x0000000000253814 "(y"
 *   insn=0x0000000000253814 string=0x0000000000253818 ""
 *   insn=0x000000000025381C string=0x0000000000253850 "h"
 *   insn=0x0000000000253824 string=0x000000000025387C "h"
 *   insn=0x0000000000253828 string=0x000000000025382C ""
 *   insn=0x0000000000253838 string=0x000000000025383C "h"
 *   insn=0x0000000000253848 string=0x000000000025384C ""
 *   insn=0x0000000000253854 string=0x0000000000253858 ""
 *   insn=0x000000000025385C string=0x0000000000253860 "*"
 *   insn=0x0000000000253860 string=0x0000000000253864 "!,E"
 *   insn=0x0000000000253864 string=0x0000000000253868 "_"
 *   insn=0x0000000000253864 string=0x0000000000587060 "PFPN5Caver18TouchableComponentEvE"
 *   insn=0x0000000000253868 string=0x000000000025386C " "
 *   insn=0x000000000025386C string=0x0000000000253870 ","
 *   insn=0x0000000000253870 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::TouchableComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver18TouchableComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::TouchableComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

