/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F86F0
 * Mangled: ._ZN5Caver11SceneObject26GetComponentsWithInterfaceINS_14LightComponentEEEvPSt6vectorIN5boost13intrusive_ptrIT_EESaIS7_EE
 * Demangled: Caver::SceneObject::GetComponentsWithInterface<Caver::LightComponent>(std::vector<boost::intrusive_ptr<Caver::LightComponent>,std::allocator<boost::intrusive_ptr<Caver::LightComponent>>> *)
 *
 * Callers: 1
 *   0x00000000002231BC  sub_2231BC
 *
 * Callees: 1
 *   0x00000000002237C0  Caver::LightComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F86F8 string=0x00000000001F86FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SceneObject::GetComponentsWithInterface<Caver::LightComponent>()
{
  JUMPOUT(0x223818);
}

