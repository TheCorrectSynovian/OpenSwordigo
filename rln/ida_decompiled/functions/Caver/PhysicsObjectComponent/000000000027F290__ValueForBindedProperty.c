/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027F290
 * Mangled: _ZN5Caver22PhysicsObjectComponent22ValueForBindedPropertyEi
 * Demangled: Caver::PhysicsObjectComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F9900  Caver::PhysicsObjectComponent::ValueForBindedProperty(int)
 *
 * Callees: 3
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 17
 *   insn=0x000000000027F290 string=0x000000000027F294 "("
 *   insn=0x000000000027F294 string=0x000000000027F298 "J"
 *   insn=0x000000000027F298 string=0x000000000058874C "dk"
 *   insn=0x000000000027F29C string=0x000000000027F2A0 "J1"
 *   insn=0x000000000027F2A0 string=0x000000000027F2A4 "Iy"
 *   insn=0x000000000027F2A4 string=0x000000000027F2A8 ")"
 *   insn=0x000000000027F2A8 string=0x000000000027F2AC " "
 *   insn=0x000000000027F2AC string=0x000000000027F2BC "I"
 *   insn=0x000000000027F2C0 string=0x000000000027F2C4 "!mI"
 *   insn=0x000000000027F2C8 string=0x000000000027F2CC "m"
 *   insn=0x000000000027F2D0 string=0x000000000027F2D4 "k"
 *   insn=0x000000000027F2D8 string=0x000000000027F2DC "i"
 *   insn=0x000000000027F2E0 string=0x000000000027F2E4 "g"
 *   insn=0x000000000027F2E8 string=0x000000000027F2EC "e"
 *   insn=0x000000000027F2F0 string=0x000000000027F2F4 "c"
 *   insn=0x000000000027F2F8 string=0x000000000027F2FC "}"
 *   insn=0x000000000027F300 string=0x000000000027F304 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PhysicsObjectComponent::ValueForBindedProperty(Caver::PhysicsObjectComponent *this, int a2)
{
  Caver::BindingValue *v2; // x0
  float v3; // s0

  switch ( a2 )
  {
    case 0:
      v2 = (Caver::BindingValue *)*((unsigned __int8 *)this + 112);
      goto LABEL_3;
    case 1:
      v3 = *((float *)this + 58) / 800.0;
      goto LABEL_6;
    case 2:
      v3 = *((float *)this + 56);
      goto LABEL_6;
    case 3:
      v3 = *((float *)this + 57);
      goto LABEL_6;
    case 4:
      v3 = *((float *)this + 67);
      goto LABEL_6;
    case 5:
      v3 = *((float *)this + 68);
      goto LABEL_6;
    case 6:
      v3 = *((float *)this + 43);
      goto LABEL_6;
    case 7:
      v2 = (Caver::BindingValue *)*((unsigned __int8 *)this + 237);
LABEL_3:
      Caver::BindingValue::ValueWithBool(v2, a2);
      return;
    case 8:
      v3 = *((float *)this + 60);
LABEL_6:
      Caver::BindingValue::ValueWithFloat(this, v3);
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, a2);
      break;
  }
}

