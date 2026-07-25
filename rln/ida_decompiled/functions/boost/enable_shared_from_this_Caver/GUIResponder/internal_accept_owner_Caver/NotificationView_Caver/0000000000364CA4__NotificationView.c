/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000364CA4
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_16NotificationViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::NotificationView,Caver::NotificationView>(boost::shared_ptr<Caver::NotificationView> const*,Caver::NotificationView *)
 *
 * Callers: 1
 *   0x00000000001FD920  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::NotificationView,Caver::NotificationView>(boost::shared_ptr<Caver::NotificationView> const*,Caver::NotificationView *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x0000000000364CB4 string=0x0000000000364CB8 "`"
 *   insn=0x0000000000364CB8 string=0x0000000000364CBC ""
 *   insn=0x0000000000364CB8 string=0x0000000000364CC4 "3"
 *   insn=0x0000000000364CBC string=0x0000000000364CC0 "h"
 *   insn=0x0000000000364CC8 string=0x0000000000364CCC "h"
 *   insn=0x0000000000364CCC string=0x0000000000364CD0 ""
 *   insn=0x0000000000364CD0 string=0x0000000000364CD4 "h"
 *   insn=0x0000000000364CE4 string=0x0000000000364CE8 "h\n@"
 *   insn=0x0000000000364CE8 string=0x0000000000364CEC ""
 *   insn=0x0000000000364CEC string=0x0000000000364CF0 "h\n"
 *   insn=0x0000000000364CF4 string=0x0000000000364CF8 "@"
 *   insn=0x0000000000364CF8 string=0x0000000000364CFC ""
 *   insn=0x0000000000364CFC string=0x0000000000364D00 ""
 *   insn=0x0000000000364D04 string=0x0000000000364D08 ""
 *   insn=0x0000000000364D08 string=0x0000000000364D0C "@"
 *   insn=0x0000000000364D18 string=0x0000000000364D1C "h"
 *   insn=0x0000000000364D1C string=0x0000000000364D20 ""
 *   insn=0x0000000000364D20 string=0x0000000000364D24 "h"
 *   insn=0x0000000000364D24 string=0x0000000000364D28 "!"
 *   insn=0x0000000000364D28 string=0x0000000000364D2C "h"
 *   insn=0x0000000000364D30 string=0x0000000000364D34 "\t@"
 *   insn=0x0000000000364D38 string=0x0000000000364D3C "h\n@"
 *   insn=0x0000000000364D3C string=0x0000000000364D40 ""
 *   insn=0x0000000000364D40 string=0x0000000000364D44 "h\n"
 *   insn=0x0000000000364D48 string=0x0000000000364D58 "h"
 *   insn=0x0000000000364D68 string=0x0000000000364D6C " "
 *   insn=0x0000000000364D70 string=0x0000000000364D74 "3"
 *   insn=0x0000000000364D74 string=0x0000000000364D78 "h"
 *   insn=0x0000000000364D78 string=0x0000000000364D7C ""
 *   insn=0x0000000000364D7C string=0x0000000000364D80 "h"
 *   insn=0x0000000000364D84 string=0x0000000000364D88 "h"
 *   insn=0x0000000000364D88 string=0x0000000000364D8C "\t@"
 *   insn=0x0000000000364D94 string=0x0000000000364D98 "h\n@"
 *   insn=0x0000000000364D98 string=0x0000000000364D9C ""
 *   insn=0x0000000000364D9C string=0x0000000000364DA0 "h\n"
 *   insn=0x0000000000364DA4 string=0x0000000000364DA8 "h"
 *   insn=0x0000000000364DA8 string=0x0000000000364DAC "@"
 *   insn=0x0000000000364DBC string=0x0000000000364DC0 "c"
 *   insn=0x0000000000364DC0 string=0x0000000000364DC4 ";I"
 *   insn=0x0000000000364DC4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::NotificationView,Caver::NotificationView>(
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

