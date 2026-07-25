/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000265C94
 * Mangled: _ZN5Caver15DamageComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::DamageComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F6C30  Caver::DamageComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 35
 *   insn=0x0000000000265C94 string=0x0000000000265C98 "h"
 *   insn=0x0000000000265C98 string=0x0000000000265C9C "\t"
 *   insn=0x0000000000265CA0 string=0x0000000000265CA4 ")"
 *   insn=0x0000000000265CA4 string=0x0000000000265CA8 "(y"
 *   insn=0x0000000000265CA8 string=0x0000000000265CAC ""
 *   insn=0x0000000000265CB0 string=0x0000000000265CB4 "H"
 *   insn=0x0000000000265CB0 string=0x0000000000265CC8 "H"
 *   insn=0x0000000000265CB0 string=0x0000000000265CE4 "H"
 *   insn=0x0000000000265CB0 string=0x0000000000265CF4 "H"
 *   insn=0x0000000000265CB0 string=0x0000000000265D04 "H"
 *   insn=0x0000000000265CB0 string=0x0000000000265D14 "H"
 *   insn=0x0000000000265CB0 string=0x0000000000265D24 "H"
 *   insn=0x0000000000265CB0 string=0x0000000000265D34 "H"
 *   insn=0x0000000000265CB0 string=0x0000000000265D44 "H"
 *   insn=0x0000000000265CB4 string=0x0000000000265CB8 ""
 *   insn=0x0000000000265CB8 string=0x0000000000265CBC ""
 *   insn=0x0000000000265CC4 string=0x00000000001F9320 "0'"
 *   insn=0x0000000000265CC8 string=0x0000000000265CCC "\t"
 *   insn=0x0000000000265CCC string=0x0000000000265CD0 ""
 *   insn=0x0000000000265CD0 string=0x0000000000265CD4 ""
 *   insn=0x0000000000265CD8 string=0x0000000000265CDC ""
 *   insn=0x0000000000265CE4 string=0x0000000000265CE8 ""
 *   insn=0x0000000000265CE8 string=0x0000000000265CEC ""
 *   insn=0x0000000000265CF4 string=0x0000000000265CF8 ""
 *   insn=0x0000000000265CF8 string=0x0000000000265CFC ""
 *   insn=0x0000000000265D04 string=0x0000000000265D08 ""
 *   insn=0x0000000000265D08 string=0x0000000000265D0C "@"
 *   insn=0x0000000000265D14 string=0x0000000000265D18 ""
 *   insn=0x0000000000265D18 string=0x0000000000265D1C ""
 *   insn=0x0000000000265D24 string=0x0000000000265D28 ""
 *   insn=0x0000000000265D28 string=0x0000000000265D2C ""
 *   insn=0x0000000000265D34 string=0x0000000000265D38 ""
 *   insn=0x0000000000265D38 string=0x0000000000265D3C ""
 *   insn=0x0000000000265D44 string=0x0000000000265D48 ""
 *   insn=0x0000000000265D48 string=0x0000000000265D4C "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DamageComponent::SetValueForBindedProperty(
        __int64 this,
        int a2,
        const Caver::BindingValue *a3)
{
  int v3; // w9
  int v4; // w8
  bool v5; // vf
  int v6; // w8

  switch ( a2 )
  {
    case 0:
      *(_DWORD *)(this + 164) = **((_DWORD **)a3 + 1);
      break;
    case 1:
      v3 = *(_DWORD *)(this + 164);
      v4 = **((_DWORD **)a3 + 1);
      v5 = __OFSUB__(v4, v3);
      v6 = v4 - v3;
      if ( v6 < 0 != v5 )
        v6 = 0;
      *(_DWORD *)(this + 168) = v6;
      break;
    case 2:
      *(_DWORD *)(this + 180) = **((_DWORD **)a3 + 1);
      break;
    case 3:
      *(_DWORD *)(this + 184) = **((_DWORD **)a3 + 1);
      break;
    case 4:
      *(_BYTE *)(this + 208) = **((_BYTE **)a3 + 1);
      break;
    case 5:
      *(_DWORD *)(this + 200) = **((_DWORD **)a3 + 1);
      break;
    case 6:
      *(_DWORD *)(this + 204) = **((_DWORD **)a3 + 1);
      break;
    case 7:
      *(_BYTE *)(this + 160) = **((_BYTE **)a3 + 1);
      break;
    case 8:
      *(_BYTE *)(this + 209) = **((_BYTE **)a3 + 1);
      break;
    default:
      this = Caver::Component::SetValueForBindedProperty((Caver::Component *)this, a2, a3);
      break;
  }
  return this;
}

