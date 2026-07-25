/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000222BE0
 * Mangled: _ZN5Caver14LightComponent22ValueForBindedPropertyEi
 * Demangled: Caver::LightComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F7630  Caver::LightComponent::ValueForBindedProperty(int)
 *
 * Callees: 5
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *   0x00000000002033B0  Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
 *
 * Referenced strings: 11
 *   insn=0x0000000000222BE4 string=0x0000000000222BE8 "\n"
 *   insn=0x0000000000222BEC string=0x0000000000222BF0 "J"
 *   insn=0x0000000000222BF0 string=0x0000000000222BF4 "Iy"
 *   insn=0x0000000000222BF4 string=0x0000000000222BF8 ")"
 *   insn=0x0000000000222BF8 string=0x0000000000222BFC " "
 *   insn=0x0000000000222BFC string=0x0000000000222C00 "*&"
 *   insn=0x0000000000222C00 string=0x0000000000222C04 "\tp"
 *   insn=0x0000000000222C04 string=0x0000000000222C08 "J9D"
 *   insn=0x0000000000222C08 string=0x0000000000222C0C "@\t"
 *   insn=0x0000000000222C0C string=0x0000000000222C10 "Lv"
 *   insn=0x0000000000222C24 string=0x00000000001F8C80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::LightComponent::ValueForBindedProperty(Caver::LightComponent *this, const Caver::FloatColor *a2)
{
  float v2; // s0

  switch ( (int)a2 )
  {
    case 0:
      Caver::BindingValue::ValueWithString();
      return;
    case 1:
      v2 = *((float *)this + 29);
      goto LABEL_5;
    case 2:
      Caver::BindingValue::ValueWithFloatColor((Caver::LightComponent *)((char *)this + 120), a2);
      return;
    case 3:
      v2 = *((float *)this + 37);
      goto LABEL_5;
    case 4:
      v2 = *((float *)this + 38);
      goto LABEL_5;
    case 5:
      v2 = *((float *)this + 39);
LABEL_5:
      Caver::BindingValue::ValueWithFloat(this, v2);
      break;
    case 6:
      Caver::BindingValue::ValueWithVector3((Caver::LightComponent *)((char *)this + 160), a2);
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, (int)a2);
      break;
  }
}

