/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ADD40
 * Mangled: _ZN5Caver21PortalEffectComponent22ValueForBindedPropertyEi
 * Demangled: Caver::PortalEffectComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FD7D0  Caver::GlowComponent::ValueForBindedProperty(int)
 *   0x00000000002033B0  Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002ADD44 string=0x00000000002ADD48 "?"
 *   insn=0x00000000002ADD54 string=0x00000000001F8C80 "0'"
 *   insn=0x00000000002ADD60 string=0x00000000001FD7D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PortalEffectComponent::ValueForBindedProperty(
        Caver::PortalEffectComponent *this,
        const Caver::Vector3 *a2)
{
  if ( (_DWORD)a2 == 103 )
    return Caver::BindingValue::ValueWithVector3((Caver::PortalEffectComponent *)((char *)this + 200), a2);
  if ( (_DWORD)a2 == 102 )
    return Caver::BindingValue::ValueWithFloatColor((Caver::PortalEffectComponent *)((char *)this + 184), a2);
  return Caver::GlowComponent::ValueForBindedProperty(this, (int)a2);
}

