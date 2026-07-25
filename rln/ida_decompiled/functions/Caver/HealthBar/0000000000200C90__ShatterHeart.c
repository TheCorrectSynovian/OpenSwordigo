/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200C90
 * Mangled: ._ZN5Caver9HealthBar12ShatterHeartEi
 * Demangled: Caver::HealthBar::ShatterHeart(int)
 *
 * Callers: 1
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *
 * Callees: 1
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200C98 string=0x0000000000200C9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::HealthBar::ShatterHeart(Caver::HealthBar *this)
{
  JUMPOUT(0x3DB9F0);
}

