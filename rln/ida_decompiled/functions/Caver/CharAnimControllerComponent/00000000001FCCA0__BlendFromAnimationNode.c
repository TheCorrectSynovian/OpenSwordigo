/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCCA0
 * Mangled: ._ZN5Caver27CharAnimControllerComponent22BlendFromAnimationNodeERKN5boost13intrusive_ptrINS_12AnimKeysNodeEEEf
 * Demangled: Caver::CharAnimControllerComponent::BlendFromAnimationNode(boost::intrusive_ptr<Caver::AnimKeysNode> const&,float)
 *
 * Callers: 2
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *   0x000000000025F148  Caver::CharControllerComponent::Pickup(Caver::SceneObject *,bool)
 *
 * Callees: 1
 *   0x0000000000257A28  Caver::CharAnimControllerComponent::SwingWithAnimation(boost::intrusive_ptr<Caver::AnimKeysNode> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCCA8 string=0x00000000001FCCAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::CharAnimControllerComponent::BlendFromAnimationNode()
{
  JUMPOUT(0x258064);
}

