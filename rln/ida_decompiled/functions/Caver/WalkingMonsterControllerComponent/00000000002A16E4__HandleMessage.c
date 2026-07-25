/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A16E4
 * Mangled: _ZN5Caver33WalkingMonsterControllerComponent13HandleMessageEiPv
 * Demangled: Caver::WalkingMonsterControllerComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *
 * Referenced strings: 18
 *   insn=0x00000000002A16EC string=0x00000000002A16F0 "?T"
 *   insn=0x00000000002A16F8 string=0x00000000002A16FC ""
 *   insn=0x00000000002A16FC string=0x00000000002A1700 "@,@"
 *   insn=0x00000000002A16FC string=0x0000000000584430 "333?"
 *   insn=0x00000000002A1708 string=0x00000000002A170C "("
 *   insn=0x00000000002A170C string=0x00000000002A1710 "@(@"
 *   insn=0x00000000002A1710 string=0x00000000002A1714 "h"
 *   insn=0x00000000002A1714 string=0x00000000002A1718 "\t"
 *   insn=0x00000000002A1718 string=0x00000000002A171C "  "
 *   insn=0x00000000002A171C string=0x00000000002A1720 "4E"
 *   insn=0x00000000002A1724 string=0x00000000002A1728 "@"
 *   insn=0x00000000002A1728 string=0x00000000002A172C "`B@"
 *   insn=0x00000000002A172C string=0x00000000002A1730 "t"
 *   insn=0x00000000002A1734 string=0x00000000002A1738 "`"
 *   insn=0x00000000002A1740 string=0x00000000002A1744 "`B@"
 *   insn=0x00000000002A1740 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002A1748 string=0x00000000002A174C "5n"
 *   insn=0x00000000002A174C string=0x00000000001FD020 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WalkingMonsterControllerComponent::HandleMessage(
        Caver::WalkingMonsterControllerComponent *this,
        int a2,
        float *a3)
{
  int v4; // w20
  Caver::EntityComponent *v5; // x0

  if ( a2 == 21 && a3[11] <= 0.7 )
  {
    v4 = a3[10] >= 0.0 ? 1 : -1;
    if ( *((_DWORD *)this + 58) != v4 )
    {
      v5 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
      *((_DWORD *)this + 58) = v4;
      if ( !v5 )
      {
        Caver::ComponentOutletBase::Connect((Caver::WalkingMonsterControllerComponent *)((char *)this + 112), this);
        v5 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
      }
      Caver::EntityComponent::SetFacingDirection(v5, v4);
    }
  }
  return 0;
}

