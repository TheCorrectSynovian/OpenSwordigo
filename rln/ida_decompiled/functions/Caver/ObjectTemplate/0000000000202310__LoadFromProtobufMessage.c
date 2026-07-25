/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202310
 * Mangled: ._ZN5Caver14ObjectTemplate23LoadFromProtobufMessageERKNS_5Proto14ObjectTemplateE
 * Demangled: Caver::ObjectTemplate::LoadFromProtobufMessage(Caver::Proto::ObjectTemplate const&)
 *
 * Callers: 1
 *   0x000000000045CFD4  Caver::ObjectLibrary::Process(Caver::SceneProcessingContext *)
 *
 * Callees: 1
 *   0x00000000004601B0  Caver::ObjectTemplate::LoadFromProtobufMessage(Caver::Proto::ObjectTemplate const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202318 string=0x000000000020231C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ObjectTemplate::LoadFromProtobufMessage(
        Caver::ObjectTemplate *this,
        const Caver::Proto::ObjectTemplate *a2)
{
  return _ZN5Caver14ObjectTemplate23LoadFromProtobufMessageERKNS_5Proto14ObjectTemplateE(this, a2);
}

