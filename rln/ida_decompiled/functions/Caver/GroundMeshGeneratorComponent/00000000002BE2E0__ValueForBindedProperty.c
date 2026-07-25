/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BE2E0
 * Mangled: _ZN5Caver28GroundMeshGeneratorComponent22ValueForBindedPropertyEi
 * Demangled: Caver::GroundMeshGeneratorComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F4FC0  Caver::GroundMeshGeneratorComponent::ValueForBindedProperty(int)
 *
 * Callees: 4
 *   0x00000000001FB2C0  Caver::BindingValue::ValueWithInt(int)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *
 * Referenced strings: 15
 *   insn=0x00000000002BE2E0 string=0x00000000002BE2E4 "?"
 *   insn=0x00000000002BE2E4 string=0x00000000002BE2E8 "h"
 *   insn=0x00000000002BE2E8 string=0x00000000002BE2EC "J"
 *   insn=0x00000000002BE2EC string=0x00000000002BE2F4 "Iy"
 *   insn=0x00000000002BE2F4 string=0x00000000002BE2F8 ")"
 *   insn=0x00000000002BE2F8 string=0x00000000002BE2FC " "
 *   insn=0x00000000002BE2FC string=0x00000000002BE300 ")!"
 *   insn=0x00000000002BE304 string=0x00000000002BE308 ")"
 *   insn=0x00000000002BE308 string=0x00000000002BE30C "!"
 *   insn=0x00000000002BE318 string=0x00000000002BE31C "Y"
 *   insn=0x00000000002BE324 string=0x00000000001FB2C0 "0'"
 *   insn=0x00000000002BE328 string=0x00000000002BE32C "U"
 *   insn=0x00000000002BE330 string=0x00000000002BE334 "S"
 *   insn=0x00000000002BE338 string=0x00000000002BE33C "Q"
 *   insn=0x00000000002BE340 string=0x00000000002BE344 "O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::GroundMeshGeneratorComponent::ValueForBindedProperty(
        Caver::GroundMeshGeneratorComponent *this@<X0>,
        int a2@<W1>,
        __int64 *a3@<X8>)
{
  float v3; // s0

  switch ( a2 )
  {
    case 4:
      Caver::BindingValue::ValueWithInt();
      return;
    case 5:
      v3 = *((float *)this + 53);
      goto LABEL_5;
    case 6:
      Caver::BindingValue::ValueWithInt(a3, (Caver::BindingValue *)*((unsigned int *)this + 54), a2);
      return;
    case 7:
      v3 = *((float *)this + 55);
      goto LABEL_5;
    case 8:
      v3 = *((float *)this + 56);
      goto LABEL_5;
    case 9:
      v3 = *((float *)this + 57);
      goto LABEL_5;
    case 10:
      v3 = *((float *)this + 58);
LABEL_5:
      Caver::BindingValue::ValueWithFloat(this, v3);
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, a2);
      break;
  }
}

