/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEB20
 * Mangled: ._ZN5Caver5Scene34RegisterObjectWaitingForActivationERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::Scene::RegisterObjectWaitingForActivation(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x0000000000474A28  Caver::SceneObject::Activate(void)
 *
 * Callees: 1
 *   0x0000000000465380  Caver::Scene::RegisterObjectWaitingForActivation(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEB28 string=0x00000000001FEB2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Scene::RegisterObjectWaitingForActivation()
{
  return _ZN5Caver5Scene34RegisterObjectWaitingForActivationERKN5boost13intrusive_ptrINS_11SceneObjectEEE();
}

