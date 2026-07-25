/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002541C4
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver23MagicExplosionComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::MagicExplosionComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x00000000002541D0 string=0x00000000002541D4 "_"
 *   insn=0x00000000002541D8 string=0x00000000002541DC "("
 *   insn=0x00000000002541E0 string=0x00000000005853B8 "@"
 *   insn=0x00000000002541E4 string=0x00000000002541E8 ")"
 *   insn=0x00000000002541E8 string=0x00000000002541EC "(y"
 *   insn=0x00000000002541EC string=0x00000000002541F0 ""
 *   insn=0x00000000002541F4 string=0x0000000000254228 "h"
 *   insn=0x00000000002541FC string=0x0000000000254254 "h"
 *   insn=0x0000000000254200 string=0x0000000000254204 "ME"
 *   insn=0x0000000000254210 string=0x0000000000254214 "h"
 *   insn=0x0000000000254220 string=0x0000000000254224 ""
 *   insn=0x000000000025422C string=0x0000000000254230 ""
 *   insn=0x0000000000254234 string=0x0000000000254238 "*"
 *   insn=0x0000000000254238 string=0x000000000025423C "!"
 *   insn=0x000000000025423C string=0x0000000000254240 "_"
 *   insn=0x000000000025423C string=0x00000000005875D0 "PFPN5Caver23MagicExplosionComponentEvE"
 *   insn=0x0000000000254240 string=0x0000000000254244 " "
 *   insn=0x0000000000254248 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::MagicExplosionComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver23MagicExplosionComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::MagicExplosionComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

