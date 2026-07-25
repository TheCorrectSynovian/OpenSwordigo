/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CB2BC
 * Mangled: _ZThn16_N5Caver19WeaponGlowComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::WeaponGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC4E0  Caver::GlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *
 * Referenced strings: 16
 *   insn=0x00000000002CB2C8 string=0x00000000002CB2CC "T"
 *   insn=0x00000000002CB2D0 string=0x00000000002CB2D4 "?"
 *   insn=0x00000000002CB2E0 string=0x00000000002CB2E4 "?"
 *   insn=0x00000000002CB2E0 string=0x00000000002CB330 "H"
 *   insn=0x00000000002CB2E4 string=0x00000000002CB2E8 " "
 *   insn=0x00000000002CB2E8 string=0x00000000002CB2EC "?"
 *   insn=0x00000000002CB300 string=0x00000000002CB304 "`B"
 *   insn=0x00000000002CB324 string=0x00000000002CB328 "h"
 *   insn=0x00000000002CB328 string=0x00000000002CB32C "\n"
 *   insn=0x00000000002CB334 string=0x00000000002CB338 ""
 *   insn=0x00000000002CB338 string=0x00000000002CB33C "i"
 *   insn=0x00000000002CB33C string=0x00000000002CB340 "i"
 *   insn=0x00000000002CB340 string=0x00000000002CB344 "h"
 *   insn=0x00000000002CB34C string=0x00000000002CB350 "d"
 *   insn=0x00000000002CB350 string=0x00000000001FC4E0 "0'"
 *   insn=0x00000000002CB374 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::WeaponGlowComponent::SetValueForBindedProperty(
        Caver::WeaponGlowComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  char *v3; // x19
  int v4; // w8
  int v5; // [xsp+4h] [xbp-2Ch]
  __int128 v6; // [xsp+8h] [xbp-28h]

  v3 = (char *)this - 16;
  _ReadStatusReg(TPIDR_EL0);
  switch ( a2 )
  {
    case 'g':
      v4 = **((_DWORD **)a3 + 1);
      *((_BYTE *)this + 96) = 1;
      *((_BYTE *)this + 144) = 1;
      *((_DWORD *)this + 57) = v4;
      break;
    case 'f':
      Caver::BindingValue::FloatColorValue(a3);
      Caver::Color::FromFloatColor();
      *((_DWORD *)v3 + 45) = v5;
      break;
    case 'e':
      Caver::BindingValue::FloatColorValue(a3);
      *(_OWORD *)(v3 + 164) = v6;
      break;
    default:
      Caver::GlowComponent::SetValueForBindedProperty((Caver::WeaponGlowComponent *)((char *)this - 16), a2, a3);
      break;
  }
}

