/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283278
 * Mangled: _ZThn16_N5Caver22HookshotTrailComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::HookshotTrailComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD7D0  Caver::GlowComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000283278 string=0x000000000028327C "U"
 *   insn=0x000000000028327C string=0x00000000001FD7D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::HookshotTrailComponent::ValueForBindedProperty(
        Caver::HookshotTrailComponent *this,
        int a2)
{
  return Caver::GlowComponent::ValueForBindedProperty((Caver::HookshotTrailComponent *)((char *)this - 16), a2);
}

