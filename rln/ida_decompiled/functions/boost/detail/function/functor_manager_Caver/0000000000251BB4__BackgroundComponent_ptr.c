/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000251BB4
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver19BackgroundComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::BackgroundComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000251BC0 string=0x0000000000251BC4 "_"
 *   insn=0x0000000000251BC8 string=0x0000000000251BCC "("
 *   insn=0x0000000000251BD4 string=0x0000000000251BD8 ")"
 *   insn=0x0000000000251BD8 string=0x0000000000251BDC "(y"
 *   insn=0x0000000000251BDC string=0x0000000000251BE0 ""
 *   insn=0x0000000000251BE4 string=0x0000000000251C18 "h"
 *   insn=0x0000000000251BEC string=0x0000000000251C44 "h"
 *   insn=0x0000000000251BF0 string=0x0000000000251BF4 "=F"
 *   insn=0x0000000000251C00 string=0x0000000000251C04 "h"
 *   insn=0x0000000000251C10 string=0x0000000000251C14 ""
 *   insn=0x0000000000251C1C string=0x0000000000251C20 ""
 *   insn=0x0000000000251C24 string=0x0000000000251C28 "*"
 *   insn=0x0000000000251C28 string=0x0000000000251C2C "!"
 *   insn=0x0000000000251C2C string=0x0000000000251C30 "_"
 *   insn=0x0000000000251C2C string=0x0000000000586020 "PFPN5Caver19BackgroundComponentEvE"
 *   insn=0x0000000000251C30 string=0x0000000000251C34 " "
 *   insn=0x0000000000251C34 string=0x0000000000251C38 ":"
 *   insn=0x0000000000251C38 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::BackgroundComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver19BackgroundComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::BackgroundComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

