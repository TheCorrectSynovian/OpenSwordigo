/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023A72C
 * Mangled: _ZThn16_N5Caver20SoundEffectComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::SoundEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x000000000023A41C  Caver::SoundEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000001FE320  Caver::SoundEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SoundEffectComponent::SetValueForBindedProperty(
        Caver::SoundEffectComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::SoundEffectComponent::SetValueForBindedProperty(
           (Caver::SoundEffectComponent *)((char *)this - 16),
           a2,
           a3);
}

