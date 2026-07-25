/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A133C
 * Mangled: _ZN5Caver33WalkingMonsterControllerComponent22StartMovingToDirectionEi
 * Demangled: Caver::WalkingMonsterControllerComponent::StartMovingToDirection(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *
 * Referenced strings: 3
 *   insn=0x00000000002A137C string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002A138C string=0x00000000002A1390 "$o"
 *   insn=0x00000000002A1390 string=0x00000000001FD020 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WalkingMonsterControllerComponent::StartMovingToDirection(__int64 this, int a2)
{
  __int64 v2; // x20
  Caver::EntityComponent *v4; // x0

  v2 = this;
  if ( *(_DWORD *)(this + 232) != a2 )
  {
    v4 = *(Caver::EntityComponent **)(this + 128);
    *(_DWORD *)(v2 + 232) = a2;
    if ( !v4 )
    {
      Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v2 + 112), (const Caver::Component *)v2);
      v4 = *(Caver::EntityComponent **)(v2 + 128);
    }
    return Caver::EntityComponent::SetFacingDirection(v4, a2);
  }
  return this;
}

