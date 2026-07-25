/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAAC0
 * Mangled: ._ZNK5Caver9Component23ComponentWithIdentifierEi
 * Demangled: Caver::Component::ComponentWithIdentifier(int)
 *
 * Callers: 2
 *   0x000000000021F52C  Caver::BlendAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000021F5D4  `non-virtual thunk to'Caver::BlendAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000002437EC  Caver::Component::ComponentWithIdentifier(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAAC8 string=0x00000000001FAACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Component::ComponentWithIdentifier(Caver::Component *this, int a2)
{
  return _ZNK5Caver9Component23ComponentWithIdentifierEi(this, a2);
}

