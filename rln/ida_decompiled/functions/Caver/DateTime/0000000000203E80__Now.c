/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203E80
 * Mangled: ._ZN5Caver8DateTime3NowEv
 * Demangled: Caver::DateTime::Now(void)
 *
 * Callers: 3
 *   0x000000000039DA3C  Caver::ProfilePanelView::AnimateIn(void)
 *   0x00000000003C0F08  Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *   0x00000000003C186C  Caver::PlayerProfile::UpdateLastPlayedTime(void)
 *
 * Callees: 1
 *   0x00000000004CF8E0  Caver::DateTime::Now(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203E84 string=0x00000000004CF8E0 "\"
 *   insn=0x0000000000203E88 string=0x0000000000203E8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DateTime::Now(Caver::DateTime *this)
{
  return _ZN5Caver8DateTime3NowEv(this);
}

