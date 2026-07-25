/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7720
 * Mangled: ._ZN5Caver21AndroidGetAnalyticsIdEv
 * Demangled: Caver::AndroidGetAnalyticsId(void)
 *
 * Callers: 1
 *   0x00000000004BAC60  Caver::OnlineController_Android::GetAnalyticsId(void)
 *
 * Callees: 1
 *   0x000000000047AD8C  Caver::AndroidGetAnalyticsId(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7728 string=0x00000000001F772C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AndroidGetAnalyticsId(Caver *this)
{
  return _ZN5Caver21AndroidGetAnalyticsIdEv(this);
}

