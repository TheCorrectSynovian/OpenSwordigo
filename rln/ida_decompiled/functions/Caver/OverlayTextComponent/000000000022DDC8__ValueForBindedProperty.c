/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022DDC8
 * Mangled: _ZN5Caver20OverlayTextComponent22ValueForBindedPropertyEi
 * Demangled: Caver::OverlayTextComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F44F0  Caver::OverlayTextComponent::ValueForBindedProperty(int)
 *
 * Callees: 3
 *   0x00000000001F6780  Caver::OverlayComponent::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 8
 *   insn=0x000000000022DDC8 string=0x000000000022DDCC "?"
 *   insn=0x000000000022DDCC string=0x000000000022DDD0 ""
 *   insn=0x000000000022DDD0 string=0x000000000022DDF0 "d""
 *   insn=0x000000000022DDD4 string=0x000000000022DDDC "Iy"
 *   insn=0x000000000022DDD4 string=0x0000000000584388 "`"
 *   insn=0x000000000022DDDC string=0x000000000022DDE0 ")"
 *   insn=0x000000000022DDE0 string=0x000000000022DDE4 " "
 *   insn=0x000000000022DDF0 string=0x00000000001F6780 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OverlayTextComponent::ValueForBindedProperty(Caver::OverlayTextComponent *this, int a2)
{
  float v2; // s0

  switch ( a2 )
  {
    case 'd':
    case 'g':
      Caver::BindingValue::ValueWithString();
      return;
    case 'e':
      v2 = *((float *)this + 30);
      goto LABEL_5;
    case 'f':
      v2 = *((float *)this + 31);
      goto LABEL_5;
    case 'h':
      v2 = *((float *)this + 38);
      goto LABEL_5;
    case 'i':
      v2 = *((float *)this + 39);
LABEL_5:
      Caver::BindingValue::ValueWithFloat(this, v2);
      break;
    default:
      Caver::OverlayComponent::ValueForBindedProperty(this, a2);
      break;
  }
}

