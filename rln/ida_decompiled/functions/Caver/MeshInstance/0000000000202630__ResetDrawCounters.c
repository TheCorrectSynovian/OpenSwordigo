/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202630
 * Mangled: ._ZN5Caver12MeshInstance17ResetDrawCountersEv
 * Demangled: Caver::MeshInstance::ResetDrawCounters(void)
 *
 * Callers: 1
 *   0x00000000003CC280  Caver::DebugInfoOverlay::Update(float)
 *
 * Callees: 1
 *   0x00000000004484DC  Caver::MeshInstance::ResetDrawCounters(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000202634 string=0x00000000004484DC ""
 *   insn=0x0000000000202638 string=0x000000000020263C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshInstance::ResetDrawCounters(Caver::MeshInstance *this)
{
  return _ZN5Caver12MeshInstance17ResetDrawCountersEv(this);
}

