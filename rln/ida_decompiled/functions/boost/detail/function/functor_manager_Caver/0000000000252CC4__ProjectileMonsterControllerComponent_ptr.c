/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000252CC4
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver36ProjectileMonsterControllerComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::ProjectileMonsterControllerComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 17
 *   insn=0x0000000000252CD0 string=0x0000000000252CD4 "_"
 *   insn=0x0000000000252CD8 string=0x0000000000252CDC "("
 *   insn=0x0000000000252CE4 string=0x0000000000252CE8 ")"
 *   insn=0x0000000000252CE8 string=0x0000000000252CEC "(y"
 *   insn=0x0000000000252CEC string=0x0000000000252CF0 ""
 *   insn=0x0000000000252CF4 string=0x0000000000252D28 "h"
 *   insn=0x0000000000252CFC string=0x0000000000252D54 "h"
 *   insn=0x0000000000252D00 string=0x0000000000252D04 ""
 *   insn=0x0000000000252D10 string=0x0000000000252D14 "h"
 *   insn=0x0000000000252D20 string=0x0000000000252D24 ""
 *   insn=0x0000000000252D2C string=0x0000000000252D30 ""
 *   insn=0x0000000000252D34 string=0x0000000000252D38 "*"
 *   insn=0x0000000000252D38 string=0x0000000000252D3C "!"
 *   insn=0x0000000000252D3C string=0x0000000000252D40 "_"
 *   insn=0x0000000000252D3C string=0x00000000005869E0 "PFPN5Caver36ProjectileMonsterControllerComponentEvE"
 *   insn=0x0000000000252D40 string=0x0000000000252D44 " "
 *   insn=0x0000000000252D48 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::ProjectileMonsterControllerComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver36ProjectileMonsterControllerComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::ProjectileMonsterControllerComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

