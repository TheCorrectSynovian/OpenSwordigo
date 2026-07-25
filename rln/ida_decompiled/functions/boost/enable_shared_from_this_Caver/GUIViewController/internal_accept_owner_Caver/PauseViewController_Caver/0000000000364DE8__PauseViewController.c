/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000364DE8
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_19PauseViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PauseViewController,Caver::PauseViewController>(boost::shared_ptr<Caver::PauseViewController> const*,Caver::PauseViewController *)
 *
 * Callers: 1
 *   0x00000000001F4370  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PauseViewController,Caver::PauseViewController>(boost::shared_ptr<Caver::PauseViewController> const*,Caver::PauseViewController *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x0000000000364DF8 string=0x0000000000364DFC "`"
 *   insn=0x0000000000364DFC string=0x0000000000364E00 ""
 *   insn=0x0000000000364DFC string=0x0000000000364E08 "3"
 *   insn=0x0000000000364E00 string=0x0000000000364E04 "h"
 *   insn=0x0000000000364E0C string=0x0000000000364E10 "h"
 *   insn=0x0000000000364E10 string=0x0000000000364E14 ""
 *   insn=0x0000000000364E14 string=0x0000000000364E18 "h"
 *   insn=0x0000000000364E28 string=0x0000000000364E2C "h\n@"
 *   insn=0x0000000000364E2C string=0x0000000000364E30 ""
 *   insn=0x0000000000364E30 string=0x0000000000364E34 "h\n"
 *   insn=0x0000000000364E38 string=0x0000000000364E3C "@"
 *   insn=0x0000000000364E3C string=0x0000000000364E40 ""
 *   insn=0x0000000000364E40 string=0x0000000000364E44 ""
 *   insn=0x0000000000364E48 string=0x0000000000364E4C ""
 *   insn=0x0000000000364E4C string=0x0000000000364E50 "@"
 *   insn=0x0000000000364E5C string=0x0000000000364E60 "h"
 *   insn=0x0000000000364E60 string=0x0000000000364E64 ""
 *   insn=0x0000000000364E64 string=0x0000000000364E68 "h"
 *   insn=0x0000000000364E68 string=0x0000000000364E6C "!"
 *   insn=0x0000000000364E6C string=0x0000000000364E70 "h"
 *   insn=0x0000000000364E74 string=0x0000000000364E78 "\t@"
 *   insn=0x0000000000364E7C string=0x0000000000364E80 "h\n@"
 *   insn=0x0000000000364E80 string=0x0000000000364E84 ""
 *   insn=0x0000000000364E84 string=0x0000000000364E88 "h\n"
 *   insn=0x0000000000364E8C string=0x0000000000364E9C "h"
 *   insn=0x0000000000364EAC string=0x0000000000364EB0 " "
 *   insn=0x0000000000364EB4 string=0x0000000000364EB8 "3"
 *   insn=0x0000000000364EB8 string=0x0000000000364EBC "h"
 *   insn=0x0000000000364EBC string=0x0000000000364EC0 ""
 *   insn=0x0000000000364EC0 string=0x0000000000364EC4 "h"
 *   insn=0x0000000000364EC8 string=0x0000000000364ECC "h"
 *   insn=0x0000000000364ECC string=0x0000000000364ED0 "\t@"
 *   insn=0x0000000000364ED8 string=0x0000000000364EDC "h\n@"
 *   insn=0x0000000000364EDC string=0x0000000000364EE0 ""
 *   insn=0x0000000000364EE0 string=0x0000000000364EE4 "h\n"
 *   insn=0x0000000000364EE8 string=0x0000000000364EEC "h"
 *   insn=0x0000000000364EEC string=0x0000000000364EF0 "@"
 *   insn=0x0000000000364EFC string=0x0000000000364F00 "qr"
 *   insn=0x0000000000364F08 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PauseViewController,Caver::PauseViewController>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // x0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8

  result = (_QWORD *)a1[1];
  if ( !result || !result[1] )
  {
    v5 = *(_QWORD **)(a2 + 8);
    if ( v5 )
      ++v5[1];
    *a1 = a3;
    if ( v5 != result )
    {
      if ( v5 )
        ++v5[2];
      if ( result )
      {
        v6 = result[2] - 1LL;
        result[2] = v6;
        if ( !v6 )
          result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 24LL))(result);
      }
      a1[1] = v5;
    }
    if ( v5 )
    {
      v7 = v5[1] - 1LL;
      v5[1] = v7;
      if ( !v7 )
      {
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v8 = v5[2] - 1LL;
        v5[2] = v8;
        if ( !v8 )
          return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
  }
  return result;
}

