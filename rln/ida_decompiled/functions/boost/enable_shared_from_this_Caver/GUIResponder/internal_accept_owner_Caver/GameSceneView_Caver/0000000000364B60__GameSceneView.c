/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000364B60
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13GameSceneViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameSceneView,Caver::GameSceneView>(boost::shared_ptr<Caver::GameSceneView> const*,Caver::GameSceneView *)
 *
 * Callers: 1
 *   0x00000000002030D0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameSceneView,Caver::GameSceneView>(boost::shared_ptr<Caver::GameSceneView> const*,Caver::GameSceneView *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 38
 *   insn=0x0000000000364B70 string=0x0000000000364B74 "`"
 *   insn=0x0000000000364B74 string=0x0000000000364B78 ""
 *   insn=0x0000000000364B74 string=0x0000000000364B80 "3"
 *   insn=0x0000000000364B78 string=0x0000000000364B7C "h"
 *   insn=0x0000000000364B84 string=0x0000000000364B88 "h"
 *   insn=0x0000000000364B88 string=0x0000000000364B8C ""
 *   insn=0x0000000000364B8C string=0x0000000000364B90 "h"
 *   insn=0x0000000000364BA0 string=0x0000000000364BA4 "h\n@"
 *   insn=0x0000000000364BA4 string=0x0000000000364BA8 ""
 *   insn=0x0000000000364BA8 string=0x0000000000364BAC "h\n"
 *   insn=0x0000000000364BB0 string=0x0000000000364BB4 "@"
 *   insn=0x0000000000364BB4 string=0x0000000000364BB8 ""
 *   insn=0x0000000000364BB8 string=0x0000000000364BBC ""
 *   insn=0x0000000000364BC0 string=0x0000000000364BC4 ""
 *   insn=0x0000000000364BC4 string=0x0000000000364BC8 "@"
 *   insn=0x0000000000364BD4 string=0x0000000000364BD8 "h"
 *   insn=0x0000000000364BD8 string=0x0000000000364BDC ""
 *   insn=0x0000000000364BDC string=0x0000000000364BE0 "h"
 *   insn=0x0000000000364BE0 string=0x0000000000364BE4 "!"
 *   insn=0x0000000000364BE4 string=0x0000000000364BE8 "h"
 *   insn=0x0000000000364BEC string=0x0000000000364BF0 "\t@"
 *   insn=0x0000000000364BF4 string=0x0000000000364BF8 "h\n@"
 *   insn=0x0000000000364BF8 string=0x0000000000364BFC ""
 *   insn=0x0000000000364BFC string=0x0000000000364C00 "h\n"
 *   insn=0x0000000000364C04 string=0x0000000000364C14 "h"
 *   insn=0x0000000000364C24 string=0x0000000000364C28 " "
 *   insn=0x0000000000364C2C string=0x0000000000364C30 "3"
 *   insn=0x0000000000364C30 string=0x0000000000364C34 "h"
 *   insn=0x0000000000364C34 string=0x0000000000364C38 ""
 *   insn=0x0000000000364C38 string=0x0000000000364C3C "h"
 *   insn=0x0000000000364C40 string=0x0000000000364C44 "h"
 *   insn=0x0000000000364C44 string=0x0000000000364C48 "\t@"
 *   insn=0x0000000000364C50 string=0x0000000000364C54 "h\n@"
 *   insn=0x0000000000364C54 string=0x0000000000364C58 ""
 *   insn=0x0000000000364C58 string=0x0000000000364C5C "h\n"
 *   insn=0x0000000000364C60 string=0x0000000000364C64 "h"
 *   insn=0x0000000000364C64 string=0x0000000000364C68 "@"
 *   insn=0x0000000000364C80 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameSceneView,Caver::GameSceneView>(
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

