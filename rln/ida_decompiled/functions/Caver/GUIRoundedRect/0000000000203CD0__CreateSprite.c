/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203CD0
 * Mangled: ._ZN5Caver14GUIRoundedRect12CreateSpriteEv
 * Demangled: Caver::GUIRoundedRect::CreateSprite(void)
 *
 * Callers: 3
 *   0x00000000004A99AC  Caver::GUIRoundedRect::CreateWithOuterBounds(Caver::Rectangle const&)
 *   0x00000000004A9B68  Caver::GUIRoundedRect::CreateWithInnerBounds(Caver::Rectangle const&,float)
 *   0x00000000004A9BDC  Caver::GUIRoundedRect::SetColor(Caver::Color)
 *
 * Callees: 1
 *   0x00000000004A99F4  Caver::GUIRoundedRect::CreateSprite(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203CD8 string=0x0000000000203CDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIRoundedRect::CreateSprite(Caver::GUIRoundedRect *this)
{
  return _ZN5Caver14GUIRoundedRect12CreateSpriteEv(this);
}

