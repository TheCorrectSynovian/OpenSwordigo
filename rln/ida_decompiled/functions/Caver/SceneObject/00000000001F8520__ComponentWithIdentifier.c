/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8520
 * Mangled: ._ZNK5Caver11SceneObject23ComponentWithIdentifierEi
 * Demangled: Caver::SceneObject::ComponentWithIdentifier(int)
 *
 * Callers: 20
 *   0x000000000021B84C  sub_21B84C
 *   0x000000000021B8D0  sub_21B8D0
 *   0x000000000021CCB8  Caver::AnimationControllerComponent::BlendToAnimationNode(boost::intrusive_ptr<Caver::AnimNode> const&,float)
 *   0x000000000021E7B8  Caver::BlendAnimationComponent::ConnectOutlets(void)
 *   0x000000000021F2EC  Caver::BlendAnimationComponent::ValueForBindedProperty(int)
 *   0x000000000021F8F0  Caver::BlendAnimationComponent::className(void)
 *   0x0000000000221318  sub_221318
 *   0x00000000002213A0  sub_2213A0
 *   0x0000000000221428  sub_221428
 *   0x00000000002214E4  sub_2214E4
 *   0x000000000022157C  sub_22157C
 *   0x0000000000221654  sub_221654
 *   0x0000000000232C7C  sub_232C7C
 *   0x0000000000232D04  sub_232D04
 *   0x00000000002437EC  Caver::Component::ComponentWithIdentifier(int)
 *   0x0000000000247C48  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x000000000026D47C  sub_26D47C
 *   0x000000000026DC24  sub_26DC24
 *   0x000000000026DE84  sub_26DE84
 *   0x00000000002AB9A4  sub_2AB9A4
 *
 * Callees: 1
 *   0x000000000046F51C  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F8524 string=0x000000000046F804 "$L"
 *   insn=0x00000000001F8528 string=0x00000000001F852C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SceneObject::ComponentWithIdentifier(Caver::SceneObject *this)
{
  JUMPOUT(0x46F804);
}

