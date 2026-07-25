/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F95A0
 * Mangled: ._ZN5Caver11SceneObject26GetComponentsWithInterfaceElPSt6vectorIPNS_9ComponentESaIS3_EE
 * Demangled: Caver::SceneObject::GetComponentsWithInterface(long,std::vector<Caver::Component *,std::allocator<Caver::Component *>> *)
 *
 * Callers: 1
 *   0x00000000002426E4  Caver::Component::GetEnumValuesForBindedOutlet(long,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 1
 *   0x0000000000474690  Caver::SceneObject::GetComponentsWithInterface(long,std::vector<Caver::Component *,std::allocator<Caver::Component *>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F95A8 string=0x00000000001F95AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SceneObject::GetComponentsWithInterface()
{
  return _ZN5Caver11SceneObject26GetComponentsWithInterfaceElPSt6vectorIPNS_9ComponentESaIS3_EE();
}

