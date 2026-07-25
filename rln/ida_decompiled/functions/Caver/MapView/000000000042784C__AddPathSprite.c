/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042784C
 * Mangled: _ZN5Caver7MapView13AddPathSpriteEPNS_11MapViewNodeES2_
 * Demangled: Caver::MapView::AddPathSprite(Caver::MapViewNode *,Caver::MapViewNode *)
 *
 * Callers: 1
 *   0x00000000001F64C0  Caver::MapView::AddPathSprite(Caver::MapViewNode *,Caver::MapViewNode *)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000002019D0  Caver::MapView::AddPathSegmentToSprite(Caver::Sprite *,Caver::Vector2 const&,Caver::Vector2 const&,float,boost::intrusive_ptr<Caver::Texture> const&,Caver::Color)
 *
 * Referenced strings: 19
 *   insn=0x0000000000427864 string=0x0000000000427868 "V"
 *   insn=0x0000000000427888 string=0x000000000042788C "%A-*-A-@9("
 *   insn=0x000000000042788C string=0x0000000000427890 "*-A-@9("
 *   insn=0x0000000000427890 string=0x0000000000427894 "@9("
 *   insn=0x0000000000427894 string=0x0000000000427898 "a9)"
 *   insn=0x000000000042789C string=0x00000000004278A0 "\E"
 *   insn=0x00000000004278A0 string=0x00000000001F8E10 "0'"
 *   insn=0x00000000004278B0 string=0x00000000004278B4 "c(("
 *   insn=0x00000000004278C0 string=0x00000000004278C4 "! "
 *   insn=0x00000000004278C4 string=0x00000000004278C8 "@ "
 *   insn=0x00000000004278C8 string=0x00000000004278CC "A9!"
 *   insn=0x00000000004278CC string=0x00000000004278D0 "`9 "
 *   insn=0x00000000004278E0 string=0x00000000004278E4 "h"
 *   insn=0x00000000004278F4 string=0x00000000004278F8 "a"
 *   insn=0x00000000004278F8 string=0x00000000004278FC "d"
 *   insn=0x00000000004278FC string=0x0000000000427900 "}\t"
 *   insn=0x0000000000427914 string=0x0000000000427918 ".h"
 *   insn=0x0000000000427928 string=0x0000000000427948 "b:"
 *   insn=0x0000000000427948 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapView::AddPathSprite(Caver::MapView *this, Caver::MapViewNode *a2, Caver::MapViewNode *a3)
{
  float v5; // s8
  float v6; // s9
  float v7; // s10
  float v8; // s11
  float v9; // s0
  float v10; // s0
  float v11; // [xsp+10h] [xbp-60h] BYREF
  float v12; // [xsp+14h] [xbp-5Ch]
  float v13; // [xsp+18h] [xbp-58h]
  float v14; // [xsp+1Ch] [xbp-54h]
  float v15; // [xsp+20h] [xbp-50h]
  float v16; // [xsp+24h] [xbp-4Ch]
  __int64 v17; // [xsp+28h] [xbp-48h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *(float *)(*(_QWORD *)a2 + 8LL);
  v6 = *(float *)(*(_QWORD *)a2 + 12LL);
  v7 = *(float *)(*(_QWORD *)a3 + 8LL);
  v8 = *(float *)(*(_QWORD *)a3 + 12LL);
  v11 = v7 - v5;
  v12 = v8 - v6;
  Caver::Vector2::Normalize((Caver::Vector2 *)&v11);
  v9 = *((float *)a2 + 11);
  v15 = (float)(v9 * v11) + v5;
  v16 = (float)(v9 * v12) + v6;
  v10 = *((float *)a3 + 11);
  v13 = v7 - (float)(v11 * v10);
  v14 = v8 - (float)(v12 * v10);
  Caver::MapView::AddPathSegmentToSprite();
}

