/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201540
 * Mangled: ._ZN5Caver29ObjectLinkControllerComponent10CreateLinkEv
 * Demangled: Caver::ObjectLinkControllerComponent::CreateLink(void)
 *
 * Callers: 3
 *   0x0000000000229DFC  Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000022AFC0  Caver::ObjectLinkControllerComponent::Update(float)
 *   0x000000000022B004  `non-virtual thunk to'Caver::ObjectLinkControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000022A1A0  Caver::ObjectLinkControllerComponent::CreateLink(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201548 string=0x000000000020154C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ObjectLinkControllerComponent::CreateLink(Caver::ObjectLinkControllerComponent *this)
{
  return _ZN5Caver29ObjectLinkControllerComponent10CreateLinkEv(this);
}

