/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002126E4
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_18GameViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameViewController,Caver::GameViewController>(boost::shared_ptr<Caver::GameViewController> const*,Caver::GameViewController *)
 *
 * Callers: 1
 *   0x00000000001FC420  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameViewController,Caver::GameViewController>(boost::shared_ptr<Caver::GameViewController> const*,Caver::GameViewController *)
 *
 * Callees: 2
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 42
 *   insn=0x00000000002126F4 string=0x00000000002126F8 "`"
 *   insn=0x00000000002126F8 string=0x00000000002126FC ""
 *   insn=0x00000000002126F8 string=0x0000000000212704 "3"
 *   insn=0x00000000002126FC string=0x0000000000212700 "h"
 *   insn=0x0000000000212708 string=0x000000000021270C "h"
 *   insn=0x000000000021270C string=0x0000000000212710 ""
 *   insn=0x0000000000212710 string=0x0000000000212714 "h"
 *   insn=0x0000000000212724 string=0x0000000000212728 "h\n@"
 *   insn=0x0000000000212728 string=0x000000000021272C ""
 *   insn=0x000000000021272C string=0x0000000000212730 "h\n"
 *   insn=0x0000000000212734 string=0x0000000000212738 "@"
 *   insn=0x0000000000212738 string=0x000000000021273C ""
 *   insn=0x000000000021273C string=0x0000000000212740 ""
 *   insn=0x0000000000212744 string=0x0000000000212748 ""
 *   insn=0x0000000000212748 string=0x000000000021274C "@"
 *   insn=0x0000000000212758 string=0x000000000021275C "h"
 *   insn=0x000000000021275C string=0x0000000000212760 ""
 *   insn=0x0000000000212760 string=0x0000000000212764 "h"
 *   insn=0x0000000000212764 string=0x0000000000212768 "!"
 *   insn=0x0000000000212768 string=0x000000000021276C "h"
 *   insn=0x0000000000212770 string=0x0000000000212774 "\t@"
 *   insn=0x0000000000212778 string=0x000000000021277C "h\n@"
 *   insn=0x000000000021277C string=0x0000000000212780 ""
 *   insn=0x0000000000212780 string=0x0000000000212784 "h\n"
 *   insn=0x0000000000212788 string=0x0000000000212798 "h"
 *   insn=0x00000000002127A8 string=0x00000000002127AC " "
 *   insn=0x00000000002127B0 string=0x00000000002127B4 "3"
 *   insn=0x00000000002127B4 string=0x00000000002127B8 "h"
 *   insn=0x00000000002127B8 string=0x00000000002127BC ""
 *   insn=0x00000000002127BC string=0x00000000002127C0 "h"
 *   insn=0x00000000002127C4 string=0x00000000002127C8 "h"
 *   insn=0x00000000002127C8 string=0x00000000002127CC "\t@"
 *   insn=0x00000000002127D4 string=0x00000000002127D8 "h\n@"
 *   insn=0x00000000002127D8 string=0x00000000002127DC ""
 *   insn=0x00000000002127DC string=0x00000000002127E0 "h\n"
 *   insn=0x00000000002127E4 string=0x00000000002127E8 "h"
 *   insn=0x00000000002127E8 string=0x00000000002127EC "@"
 *   insn=0x00000000002127F8 string=0x00000000002127FC "2"
 *   insn=0x0000000000212808 string=0x000000000021280C ""
 *   insn=0x0000000000212810 string=0x0000000000212814 " "
 *   insn=0x0000000000212818 string=0x000000000021281C "A"
 *   insn=0x0000000000212820 string=0x0000000000212824 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameViewController,Caver::GameViewController>(
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

