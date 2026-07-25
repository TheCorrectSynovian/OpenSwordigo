/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6F90
 * Mangled: ._ZN5Caver29ObjectLinkControllerComponent20UpdateLocalTransformEv
 * Demangled: Caver::ObjectLinkControllerComponent::UpdateLocalTransform(void)
 *
 * Callers: 2
 *   0x0000000000229DFC  Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000022A440  Caver::ObjectLinkControllerComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000022A1A0  Caver::ObjectLinkControllerComponent::CreateLink(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6F98 string=0x00000000001F6F9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ObjectLinkControllerComponent::UpdateLocalTransform(Caver::ObjectLinkControllerComponent *this)
{
  JUMPOUT(0x22A29C);
}

