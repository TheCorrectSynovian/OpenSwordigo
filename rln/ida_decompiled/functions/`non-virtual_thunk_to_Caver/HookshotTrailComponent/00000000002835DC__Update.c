/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002835DC
 * Mangled: _ZThn24_N5Caver22HookshotTrailComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::HookshotTrailComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6600  Caver::HookshotTrailComponent::UpdateVertices(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002835DC string=0x00000000002835E0 ""
 *   insn=0x00000000002835E0 string=0x00000000001F6600 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::HookshotTrailComponent::Update(
        Caver::HookshotTrailComponent *this,
        float a2)
{
  return Caver::HookshotTrailComponent::UpdateVertices((Caver::HookshotTrailComponent *)((char *)this - 24));
}

