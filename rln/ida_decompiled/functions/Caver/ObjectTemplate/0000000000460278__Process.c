/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000460278
 * Mangled: _ZN5Caver14ObjectTemplate7ProcessEv
 * Demangled: Caver::ObjectTemplate::Process(void)
 *
 * Callers: 2
 *   0x00000000001FF0C0  Caver::ObjectTemplate::Process(void)
 *   0x00000000004601F8  Caver::ObjectTemplate::SaveToProtobufMessage(Caver::Proto::ObjectTemplate *)
 *
 * Callees: 1
 *   0x00000000001F9F40  Caver::SceneObject::Process(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000460278 string=0x00000000001F9F40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ObjectTemplate::Process(Caver::SceneObject *this)
{
  Caver::SceneObject::Process(this);
}

