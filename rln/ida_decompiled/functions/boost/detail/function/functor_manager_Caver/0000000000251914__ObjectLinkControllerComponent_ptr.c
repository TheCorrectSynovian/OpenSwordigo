/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000251914
 * Mangled: _ZN5boost6detail8function15functor_managerIPFPN5Caver29ObjectLinkControllerComponentEvEE6manageERKNS1_15function_bufferERS9_NS1_30functor_manager_operation_typeE
 * Demangled: boost::detail::function::functor_manager<Caver::ObjectLinkControllerComponent * (*)(void)>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x0000000000251920 string=0x0000000000251924 "_"
 *   insn=0x0000000000251928 string=0x000000000025192C "("
 *   insn=0x0000000000251930 string=0x0000000000584EE0 "h"
 *   insn=0x0000000000251934 string=0x0000000000251938 ")"
 *   insn=0x0000000000251938 string=0x000000000025193C "(y"
 *   insn=0x000000000025193C string=0x0000000000251940 ""
 *   insn=0x0000000000251944 string=0x0000000000251978 "h"
 *   insn=0x000000000025194C string=0x00000000002519A4 "h"
 *   insn=0x0000000000251950 string=0x0000000000251954 "EC"
 *   insn=0x0000000000251960 string=0x0000000000251964 "h"
 *   insn=0x0000000000251970 string=0x0000000000251974 ""
 *   insn=0x000000000025197C string=0x0000000000251980 ""
 *   insn=0x0000000000251984 string=0x0000000000251988 "*"
 *   insn=0x0000000000251988 string=0x000000000025198C "!<C"
 *   insn=0x000000000025198C string=0x0000000000251990 "_"
 *   insn=0x000000000025198C string=0x0000000000585EA0 "PFPN5Caver29ObjectLinkControllerComponentEvE"
 *   insn=0x0000000000251990 string=0x0000000000251994 " "
 *   insn=0x0000000000251998 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall ***__fastcall boost::detail::function::functor_manager<Caver::ObjectLinkControllerComponent * (*)(void)>::manage(
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
                                                                                   "PFPN5Caver29ObjectLinkControllerComponentEvE");
      if ( (_DWORD)result )
        v5 = 0;
      else
        v5 = v4;
      goto LABEL_12;
    default:
      v5 = &`typeinfo for'Caver::ObjectLinkControllerComponent * (*)(void);
      a2[4] = 0;
LABEL_12:
      *(_QWORD *)a2 = v5;
      return result;
  }
}

