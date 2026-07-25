/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281720
 * Mangled: _ZN5Caver24PhysicsPlatformComponent13HandleMessageEiPv
 * Demangled: Caver::PhysicsPlatformComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB050  Caver::PhysicsPlatformComponent::HandleObjectCollision(Caver::CollisionMessageData const&)
 *
 * Referenced strings: 7
 *   insn=0x0000000000281724 string=0x0000000000281728 "H"
 *   insn=0x0000000000281728 string=0x000000000028172C ""
 *   insn=0x000000000028172C string=0x0000000000281730 "("
 *   insn=0x0000000000281730 string=0x0000000000281734 "H"
 *   insn=0x0000000000281734 string=0x0000000000281738 ""
 *   insn=0x0000000000281748 string=0x000000000028174C "A"
 *   insn=0x000000000028174C string=0x00000000001FB050 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PhysicsPlatformComponent::HandleMessage(
        Caver::PhysicsPlatformComponent *this,
        int a2,
        _QWORD *a3)
{
  if ( a2 == 7 && *(_BYTE *)(*a3 + 378LL) && *(_BYTE *)(a3[1] + 379LL) )
    Caver::PhysicsPlatformComponent::HandleObjectCollision();
  return 0;
}

