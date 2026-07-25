/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7A20
 * Mangled: ._ZN5Caver33GenericMonsterControllerComponent18SetFacingDirectionEi
 * Demangled: Caver::GenericMonsterControllerComponent::SetFacingDirection(int)
 *
 * Callers: 1
 *   0x00000000002976D8  Caver::GenericMonsterControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002975B0  Caver::GenericMonsterControllerComponent::SetFacingDirection(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7A28 string=0x00000000001F7A2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GenericMonsterControllerComponent::SetFacingDirection(
        Caver::GenericMonsterControllerComponent *this,
        int a2)
{
  return _ZN5Caver33GenericMonsterControllerComponent18SetFacingDirectionEi(this, a2);
}

