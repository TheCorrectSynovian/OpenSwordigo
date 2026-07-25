/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A2B48
 * Mangled: _ZN5Caver20FireEmitterComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::FireEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FCA60  Caver::FireEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FCAB0  Caver::BindingValue::Vector3Value(void)
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *
 * Referenced strings: 22
 *   insn=0x00000000002A2B54 string=0x00000000002A2B58 "T"
 *   insn=0x00000000002A2B5C string=0x00000000002A2B60 "("
 *   insn=0x00000000002A2B70 string=0x00000000002A2B74 ")"
 *   insn=0x00000000002A2B74 string=0x00000000002A2B7C "(y"
 *   insn=0x00000000002A2B74 string=0x0000000000589544 "D"
 *   insn=0x00000000002A2B7C string=0x00000000002A2B80 ""
 *   insn=0x00000000002A2B84 string=0x00000000002A2BC8 "H"
 *   insn=0x00000000002A2B84 string=0x00000000002A2BD8 "H"
 *   insn=0x00000000002A2B90 string=0x00000000001FCAB0 "0'"
 *   insn=0x00000000002A2B94 string=0x00000000002A2B98 "hB"
 *   insn=0x00000000002A2B9C string=0x00000000002A2BA0 "h"
 *   insn=0x00000000002A2BB4 string=0x00000000002A2BB8 "hV"
 *   insn=0x00000000002A2BBC string=0x00000000002A2BC0 "h"
 *   insn=0x00000000002A2BC8 string=0x00000000002A2BCC ""
 *   insn=0x00000000002A2BCC string=0x00000000002A2BD0 "h"
 *   insn=0x00000000002A2BD0 string=0x00000000002A2BD4 ""
 *   insn=0x00000000002A2BD8 string=0x00000000002A2BDC ""
 *   insn=0x00000000002A2BDC string=0x00000000002A2BE0 "h"
 *   insn=0x00000000002A2BE0 string=0x00000000002A2BE4 "\t"
 *   insn=0x00000000002A2BF4 string=0x00000000002A2BF8 "`2"
 *   insn=0x00000000002A2C04 string=0x00000000001F9320 "0'"
 *   insn=0x00000000002A2C28 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FireEmitterComponent::SetValueForBindedProperty(
        Caver::FireEmitterComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int128 v4; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  switch ( a2 )
  {
    case 2:
      Caver::BindingValue::Vector3Value(a3);
      *(_QWORD *)((char *)this + 180) = v4;
      *((_DWORD *)this + 47) = DWORD2(v4);
      break;
    case 3:
      Caver::BindingValue::FloatColorValue(a3);
      *((_OWORD *)this + 12) = v4;
      break;
    case 4:
      *((_DWORD *)this + 40) = **((_DWORD **)a3 + 1);
      break;
    case 5:
      *((_DWORD *)this + 41) = **((_DWORD **)a3 + 1);
      break;
    case 6:
      Caver::BindingValue::Vector3Value(a3);
      *((_QWORD *)this + 21) = v4;
      *((_DWORD *)this + 44) = DWORD2(v4);
      break;
    default:
      Caver::Component::SetValueForBindedProperty(this, a2, a3);
      break;
  }
}

