/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000252ACC
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver32SkellyMonsterControllerComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::SkellyMonsterControllerComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000252AD8 string=0x0000000000252ADC "_"
 *   insn=0x0000000000252AE0 string=0x0000000000252AE4 "("
 *   insn=0x0000000000252AEC string=0x0000000000252AF0 ")"
 *   insn=0x0000000000252AF0 string=0x0000000000252AF4 "(y"
 *   insn=0x0000000000252AF4 string=0x0000000000252AF8 ""
 *   insn=0x0000000000252AFC string=0x0000000000252B30 "h"
 *   insn=0x0000000000252B04 string=0x0000000000252B5C "h"
 *   insn=0x0000000000252B08 string=0x0000000000252B0C ""
 *   insn=0x0000000000252B18 string=0x0000000000252B1C "h"
 *   insn=0x0000000000252B28 string=0x0000000000252B2C ""
 *   insn=0x0000000000252B34 string=0x0000000000252B38 ""
 *   insn=0x0000000000252B3C string=0x0000000000252B40 "*"
 *   insn=0x0000000000252B40 string=0x0000000000252B44 "!"
 *   insn=0x0000000000252B44 string=0x0000000000252B48 "_"
 *   insn=0x0000000000252B44 string=0x00000000005868A0 "PFPN5Caver32SkellyMonsterControllerComponentEvE"
 *   insn=0x0000000000252B48 string=0x0000000000252B4C " "
 *   insn=0x0000000000252B4C string=0x0000000000252B50 "t"
 *   insn=0x0000000000252B50 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::SkellyMonsterControllerComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver32SkellyMonsterControllerComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::SkellyMonsterControllerComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

