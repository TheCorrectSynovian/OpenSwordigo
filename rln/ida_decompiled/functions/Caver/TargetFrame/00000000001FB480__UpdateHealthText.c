/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB480
 * Mangled: ._ZN5Caver11TargetFrame16UpdateHealthTextEv
 * Demangled: Caver::TargetFrame::UpdateHealthText(void)
 *
 * Callers: 2
 *   0x00000000003E3474  Caver::TargetFrame::UpdateInfo(void)
 *   0x00000000003E3EE4  Caver::TargetFrame::SetHealth(float)
 *
 * Callees: 1
 *   0x00000000003E3FAC  Caver::TargetFrame::UpdateHealthText(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB488 string=0x00000000001FB48C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TargetFrame::UpdateHealthText(Caver::TargetFrame *this)
{
  return _ZN5Caver11TargetFrame16UpdateHealthTextEv(this);
}

