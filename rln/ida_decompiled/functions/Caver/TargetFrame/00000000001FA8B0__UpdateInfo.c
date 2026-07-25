/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA8B0
 * Mangled: ._ZN5Caver11TargetFrame10UpdateInfoEv
 * Demangled: Caver::TargetFrame::UpdateInfo(void)
 *
 * Callers: 1
 *   0x00000000003E3434  Caver::TargetFrame::SetTargetInfo(std::string const&,int,bool)
 *
 * Callees: 1
 *   0x00000000003E3474  Caver::TargetFrame::UpdateInfo(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA8B8 string=0x00000000001FA8BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TargetFrame::UpdateInfo(Caver::TargetFrame *this)
{
  return _ZN5Caver11TargetFrame10UpdateInfoEv(this);
}

