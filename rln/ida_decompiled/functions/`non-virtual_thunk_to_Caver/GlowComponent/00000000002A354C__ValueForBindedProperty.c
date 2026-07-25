/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A354C
 * Mangled: _ZThn16_N5Caver13GlowComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::GlowComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A354C string=0x00000000002A3550 "`n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GlowComponent::ValueForBindedProperty(
        Caver::GlowComponent *this,
        int a2)
{
  return Caver::Component::ValueForBindedProperty((Caver::GlowComponent *)((char *)this - 16), a2);
}

