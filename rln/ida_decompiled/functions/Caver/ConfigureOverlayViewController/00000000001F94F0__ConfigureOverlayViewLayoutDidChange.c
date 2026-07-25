/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F94F0
 * Mangled: ._ZN5Caver30ConfigureOverlayViewController35ConfigureOverlayViewLayoutDidChangeEPNS_20ConfigureOverlayViewE
 * Demangled: Caver::ConfigureOverlayViewController::ConfigureOverlayViewLayoutDidChange(Caver::ConfigureOverlayView *)
 *
 * Callers: 1
 *   0x000000000033E3F0  `non-virtual thunk to'Caver::ConfigureOverlayViewController::ConfigureOverlayViewLayoutDidChange(Caver::ConfigureOverlayView *)
 *
 * Callees: 1
 *   0x000000000033E14C  Caver::ConfigureOverlayViewController::ConfigureOverlayViewLayoutDidChange(Caver::ConfigureOverlayView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F94F8 string=0x00000000001F94FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ConfigureOverlayViewController::ConfigureOverlayViewLayoutDidChange(
        Caver::ConfigureOverlayViewController *this,
        Caver::ConfigureOverlayView *a2)
{
  return _ZN5Caver30ConfigureOverlayViewController35ConfigureOverlayViewLayoutDidChangeEPNS_20ConfigureOverlayViewE(
           this,
           a2);
}

