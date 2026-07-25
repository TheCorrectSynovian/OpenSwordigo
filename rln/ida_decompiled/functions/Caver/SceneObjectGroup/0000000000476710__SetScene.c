/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000476710
 * Mangled: _ZN5Caver16SceneObjectGroup8SetSceneEPNS_5SceneE
 * Demangled: Caver::SceneObjectGroup::SetScene(Caver::Scene *)
 *
 * Callers: 1
 *   0x00000000001F99D0  Caver::SceneObjectGroup::SetScene(Caver::Scene *)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObjectGroup::SetScene(__int64 this, Caver::Scene *a2)
{
  *(_QWORD *)(this + 24) = a2;
  return this;
}

