/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003429A8
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9GUISwitchES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUISwitch,Caver::GUISwitch>(boost::shared_ptr<Caver::GUISwitch> const*,Caver::GUISwitch *)
 *
 * Callers: 1
 *   0x0000000000200400  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUISwitch,Caver::GUISwitch>(boost::shared_ptr<Caver::GUISwitch> const*,Caver::GUISwitch *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x00000000003429B8 string=0x00000000003429BC "`"
 *   insn=0x00000000003429BC string=0x00000000003429C0 ""
 *   insn=0x00000000003429BC string=0x00000000003429C8 "3"
 *   insn=0x00000000003429C0 string=0x00000000003429C4 "h"
 *   insn=0x00000000003429CC string=0x00000000003429D0 "h"
 *   insn=0x00000000003429D0 string=0x00000000003429D4 ""
 *   insn=0x00000000003429D4 string=0x00000000003429D8 "h"
 *   insn=0x00000000003429E8 string=0x00000000003429EC "h\n@"
 *   insn=0x00000000003429EC string=0x00000000003429F0 ""
 *   insn=0x00000000003429F0 string=0x00000000003429F4 "h\n"
 *   insn=0x00000000003429F8 string=0x00000000003429FC "@"
 *   insn=0x00000000003429FC string=0x0000000000342A00 ""
 *   insn=0x0000000000342A00 string=0x0000000000342A04 ""
 *   insn=0x0000000000342A08 string=0x0000000000342A0C ""
 *   insn=0x0000000000342A0C string=0x0000000000342A10 "@"
 *   insn=0x0000000000342A1C string=0x0000000000342A20 "h"
 *   insn=0x0000000000342A20 string=0x0000000000342A24 ""
 *   insn=0x0000000000342A24 string=0x0000000000342A28 "h"
 *   insn=0x0000000000342A28 string=0x0000000000342A2C "!"
 *   insn=0x0000000000342A2C string=0x0000000000342A30 "h"
 *   insn=0x0000000000342A34 string=0x0000000000342A38 "\t@"
 *   insn=0x0000000000342A3C string=0x0000000000342A40 "h\n@"
 *   insn=0x0000000000342A40 string=0x0000000000342A44 ""
 *   insn=0x0000000000342A44 string=0x0000000000342A48 "h\n"
 *   insn=0x0000000000342A4C string=0x0000000000342A5C "h"
 *   insn=0x0000000000342A6C string=0x0000000000342A70 " "
 *   insn=0x0000000000342A74 string=0x0000000000342A78 "3"
 *   insn=0x0000000000342A78 string=0x0000000000342A7C "h"
 *   insn=0x0000000000342A7C string=0x0000000000342A80 ""
 *   insn=0x0000000000342A80 string=0x0000000000342A84 "h"
 *   insn=0x0000000000342A88 string=0x0000000000342A8C "h"
 *   insn=0x0000000000342A8C string=0x0000000000342A90 "\t@"
 *   insn=0x0000000000342A98 string=0x0000000000342A9C "h\n@"
 *   insn=0x0000000000342A9C string=0x0000000000342AA0 ""
 *   insn=0x0000000000342AA0 string=0x0000000000342AA4 "h\n"
 *   insn=0x0000000000342AA8 string=0x0000000000342AAC "h"
 *   insn=0x0000000000342AAC string=0x0000000000342AB0 "@"
 *   insn=0x0000000000342AC0 string=0x0000000000342AC4 ""."
 *   insn=0x0000000000342AC8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUISwitch,Caver::GUISwitch>(
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

