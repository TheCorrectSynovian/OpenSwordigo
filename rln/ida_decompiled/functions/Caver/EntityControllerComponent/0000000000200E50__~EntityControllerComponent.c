/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200E50
 * Mangled: ._ZN5Caver25EntityControllerComponentD2Ev
 * Demangled: Caver::EntityControllerComponent::~EntityControllerComponent()
 *
 * Callers: 1
 *   0x000000000026DE84  sub_26DE84
 *
 * Callees: 1
 *   0x000000000026DE84  sub_26DE84
 *
 * Referenced strings: 1
 *   insn=0x0000000000200E58 string=0x0000000000200E5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::EntityControllerComponent::~EntityControllerComponent(Caver::EntityControllerComponent *this)
{
  JUMPOUT(0x26DFBC);
}

