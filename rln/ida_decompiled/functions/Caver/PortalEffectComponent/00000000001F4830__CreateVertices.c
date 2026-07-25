/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4830
 * Mangled: ._ZN5Caver21PortalEffectComponent14CreateVerticesEv
 * Demangled: Caver::PortalEffectComponent::CreateVertices(void)
 *
 * Callers: 3
 *   0x00000000002ADD8C  Caver::PortalEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002AE494  `non-virtual thunk to'Caver::PortalEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002AE884  Caver::PortalEffectComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x00000000002ADE28  Caver::PortalEffectComponent::CreateVertices(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4838 string=0x00000000001F483C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PortalEffectComponent::CreateVertices(Caver::PortalEffectComponent *this)
{
  return _ZN5Caver21PortalEffectComponent14CreateVerticesEv(this);
}

