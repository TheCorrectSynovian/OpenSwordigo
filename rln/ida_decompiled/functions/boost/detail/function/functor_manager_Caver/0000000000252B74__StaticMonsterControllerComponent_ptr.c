/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000252B74
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver32StaticMonsterControllerComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::StaticMonsterControllerComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000252B80 string=0x0000000000252B84 "_"
 *   insn=0x0000000000252B88 string=0x0000000000252B8C "("
 *   insn=0x0000000000252B94 string=0x0000000000252B98 ")A"
 *   insn=0x0000000000252B98 string=0x0000000000252B9C "(y"
 *   insn=0x0000000000252B9C string=0x0000000000252BA0 ""
 *   insn=0x0000000000252BA4 string=0x0000000000252BD8 "h"
 *   insn=0x0000000000252BAC string=0x0000000000252C04 "h"
 *   insn=0x0000000000252BB0 string=0x0000000000252BB4 ""
 *   insn=0x0000000000252BC0 string=0x0000000000252BC4 "h"
 *   insn=0x0000000000252BD0 string=0x0000000000252BD4 ""
 *   insn=0x0000000000252BDC string=0x0000000000252BE0 ""
 *   insn=0x0000000000252BE4 string=0x0000000000252BE8 "*"
 *   insn=0x0000000000252BE8 string=0x0000000000252BEC "!"
 *   insn=0x0000000000252BEC string=0x0000000000252BF0 "_"
 *   insn=0x0000000000252BEC string=0x0000000000586900 "PFPN5Caver32StaticMonsterControllerComponentEvE"
 *   insn=0x0000000000252BF0 string=0x0000000000252BF4 " "
 *   insn=0x0000000000252BF4 string=0x0000000000252BF8 "J"
 *   insn=0x0000000000252BF8 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::StaticMonsterControllerComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver32StaticMonsterControllerComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::StaticMonsterControllerComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

