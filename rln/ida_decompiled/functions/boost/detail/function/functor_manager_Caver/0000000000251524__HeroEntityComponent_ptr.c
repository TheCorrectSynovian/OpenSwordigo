/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000251524
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver19HeroEntityComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::HeroEntityComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 17
 *   insn=0x0000000000251530 string=0x0000000000251534 "_"
 *   insn=0x0000000000251538 string=0x000000000025153C "("
 *   insn=0x0000000000251544 string=0x0000000000251548 ")"
 *   insn=0x0000000000251548 string=0x000000000025154C "(y"
 *   insn=0x000000000025154C string=0x0000000000251550 ""
 *   insn=0x0000000000251554 string=0x0000000000251588 "h"
 *   insn=0x000000000025155C string=0x00000000002515B4 "h"
 *   insn=0x0000000000251560 string=0x0000000000251564 "iG"
 *   insn=0x0000000000251570 string=0x0000000000251574 "h"
 *   insn=0x0000000000251580 string=0x0000000000251584 ""
 *   insn=0x000000000025158C string=0x0000000000251590 ""
 *   insn=0x0000000000251594 string=0x0000000000251598 "*"
 *   insn=0x0000000000251598 string=0x000000000025159C "!xE"
 *   insn=0x000000000025159C string=0x00000000002515A0 "_"
 *   insn=0x000000000025159C string=0x0000000000585C70 "PFPN5Caver19HeroEntityComponentEvE"
 *   insn=0x00000000002515A0 string=0x00000000002515A4 " "
 *   insn=0x00000000002515A8 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::HeroEntityComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver19HeroEntityComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::HeroEntityComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

