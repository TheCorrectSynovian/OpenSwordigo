/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC330
 * Mangled: ._ZN5Caver16DebugInfoOverlay21SetTextureMemoryUsageEi
 * Demangled: Caver::DebugInfoOverlay::SetTextureMemoryUsage(int)
 *
 * Callers: 2
 *   0x00000000003CAB34  Caver::DebugInfoOverlay::Toggle(void)
 *   0x00000000003CC280  Caver::DebugInfoOverlay::Update(float)
 *
 * Callees: 1
 *   0x00000000003CAB34  Caver::DebugInfoOverlay::Toggle(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC338 string=0x00000000001FC33C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::DebugInfoOverlay::SetTextureMemoryUsage(Caver::DebugInfoOverlay *this)
{
  JUMPOUT(0x3CB660);
}

