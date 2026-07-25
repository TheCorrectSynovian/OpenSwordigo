/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000347734
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_30ConfigureOverlayViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ConfigureOverlayViewController,Caver::ConfigureOverlayViewController>(boost::shared_ptr<Caver::ConfigureOverlayViewController> const*,Caver::ConfigureOverlayViewController *)
 *
 * Callers: 1
 *   0x00000000001FCE90  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ConfigureOverlayViewController,Caver::ConfigureOverlayViewController>(boost::shared_ptr<Caver::ConfigureOverlayViewController> const*,Caver::ConfigureOverlayViewController *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 38
 *   insn=0x0000000000347744 string=0x0000000000347748 "`"
 *   insn=0x0000000000347748 string=0x000000000034774C ""
 *   insn=0x0000000000347748 string=0x0000000000347754 "3"
 *   insn=0x000000000034774C string=0x0000000000347750 "h"
 *   insn=0x0000000000347758 string=0x000000000034775C "h"
 *   insn=0x000000000034775C string=0x0000000000347760 ""
 *   insn=0x0000000000347760 string=0x0000000000347764 "h"
 *   insn=0x0000000000347774 string=0x0000000000347778 "h\n@"
 *   insn=0x0000000000347778 string=0x000000000034777C ""
 *   insn=0x000000000034777C string=0x0000000000347780 "h\n"
 *   insn=0x0000000000347784 string=0x0000000000347788 "@"
 *   insn=0x0000000000347788 string=0x000000000034778C ""
 *   insn=0x000000000034778C string=0x0000000000347790 ""
 *   insn=0x0000000000347794 string=0x0000000000347798 ""
 *   insn=0x0000000000347798 string=0x000000000034779C "@"
 *   insn=0x00000000003477A8 string=0x00000000003477AC "h"
 *   insn=0x00000000003477AC string=0x00000000003477B0 ""
 *   insn=0x00000000003477B0 string=0x00000000003477B4 "h"
 *   insn=0x00000000003477B4 string=0x00000000003477B8 "!"
 *   insn=0x00000000003477B8 string=0x00000000003477BC "h"
 *   insn=0x00000000003477C0 string=0x00000000003477C4 "\t@"
 *   insn=0x00000000003477C8 string=0x00000000003477CC "h\n@"
 *   insn=0x00000000003477CC string=0x00000000003477D0 ""
 *   insn=0x00000000003477D0 string=0x00000000003477D4 "h\n"
 *   insn=0x00000000003477D8 string=0x00000000003477E8 "h"
 *   insn=0x00000000003477F8 string=0x00000000003477FC " "
 *   insn=0x0000000000347800 string=0x0000000000347804 "3"
 *   insn=0x0000000000347804 string=0x0000000000347808 "h"
 *   insn=0x0000000000347808 string=0x000000000034780C ""
 *   insn=0x000000000034780C string=0x0000000000347810 "h"
 *   insn=0x0000000000347814 string=0x0000000000347818 "h"
 *   insn=0x0000000000347818 string=0x000000000034781C "\t@"
 *   insn=0x0000000000347824 string=0x0000000000347828 "h\n@"
 *   insn=0x0000000000347828 string=0x000000000034782C ""
 *   insn=0x000000000034782C string=0x0000000000347830 "h\n"
 *   insn=0x0000000000347834 string=0x0000000000347838 "h"
 *   insn=0x0000000000347838 string=0x000000000034783C "@"
 *   insn=0x0000000000347854 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ConfigureOverlayViewController,Caver::ConfigureOverlayViewController>(
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

