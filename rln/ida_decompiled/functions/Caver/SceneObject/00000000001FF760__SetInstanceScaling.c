/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF760
 * Mangled: ._ZN5Caver11SceneObject18SetInstanceScalingEf
 * Demangled: Caver::SceneObject::SetInstanceScaling(float)
 *
 * Callers: 11
 *   0x00000000002407D0  Caver::TransformControllerComponent::RegisterLibrary(void)
 *   0x000000000024117C  Caver::TransformControllerComponent::ScaleBy(float,float)
 *   0x00000000002411B4  Caver::TransformControllerComponent::ScaleTo(float,float)
 *   0x00000000002416CC  sub_2416CC
 *   0x0000000000241AA4  sub_241AA4
 *   0x0000000000287E74  Caver::MagicExplosionComponent::Update(float)
 *   0x000000000028A180  Caver::MagicHookshotComponent::CreateBlast(void)
 *   0x000000000028CD94  Caver::ProjectileControllerComponent::CreateBlast(void)
 *   0x000000000046F51C  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000004701FC  Caver::SceneObject::Clone(void)
 *   0x00000000004779B0  sub_4779B0
 *
 * Callees: 1
 *   0x000000000046F83C  Caver::SceneObject::AddComponent(Caver::Component *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF768 string=0x00000000001FF76C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SceneObject::SetInstanceScaling(Caver::SceneObject *this, float a2)
{
  JUMPOUT(0x46F8FC);
}

