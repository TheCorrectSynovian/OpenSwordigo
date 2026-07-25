/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200E30
 * Mangled: ._ZN5Caver13OverlayButton6UpdateEf
 * Demangled: Caver::OverlayButton::Update(float)
 *
 * Callers: 1
 *   0x00000000003E15F8  Caver::OverlayMenuButton::Update(float)
 *
 * Callees: 1
 *   0x00000000003E06A0  Caver::OverlayButton::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200E38 string=0x0000000000200E3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayButton::Update(Caver::OverlayButton *this, float a2)
{
  return _ZN5Caver13OverlayButton6UpdateEf(this, a2);
}

