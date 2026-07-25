/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF670
 * Mangled: ._ZN5Caver11SceneObject27RegisterComponentInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::SceneObject::RegisterComponentInterfaces(Caver::ComponentManager *)
 *
 * Callers: 1
 *   0x0000000000465578  Caver::Scene::ActivateObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 1
 *   0x00000000004745E0  Caver::SceneObject::RegisterComponentInterfaces(Caver::ComponentManager *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF678 string=0x00000000001FF67C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::RegisterComponentInterfaces(
        Caver::SceneObject *this,
        Caver::ComponentManager *a2)
{
  return _ZN5Caver11SceneObject27RegisterComponentInterfacesEPNS_16ComponentManagerE(this, a2);
}

