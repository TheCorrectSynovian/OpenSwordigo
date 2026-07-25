/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000229D1C
 * Mangled: _ZN5Caver29ObjectLinkControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ObjectLinkControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001FF7E0  Caver::ObjectLinkControllerComponent::ValueForBindedProperty(int)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *   0x00000000002033B0  Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
 *
 * Referenced strings: 22
 *   insn=0x0000000000229D28 string=0x0000000000229D2C "S"
 *   insn=0x0000000000229D2C string=0x0000000000229D30 "i"
 *   insn=0x0000000000229D30 string=0x0000000000229D34 "?"
 *   insn=0x0000000000229D3C string=0x0000000000229DCC "AT"
 *   insn=0x0000000000229D40 string=0x000000000058420C "L["
 *   insn=0x0000000000229D44 string=0x0000000000229D48 "J1"
 *   insn=0x0000000000229D48 string=0x0000000000229D4C "Iy"
 *   insn=0x0000000000229D4C string=0x0000000000229D50 ")"
 *   insn=0x0000000000229D50 string=0x0000000000229D54 " "
 *   insn=0x0000000000229D54 string=0x0000000000229D58 "\t<@"
 *   insn=0x0000000000229D58 string=0x0000000000229D5C "\n"
 *   insn=0x0000000000229D5C string=0x0000000000229D60 "+A"
 *   insn=0x0000000000229D60 string=0x0000000000229D64 "?"
 *   insn=0x0000000000229D64 string=0x0000000000229D68 "@"
 *   insn=0x0000000000229D78 string=0x0000000000229DD0 "h"
 *   insn=0x0000000000229D90 string=0x0000000000229D94 """
 *   insn=0x0000000000229D94 string=0x0000000000229D98 "\t"
 *   insn=0x0000000000229D98 string=0x0000000000229DA0 "#"
 *   insn=0x0000000000229DA4 string=0x0000000000229DA8 "!""
 *   insn=0x0000000000229DB4 string=0x0000000000229DB8 "~e"
 *   insn=0x0000000000229DDC string=0x0000000000229DF0 "81"
 *   insn=0x0000000000229DF0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectLinkControllerComponent::ValueForBindedProperty(
        float32x2_t *this,
        const Caver::Vector3 *a2)
{
  float v2; // s1
  unsigned __int64 v3; // [xsp+8h] [xbp-28h] BYREF
  float v4; // [xsp+10h] [xbp-20h]
  __int64 v5; // [xsp+18h] [xbp-18h]

  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( (int)a2 )
  {
    case 0:
    case 1:
      Caver::BindingValue::ValueWithString();
      break;
    case 2:
      Caver::BindingValue::ValueWithVector3((Caver::BindingValue *)((char *)&this[29] + 4), a2);
      break;
    case 3:
      v2 = this[32].n64_f32[0] * 57.296;
      v3 = vmul_f32(this[31], vdup_n_s32(0x42652EE0u)).n64_u64[0];
      v4 = v2;
      Caver::BindingValue::ValueWithVector3((Caver::BindingValue *)&v3, a2);
      break;
    case 4:
      Caver::BindingValue::ValueWithVector3((Caver::BindingValue *)((char *)&this[32] + 4), a2);
      break;
    default:
      Caver::Component::ValueForBindedProperty((Caver::Component *)this, (int)a2);
      break;
  }
}

