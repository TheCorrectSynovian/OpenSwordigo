/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002812E4
 * Mangled: _ZN5Caver24PhysicsPlatformComponent22ValueForBindedPropertyEi
 * Demangled: Caver::PhysicsPlatformComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000203D10  Caver::PhysicsPlatformComponent::ValueForBindedProperty(int)
 *
 * Callees: 2
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 12
 *   insn=0x00000000002812E4 string=0x00000000002812E8 "("
 *   insn=0x00000000002812E8 string=0x00000000002812EC "*"
 *   insn=0x00000000002812F0 string=0x00000000002812F4 "J"
 *   insn=0x00000000002812F4 string=0x00000000002812F8 "Iy"
 *   insn=0x00000000002812F8 string=0x00000000002812FC ")"
 *   insn=0x00000000002812FC string=0x0000000000281300 " "
 *   insn=0x0000000000281300 string=0x0000000000281320 "\t"
 *   insn=0x0000000000281304 string=0x0000000000281308 "^"
 *   insn=0x0000000000281310 string=0x0000000000281314 "["
 *   insn=0x0000000000281318 string=0x000000000028131C "Y"
 *   insn=0x0000000000281324 string=0x0000000000281328 "!"
 *   insn=0x000000000028132C string=0x0000000000281330 "T"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PhysicsPlatformComponent::ValueForBindedProperty(Caver::PhysicsPlatformComponent *this, int a2)
{
  float v2; // s0

  switch ( a2 )
  {
    case 0:
      v2 = *((float *)this + 37);
      goto LABEL_3;
    case 1:
      v2 = *((float *)this + 38);
      goto LABEL_3;
    case 2:
      v2 = *((float *)this + 39);
      goto LABEL_3;
    case 3:
      v2 = *((float *)this + 40) * 57.296;
LABEL_3:
      Caver::BindingValue::ValueWithFloat(this, v2);
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, a2);
      break;
  }
}

