/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000268BD8
 * Mangled: _ZThn16_N5Caver15EntityComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::EntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 13
 *   insn=0x0000000000268BE0 string=0x0000000000268C10 "H"
 *   insn=0x0000000000268BE4 string=0x0000000000268BE8 "H"
 *   insn=0x0000000000268BE8 string=0x0000000000268BEC "\tp@"
 *   insn=0x0000000000268BEC string=0x0000000000268BF0 ""
 *   insn=0x0000000000268BF0 string=0x0000000000268BF4 "?"
 *   insn=0x0000000000268BF4 string=0x0000000000268BF8 " "
 *   insn=0x0000000000268BF8 string=0x0000000000268BFC "\t"
 *   insn=0x0000000000268BFC string=0x0000000000268C00 "p"
 *   insn=0x0000000000268C00 string=0x0000000000268C04 "}"
 *   insn=0x0000000000268C04 string=0x0000000000268C08 "(A"
 *   insn=0x0000000000268C10 string=0x0000000000268C14 ""
 *   insn=0x0000000000268C14 string=0x0000000000268C18 ""
 *   insn=0x0000000000268C20 string=0x00000000001F9320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::EntityComponent::SetValueForBindedProperty(
        Caver::EntityComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 result; // x0
  int v4; // w8
  __int64 v5; // x9

  result = (__int64)this - 16;
  if ( a2 == 1 )
  {
    *(_BYTE *)(result + 236) = **((_BYTE **)a3 + 1);
  }
  else if ( a2 )
  {
    return Caver::Component::SetValueForBindedProperty((Caver::Component *)result, a2, a3);
  }
  else
  {
    v4 = **((_DWORD **)a3 + 1);
    if ( *(_DWORD *)(result + 112) != v4 )
    {
      v5 = *(_QWORD *)(result + 40);
      *(_DWORD *)(result + 112) = v4;
      *(_BYTE *)(v5 + 144) = v4 < 0;
    }
  }
  return result;
}

