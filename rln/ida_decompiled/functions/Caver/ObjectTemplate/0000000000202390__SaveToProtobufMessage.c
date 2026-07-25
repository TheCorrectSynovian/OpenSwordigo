/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202390
 * Mangled: ._ZNK5Caver14ObjectTemplate21SaveToProtobufMessageEPNS_5Proto14ObjectTemplateE
 * Demangled: Caver::ObjectTemplate::SaveToProtobufMessage(Caver::Proto::ObjectTemplate *)
 *
 * Callers: 2
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x000000000045CFD4  Caver::ObjectLibrary::Process(Caver::SceneProcessingContext *)
 *
 * Callees: 1
 *   0x00000000004601F8  Caver::ObjectTemplate::SaveToProtobufMessage(Caver::Proto::ObjectTemplate *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202398 string=0x000000000020239C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ObjectTemplate::SaveToProtobufMessage(
        Caver::ObjectTemplate *this,
        Caver::Proto::ObjectTemplate *a2)
{
  return _ZNK5Caver14ObjectTemplate21SaveToProtobufMessageEPNS_5Proto14ObjectTemplateE(this, a2);
}

