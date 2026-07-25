/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000222C48
 * Mangled: _ZThn16_N5Caver14LightComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::LightComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7630  Caver::LightComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000222C48 string=0x0000000000222C4C "yR"
 *   insn=0x0000000000222C4C string=0x00000000001F7630 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::LightComponent::ValueForBindedProperty(
        Caver::LightComponent *this,
        int a2)
{
  return Caver::LightComponent::ValueForBindedProperty((Caver::LightComponent *)((char *)this - 16), a2);
}

