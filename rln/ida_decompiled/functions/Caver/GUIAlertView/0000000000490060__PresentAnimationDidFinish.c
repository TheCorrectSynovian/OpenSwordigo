/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000490060
 * Mangled: _ZN5Caver12GUIAlertView25PresentAnimationDidFinishEPvPNS_8GUIEventE
 * Demangled: Caver::GUIAlertView::PresentAnimationDidFinish(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x000000000048F638  Caver::GUIAlertView::AddAnimations(bool)
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x0000000000490060 string=0x0000000000490064 ")"
 *   insn=0x0000000000490064 string=0x0000000000490068 ")"
 *   insn=0x0000000000490068 string=0x000000000049006C "?"
 *   insn=0x0000000000490074 string=0x0000000000490078 ""
 *   insn=0x000000000049007C string=0x0000000000490080 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIAlertView::PresentAnimationDidFinish(__int64 result)
{
  _QWORD *v1; // x8

  v1 = *(_QWORD **)(result + 320);
  if ( (int)((*(_QWORD *)(result + 328) - (_QWORD)v1) >> 4) >= 1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 200LL))(*v1);
  return result;
}

