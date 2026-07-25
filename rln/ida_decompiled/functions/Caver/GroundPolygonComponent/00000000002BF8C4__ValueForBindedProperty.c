/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BF8C4
 * Mangled: _ZN5Caver22GroundPolygonComponent22ValueForBindedPropertyEi
 * Demangled: Caver::GroundPolygonComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F9160  Caver::GroundPolygonComponent::ValueForBindedProperty(int)
 *
 * Callees: 4
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 10
 *   insn=0x00000000002BF8C4 string=0x00000000002BF8C8 "("
 *   insn=0x00000000002BF8C8 string=0x00000000002BF8CC "J"
 *   insn=0x00000000002BF8C8 string=0x00000000002BF8EC "y"
 *   insn=0x00000000002BF8CC string=0x0000000000589F80 "dY"
 *   insn=0x00000000002BF8D0 string=0x00000000002BF8D4 "J"
 *   insn=0x00000000002BF8D4 string=0x00000000002BF8D8 "Iy"
 *   insn=0x00000000002BF8D8 string=0x00000000002BF8DC ")"
 *   insn=0x00000000002BF8DC string=0x00000000002BF8E0 " "
 *   insn=0x00000000002BF900 string=0x00000000002BF904 ";"
 *   insn=0x00000000002BF904 string=0x00000000001FA5F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GroundPolygonComponent::ValueForBindedProperty(
        Caver::GroundPolygonComponent *this,
        const Caver::Program *a2)
{
  Caver::BindingValue *v2; // x0

  switch ( (int)a2 )
  {
    case 0:
      v2 = (Caver::BindingValue *)*((unsigned __int8 *)this + 176);
      goto LABEL_3;
    case 1:
      Caver::BindingValue::ValueWithFloat(this, *((float *)this + 45));
      break;
    case 2:
      v2 = (Caver::BindingValue *)*((unsigned __int8 *)this + 184);
LABEL_3:
      Caver::BindingValue::ValueWithBool(v2, (bool)a2);
      break;
    case 3:
      Caver::BindingValue::ValueWithProgram((Caver::GroundPolygonComponent *)((char *)this + 192), a2);
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, (int)a2);
      break;
  }
}

