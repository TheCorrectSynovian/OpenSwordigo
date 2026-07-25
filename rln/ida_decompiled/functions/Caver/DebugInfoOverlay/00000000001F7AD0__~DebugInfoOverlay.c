/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7AD0
 * Mangled: ._ZN5Caver16DebugInfoOverlayD2Ev
 * Demangled: Caver::DebugInfoOverlay::~DebugInfoOverlay()
 *
 * Callers: 1
 *   0x00000000003CC348  Caver::DebugInfoOverlay::FormatByteSize(int)
 *
 * Callees: 1
 *   0x00000000003CC348  Caver::DebugInfoOverlay::FormatByteSize(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7AD8 string=0x00000000001F7ADC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::DebugInfoOverlay::~DebugInfoOverlay(Caver::DebugInfoOverlay *this)
{
  JUMPOUT(0x3CC7F0);
}

