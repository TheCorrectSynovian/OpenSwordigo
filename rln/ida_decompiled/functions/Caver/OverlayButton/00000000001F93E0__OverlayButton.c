/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F93E0
 * Mangled: ._ZN5Caver13OverlayButtonC2Ev
 * Demangled: Caver::OverlayButton::OverlayButton(void)
 *
 * Callers: 1
 *   0x00000000003E0A34  Caver::OverlayMenuButton::OverlayMenuButton(void)
 *
 * Callees: 1
 *   0x00000000003E04B4  Caver::OverlayButton::OverlayButton(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F93E8 string=0x00000000001F93EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayButton::OverlayButton(Caver::OverlayButton *this)
{
  return _ZN5Caver13OverlayButtonC2Ev(this);
}

