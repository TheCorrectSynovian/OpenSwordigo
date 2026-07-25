/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBC20
 * Mangled: ._ZN5Caver5Scene14ActivateObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::Scene::ActivateObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 1
 *   0x0000000000465578  Caver::Scene::ActivateObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBC28 string=0x00000000001FBC2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Scene::ActivateObject()
{
  return _ZN5Caver5Scene14ActivateObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE();
}

