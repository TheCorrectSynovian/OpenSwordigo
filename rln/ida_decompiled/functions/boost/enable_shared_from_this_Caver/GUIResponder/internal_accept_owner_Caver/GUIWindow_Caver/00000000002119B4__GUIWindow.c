/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002119B4
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9GUIWindowES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIWindow,Caver::GUIWindow>(boost::shared_ptr<Caver::GUIWindow> const*,Caver::GUIWindow *)
 *
 * Callers: 1
 *   0x00000000001FA7E0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIWindow,Caver::GUIWindow>(boost::shared_ptr<Caver::GUIWindow> const*,Caver::GUIWindow *)
 *
 * Callees: 2
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 38
 *   insn=0x00000000002119C4 string=0x00000000002119C8 "`"
 *   insn=0x00000000002119C8 string=0x00000000002119CC ""
 *   insn=0x00000000002119C8 string=0x00000000002119D4 "3"
 *   insn=0x00000000002119CC string=0x00000000002119D0 "h"
 *   insn=0x00000000002119D8 string=0x00000000002119DC "h"
 *   insn=0x00000000002119DC string=0x00000000002119E0 ""
 *   insn=0x00000000002119E0 string=0x00000000002119E4 "h"
 *   insn=0x00000000002119F4 string=0x00000000002119F8 "h\n@"
 *   insn=0x00000000002119F8 string=0x00000000002119FC ""
 *   insn=0x00000000002119FC string=0x0000000000211A00 "h\n"
 *   insn=0x0000000000211A04 string=0x0000000000211A08 "@"
 *   insn=0x0000000000211A08 string=0x0000000000211A0C ""
 *   insn=0x0000000000211A0C string=0x0000000000211A10 ""
 *   insn=0x0000000000211A14 string=0x0000000000211A18 ""
 *   insn=0x0000000000211A18 string=0x0000000000211A1C "@"
 *   insn=0x0000000000211A28 string=0x0000000000211A2C "h"
 *   insn=0x0000000000211A2C string=0x0000000000211A30 ""
 *   insn=0x0000000000211A30 string=0x0000000000211A34 "h"
 *   insn=0x0000000000211A34 string=0x0000000000211A38 "!"
 *   insn=0x0000000000211A38 string=0x0000000000211A3C "h"
 *   insn=0x0000000000211A40 string=0x0000000000211A44 "\t@"
 *   insn=0x0000000000211A48 string=0x0000000000211A4C "h\n@"
 *   insn=0x0000000000211A4C string=0x0000000000211A50 ""
 *   insn=0x0000000000211A50 string=0x0000000000211A54 "h\n"
 *   insn=0x0000000000211A58 string=0x0000000000211A68 "h"
 *   insn=0x0000000000211A78 string=0x0000000000211A7C " "
 *   insn=0x0000000000211A80 string=0x0000000000211A84 "3"
 *   insn=0x0000000000211A84 string=0x0000000000211A88 "h"
 *   insn=0x0000000000211A88 string=0x0000000000211A8C ""
 *   insn=0x0000000000211A8C string=0x0000000000211A90 "h"
 *   insn=0x0000000000211A94 string=0x0000000000211A98 "h"
 *   insn=0x0000000000211A98 string=0x0000000000211A9C "\t@"
 *   insn=0x0000000000211AA4 string=0x0000000000211AA8 "h\n@"
 *   insn=0x0000000000211AA8 string=0x0000000000211AAC ""
 *   insn=0x0000000000211AAC string=0x0000000000211AB0 "h\n"
 *   insn=0x0000000000211AB4 string=0x0000000000211AB8 "h"
 *   insn=0x0000000000211AB8 string=0x0000000000211ABC "@"
 *   insn=0x0000000000211AC8 string=0x0000000000211ACC "~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIWindow,Caver::GUIWindow>(
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

