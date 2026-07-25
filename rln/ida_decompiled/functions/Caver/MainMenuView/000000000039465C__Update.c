/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000039465C
 * Mangled: _ZN5Caver12MainMenuView6UpdateEf
 * Demangled: Caver::MainMenuView::Update(float)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x00000000001FA870  Caver::BadgeCountView::SetCount(int)
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *   0x0000000000202DB0  Caver::CameraController::GotoTargetImmediately(void)
 *
 * Referenced strings: 9
 *   insn=0x000000000039466C string=0x0000000000394670 "h"
 *   insn=0x0000000000394674 string=0x0000000000394678 "h~@"
 *   insn=0x0000000000394674 string=0x0000000000394688 "sFA"
 *   insn=0x0000000000394688 string=0x000000000039468C "I"
 *   insn=0x000000000039468C string=0x0000000000394690 ""
 *   insn=0x000000000039468C string=0x00000000001F93B0 "0'"
 *   insn=0x0000000000394690 string=0x0000000000394694 "a@"
 *   insn=0x00000000003946A8 string=0x00000000003946AC "q"
 *   insn=0x00000000003946AC string=0x00000000001FA870 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MainMenuView::Update(Caver::BadgeCountView **this, float a2)
{
  Caver::OnlineController *v3; // x0
  Caver::BadgeCountView *v4; // x19
  __int64 v5; // x0
  int v6; // w1

  v3 = (Caver::OnlineController *)Caver::GUIView::Update((Caver::GUIView *)this, a2);
  if ( *((_BYTE *)this + 233) )
  {
    v3 = (Caver::OnlineController *)Caver::CameraController::GotoTargetImmediately((Caver::BadgeCountView *)((char *)this[31] + 256));
    *((_BYTE *)this + 233) = 0;
  }
  v4 = this[81];
  v5 = Caver::OnlineController::SharedController(v3);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 192LL))(v5);
  return Caver::BadgeCountView::SetCount(v4, v6);
}

