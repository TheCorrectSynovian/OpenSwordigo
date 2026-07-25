/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CCE48
 * Mangled: _ZN5Caver20WeaponTrailComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::WeaponTrailComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000201040  Caver::WeaponTrailComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *
 * Referenced strings: 22
 *   insn=0x00000000002CCE54 string=0x00000000002CCE58 "T"
 *   insn=0x00000000002CCE6C string=0x00000000002CCE70 ","
 *   insn=0x00000000002CCE70 string=0x00000000002CCE74 "$"
 *   insn=0x00000000002CCE70 string=0x00000000001F9320 "0'"
 *   insn=0x00000000002CCE7C string=0x00000000002CCE80 "$"
 *   insn=0x00000000002CCE88 string=0x00000000002CCE8C "A"
 *   insn=0x00000000002CCEA4 string=0x00000000002CCEA8 "d"
 *   insn=0x00000000002CCEAC string=0x00000000002CCEB0 "!"
 *   insn=0x00000000002CCEB0 string=0x00000000002CCEB4 "B"
 *   insn=0x00000000002CCEB4 string=0x00000000002CCEB8 "c"
 *   insn=0x00000000002CCEBC string=0x00000000002CCEC0 "!"
 *   insn=0x00000000002CCEC0 string=0x00000000002CCEC4 "B"
 *   insn=0x00000000002CCEC4 string=0x00000000002CCEC8 "c"
 *   insn=0x00000000002CCECC string=0x00000000002CCED0 "`"
 *   insn=0x00000000002CCED0 string=0x00000000002CCED4 " %"
 *   insn=0x00000000002CCED4 string=0x00000000002CCED8 "f"
 *   insn=0x00000000002CCEE0 string=0x00000000002CCEE4 "b"
 *   insn=0x00000000002CCEE4 string=0x00000000002CCEE8 "E&"
 *   insn=0x00000000002CCEE8 string=0x00000000002CCEEC "a!"
 *   insn=0x00000000002CCEF4 string=0x00000000002CCEF8 "&"
 *   insn=0x00000000002CCEFC string=0x00000000002CCF00 "hz"
 *   insn=0x00000000002CCF24 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WeaponTrailComponent::SetValueForBindedProperty(
        Caver::WeaponTrailComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  unsigned int v4; // s0
  unsigned int v5; // s1
  unsigned int v6; // s2
  unsigned int v7; // s3
  char v8; // [xsp+18h] [xbp-38h]
  char v9; // [xsp+19h] [xbp-37h]
  char v10; // [xsp+1Ah] [xbp-36h]
  char v11; // [xsp+1Bh] [xbp-35h]
  int v12; // [xsp+34h] [xbp-1Ch]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 )
  {
    Caver::Component::SetValueForBindedProperty(this, a2, a3);
  }
  else
  {
    Caver::BindingValue::FloatColorValue(a3);
    Caver::Color::FromFloatColor();
    LOBYTE(v4) = v8;
    LOBYTE(v5) = v9;
    LOBYTE(v6) = v10;
    LOBYTE(v7) = v11;
    *((float *)this + 44) = (float)v4 / 255.0;
    *((float *)this + 45) = (float)v5 / 255.0;
    *((float *)this + 46) = (float)v6 / 255.0;
    *((float *)this + 47) = (float)v7 / 255.0;
    Caver::Color::FromFloatColor();
    *((_DWORD *)this + 30) = v12;
  }
}

