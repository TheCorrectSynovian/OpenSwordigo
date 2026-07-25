/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200C70
 * Mangled: ._ZN5Caver13OverlayButton9FlashOnceEv
 * Demangled: Caver::OverlayButton::FlashOnce(void)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x00000000003E04B4  Caver::OverlayButton::OverlayButton(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200C78 string=0x0000000000200C7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::OverlayButton::FlashOnce(Caver::OverlayButton *this)
{
  JUMPOUT(0x3E0684);
}

