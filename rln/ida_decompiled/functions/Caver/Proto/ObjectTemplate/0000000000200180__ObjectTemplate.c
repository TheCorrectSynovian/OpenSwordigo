/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200180
 * Mangled: ._ZN5Caver5Proto14ObjectTemplateC2ERKS1_
 * Demangled: Caver::Proto::ObjectTemplate::ObjectTemplate(Caver::Proto::ObjectTemplate const&)
 *
 * Callers: 1
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *
 * Callees: 1
 *   0x00000000002FBC9C  Caver::Proto::ObjectTemplate::ObjectTemplate(Caver::Proto::ObjectTemplate const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200188 string=0x000000000020018C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ObjectTemplate::ObjectTemplate(
        Caver::Proto::ObjectTemplate *this,
        const Caver::Proto::ObjectTemplate *a2)
{
  return _ZN5Caver5Proto14ObjectTemplateC2ERKS1_(this, a2);
}

