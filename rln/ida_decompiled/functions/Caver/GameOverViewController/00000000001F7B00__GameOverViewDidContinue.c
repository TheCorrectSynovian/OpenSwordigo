/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7B00
 * Mangled: ._ZN5Caver22GameOverViewController23GameOverViewDidContinueEPNS_12GameOverViewE
 * Demangled: Caver::GameOverViewController::GameOverViewDidContinue(Caver::GameOverView *)
 *
 * Callers: 1
 *   0x0000000000347EFC  Caver::GameOverViewController::ShowAdMaybe(void)
 *
 * Callees: 1
 *   0x0000000000347EFC  Caver::GameOverViewController::ShowAdMaybe(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7B08 string=0x00000000001F7B0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameOverViewController::GameOverViewDidContinue()
{
  JUMPOUT(0x348060);
}

