/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203870
 * Mangled: ._ZN5Caver5Proto14ModelComponent10SharedDtorEv
 * Demangled: Caver::Proto::ModelComponent::SharedDtor(void)
 *
 * Callers: 2
 *   0x0000000000302F08  Caver::Proto::ModelComponent::ModelComponent(Caver::Proto::ModelComponent const&)
 *   0x0000000000303384  Caver::Proto::ModelComponent::~ModelComponent()
 *
 * Callees: 1
 *   0x0000000000302F08  Caver::Proto::ModelComponent::ModelComponent(Caver::Proto::ModelComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203878 string=0x000000000020387C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ModelComponent::SharedDtor(Caver::Proto::ModelComponent *this)
{
  JUMPOUT(0x30326C);
}

