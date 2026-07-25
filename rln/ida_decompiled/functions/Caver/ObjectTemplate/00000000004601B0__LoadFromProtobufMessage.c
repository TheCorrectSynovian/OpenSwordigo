/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004601B0
 * Mangled: _ZN5Caver14ObjectTemplate23LoadFromProtobufMessageERKNS_5Proto14ObjectTemplateE
 * Demangled: Caver::ObjectTemplate::LoadFromProtobufMessage(Caver::Proto::ObjectTemplate const&)
 *
 * Callers: 1
 *   0x0000000000202310  Caver::ObjectTemplate::LoadFromProtobufMessage(Caver::Proto::ObjectTemplate const&)
 *
 * Callees: 1
 *   0x00000000001FB940  Caver::SceneObject::LoadFromProtobufMessage(Caver::Proto::SceneObject const&)
 *
 * Referenced strings: 7
 *   insn=0x00000000004601BC string=0x00000000004601C0 ")"
 *   insn=0x00000000004601C0 string=0x00000000004601C4 "h\n@"
 *   insn=0x00000000004601C4 string=0x00000000004601C8 ")ME"
 *   insn=0x00000000004601D0 string=0x00000000004601D4 ")"
 *   insn=0x00000000004601D4 string=0x00000000004601D8 "("
 *   insn=0x00000000004601E0 string=0x00000000004601E4 "h"
 *   insn=0x00000000004601E0 string=0x00000000001FB940 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectTemplate::LoadFromProtobufMessage(
        Caver::ObjectTemplate *this,
        const Caver::Proto::ObjectTemplate *a2)
{
  Caver::SceneObject::LoadFromProtobufMessage();
  *((_DWORD *)this + 76) = *((_DWORD *)a2 + 6);
}

