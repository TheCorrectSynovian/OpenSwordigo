/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036543C
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_20PortalViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PortalViewController,Caver::PortalViewController>(boost::shared_ptr<Caver::PortalViewController> const*,Caver::PortalViewController *)
 *
 * Callers: 1
 *   0x00000000001F43C0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PortalViewController,Caver::PortalViewController>(boost::shared_ptr<Caver::PortalViewController> const*,Caver::PortalViewController *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x000000000036544C string=0x0000000000365450 "`"
 *   insn=0x0000000000365450 string=0x0000000000365454 ""
 *   insn=0x0000000000365450 string=0x000000000036545C "3"
 *   insn=0x0000000000365454 string=0x0000000000365458 "h"
 *   insn=0x0000000000365460 string=0x0000000000365464 "h"
 *   insn=0x0000000000365464 string=0x0000000000365468 ""
 *   insn=0x0000000000365468 string=0x000000000036546C "h"
 *   insn=0x000000000036547C string=0x0000000000365480 "h\n@"
 *   insn=0x0000000000365480 string=0x0000000000365484 ""
 *   insn=0x0000000000365484 string=0x0000000000365488 "h\n"
 *   insn=0x000000000036548C string=0x0000000000365490 "@"
 *   insn=0x0000000000365490 string=0x0000000000365494 ""
 *   insn=0x0000000000365494 string=0x0000000000365498 ""
 *   insn=0x000000000036549C string=0x00000000003654A0 ""
 *   insn=0x00000000003654A0 string=0x00000000003654A4 "@"
 *   insn=0x00000000003654B0 string=0x00000000003654B4 "h"
 *   insn=0x00000000003654B4 string=0x00000000003654B8 ""
 *   insn=0x00000000003654B8 string=0x00000000003654BC "h"
 *   insn=0x00000000003654BC string=0x00000000003654C0 "!"
 *   insn=0x00000000003654C0 string=0x00000000003654C4 "h"
 *   insn=0x00000000003654C8 string=0x00000000003654CC "\t@"
 *   insn=0x00000000003654D0 string=0x00000000003654D4 "h\n@"
 *   insn=0x00000000003654D4 string=0x00000000003654D8 ""
 *   insn=0x00000000003654D8 string=0x00000000003654DC "h\n"
 *   insn=0x00000000003654E0 string=0x00000000003654F0 "h"
 *   insn=0x0000000000365500 string=0x0000000000365504 " "
 *   insn=0x0000000000365508 string=0x000000000036550C "3"
 *   insn=0x000000000036550C string=0x0000000000365510 "h"
 *   insn=0x0000000000365510 string=0x0000000000365514 ""
 *   insn=0x0000000000365514 string=0x0000000000365518 "h"
 *   insn=0x000000000036551C string=0x0000000000365520 "h"
 *   insn=0x0000000000365520 string=0x0000000000365524 "\t@"
 *   insn=0x000000000036552C string=0x0000000000365530 "h\n@"
 *   insn=0x0000000000365530 string=0x0000000000365534 ""
 *   insn=0x0000000000365534 string=0x0000000000365538 "h\n"
 *   insn=0x000000000036553C string=0x0000000000365540 "h"
 *   insn=0x0000000000365540 string=0x0000000000365544 "@"
 *   insn=0x0000000000365554 string=0x0000000000365558 "}"
 *   insn=0x0000000000365558 string=0x000000000036555C "UG"
 *   insn=0x000000000036555C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PortalViewController,Caver::PortalViewController>(
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

