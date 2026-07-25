/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002027D0
 * Mangled: ._ZN5Caver33LeapingMonsterControllerComponentC2Ev_0
 * Demangled: Caver::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x0000000000250038  Caver::LeapingMonsterControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000029858C  std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::AttackComponent>*,std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>>,boost::intrusive_ptr<Caver::AttackComponent> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002027D8 string=0x00000000002027DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent(
        Caver::LeapingMonsterControllerComponent *this)
{
  JUMPOUT(0x298884);
}

