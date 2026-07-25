/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250F3C
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver22GroundPolygonComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::GroundPolygonComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000250F48 string=0x0000000000250F4C "_"
 *   insn=0x0000000000250F50 string=0x0000000000250F54 "("
 *   insn=0x0000000000250F5C string=0x0000000000250F60 ")"
 *   insn=0x0000000000250F60 string=0x0000000000250F64 "(y"
 *   insn=0x0000000000250F64 string=0x0000000000250F68 ""
 *   insn=0x0000000000250F6C string=0x0000000000250FA0 "h"
 *   insn=0x0000000000250F74 string=0x0000000000250FCC "h"
 *   insn=0x0000000000250F78 string=0x0000000000250F7C ""
 *   insn=0x0000000000250F88 string=0x0000000000250F8C "h"
 *   insn=0x0000000000250F98 string=0x0000000000250F9C ""
 *   insn=0x0000000000250FA4 string=0x0000000000250FA8 ""
 *   insn=0x0000000000250FAC string=0x0000000000250FB0 "*"
 *   insn=0x0000000000250FB0 string=0x0000000000250FB4 "!"
 *   insn=0x0000000000250FB4 string=0x0000000000250FB8 "_"
 *   insn=0x0000000000250FB4 string=0x0000000000585930 "PFPN5Caver22GroundPolygonComponentEvE"
 *   insn=0x0000000000250FB8 string=0x0000000000250FBC " "
 *   insn=0x0000000000250FBC string=0x0000000000250FC0 "X"
 *   insn=0x0000000000250FC0 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::GroundPolygonComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver22GroundPolygonComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::GroundPolygonComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

