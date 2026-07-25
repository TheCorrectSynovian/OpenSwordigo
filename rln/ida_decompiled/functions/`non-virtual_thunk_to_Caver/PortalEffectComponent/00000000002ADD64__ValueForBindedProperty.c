/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ADD64
 * Mangled: _ZThn16_N5Caver21PortalEffectComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::PortalEffectComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FD7D0  Caver::GlowComponent::ValueForBindedProperty(int)
 *   0x00000000002033B0  Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002ADD6C string=0x00000000002ADD70 "?"
 *   insn=0x00000000002ADD7C string=0x00000000001F8C80 "0'"
 *   insn=0x00000000002ADD88 string=0x00000000001FD7D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::PortalEffectComponent::ValueForBindedProperty(
        Caver::PortalEffectComponent *this,
        const Caver::Vector3 *a2)
{
  char *v2; // x0

  v2 = (char *)this - 16;
  if ( (_DWORD)a2 == 103 )
    return Caver::BindingValue::ValueWithVector3((Caver::BindingValue *)(v2 + 200), a2);
  if ( (_DWORD)a2 == 102 )
    return Caver::BindingValue::ValueWithFloatColor((Caver::BindingValue *)(v2 + 184), a2);
  return Caver::GlowComponent::ValueForBindedProperty((Caver::GlowComponent *)v2, (int)a2);
}

