/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203410
 * Mangled: ._ZN5Caver9HealthBar8PopHeartEi
 * Demangled: Caver::HealthBar::PopHeart(int)
 *
 * Callers: 1
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *
 * Callees: 1
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203418 string=0x000000000020341C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::HealthBar::PopHeart(Caver::HealthBar *this)
{
  JUMPOUT(0x3DBF44);
}

