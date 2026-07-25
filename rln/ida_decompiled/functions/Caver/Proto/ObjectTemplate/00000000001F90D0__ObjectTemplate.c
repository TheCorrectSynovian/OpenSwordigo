/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F90D0
 * Mangled: ._ZN5Caver5Proto14ObjectTemplateC2Ev
 * Demangled: Caver::Proto::ObjectTemplate::ObjectTemplate(void)
 *
 * Callers: 2
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x000000000045CFD4  Caver::ObjectLibrary::Process(Caver::SceneProcessingContext *)
 *
 * Callees: 1
 *   0x00000000002FBBE4  Caver::Proto::Component::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F90D4 string=0x00000000002FBC3C "H"
 *   insn=0x00000000001F90D8 string=0x00000000001F90DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ObjectTemplate::ObjectTemplate(Caver::Proto::ObjectTemplate *this)
{
  JUMPOUT(0x2FBC3C);
}

