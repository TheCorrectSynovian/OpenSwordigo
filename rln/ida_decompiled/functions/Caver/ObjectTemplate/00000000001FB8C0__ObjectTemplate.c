/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB8C0
 * Mangled: ._ZN5Caver14ObjectTemplateC2Ev
 * Demangled: Caver::ObjectTemplate::ObjectTemplate(void)
 *
 * Callers: 1
 *   0x000000000045CFD4  Caver::ObjectLibrary::Process(Caver::SceneProcessingContext *)
 *
 * Callees: 1
 *   0x000000000046016C  Caver::ObjectTemplate::ObjectTemplate(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB8C8 string=0x00000000001FB8CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ObjectTemplate::ObjectTemplate(Caver::ObjectTemplate *this)
{
  return _ZN5Caver14ObjectTemplateC2Ev(this);
}

