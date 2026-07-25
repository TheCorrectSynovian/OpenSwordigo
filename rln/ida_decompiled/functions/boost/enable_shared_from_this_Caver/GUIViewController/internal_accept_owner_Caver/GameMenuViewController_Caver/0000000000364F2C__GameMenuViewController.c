/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000364F2C
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_22GameMenuViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameMenuViewController,Caver::GameMenuViewController>(boost::shared_ptr<Caver::GameMenuViewController> const*,Caver::GameMenuViewController *)
 *
 * Callers: 1
 *   0x00000000001FAB10  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameMenuViewController,Caver::GameMenuViewController>(boost::shared_ptr<Caver::GameMenuViewController> const*,Caver::GameMenuViewController *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x0000000000364F3C string=0x0000000000364F40 "`"
 *   insn=0x0000000000364F40 string=0x0000000000364F44 ""
 *   insn=0x0000000000364F40 string=0x0000000000364F4C "3"
 *   insn=0x0000000000364F44 string=0x0000000000364F48 "h"
 *   insn=0x0000000000364F50 string=0x0000000000364F54 "h"
 *   insn=0x0000000000364F54 string=0x0000000000364F58 ""
 *   insn=0x0000000000364F58 string=0x0000000000364F5C "h"
 *   insn=0x0000000000364F6C string=0x0000000000364F70 "h\n@"
 *   insn=0x0000000000364F70 string=0x0000000000364F74 ""
 *   insn=0x0000000000364F74 string=0x0000000000364F78 "h\n"
 *   insn=0x0000000000364F7C string=0x0000000000364F80 "@"
 *   insn=0x0000000000364F80 string=0x0000000000364F84 ""
 *   insn=0x0000000000364F84 string=0x0000000000364F88 ""
 *   insn=0x0000000000364F8C string=0x0000000000364F90 ""
 *   insn=0x0000000000364F90 string=0x0000000000364F94 "@"
 *   insn=0x0000000000364FA0 string=0x0000000000364FA4 "h"
 *   insn=0x0000000000364FA4 string=0x0000000000364FA8 ""
 *   insn=0x0000000000364FA8 string=0x0000000000364FAC "h"
 *   insn=0x0000000000364FAC string=0x0000000000364FB0 "!"
 *   insn=0x0000000000364FB0 string=0x0000000000364FB4 "h"
 *   insn=0x0000000000364FB8 string=0x0000000000364FBC "\t@"
 *   insn=0x0000000000364FC0 string=0x0000000000364FC4 "h\n@"
 *   insn=0x0000000000364FC4 string=0x0000000000364FC8 ""
 *   insn=0x0000000000364FC8 string=0x0000000000364FCC "h\n"
 *   insn=0x0000000000364FD0 string=0x0000000000364FE0 "h"
 *   insn=0x0000000000364FF0 string=0x0000000000364FF4 " "
 *   insn=0x0000000000364FF8 string=0x0000000000364FFC "3"
 *   insn=0x0000000000364FFC string=0x0000000000365000 "h"
 *   insn=0x0000000000365000 string=0x0000000000365004 ""
 *   insn=0x0000000000365004 string=0x0000000000365008 "h"
 *   insn=0x000000000036500C string=0x0000000000365010 "h"
 *   insn=0x0000000000365010 string=0x0000000000365014 "\t@"
 *   insn=0x000000000036501C string=0x0000000000365020 "h\n@"
 *   insn=0x0000000000365020 string=0x0000000000365024 ""
 *   insn=0x0000000000365024 string=0x0000000000365028 "h\n"
 *   insn=0x000000000036502C string=0x0000000000365030 "h"
 *   insn=0x0000000000365030 string=0x0000000000365034 "@"
 *   insn=0x0000000000365040 string=0x0000000000365044 " r"
 *   insn=0x000000000036504C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameMenuViewController,Caver::GameMenuViewController>(
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

