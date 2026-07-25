/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000298420
 * Mangled: _ZN5Caver33GenericMonsterControllerComponentD0Ev
 * Demangled: Caver::GenericMonsterControllerComponent::~GenericMonsterControllerComponent()
 *
 * Callers: 1
 *   0x0000000000298258  Caver::GenericMonsterControllerComponent::~GenericMonsterControllerComponent()
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD6C0  Caver::GenericMonsterControllerComponent::~GenericMonsterControllerComponent()
 *   0x0000000000298458  Caver::GenericMonsterControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x0000000000298430 string=0x00000000001FD6C0 "0'"
 *   insn=0x0000000000298440 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GenericMonsterControllerComponent::~GenericMonsterControllerComponent(
        Caver::GenericMonsterControllerComponent *this)
{
  Caver::GenericMonsterControllerComponent::~GenericMonsterControllerComponent(this);
  operator delete(this);
}

