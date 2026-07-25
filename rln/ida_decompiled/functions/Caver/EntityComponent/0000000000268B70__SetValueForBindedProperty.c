/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000268B70
 * Mangled: _ZN5Caver15EntityComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::EntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F8C40  Caver::EntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 13
 *   insn=0x0000000000268B74 string=0x0000000000268BA4 "H"
 *   insn=0x0000000000268B78 string=0x0000000000268B7C "H"
 *   insn=0x0000000000268B7C string=0x0000000000268B80 "\tp@"
 *   insn=0x0000000000268B80 string=0x0000000000268B84 ""
 *   insn=0x0000000000268B84 string=0x0000000000268B88 "?"
 *   insn=0x0000000000268B88 string=0x0000000000268B8C " "
 *   insn=0x0000000000268B8C string=0x0000000000268B90 "\t"
 *   insn=0x0000000000268B90 string=0x0000000000268B94 "p"
 *   insn=0x0000000000268B94 string=0x0000000000268B98 "}"
 *   insn=0x0000000000268B98 string=0x0000000000268B9C "(A"
 *   insn=0x0000000000268BA4 string=0x0000000000268BA8 ""
 *   insn=0x0000000000268BA8 string=0x0000000000268BAC ""
 *   insn=0x0000000000268BB4 string=0x00000000001F9320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityComponent::SetValueForBindedProperty(
        __int64 this,
        int a2,
        const Caver::BindingValue *a3)
{
  int v3; // w8
  __int64 v4; // x9

  if ( a2 == 1 )
  {
    *(_BYTE *)(this + 236) = **((_BYTE **)a3 + 1);
  }
  else if ( a2 )
  {
    return Caver::Component::SetValueForBindedProperty((Caver::Component *)this, a2, a3);
  }
  else
  {
    v3 = **((_DWORD **)a3 + 1);
    if ( *(_DWORD *)(this + 112) != v3 )
    {
      v4 = *(_QWORD *)(this + 40);
      *(_DWORD *)(this + 112) = v3;
      *(_BYTE *)(v4 + 144) = v3 < 0;
    }
  }
  return this;
}

