/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025186C
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver15ShadowComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::ShadowComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 17
 *   insn=0x0000000000251878 string=0x000000000025187C "_"
 *   insn=0x0000000000251880 string=0x0000000000251884 "("
 *   insn=0x000000000025188C string=0x0000000000251890 ")1;"
 *   insn=0x0000000000251890 string=0x0000000000251894 "(y"
 *   insn=0x0000000000251894 string=0x0000000000251898 ""
 *   insn=0x000000000025189C string=0x00000000002518D0 "h"
 *   insn=0x00000000002518A4 string=0x00000000002518FC "h"
 *   insn=0x00000000002518A8 string=0x00000000002518AC "=A"
 *   insn=0x00000000002518B8 string=0x00000000002518BC "h"
 *   insn=0x00000000002518C8 string=0x00000000002518CC ""
 *   insn=0x00000000002518D4 string=0x00000000002518D8 ""
 *   insn=0x00000000002518DC string=0x00000000002518E0 "*"
 *   insn=0x00000000002518E0 string=0x00000000002518E4 "!"
 *   insn=0x00000000002518E4 string=0x00000000002518E8 "_"
 *   insn=0x00000000002518E4 string=0x0000000000585E60 "PFPN5Caver15ShadowComponentEvE"
 *   insn=0x00000000002518E8 string=0x00000000002518EC " "
 *   insn=0x00000000002518F0 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::ShadowComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver15ShadowComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::ShadowComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

