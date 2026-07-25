/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDE70
 * Mangled: ._ZN5Caver17GUIAnimatedSprite6UpdateEf
 * Demangled: Caver::GUIAnimatedSprite::Update(float)
 *
 * Callers: 1
 *   0x00000000003F8ADC  Caver::AttributePointsView::Update(float)
 *
 * Callees: 1
 *   0x00000000004A9208  Caver::GUIAnimatedSprite::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDE78 string=0x00000000001FDE7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIAnimatedSprite::Update(Caver::GUIAnimatedSprite *this, float a2)
{
  return _ZN5Caver17GUIAnimatedSprite6UpdateEf(this, a2);
}

