/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000235338
 * Mangled: _ZN5Caver15ShadowComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ShadowComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x00000000002033B0  Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000023533C string=0x0000000000235340 "?"
 *   insn=0x000000000023534C string=0x0000000000235350 "L("
 *   insn=0x000000000023535C string=0x0000000000235360 "H("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShadowComponent::ValueForBindedProperty(Caver::ShadowComponent *this, const Caver::Vector3 *a2)
{
  float v2; // s0

  switch ( (_DWORD)a2 )
  {
    case 2:
      Caver::BindingValue::ValueWithVector3((Caver::ShadowComponent *)((char *)this + 132), a2);
      break;
    case 1:
      v2 = *((float *)this + 32);
      goto LABEL_5;
    case 0:
      v2 = *((float *)this + 31);
LABEL_5:
      Caver::BindingValue::ValueWithFloat(this, v2);
      return;
    default:
      Caver::Component::ValueForBindedProperty(this, (int)a2);
      break;
  }
}

