/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A0598
 * Mangled: _ZN5Caver16ProfilePanelView13DeleteProfileEv
 * Demangled: Caver::ProfilePanelView::DeleteProfile(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000003A05A0 string=0x00000000003A05A4 "\t"
 *   insn=0x00000000003A05A8 string=0x00000000003A05AC """
 *   insn=0x00000000003A05AC string=0x00000000003A05B0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfilePanelView::DeleteProfile(Caver::ProfilePanelView *this)
{
  __int64 result; // x0

  result = *((_QWORD *)this + 44);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, Caver::ProfilePanelView *))(*(_QWORD *)result + 8LL))(result, this);
  return result;
}

