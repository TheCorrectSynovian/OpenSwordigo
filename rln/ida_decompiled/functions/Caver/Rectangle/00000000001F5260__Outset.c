/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5260
 * Mangled: ._ZN5Caver9Rectangle6OutsetEf
 * Demangled: Caver::Rectangle::Outset(float)
 *
 * Callers: 2
 *   0x00000000004962DC  Caver::GUIButton::TouchMoved(Caver::FWTouch const&)
 *   0x000000000049DE68  Caver::GUISwitch::TouchMoved(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004B1CDC  Caver::Rectangle::Outset(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5268 string=0x00000000001F526C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::Outset(Caver::Rectangle *this, float a2)
{
  return _ZN5Caver9Rectangle6OutsetEf(this, a2);
}

