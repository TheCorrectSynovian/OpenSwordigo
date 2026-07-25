/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC4E0
 * Mangled: ._ZN5Caver13GlowComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::GlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 7
 *   0x0000000000283280  Caver::HookshotTrailComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000283284  `non-virtual thunk to'Caver::HookshotTrailComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002ADD8C  Caver::PortalEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002AE494  `non-virtual thunk to'Caver::PortalEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B08BC  Caver::SimpleGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002CB200  Caver::WeaponGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002CB2BC  `non-virtual thunk to'Caver::WeaponGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000002A3554  Caver::GlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FC4E4 string=0x00000000002A3554 "sW"
 *   insn=0x00000000001FC4E8 string=0x00000000001FC4EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GlowComponent::SetValueForBindedProperty(
        Caver::GlowComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver13GlowComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

