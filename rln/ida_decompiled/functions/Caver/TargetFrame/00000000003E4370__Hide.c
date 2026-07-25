/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E4370
 * Mangled: _ZN5Caver11TargetFrame4HideEv
 * Demangled: Caver::TargetFrame::Hide(void)
 *
 * Callers: 1
 *   0x0000000000200450  Caver::TargetFrame::Hide(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TargetFrame::Hide(__int64 this)
{
  *(_BYTE *)(this + 268) = 0;
  return this;
}

