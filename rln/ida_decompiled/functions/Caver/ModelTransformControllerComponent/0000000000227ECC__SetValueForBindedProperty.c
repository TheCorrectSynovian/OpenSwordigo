/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000227ECC
 * Mangled: _ZN5Caver33ModelTransformControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ModelTransformControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F51D0  Caver::ModelTransformControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *
 * Referenced strings: 45
 *   insn=0x0000000000227ED8 string=0x0000000000227EDC "T"
 *   insn=0x0000000000227EE0 string=0x0000000000227EE4 "("
 *   insn=0x0000000000227EF8 string=0x0000000000227F00 "(y"
 *   insn=0x0000000000227F00 string=0x0000000000227F04 ""
 *   insn=0x0000000000227F08 string=0x0000000000227F0C "H"
 *   insn=0x0000000000227F08 string=0x0000000000227F24 "H"
 *   insn=0x0000000000227F08 string=0x0000000000227F40 "H"
 *   insn=0x0000000000227F08 string=0x0000000000227F58 "H"
 *   insn=0x0000000000227F08 string=0x0000000000227F70 "H"
 *   insn=0x0000000000227F08 string=0x0000000000227F8C "H"
 *   insn=0x0000000000227F08 string=0x0000000000227FB0 "H"
 *   insn=0x0000000000227F08 string=0x0000000000227FE8 "H"
 *   insn=0x0000000000227F10 string=0x0000000000227F14 ""
 *   insn=0x0000000000227F14 string=0x0000000000227F18 "i""
 *   insn=0x0000000000227F18 string=0x0000000000227F1C "h"
 *   insn=0x0000000000227F1C string=0x0000000000227F20 ":"
 *   insn=0x0000000000227F24 string=0x0000000000227F28 "i"
 *   insn=0x0000000000227F28 string=0x0000000000227F2C "j"
 *   insn=0x0000000000227F2C string=0x0000000000227F30 ""
 *   insn=0x0000000000227F38 string=0x0000000000227F3C """
 *   insn=0x0000000000227F44 string=0x0000000000227F48 ""
 *   insn=0x0000000000227F48 string=0x0000000000227F4C "i""
 *   insn=0x0000000000227F4C string=0x0000000000227F50 "h"
 *   insn=0x0000000000227F50 string=0x0000000000227F54 "-"
 *   insn=0x0000000000227F58 string=0x0000000000227F5C "i"
 *   insn=0x0000000000227F5C string=0x0000000000227F60 ""
 *   insn=0x0000000000227F74 string=0x0000000000227F78 "!"
 *   insn=0x0000000000227F74 string=0x0000000000584004 "5"
 *   insn=0x0000000000227F80 string=0x0000000000227F84 "`"
 *   insn=0x0000000000227F84 string=0x0000000000227F88 " "
 *   insn=0x0000000000227F90 string=0x0000000000227F94 ""
 *   insn=0x0000000000227F94 string=0x0000000000227F98 "i""
 *   insn=0x0000000000227F98 string=0x0000000000227F9C "h"
 *   insn=0x0000000000227FA8 string=0x00000000001F9320 "0'"
 *   insn=0x0000000000227FB0 string=0x0000000000227FB4 "iN@"
 *   insn=0x0000000000227FB4 string=0x0000000000227FB8 ""
 *   insn=0x0000000000227FD0 string=0x0000000000227FD4 "hN"
 *   insn=0x0000000000227FD8 string=0x0000000000227FDC "i""
 *   insn=0x0000000000227FDC string=0x0000000000227FE0 "h"
 *   insn=0x0000000000227FE0 string=0x0000000000227FE4 "\t"
 *   insn=0x0000000000227FEC string=0x0000000000227FF0 " "
 *   insn=0x0000000000227FF8 string=0x0000000000227FFC "h""
 *   insn=0x0000000000227FFC string=0x0000000000228000 "  "
 *   insn=0x0000000000228000 string=0x0000000000228004 "`"
 *   insn=0x0000000000228028 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::ModelTransformControllerComponent::SetValueForBindedProperty(
        Caver::ModelTransformControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  int v4; // w8
  int v5; // w9
  int v6; // w8
  int v7; // w8
  int v8; // w8
  float result; // s0
  int v10; // w8
  int v11; // w8
  int v12; // w8
  float v13; // s1
  _BYTE v14[12]; // [xsp+8h] [xbp-28h] BYREF
  __int64 v15; // [xsp+18h] [xbp-18h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 1:
      v4 = **((_DWORD **)a3 + 1);
      *((_BYTE *)this + 136) = 1;
      *((_DWORD *)this + 35) = v4;
      return result;
    case 2:
      v10 = **((_DWORD **)a3 + 1);
      *((_BYTE *)this + 136) = 1;
      *((_DWORD *)this + 36) = v10;
      return result;
    case 3:
      v7 = **((_DWORD **)a3 + 1);
      *((_BYTE *)this + 136) = 1;
      *((_DWORD *)this + 37) = v7;
      return result;
    case 4:
      v8 = **((_DWORD **)a3 + 1);
      *(_QWORD *)&v14[4] = *(_QWORD *)((char *)this + 156);
      *(_DWORD *)v14 = v8;
      goto LABEL_10;
    case 5:
      v5 = *((_DWORD *)this + 38);
      v6 = **((_DWORD **)a3 + 1);
      *(_DWORD *)&v14[8] = *((_DWORD *)this + 40);
      *(_DWORD *)v14 = v5;
      *(_DWORD *)&v14[4] = v6;
      goto LABEL_10;
    case 6:
      v11 = **((_DWORD **)a3 + 1);
      *(_QWORD *)v14 = *((_QWORD *)this + 19);
      *(_DWORD *)&v14[8] = v11;
LABEL_10:
      Caver::Vector3::Normalize((Caver::Vector3 *)v14);
      *((_QWORD *)this + 19) = *(_QWORD *)v14;
      v12 = *(_DWORD *)&v14[8];
      *((_BYTE *)this + 136) = 1;
      *((_DWORD *)this + 40) = v12;
      break;
    case 7:
      v13 = **((float **)a3 + 1);
      *((_BYTE *)this + 136) = 1;
      result = v13 * 0.017453;
      *((float *)this + 41) = v13 * 0.017453;
      break;
    case 8:
      result = **((float **)a3 + 1) * 0.017453;
      *((float *)this + 42) = result;
      break;
    default:
      Caver::Component::SetValueForBindedProperty(this, a2, a3);
      break;
  }
  return result;
}

