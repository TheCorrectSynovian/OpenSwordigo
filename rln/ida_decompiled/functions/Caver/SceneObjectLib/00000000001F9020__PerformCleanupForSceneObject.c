/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9020
 * Mangled: ._ZN5Caver14SceneObjectLib28PerformCleanupForSceneObjectEPNS_12ProgramStateEPNS_11SceneObjectE
 * Demangled: Caver::SceneObjectLib::PerformCleanupForSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *
 * Callers: 2
 *   0x000000000046FE44  Caver::SceneObject::Templatize(std::string const&)
 *   0x0000000000473558  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *
 * Callees: 1
 *   0x0000000000476844  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9028 string=0x00000000001F902C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SceneObjectLib::PerformCleanupForSceneObject(
        Caver::SceneObjectLib *this,
        Caver::ProgramState *a2,
        Caver::SceneObject *a3)
{
  JUMPOUT(0x47699C);
}

