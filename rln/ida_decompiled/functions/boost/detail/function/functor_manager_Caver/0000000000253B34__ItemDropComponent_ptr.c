/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000253B34
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver17ItemDropComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::ItemDropComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 19
 *   insn=0x0000000000253B40 string=0x0000000000253B44 "_"
 *   insn=0x0000000000253B48 string=0x0000000000253B4C "("
 *   insn=0x0000000000253B50 string=0x00000000005852F0 "x"
 *   insn=0x0000000000253B54 string=0x0000000000253B58 ")"
 *   insn=0x0000000000253B58 string=0x0000000000253B5C "(y"
 *   insn=0x0000000000253B5C string=0x0000000000253B60 ""
 *   insn=0x0000000000253B64 string=0x0000000000253B98 "h"
 *   insn=0x0000000000253B6C string=0x0000000000253BC4 "h"
 *   insn=0x0000000000253B70 string=0x0000000000253B74 ""
 *   insn=0x0000000000253B80 string=0x0000000000253B84 "h"
 *   insn=0x0000000000253B90 string=0x0000000000253B94 ""
 *   insn=0x0000000000253B9C string=0x0000000000253BA0 ""
 *   insn=0x0000000000253BA4 string=0x0000000000253BA8 "*"
 *   insn=0x0000000000253BA8 string=0x0000000000253BAC "!"
 *   insn=0x0000000000253BAC string=0x0000000000253BB0 "_"
 *   insn=0x0000000000253BAC string=0x0000000000587240 "PFPN5Caver17ItemDropComponentEvE"
 *   insn=0x0000000000253BB0 string=0x0000000000253BB4 " "
 *   insn=0x0000000000253BB4 string=0x0000000000253BB8 "Z"
 *   insn=0x0000000000253BB8 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::ItemDropComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver17ItemDropComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::ItemDropComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

