/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000496D2C
 * Mangled: _ZN5Caver16GUIDraggableItem22SetLocationInSuperviewERKNS_7Vector2E
 * Demangled: Caver::GUIDraggableItem::SetLocationInSuperview(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001F7710  Caver::GUIDraggableItem::SetLocationInSuperview(Caver::Vector2 const&)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *
 * Referenced strings: 8
 *   insn=0x0000000000496D38 string=0x0000000000496D3C "S"
 *   insn=0x0000000000496D3C string=0x0000000000496D40 "h"
 *   insn=0x0000000000496D48 string=0x0000000000496D4C "!"
 *   insn=0x0000000000496D4C string=0x0000000000496D50 ""
 *   insn=0x0000000000496D64 string=0x0000000000496D68 "h"
 *   insn=0x0000000000496D64 string=0x00000000001FB170 "0'"
 *   insn=0x0000000000496D74 string=0x0000000000496D88 "R}"
 *   insn=0x0000000000496D88 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIDraggableItem::SetLocationInSuperview(Caver::GUIDraggableItem *this, float32x2_t *a2)
{
  __int64 v2; // x8
  _QWORD v4[3]; // [xsp+8h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_QWORD *)((char *)this + 140);
  v4[0] = vadd_f32(*(float32x2_t *)((char *)this + 132), (float32x2_t)a2->n64_u64[0]).n64_u64[0];
  v4[1] = v2;
  return Caver::GUIView::SetFrame(this, (const Caver::Rectangle *)v4);
}

