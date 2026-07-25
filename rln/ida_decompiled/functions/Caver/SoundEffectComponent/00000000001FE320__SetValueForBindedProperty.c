/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE320
 * Mangled: ._ZN5Caver20SoundEffectComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SoundEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x000000000023A72C  `non-virtual thunk to'Caver::SoundEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000023A41C  Caver::SoundEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE328 string=0x00000000001FE32C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SoundEffectComponent::SetValueForBindedProperty(
        Caver::SoundEffectComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver20SoundEffectComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

