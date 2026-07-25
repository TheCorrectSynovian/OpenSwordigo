/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000287604
 * Mangled: _ZThn16_N5Caver23MagicExplosionComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::MagicExplosionComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 4
 *   insn=0x000000000028760C string=0x0000000000287610 "?"
 *   insn=0x0000000000287614 string=0x0000000000287618 "?"
 *   insn=0x000000000028761C string=0x0000000000287638 "&"
 *   insn=0x0000000000287624 string=0x00000000001F8C80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::MagicExplosionComponent::ValueForBindedProperty(
        Caver::MagicExplosionComponent *this,
        const Caver::FloatColor *a2)
{
  float *v2; // x0
  float v3; // s0

  v2 = (float *)((char *)this - 16);
  switch ( (_DWORD)a2 )
  {
    case 3:
      v3 = v2[57];
LABEL_6:
      Caver::BindingValue::ValueWithFloat((Caver::BindingValue *)v2, v3);
      return;
    case 2:
      v3 = v2[56];
      goto LABEL_6;
    case 1:
      Caver::BindingValue::ValueWithFloatColor((Caver::BindingValue *)(v2 + 44), a2);
      break;
    default:
      Caver::Component::ValueForBindedProperty((Caver::Component *)v2, (int)a2);
      break;
  }
}

