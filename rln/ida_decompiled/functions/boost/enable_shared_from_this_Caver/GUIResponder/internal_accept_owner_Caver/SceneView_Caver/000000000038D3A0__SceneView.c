/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038D3A0
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9SceneViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneView,Caver::SceneView>(boost::shared_ptr<Caver::SceneView> const*,Caver::SceneView *)
 *
 * Callers: 1
 *   0x00000000001FB400  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneView,Caver::SceneView>(boost::shared_ptr<Caver::SceneView> const*,Caver::SceneView *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x000000000038D3B0 string=0x000000000038D3B4 "`"
 *   insn=0x000000000038D3B4 string=0x000000000038D3B8 ""
 *   insn=0x000000000038D3B4 string=0x000000000038D3C0 "3"
 *   insn=0x000000000038D3B8 string=0x000000000038D3BC "h"
 *   insn=0x000000000038D3C4 string=0x000000000038D3C8 "h"
 *   insn=0x000000000038D3C8 string=0x000000000038D3CC ""
 *   insn=0x000000000038D3CC string=0x000000000038D3D0 "h"
 *   insn=0x000000000038D3E0 string=0x000000000038D3E4 "h\n@"
 *   insn=0x000000000038D3E4 string=0x000000000038D3E8 ""
 *   insn=0x000000000038D3E8 string=0x000000000038D3EC "h\n"
 *   insn=0x000000000038D3F0 string=0x000000000038D3F4 "@"
 *   insn=0x000000000038D3F4 string=0x000000000038D3F8 ""
 *   insn=0x000000000038D3F8 string=0x000000000038D3FC ""
 *   insn=0x000000000038D400 string=0x000000000038D404 ""
 *   insn=0x000000000038D404 string=0x000000000038D408 "@"
 *   insn=0x000000000038D414 string=0x000000000038D418 "h"
 *   insn=0x000000000038D418 string=0x000000000038D41C ""
 *   insn=0x000000000038D41C string=0x000000000038D420 "h"
 *   insn=0x000000000038D420 string=0x000000000038D424 "!"
 *   insn=0x000000000038D424 string=0x000000000038D428 "h"
 *   insn=0x000000000038D42C string=0x000000000038D430 "\t@"
 *   insn=0x000000000038D434 string=0x000000000038D438 "h\n@"
 *   insn=0x000000000038D438 string=0x000000000038D43C ""
 *   insn=0x000000000038D43C string=0x000000000038D440 "h\n"
 *   insn=0x000000000038D444 string=0x000000000038D454 "h"
 *   insn=0x000000000038D464 string=0x000000000038D468 " "
 *   insn=0x000000000038D46C string=0x000000000038D470 "3"
 *   insn=0x000000000038D470 string=0x000000000038D474 "h"
 *   insn=0x000000000038D474 string=0x000000000038D478 ""
 *   insn=0x000000000038D478 string=0x000000000038D47C "h"
 *   insn=0x000000000038D480 string=0x000000000038D484 "h"
 *   insn=0x000000000038D484 string=0x000000000038D488 "\t@"
 *   insn=0x000000000038D490 string=0x000000000038D494 "h\n@"
 *   insn=0x000000000038D494 string=0x000000000038D498 ""
 *   insn=0x000000000038D498 string=0x000000000038D49C "h\n"
 *   insn=0x000000000038D4A0 string=0x000000000038D4A4 "h"
 *   insn=0x000000000038D4A4 string=0x000000000038D4A8 "@"
 *   insn=0x000000000038D4BC string=0x000000000038D4C0 "|"
 *   insn=0x000000000038D4C0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneView,Caver::SceneView>(
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

