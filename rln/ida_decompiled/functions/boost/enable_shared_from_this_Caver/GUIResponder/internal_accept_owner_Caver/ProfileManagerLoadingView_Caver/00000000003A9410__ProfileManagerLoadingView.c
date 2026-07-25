/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A9410
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_25ProfileManagerLoadingViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileManagerLoadingView,Caver::ProfileManagerLoadingView>(boost::shared_ptr<Caver::ProfileManagerLoadingView> const*,Caver::ProfileManagerLoadingView *)
 *
 * Callers: 1
 *   0x0000000000201FF0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileManagerLoadingView,Caver::ProfileManagerLoadingView>(boost::shared_ptr<Caver::ProfileManagerLoadingView> const*,Caver::ProfileManagerLoadingView *)
 *
 * Callees: 2
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x00000000003A9420 string=0x00000000003A9424 "`"
 *   insn=0x00000000003A9424 string=0x00000000003A9428 ""
 *   insn=0x00000000003A9424 string=0x00000000003A9430 "3"
 *   insn=0x00000000003A9428 string=0x00000000003A942C "h"
 *   insn=0x00000000003A9434 string=0x00000000003A9438 "h"
 *   insn=0x00000000003A9438 string=0x00000000003A943C ""
 *   insn=0x00000000003A943C string=0x00000000003A9440 "h"
 *   insn=0x00000000003A9450 string=0x00000000003A9454 "h\n@"
 *   insn=0x00000000003A9454 string=0x00000000003A9458 ""
 *   insn=0x00000000003A9458 string=0x00000000003A945C "h\n"
 *   insn=0x00000000003A9460 string=0x00000000003A9464 "@"
 *   insn=0x00000000003A9464 string=0x00000000003A9468 ""
 *   insn=0x00000000003A9468 string=0x00000000003A946C ""
 *   insn=0x00000000003A9470 string=0x00000000003A9474 ""
 *   insn=0x00000000003A9474 string=0x00000000003A9478 "@"
 *   insn=0x00000000003A9484 string=0x00000000003A9488 "h"
 *   insn=0x00000000003A9488 string=0x00000000003A948C ""
 *   insn=0x00000000003A948C string=0x00000000003A9490 "h"
 *   insn=0x00000000003A9490 string=0x00000000003A9494 "!"
 *   insn=0x00000000003A9494 string=0x00000000003A9498 "h"
 *   insn=0x00000000003A949C string=0x00000000003A94A0 "\t@"
 *   insn=0x00000000003A94A4 string=0x00000000003A94A8 "h\n@"
 *   insn=0x00000000003A94A8 string=0x00000000003A94AC ""
 *   insn=0x00000000003A94AC string=0x00000000003A94B0 "h\n"
 *   insn=0x00000000003A94B4 string=0x00000000003A94C4 "h"
 *   insn=0x00000000003A94D4 string=0x00000000003A94D8 " "
 *   insn=0x00000000003A94DC string=0x00000000003A94E0 "3"
 *   insn=0x00000000003A94E0 string=0x00000000003A94E4 "h"
 *   insn=0x00000000003A94E4 string=0x00000000003A94E8 ""
 *   insn=0x00000000003A94E8 string=0x00000000003A94EC "h"
 *   insn=0x00000000003A94F0 string=0x00000000003A94F4 "h"
 *   insn=0x00000000003A94F4 string=0x00000000003A94F8 "\t@"
 *   insn=0x00000000003A9500 string=0x00000000003A9504 "h\n@"
 *   insn=0x00000000003A9504 string=0x00000000003A9508 ""
 *   insn=0x00000000003A9508 string=0x00000000003A950C "h\n"
 *   insn=0x00000000003A9510 string=0x00000000003A9514 "h"
 *   insn=0x00000000003A9514 string=0x00000000003A9518 "@"
 *   insn=0x00000000003A9540 string=0x00000000003A9544 "h"
 *   insn=0x00000000003A9544 string=0x00000000003A9548 ""
 *   insn=0x00000000003A9548 string=0x00000000003A954C "h"
 *   insn=0x00000000003A954C string=0x00000000003A9550 "!"
 *   insn=0x00000000003A9550 string=0x00000000003A9554 "h"
 *   insn=0x00000000003A9558 string=0x00000000003A955C "\t@"
 *   insn=0x00000000003A9560 string=0x00000000003A9564 "h\n@"
 *   insn=0x00000000003A9564 string=0x00000000003A9568 ""
 *   insn=0x00000000003A9568 string=0x00000000003A956C "h\n"
 *   insn=0x00000000003A9570 string=0x00000000003A9580 "h"
 *   insn=0x00000000003A9590 string=0x00000000003A9594 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileManagerLoadingView,Caver::ProfileManagerLoadingView>(
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

