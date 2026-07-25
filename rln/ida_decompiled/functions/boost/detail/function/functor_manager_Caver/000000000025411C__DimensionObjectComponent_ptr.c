/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025411C
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver24DimensionObjectComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::DimensionObjectComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 17
 *   insn=0x0000000000254128 string=0x000000000025412C "_"
 *   insn=0x0000000000254130 string=0x0000000000254134 "("
 *   insn=0x000000000025413C string=0x0000000000254140 ")"
 *   insn=0x0000000000254140 string=0x0000000000254144 "(y"
 *   insn=0x0000000000254144 string=0x0000000000254148 ""
 *   insn=0x000000000025414C string=0x0000000000254180 "h"
 *   insn=0x0000000000254154 string=0x00000000002541AC "h"
 *   insn=0x0000000000254158 string=0x000000000025415C ""
 *   insn=0x0000000000254168 string=0x000000000025416C "h"
 *   insn=0x0000000000254178 string=0x000000000025417C ""
 *   insn=0x0000000000254184 string=0x0000000000254188 ""
 *   insn=0x000000000025418C string=0x0000000000254190 "*"
 *   insn=0x0000000000254190 string=0x0000000000254194 "!DB"
 *   insn=0x0000000000254194 string=0x0000000000254198 "_"
 *   insn=0x0000000000254194 string=0x0000000000587570 "PFPN5Caver24DimensionObjectComponentEvE"
 *   insn=0x0000000000254198 string=0x000000000025419C " "
 *   insn=0x00000000002541A0 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::DimensionObjectComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver24DimensionObjectComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::DimensionObjectComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

