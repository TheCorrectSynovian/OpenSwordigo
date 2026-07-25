/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002533FC
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver24OrbitControllerComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::OrbitControllerComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000253408 string=0x000000000025340C "_"
 *   insn=0x0000000000253410 string=0x0000000000253414 "("
 *   insn=0x000000000025341C string=0x0000000000253420 ")Q"
 *   insn=0x0000000000253420 string=0x0000000000253424 "(y"
 *   insn=0x0000000000253424 string=0x0000000000253428 ""
 *   insn=0x000000000025342C string=0x0000000000253460 "h"
 *   insn=0x0000000000253434 string=0x000000000025348C "h"
 *   insn=0x0000000000253438 string=0x000000000025343C "D"
 *   insn=0x0000000000253448 string=0x000000000025344C "h"
 *   insn=0x0000000000253458 string=0x000000000025345C ""
 *   insn=0x0000000000253464 string=0x0000000000253468 ""
 *   insn=0x000000000025346C string=0x0000000000253470 "*"
 *   insn=0x0000000000253470 string=0x0000000000253474 "!"
 *   insn=0x0000000000253474 string=0x0000000000253478 "_"
 *   insn=0x0000000000253474 string=0x0000000000586E40 "PFPN5Caver24OrbitControllerComponentEvE"
 *   insn=0x0000000000253478 string=0x000000000025347C " "
 *   insn=0x000000000025347C string=0x0000000000253480 "("
 *   insn=0x0000000000253480 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::OrbitControllerComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver24OrbitControllerComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::OrbitControllerComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

