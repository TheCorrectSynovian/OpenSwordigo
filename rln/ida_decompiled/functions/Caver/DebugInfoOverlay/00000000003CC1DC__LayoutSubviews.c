/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CC1DC
 * Mangled: _ZN5Caver16DebugInfoOverlay14LayoutSubviewsEv
 * Demangled: Caver::DebugInfoOverlay::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *
 * Referenced strings: 12
 *   insn=0x00000000003CC1F0 string=0x00000000003CC1F4 "S"
 *   insn=0x00000000003CC1F4 string=0x00000000003CC1F8 "h"
 *   insn=0x00000000003CC204 string=0x00000000003CC208 "`"
 *   insn=0x00000000003CC208 string=0x00000000003CC254 "h"
 *   insn=0x00000000003CC214 string=0x00000000003CC218 "!"
 *   insn=0x00000000003CC218 string=0x00000000003CC21C "y@"
 *   insn=0x00000000003CC220 string=0x00000000003CC224 "\t(!"
 *   insn=0x00000000003CC224 string=0x00000000003CC228 "I@"
 *   insn=0x00000000003CC22C string=0x00000000003CC230 ")9("
 *   insn=0x00000000003CC234 string=0x00000000003CC238 ""
 *   insn=0x00000000003CC248 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003CC27C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DebugInfoOverlay::LayoutSubviews(__int64 this)
{
  __int64 *v1; // x20
  __int64 *v2; // x21
  float v3; // s9
  float v4; // s8
  __int64 v5; // t1
  __int64 v6; // x8
  _DWORD v7[2]; // [xsp+8h] [xbp-48h] BYREF
  __int64 v8; // [xsp+10h] [xbp-40h]
  __int64 v9; // [xsp+18h] [xbp-38h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = *(__int64 **)(this + 304);
  v2 = *(__int64 **)(this + 312);
  if ( v1 != v2 )
  {
    v3 = *(float *)(this + 144) + -100.0;
    v4 = *(float *)(*(_QWORD *)(*v1 + 240) + 72LL);
    do
    {
      v5 = *v1;
      v1 += 2;
      v3 = v3 - v4;
      v6 = *(_QWORD *)(v5 + 140);
      v7[0] = 1092616192;
      *(float *)&v7[1] = v3;
      v8 = v6;
      this = Caver::GUIView::SetFrame((Caver::GUIView *)v5, (const Caver::Rectangle *)v7);
    }
    while ( v2 != v1 );
  }
  return this;
}

