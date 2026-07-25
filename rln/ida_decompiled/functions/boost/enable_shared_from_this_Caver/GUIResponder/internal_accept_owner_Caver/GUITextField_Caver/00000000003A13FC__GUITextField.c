/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A13FC
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12GUITextFieldES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUITextField,Caver::GUITextField>(boost::shared_ptr<Caver::GUITextField> const*,Caver::GUITextField *)
 *
 * Callers: 1
 *   0x00000000001F5A90  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUITextField,Caver::GUITextField>(boost::shared_ptr<Caver::GUITextField> const*,Caver::GUITextField *)
 *
 * Callees: 2
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x00000000003A140C string=0x00000000003A1410 "`"
 *   insn=0x00000000003A1410 string=0x00000000003A1414 ""
 *   insn=0x00000000003A1410 string=0x00000000003A141C "3"
 *   insn=0x00000000003A1414 string=0x00000000003A1418 "h"
 *   insn=0x00000000003A1420 string=0x00000000003A1424 "h"
 *   insn=0x00000000003A1424 string=0x00000000003A1428 ""
 *   insn=0x00000000003A1428 string=0x00000000003A142C "h"
 *   insn=0x00000000003A143C string=0x00000000003A1440 "h\n@"
 *   insn=0x00000000003A1440 string=0x00000000003A1444 ""
 *   insn=0x00000000003A1444 string=0x00000000003A1448 "h\n"
 *   insn=0x00000000003A144C string=0x00000000003A1450 "@"
 *   insn=0x00000000003A1450 string=0x00000000003A1454 ""
 *   insn=0x00000000003A1454 string=0x00000000003A1458 ""
 *   insn=0x00000000003A145C string=0x00000000003A1460 ""
 *   insn=0x00000000003A1460 string=0x00000000003A1464 "@"
 *   insn=0x00000000003A1470 string=0x00000000003A1474 "h"
 *   insn=0x00000000003A1474 string=0x00000000003A1478 ""
 *   insn=0x00000000003A1478 string=0x00000000003A147C "h"
 *   insn=0x00000000003A147C string=0x00000000003A1480 "!"
 *   insn=0x00000000003A1480 string=0x00000000003A1484 "h"
 *   insn=0x00000000003A1488 string=0x00000000003A148C "\t@"
 *   insn=0x00000000003A1490 string=0x00000000003A1494 "h\n@"
 *   insn=0x00000000003A1494 string=0x00000000003A1498 ""
 *   insn=0x00000000003A1498 string=0x00000000003A149C "h\n"
 *   insn=0x00000000003A14A0 string=0x00000000003A14B0 "h"
 *   insn=0x00000000003A14C0 string=0x00000000003A14C4 " "
 *   insn=0x00000000003A14C8 string=0x00000000003A14CC "3"
 *   insn=0x00000000003A14CC string=0x00000000003A14D0 "h"
 *   insn=0x00000000003A14D0 string=0x00000000003A14D4 ""
 *   insn=0x00000000003A14D4 string=0x00000000003A14D8 "h"
 *   insn=0x00000000003A14DC string=0x00000000003A14E0 "h"
 *   insn=0x00000000003A14E0 string=0x00000000003A14E4 "\t@"
 *   insn=0x00000000003A14EC string=0x00000000003A14F0 "h\n@"
 *   insn=0x00000000003A14F0 string=0x00000000003A14F4 ""
 *   insn=0x00000000003A14F4 string=0x00000000003A14F8 "h\n"
 *   insn=0x00000000003A14FC string=0x00000000003A1500 "h"
 *   insn=0x00000000003A1500 string=0x00000000003A1504 "@"
 *   insn=0x00000000003A1518 string=0x00000000003A151C ""
 *   insn=0x00000000003A151C string=0x00000000003A1520 ")"
 *   insn=0x00000000003A1524 string=0x00000000003A1528 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUITextField,Caver::GUITextField>(
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

