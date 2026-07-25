/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201840
 * Mangled: ._ZN5Caver29ObjectLinkControllerComponent10UpdateLinkEf
 * Demangled: Caver::ObjectLinkControllerComponent::UpdateLink(float)
 *
 * Callers: 3
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x000000000022AFC0  Caver::ObjectLinkControllerComponent::Update(float)
 *   0x000000000022B004  `non-virtual thunk to'Caver::ObjectLinkControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201848 string=0x000000000020184C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ObjectLinkControllerComponent::UpdateLink(Caver::ObjectLinkControllerComponent *this, float a2)
{
  JUMPOUT(0x22A960);
}

