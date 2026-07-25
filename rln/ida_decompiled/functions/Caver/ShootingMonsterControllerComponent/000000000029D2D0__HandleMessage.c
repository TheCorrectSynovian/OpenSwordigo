/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029D2D0
 * Mangled: _ZN5Caver34ShootingMonsterControllerComponent13HandleMessageEiPv
 * Demangled: Caver::ShootingMonsterControllerComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *
 * Referenced strings: 18
 *   insn=0x000000000029D2D8 string=0x000000000029D2DC "?T"
 *   insn=0x000000000029D2E4 string=0x000000000029D2E8 "("
 *   insn=0x000000000029D2E8 string=0x000000000029D2EC "@,@"
 *   insn=0x000000000029D2E8 string=0x0000000000584430 "333?"
 *   insn=0x000000000029D2F4 string=0x000000000029D2F8 "H"
 *   insn=0x000000000029D2F8 string=0x000000000029D2FC "@(@"
 *   insn=0x000000000029D2FC string=0x000000000029D300 "h\nA"
 *   insn=0x000000000029D300 string=0x000000000029D304 "\t"
 *   insn=0x000000000029D304 string=0x000000000029D308 "  "
 *   insn=0x000000000029D308 string=0x000000000029D30C "4E"
 *   insn=0x000000000029D310 string=0x000000000029D314 "`"
 *   insn=0x000000000029D314 string=0x000000000029D318 "`B@"
 *   insn=0x000000000029D318 string=0x000000000029D31C "t\n"
 *   insn=0x000000000029D320 string=0x000000000029D324 "`"
 *   insn=0x000000000029D32C string=0x000000000029D330 "`B@"
 *   insn=0x000000000029D32C string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000029D334 string=0x000000000029D338 ":"
 *   insn=0x000000000029D338 string=0x00000000001FD020 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShootingMonsterControllerComponent::HandleMessage(
        Caver::ShootingMonsterControllerComponent *this,
        int a2,
        float *a3)
{
  int v4; // w20
  Caver::EntityComponent *v5; // x0

  if ( a2 == 21 && a3[11] <= 0.7 )
  {
    v4 = a3[10] >= 0.0 ? 1 : -1;
    if ( *((_DWORD *)this + 66) != v4 )
    {
      v5 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
      *((_DWORD *)this + 66) = v4;
      if ( !v5 )
      {
        Caver::ComponentOutletBase::Connect((Caver::ShootingMonsterControllerComponent *)((char *)this + 112), this);
        v5 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
      }
      Caver::EntityComponent::SetFacingDirection(v5, v4);
      *((_DWORD *)this + 72) = 0;
    }
  }
  return 0;
}

