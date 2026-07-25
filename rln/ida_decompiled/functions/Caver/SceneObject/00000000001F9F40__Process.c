/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9F40
 * Mangled: ._ZN5Caver11SceneObject7ProcessEv
 * Demangled: Caver::SceneObject::Process(void)
 *
 * Callers: 2
 *   0x0000000000460278  Caver::ObjectTemplate::Process(void)
 *   0x0000000000464258  Caver::Scene::Process(Caver::SceneProcessingContext *)
 *
 * Callees: 1
 *   0x00000000004701FC  Caver::SceneObject::Clone(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9F48 string=0x00000000001F9F4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SceneObject::Process(Caver::SceneObject *this)
{
  JUMPOUT(0x470A2C);
}

