/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000211C28
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_23GUINavigationControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GUINavigationController,Caver::GUINavigationController>(boost::shared_ptr<Caver::GUINavigationController> const*,Caver::GUINavigationController *)
 *
 * Callers: 1
 *   0x0000000000201BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GUINavigationController,Caver::GUINavigationController>(boost::shared_ptr<Caver::GUINavigationController> const*,Caver::GUINavigationController *)
 *
 * Callees: 2
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x0000000000211C38 string=0x0000000000211C3C "`"
 *   insn=0x0000000000211C3C string=0x0000000000211C40 ""
 *   insn=0x0000000000211C3C string=0x0000000000211C48 "3"
 *   insn=0x0000000000211C40 string=0x0000000000211C44 "h"
 *   insn=0x0000000000211C4C string=0x0000000000211C50 "h"
 *   insn=0x0000000000211C50 string=0x0000000000211C54 ""
 *   insn=0x0000000000211C54 string=0x0000000000211C58 "h"
 *   insn=0x0000000000211C68 string=0x0000000000211C6C "h\n@"
 *   insn=0x0000000000211C6C string=0x0000000000211C70 ""
 *   insn=0x0000000000211C70 string=0x0000000000211C74 "h\n"
 *   insn=0x0000000000211C78 string=0x0000000000211C7C "@"
 *   insn=0x0000000000211C7C string=0x0000000000211C80 ""
 *   insn=0x0000000000211C80 string=0x0000000000211C84 ""
 *   insn=0x0000000000211C88 string=0x0000000000211C8C ""
 *   insn=0x0000000000211C8C string=0x0000000000211C90 "@"
 *   insn=0x0000000000211C9C string=0x0000000000211CA0 "h"
 *   insn=0x0000000000211CA0 string=0x0000000000211CA4 ""
 *   insn=0x0000000000211CA4 string=0x0000000000211CA8 "h"
 *   insn=0x0000000000211CA8 string=0x0000000000211CAC "!"
 *   insn=0x0000000000211CAC string=0x0000000000211CB0 "h"
 *   insn=0x0000000000211CB4 string=0x0000000000211CB8 "\t@"
 *   insn=0x0000000000211CBC string=0x0000000000211CC0 "h\n@"
 *   insn=0x0000000000211CC0 string=0x0000000000211CC4 ""
 *   insn=0x0000000000211CC4 string=0x0000000000211CC8 "h\n"
 *   insn=0x0000000000211CCC string=0x0000000000211CDC "h"
 *   insn=0x0000000000211CEC string=0x0000000000211CF0 " "
 *   insn=0x0000000000211CF4 string=0x0000000000211CF8 "3"
 *   insn=0x0000000000211CF8 string=0x0000000000211CFC "h"
 *   insn=0x0000000000211CFC string=0x0000000000211D00 ""
 *   insn=0x0000000000211D00 string=0x0000000000211D04 "h"
 *   insn=0x0000000000211D08 string=0x0000000000211D0C "h"
 *   insn=0x0000000000211D0C string=0x0000000000211D10 "\t@"
 *   insn=0x0000000000211D18 string=0x0000000000211D1C "h\n@"
 *   insn=0x0000000000211D1C string=0x0000000000211D20 ""
 *   insn=0x0000000000211D20 string=0x0000000000211D24 "h\n"
 *   insn=0x0000000000211D28 string=0x0000000000211D2C "h"
 *   insn=0x0000000000211D2C string=0x0000000000211D30 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GUINavigationController,Caver::GUINavigationController>(
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

