/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF0C0
 * Mangled: ._ZN5Caver14ObjectTemplate7ProcessEv
 * Demangled: Caver::ObjectTemplate::Process(void)
 *
 * Callers: 1
 *   0x000000000045CFD4  Caver::ObjectLibrary::Process(Caver::SceneProcessingContext *)
 *
 * Callees: 1
 *   0x0000000000460278  Caver::ObjectTemplate::Process(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FF0C4 string=0x0000000000460278 "2g"
 *   insn=0x00000000001FF0C8 string=0x00000000001FF0CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ObjectTemplate::Process(Caver::ObjectTemplate *this)
{
  return _ZN5Caver14ObjectTemplate7ProcessEv(this);
}

