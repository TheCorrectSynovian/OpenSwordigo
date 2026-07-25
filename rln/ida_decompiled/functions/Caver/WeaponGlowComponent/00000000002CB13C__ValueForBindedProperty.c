/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CB13C
 * Mangled: _ZN5Caver19WeaponGlowComponent22ValueForBindedPropertyEi
 * Demangled: Caver::WeaponGlowComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F75D0  Caver::WeaponGlowComponent::ValueForBindedProperty(int)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FD7D0  Caver::GlowComponent::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 19
 *   insn=0x00000000002CB148 string=0x00000000002CB14C "S"
 *   insn=0x00000000002CB14C string=0x00000000002CB150 "i"
 *   insn=0x00000000002CB150 string=0x00000000002CB154 "?"
 *   insn=0x00000000002CB158 string=0x00000000002CB15C "@"
 *   insn=0x00000000002CB15C string=0x00000000002CB160 "?"
 *   insn=0x00000000002CB164 string=0x00000000002CB168 "?"
 *   insn=0x00000000002CB168 string=0x00000000002CB16C "!"
 *   insn=0x00000000002CB188 string=0x00000000002CB18C "$"
 *   insn=0x00000000002CB190 string=0x00000000002CB194 "!"
 *   insn=0x00000000002CB194 string=0x00000000002CB198 "B"
 *   insn=0x00000000002CB198 string=0x00000000002CB19C "c"
 *   insn=0x00000000002CB1A0 string=0x00000000002CB1A4 "!"
 *   insn=0x00000000002CB1A4 string=0x00000000002CB1A8 "B"
 *   insn=0x00000000002CB1A8 string=0x00000000002CB1AC "c"
 *   insn=0x00000000002CB1BC string=0x00000000001F8C80 "0'"
 *   insn=0x00000000002CB1C0 string=0x00000000002CB1D4 "h"
 *   insn=0x00000000002CB1D0 string=0x00000000001FD7D0 "0'"
 *   insn=0x00000000002CB1E0 string=0x00000000002CB1F4 "7"
 *   insn=0x00000000002CB1F4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WeaponGlowComponent::ValueForBindedProperty(
        Caver::WeaponGlowComponent *this,
        const Caver::FloatColor *a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  Caver::BindingValue *v6; // x0
  float v7[4]; // [xsp+8h] [xbp-28h] BYREF
  __int64 v8; // [xsp+18h] [xbp-18h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( (_DWORD)a2 )
  {
    case 'g':
      Caver::BindingValue::ValueWithFloat(this, *((float *)this + 61));
      break;
    case 'f':
      LOBYTE(a3) = *((_BYTE *)this + 180);
      LOBYTE(a4) = *((_BYTE *)this + 181);
      LOBYTE(a5) = *((_BYTE *)this + 182);
      LOBYTE(a6) = *((_BYTE *)this + 183);
      v7[0] = (float)LODWORD(a3) / 255.0;
      v7[1] = (float)LODWORD(a4) / 255.0;
      v7[2] = (float)LODWORD(a5) / 255.0;
      v7[3] = (float)LODWORD(a6) / 255.0;
      v6 = (Caver::BindingValue *)v7;
      goto LABEL_6;
    case 'e':
      v6 = (Caver::WeaponGlowComponent *)((char *)this + 164);
LABEL_6:
      Caver::BindingValue::ValueWithFloatColor(v6, a2);
      return;
    default:
      Caver::GlowComponent::ValueForBindedProperty(this, (int)a2);
      break;
  }
}

