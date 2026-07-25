/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203A80
 * Mangled: ._ZN5Caver16DebugInfoOverlay6SetFPSEf
 * Demangled: Caver::DebugInfoOverlay::SetFPS(float)
 *
 * Callers: 2
 *   0x00000000003CAB34  Caver::DebugInfoOverlay::Toggle(void)
 *   0x00000000003CC280  Caver::DebugInfoOverlay::Update(float)
 *
 * Callees: 1
 *   0x00000000003CAB34  Caver::DebugInfoOverlay::Toggle(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203A88 string=0x0000000000203A8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::DebugInfoOverlay::SetFPS(Caver::DebugInfoOverlay *this, float a2)
{
  JUMPOUT(0x3CB258);
}

