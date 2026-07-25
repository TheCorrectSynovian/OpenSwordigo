/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000427B84
 * Mangled: _ZN5Caver7MapView10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::MapView::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE270  Caver::GUIResponder::TouchBegan(Caver::FWTouch const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000427B84 string=0x0000000000427B88 ""
 *   insn=0x0000000000427B88 string=0x0000000000427B8C "("
 *   insn=0x0000000000427B8C string=0x0000000000427B90 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapView::TouchBegan(__int64 a1, _QWORD *a2)
{
  *(_QWORD *)(a1 + 1000) = *a2;
  *(_QWORD *)(a1 + 1008) = a2[1];
  Caver::GUIResponder::TouchBegan();
}

