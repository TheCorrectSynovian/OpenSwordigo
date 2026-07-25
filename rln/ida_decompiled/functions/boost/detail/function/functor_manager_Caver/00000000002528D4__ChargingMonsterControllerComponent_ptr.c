/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002528D4
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver34ChargingMonsterControllerComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::ChargingMonsterControllerComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x00000000002528E0 string=0x00000000002528E4 "_"
 *   insn=0x00000000002528E8 string=0x00000000002528EC "("
 *   insn=0x00000000002528F0 string=0x00000000005850C0 "H"
 *   insn=0x00000000002528F4 string=0x00000000002528F8 ")"
 *   insn=0x00000000002528F8 string=0x00000000002528FC "(y"
 *   insn=0x00000000002528FC string=0x0000000000252900 ""
 *   insn=0x0000000000252904 string=0x0000000000252938 "h"
 *   insn=0x000000000025290C string=0x0000000000252964 "h"
 *   insn=0x0000000000252910 string=0x0000000000252914 "iD"
 *   insn=0x0000000000252920 string=0x0000000000252924 "h"
 *   insn=0x0000000000252930 string=0x0000000000252934 ""
 *   insn=0x000000000025293C string=0x0000000000252940 ""
 *   insn=0x0000000000252944 string=0x0000000000252948 "*"
 *   insn=0x0000000000252948 string=0x000000000025294C "!<D"
 *   insn=0x000000000025294C string=0x0000000000252950 "_"
 *   insn=0x000000000025294C string=0x0000000000586730 "PFPN5Caver34ChargingMonsterControllerComponentEvE"
 *   insn=0x0000000000252950 string=0x0000000000252954 " "
 *   insn=0x0000000000252958 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::ChargingMonsterControllerComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver34ChargingMonsterControllerComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::ChargingMonsterControllerComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

