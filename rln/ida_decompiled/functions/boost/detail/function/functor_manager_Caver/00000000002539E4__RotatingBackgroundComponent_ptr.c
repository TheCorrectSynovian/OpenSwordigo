/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002539E4
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver27RotatingBackgroundComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::RotatingBackgroundComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x00000000002539F0 string=0x00000000002539F4 "_"
 *   insn=0x00000000002539F8 string=0x00000000002539FC "("
 *   insn=0x0000000000253A00 string=0x00000000005852C8 "P"
 *   insn=0x0000000000253A04 string=0x0000000000253A08 ")!"
 *   insn=0x0000000000253A08 string=0x0000000000253A0C "(y"
 *   insn=0x0000000000253A0C string=0x0000000000253A10 ""
 *   insn=0x0000000000253A14 string=0x0000000000253A48 "h"
 *   insn=0x0000000000253A1C string=0x0000000000253A74 "h"
 *   insn=0x0000000000253A20 string=0x0000000000253A24 "aA"
 *   insn=0x0000000000253A30 string=0x0000000000253A34 "h"
 *   insn=0x0000000000253A40 string=0x0000000000253A44 ""
 *   insn=0x0000000000253A4C string=0x0000000000253A50 ""
 *   insn=0x0000000000253A54 string=0x0000000000253A58 "*"
 *   insn=0x0000000000253A58 string=0x0000000000253A5C "! B"
 *   insn=0x0000000000253A5C string=0x0000000000253A60 "_"
 *   insn=0x0000000000253A5C string=0x0000000000587180 "PFPN5Caver27RotatingBackgroundComponentEvE"
 *   insn=0x0000000000253A60 string=0x0000000000253A64 " "
 *   insn=0x0000000000253A68 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::RotatingBackgroundComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver27RotatingBackgroundComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::RotatingBackgroundComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

