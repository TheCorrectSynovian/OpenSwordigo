/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000268BB8
 * Mangled: _ZN5Caver15EntityComponent18SetFacingDirectionEi
 * Demangled: Caver::EntityComponent::SetFacingDirection(int)
 *
 * Callers: 1
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000268BC0 string=0x0000000000268BC4 ""
 *   insn=0x0000000000268BC4 string=0x0000000000268BC8 ")|"
 *   insn=0x0000000000268BCC string=0x0000000000268BD0 "\tA"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityComponent::SetFacingDirection(__int64 this, int a2)
{
  __int64 v2; // x8

  if ( *(_DWORD *)(this + 112) != a2 )
  {
    v2 = *(_QWORD *)(this + 40);
    *(_DWORD *)(this + 112) = a2;
    *(_BYTE *)(v2 + 144) = a2 < 0;
  }
  return this;
}

