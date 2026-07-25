/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE370
 * Mangled: ._ZN5Caver33LeapingMonsterControllerComponentC2Ev
 * Demangled: Caver::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x0000000000298F08  Caver::LeapingMonsterControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000029858C  std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::AttackComponent>*,std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>>,boost::intrusive_ptr<Caver::AttackComponent> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE378 string=0x00000000001FE37C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent(
        Caver::LeapingMonsterControllerComponent *this)
{
  JUMPOUT(0x298884);
}

