/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049F5C8
 * Mangled: _ZN5Caver7GUIView8SetFrameERKNS_9RectangleE
 * Demangled: Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 10
 *   insn=0x000000000049F5D4 string=0x000000000049F5D8 "S"
 *   insn=0x000000000049F5D8 string=0x000000000049F5DC "h"
 *   insn=0x000000000049F5E0 string=0x000000000049F5E4 " "
 *   insn=0x000000000049F5E4 string=0x000000000049F5E8 ""
 *   insn=0x000000000049F5E8 string=0x000000000049F5EC "\t@H"
 *   insn=0x000000000049F5F4 string=0x000000000049F5F8 "\n"
 *   insn=0x000000000049F5F8 string=0x000000000049F5FC "}@"
 *   insn=0x000000000049F604 string=0x000000000049F608 "h"
 *   insn=0x000000000049F614 string=0x000000000049F628 "*["
 *   insn=0x000000000049F628 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::SetFrame(Caver::GUIView *this, const Caver::Rectangle *a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x10
  __int64 (__fastcall *v5)(Caver::GUIView *, _QWORD *); // x8
  _QWORD v7[3]; // [xsp+8h] [xbp-28h] BYREF

  v7[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_QWORD *)this;
  v3 = *(_QWORD *)((char *)this + 132);
  *(_OWORD *)((char *)this + 116) = *(_OWORD *)a2;
  v4 = *(_QWORD *)((char *)this + 124);
  v5 = *(__int64 (__fastcall **)(Caver::GUIView *, _QWORD *))(v2 + 248);
  v7[0] = v3;
  v7[1] = v4;
  return v5(this, v7);
}

