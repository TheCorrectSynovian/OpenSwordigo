/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CB200
 * Mangled: _ZN5Caver19WeaponGlowComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::WeaponGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC4E0  Caver::GlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *
 * Referenced strings: 18
 *   insn=0x00000000002CB20C string=0x00000000002CB210 "T"
 *   insn=0x00000000002CB218 string=0x00000000002CB21C "?"
 *   insn=0x00000000002CB224 string=0x00000000002CB228 "?"
 *   insn=0x00000000002CB224 string=0x00000000002CB274 "H"
 *   insn=0x00000000002CB228 string=0x00000000002CB22C " "
 *   insn=0x00000000002CB22C string=0x00000000002CB230 "?"
 *   insn=0x00000000002CB23C string=0x00000000002CB240 "4"
 *   insn=0x00000000002CB244 string=0x00000000002CB248 "`B"
 *   insn=0x00000000002CB254 string=0x00000000002CB258 "."
 *   insn=0x00000000002CB260 string=0x00000000002CB264 "K"
 *   insn=0x00000000002CB268 string=0x00000000002CB26C "h"
 *   insn=0x00000000002CB26C string=0x00000000002CB270 "\n"
 *   insn=0x00000000002CB278 string=0x00000000002CB27C ""
 *   insn=0x00000000002CB27C string=0x00000000002CB280 "i"
 *   insn=0x00000000002CB280 string=0x00000000002CB284 "i"
 *   insn=0x00000000002CB284 string=0x00000000002CB288 "h"
 *   insn=0x00000000002CB294 string=0x00000000001FC4E0 "0'"
 *   insn=0x00000000002CB2B8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WeaponGlowComponent::SetValueForBindedProperty(
        Caver::WeaponGlowComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  int v4; // w8
  int v5; // [xsp+4h] [xbp-2Ch]
  __int128 v6; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  switch ( a2 )
  {
    case 'g':
      v4 = **((_DWORD **)a3 + 1);
      *((_BYTE *)this + 112) = 1;
      *((_BYTE *)this + 160) = 1;
      *((_DWORD *)this + 61) = v4;
      break;
    case 'f':
      Caver::BindingValue::FloatColorValue(a3);
      Caver::Color::FromFloatColor();
      *((_DWORD *)this + 45) = v5;
      break;
    case 'e':
      Caver::BindingValue::FloatColorValue(a3);
      *(_OWORD *)((char *)this + 164) = v6;
      break;
    default:
      Caver::GlowComponent::SetValueForBindedProperty(this, a2, a3);
      break;
  }
}

