/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026C06C
 * Mangled: _ZN5Caver25EntityControllerComponent18SetFacingDirectionEi
 * Demangled: Caver::EntityControllerComponent::SetFacingDirection(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *
 * Referenced strings: 12
 *   insn=0x000000000026C07C string=0x000000000026C080 "`B@"
 *   insn=0x000000000026C088 string=0x000000000026C08C "t*"
 *   insn=0x000000000026C090 string=0x000000000026C094 "`"
 *   insn=0x000000000026C09C string=0x000000000026C0A0 "`B@"
 *   insn=0x000000000026C09C string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000026C0A8 string=0x000000000026C0AC "t"
 *   insn=0x000000000026C0A8 string=0x00000000001FD020 "0'"
 *   insn=0x000000000026C0B0 string=0x000000000026C0B4 "hB@"
 *   insn=0x000000000026C0B4 string=0x000000000026C0B8 "u\nA"
 *   insn=0x000000000026C0BC string=0x000000000026C0C0 "`"
 *   insn=0x000000000026C0BC string=0x000000000026C0D0 "q@"
 *   insn=0x000000000026C0C8 string=0x000000000026C0CC "hB@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityControllerComponent::SetFacingDirection(Caver::EntityControllerComponent *this, int a2)
{
  Caver::EntityComponent *v3; // x0
  __int64 result; // x0
  __int64 v6; // x20
  __int64 v7; // x8
  int v8; // w21

  v3 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 74) = a2;
  if ( !v3 )
  {
    Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
    v3 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
  }
  result = Caver::EntityComponent::SetFacingDirection(v3, a2);
  v6 = *((_QWORD *)this + 32);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 16);
    v8 = *((_DWORD *)this + 66);
    if ( !v7 )
    {
      result = Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
      v7 = *((_QWORD *)this + 16);
    }
    *(_BYTE *)(v6 + 57) = v8 != *(_DWORD *)(v7 + 112);
  }
  return result;
}

