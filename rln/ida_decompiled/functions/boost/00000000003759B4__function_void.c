/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003759B4
 * Mangled: _ZN5boost8functionIFvPvPN5Caver8GUIEventEEEaSERKS6_
 * Demangled: boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *
 * Callers: 2
 *   0x00000000002033A0  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *   0x0000000000375368  Caver::AchievementNotificationView::AnimateOutAfterDelay(float)
 *
 * Callees: 11
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8E70  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIFrameView,Caver::GUIFrameView>(boost::shared_ptr<Caver::GUIFrameView> const*,Caver::GUIFrameView *)
 *   0x00000000001FB4D0  boost::function2<void,void *,Caver::GUIEvent *>::move_assign(boost::function2<void,void *,Caver::GUIEvent *>&)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000200010  boost::function2<void,void *,Caver::GUIEvent *>::swap(boost::function2<void,void *,Caver::GUIEvent *>&)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 72
 *   insn=0x00000000003759C0 string=0x00000000003759C4 "T"
 *   insn=0x00000000003759D4 string=0x00000000003759D8 "("
 *   insn=0x00000000003759E0 string=0x00000000003759E4 "("
 *   insn=0x00000000003759E4 string=0x00000000003759E8 ""
 *   insn=0x00000000003759E4 string=0x0000000000375A08 "("
 *   insn=0x00000000003759E8 string=0x00000000003759EC ""
 *   insn=0x00000000003759F0 string=0x00000000003759F4 "  "
 *   insn=0x00000000003759F4 string=0x00000000003759F8 "!!"
 *   insn=0x0000000000375A0C string=0x0000000000375A10 " "
 *   insn=0x0000000000375A1C string=0x0000000000375A20 "|)"
 *   insn=0x0000000000375A24 string=0x0000000000375A28 "h"
 *   insn=0x0000000000375A28 string=0x0000000000375A2C "("
 *   insn=0x0000000000375A2C string=0x0000000000375A30 ""
 *   insn=0x0000000000375A30 string=0x0000000000375A34 ""
 *   insn=0x0000000000375A3C string=0x0000000000375A40 " !"
 *   insn=0x0000000000375A78 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000375A80 string=0x0000000000375A84 "h"
 *   insn=0x0000000000375A84 string=0x0000000000375A88 "("
 *   insn=0x0000000000375A88 string=0x0000000000375A8C ""
 *   insn=0x0000000000375A8C string=0x0000000000375A90 ""
 *   insn=0x0000000000375A98 string=0x0000000000375A9C " !"
 *   insn=0x0000000000375AB4 string=0x0000000000375AB8 "%b"
 *   insn=0x0000000000375ACC string=0x0000000000375AD0 "U"
 *   insn=0x0000000000375AF4 string=0x0000000000375AF8 "v"
 *   insn=0x0000000000375AF8 string=0x00000000001FB4D0 "0'"
 *   insn=0x0000000000375B00 string=0x0000000000375B04 "s"
 *   insn=0x0000000000375B0C string=0x0000000000375B10 "p"
 *   insn=0x0000000000375B14 string=0x0000000000375B18 "h"
 *   insn=0x0000000000375B18 string=0x0000000000375B1C "("
 *   insn=0x0000000000375B1C string=0x0000000000375B20 ""
 *   insn=0x0000000000375B20 string=0x0000000000375B24 ""
 *   insn=0x0000000000375B2C string=0x0000000000375B30 " !"
 *   insn=0x0000000000375B70 string=0x0000000000375B74 "h"
 *   insn=0x0000000000375B74 string=0x0000000000375B78 "("
 *   insn=0x0000000000375B78 string=0x0000000000375B7C ""
 *   insn=0x0000000000375B7C string=0x0000000000375B80 ""
 *   insn=0x0000000000375B88 string=0x0000000000375B8C " !"
 *   insn=0x0000000000375BA0 string=0x0000000000375BA4 "H/"
 *   insn=0x0000000000375BC8 string=0x0000000000375BCC "H"
 *   insn=0x0000000000375BCC string=0x0000000000375BD0 "h"
 *   insn=0x0000000000375BCC string=0x0000000000375BF4 "h"
 *   insn=0x0000000000375BD4 string=0x0000000000375BD8 ""
 *   insn=0x0000000000375BD8 string=0x0000000000375BDC ""
 *   insn=0x0000000000375BE0 string=0x0000000000375BE4 "a""
 *   insn=0x0000000000375BF4 string=0x0000000000375BF8 ""
 *   insn=0x0000000000375BF8 string=0x0000000000375BFC ""
 *   insn=0x0000000000375BFC string=0x0000000000375C00 ""
 *   insn=0x0000000000375C00 string=0x0000000000375C04 ""
 *   insn=0x0000000000375C08 string=0x0000000000375C0C "`""
 *   insn=0x0000000000375C24 string=0x0000000000375C28 "h"
 *   insn=0x0000000000375C2C string=0x0000000000375C30 "`"
 *   insn=0x0000000000375C44 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000375C50 string=0x0000000000375C54 "O"
 *   insn=0x0000000000375C54 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000375C7C string=0x0000000000375C80 "X"
 *   insn=0x0000000000375C80 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000375C84 string=0x0000000000375C88 ")"
 *   insn=0x0000000000375C94 string=0x0000000000375C98 "(A"
 *   insn=0x0000000000375C9C string=0x0000000000375CA0 ""
 *   insn=0x0000000000375CA8 string=0x0000000000375CAC "`""
 *   insn=0x0000000000375CB4 string=0x0000000000375CB8 "n"
 *   insn=0x0000000000375CB8 string=0x00000000001F8E70 "0'"
 *   insn=0x0000000000375CCC string=0x0000000000375CD0 "4"
 *   insn=0x0000000000375CD4 string=0x0000000000375CD8 ""
 *   insn=0x0000000000375CE4 string=0x0000000000375CE8 "\t@"
 *   insn=0x0000000000375CF4 string=0x0000000000375CF8 ""
 *   insn=0x0000000000375D04 string=0x0000000000375D08 "@"
 *   insn=0x0000000000375D1C string=0x0000000000375D20 "0"
 *   insn=0x0000000000375D24 string=0x0000000000375D28 "h"
 *   insn=0x0000000000375D28 string=0x0000000000375D2C "!@"
 *   insn=0x0000000000375D48 string=0x0000000000375D4C "Y"
 *   insn=0x0000000000375D4C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(__int64 a1, __int64 *a2)
{
  __int64 v3; // x8
  void (__fastcall *v4)(__int128 *, __int128 *, __int64); // x8
  __int64 v6; // [xsp+88h] [xbp-38h]
  __int128 v7; // [xsp+90h] [xbp-30h] BYREF
  __int64 v8; // [xsp+A0h] [xbp-20h]
  __int64 v9; // [xsp+A8h] [xbp-18h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = 0;
  v3 = *a2;
  if ( *a2 )
  {
    v6 = *a2;
    if ( (v3 & 1) != 0 )
    {
      v8 = a2[3];
      v7 = *(_OWORD *)(a2 + 1);
    }
    else
    {
      (*(void (__fastcall **)(__int64 *, __int128 *, _QWORD))(v3 & 0xFFFFFFFFFFFFFFFELL))(a2 + 1, &v7, 0);
    }
  }
  boost::function2<void,void *,Caver::GUIEvent *>::swap();
  if ( v6 )
  {
    if ( (v6 & 1) == 0 )
    {
      v4 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(v6 & 0xFFFFFFFFFFFFFFFELL);
      if ( v4 )
        v4(&v7, &v7, 2);
    }
  }
  return a1;
}

