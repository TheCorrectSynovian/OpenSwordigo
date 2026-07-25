/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029CAB8
 * Mangled: _ZN5Caver34ShootingMonsterControllerComponent22StartMovingToDirectionEi
 * Demangled: Caver::ShootingMonsterControllerComponent::StartMovingToDirection(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *
 * Referenced strings: 9
 *   insn=0x000000000029CAC4 string=0x000000000029CAC8 "h\nA"
 *   insn=0x000000000029CAD0 string=0x000000000029CAD4 "`"
 *   insn=0x000000000029CAD4 string=0x000000000029CAD8 "`B@"
 *   insn=0x000000000029CAD8 string=0x000000000029CADC "t\n"
 *   insn=0x000000000029CAE0 string=0x000000000029CAE4 "`"
 *   insn=0x000000000029CAEC string=0x000000000029CAF0 "`B@"
 *   insn=0x000000000029CAEC string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000029CAF4 string=0x000000000029CAF8 "J"
 *   insn=0x000000000029CAF8 string=0x00000000001FD020 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShootingMonsterControllerComponent::StartMovingToDirection(__int64 this, int a2)
{
  __int64 v2; // x19
  Caver::EntityComponent *v4; // x0

  v2 = this;
  if ( *(_DWORD *)(this + 264) != a2 )
  {
    v4 = *(Caver::EntityComponent **)(this + 128);
    *(_DWORD *)(v2 + 264) = a2;
    if ( !v4 )
    {
      Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v2 + 112), (const Caver::Component *)v2);
      v4 = *(Caver::EntityComponent **)(v2 + 128);
    }
    this = Caver::EntityComponent::SetFacingDirection(v4, a2);
    *(_DWORD *)(v2 + 288) = 0;
  }
  return this;
}

