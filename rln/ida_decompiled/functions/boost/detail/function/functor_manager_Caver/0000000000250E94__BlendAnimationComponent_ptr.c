/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250E94
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver23BlendAnimationComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::BlendAnimationComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000250EA0 string=0x0000000000250EA4 "_"
 *   insn=0x0000000000250EA8 string=0x0000000000250EAC "("
 *   insn=0x0000000000250EB0 string=0x0000000000584DA0 "("
 *   insn=0x0000000000250EB4 string=0x0000000000250EB8 ")"
 *   insn=0x0000000000250EB8 string=0x0000000000250EBC "(y"
 *   insn=0x0000000000250EBC string=0x0000000000250EC0 ""
 *   insn=0x0000000000250EC4 string=0x0000000000250EF8 "h"
 *   insn=0x0000000000250ECC string=0x0000000000250F24 "h"
 *   insn=0x0000000000250ED0 string=0x0000000000250ED4 ""
 *   insn=0x0000000000250EE0 string=0x0000000000250EE4 "h"
 *   insn=0x0000000000250EF0 string=0x0000000000250EF4 ""
 *   insn=0x0000000000250EFC string=0x0000000000250F00 ""
 *   insn=0x0000000000250F04 string=0x0000000000250F08 "*"
 *   insn=0x0000000000250F08 string=0x0000000000250F0C "!"
 *   insn=0x0000000000250F0C string=0x0000000000250F10 "_"
 *   insn=0x0000000000250F0C string=0x00000000005858D0 "PFPN5Caver23BlendAnimationComponentEvE"
 *   insn=0x0000000000250F10 string=0x0000000000250F14 " "
 *   insn=0x0000000000250F18 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::BlendAnimationComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver23BlendAnimationComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::BlendAnimationComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

