/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE360
 * Mangled: ._ZN5Caver14TextureLibrary21PrintMemoryUsageStatsEv
 * Demangled: Caver::TextureLibrary::PrintMemoryUsageStats(void)
 *
 * Callers: 1
 *   0x00000000003CAB34  Caver::DebugInfoOverlay::Toggle(void)
 *
 * Callees: 1
 *   0x00000000004CDAB4  Caver::TextureLibrary::PrintMemoryUsageStats(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE368 string=0x00000000001FE36C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextureLibrary::PrintMemoryUsageStats(Caver::TextureLibrary *this)
{
  return _ZN5Caver14TextureLibrary21PrintMemoryUsageStatsEv(this);
}

