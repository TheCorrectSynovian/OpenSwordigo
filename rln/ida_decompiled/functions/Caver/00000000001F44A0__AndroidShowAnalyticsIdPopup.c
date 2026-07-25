/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F44A0
 * Mangled: ._ZN5Caver27AndroidShowAnalyticsIdPopupEv
 * Demangled: Caver::AndroidShowAnalyticsIdPopup(void)
 *
 * Callers: 1
 *   0x00000000004BAC64  Caver::OnlineController_Android::ShowAnalyticsIdPopup(void)
 *
 * Callees: 1
 *   0x000000000047AD8C  Caver::AndroidGetAnalyticsId(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F44A8 string=0x00000000001F44AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::AndroidShowAnalyticsIdPopup(Caver *this)
{
  JUMPOUT(0x47AE48);
}

