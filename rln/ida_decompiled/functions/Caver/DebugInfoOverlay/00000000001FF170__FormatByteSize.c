/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF170
 * Mangled: ._ZN5Caver16DebugInfoOverlay14FormatByteSizeEi
 * Demangled: Caver::DebugInfoOverlay::FormatByteSize(int)
 *
 * Callers: 1
 *   0x00000000003CAB34  Caver::DebugInfoOverlay::Toggle(void)
 *
 * Callees: 1
 *   0x00000000003CC348  Caver::DebugInfoOverlay::FormatByteSize(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF178 string=0x00000000001FF17C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DebugInfoOverlay::FormatByteSize(Caver::DebugInfoOverlay *this, int a2)
{
  return _ZN5Caver16DebugInfoOverlay14FormatByteSizeEi(this, a2);
}

