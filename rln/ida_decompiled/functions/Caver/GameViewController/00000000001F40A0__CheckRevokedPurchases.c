/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F40A0
 * Mangled: ._ZN5Caver18GameViewController21CheckRevokedPurchasesEv
 * Demangled: Caver::GameViewController::CheckRevokedPurchases(void)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F40A8 string=0x00000000001F40AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameViewController::CheckRevokedPurchases(Caver::GameViewController *this)
{
  JUMPOUT(0x355C14);
}

