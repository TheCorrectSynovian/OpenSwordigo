/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042B520
 * Mangled: _ZN5Caver11NewMenuView14LayoutSubviewsEv
 * Demangled: Caver::NewMenuView::LayoutSubviews(void)
 *
 * Callers: 1
 *   0x000000000042B464  std::vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>::~vector()
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *
 * Referenced strings: 29
 *   insn=0x000000000042B540 string=0x000000000042B544 "U"
 *   insn=0x000000000042B550 string=0x000000000042B554 "h"
 *   insn=0x000000000042B554 string=0x000000000042B558 ")"
 *   insn=0x000000000042B55C string=0x000000000042B560 "b"
 *   insn=0x000000000042B560 string=0x000000000042B564 "a"
 *   insn=0x000000000042B564 string=0x000000000042B568 "c"
 *   insn=0x000000000042B568 string=0x000000000042B56C ""
 *   insn=0x000000000042B574 string=0x000000000042B578 "JqI"
 *   insn=0x000000000042B578 string=0x000000000042B57C ")( "
 *   insn=0x000000000042B57C string=0x000000000042B580 "`("
 *   insn=0x000000000042B580 string=0x000000000042B584 "@( "
 *   insn=0x000000000042B590 string=0x000000000042B594 "(!"
 *   insn=0x000000000042B594 string=0x000000000042B598 ")"
 *   insn=0x000000000042B59C string=0x000000000042B5A0 "("
 *   insn=0x000000000042B5AC string=0x000000000042B5B0 "!("
 *   insn=0x000000000042B5BC string=0x000000000042B5C0 """
 *   insn=0x000000000042B5C0 string=0x000000000042B5C4 " ) "
 *   insn=0x000000000042B5C4 string=0x000000000042B5C8 "!("
 *   insn=0x000000000042B5C8 string=0x000000000042B5CC "B("
 *   insn=0x000000000042B5D0 string=0x000000000042B5D4 "a9""
 *   insn=0x000000000042B5E4 string=0x00000000001FDA30 "0'"
 *   insn=0x000000000042B5FC string=0x000000000042B600 "h"
 *   insn=0x000000000042B5FC string=0x00000000001FB170 "0'"
 *   insn=0x000000000042B608 string=0x000000000042B60C ")"
 *   insn=0x000000000042B60C string=0x000000000042B610 ")"
 *   insn=0x000000000042B614 string=0x000000000042B618 "#"
 *   insn=0x000000000042B624 string=0x000000000042B628 "A"
 *   insn=0x000000000042B628 string=0x000000000042B650 " +"
 *   insn=0x000000000042B650 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::NewMenuView::LayoutSubviews(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x8
  __int64 v3; // x9
  float v4; // s9
  __int64 v5; // x22
  unsigned __int64 v6; // x23
  float v7; // s11
  unsigned __int64 v8; // x9
  float *v9; // x20
  float v10; // w24
  float v11; // w25
  float v12[2]; // [xsp+8h] [xbp-88h] BYREF
  __int64 v13; // [xsp+10h] [xbp-80h] BYREF
  __int64 v14; // [xsp+18h] [xbp-78h] BYREF
  float v15; // [xsp+20h] [xbp-70h]
  float v16; // [xsp+24h] [xbp-6Ch]
  __int64 v17; // [xsp+28h] [xbp-68h]

  v1 = this;
  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_QWORD *)(this + 248);
  v3 = *(_QWORD *)(this + 256) - v2;
  if ( v3 )
  {
    v4 = *(float *)(this + 132) + (float)(*(float *)(this + 140) * 0.5);
    v5 = 0;
    v6 = 0;
    v7 = (float)(*(float *)(this + 136) + (float)(*(float *)(this + 144) * 0.5)) + 0.0;
    v8 = v3 >> 4;
    do
    {
      v9 = *(float **)(v2 + v5);
      v10 = v9[31];
      v11 = v9[32];
      v12[0] = (float)(v4 + (float)((float)((float)v6 - (float)((float)(v8 - 1) * 0.5)) * 80.0)) - (float)(v10 * 0.5);
      v12[1] = v7 - (float)(v11 * 0.5);
      Caver::Vector2::Rounded(&v13, (Caver::Vector2 *)v12);
      v15 = v10;
      v16 = v11;
      v14 = v13;
      this = Caver::GUIView::SetFrame((Caver::GUIView *)v9, (const Caver::Rectangle *)&v14);
      v2 = *(_QWORD *)(v1 + 248);
      ++v6;
      v5 += 16;
      v8 = (*(_QWORD *)(v1 + 256) - v2) >> 4;
    }
    while ( v6 < v8 );
  }
  return this;
}

