/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAFE0
 * Mangled: ._ZN5Caver9HealthBar12UpdateSpriteEv
 * Demangled: Caver::HealthBar::UpdateSprite(void)
 *
 * Callers: 3
 *   0x00000000003DAA58  Caver::HealthBar::LayoutSubviews(void)
 *   0x00000000003DAD24  Caver::HealthBar::SetMaxHealth(int)
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *
 * Callees: 1
 *   0x00000000003DAA78  Caver::HealthBar::UpdateSprite(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAFE8 string=0x00000000001FAFEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HealthBar::UpdateSprite(Caver::HealthBar *this)
{
  return _ZN5Caver9HealthBar12UpdateSpriteEv(this);
}

