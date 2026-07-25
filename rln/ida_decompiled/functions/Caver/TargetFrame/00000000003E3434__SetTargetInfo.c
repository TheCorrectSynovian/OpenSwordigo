/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E3434
 * Mangled: _ZN5Caver11TargetFrame13SetTargetInfoERKSsib
 * Demangled: Caver::TargetFrame::SetTargetInfo(std::string const&,int,bool)
 *
 * Callers: 1
 *   0x00000000001FCCD0  Caver::TargetFrame::SetTargetInfo(std::string const&,int,bool)
 *
 * Callees: 2
 *   0x00000000001FA8B0  Caver::TargetFrame::UpdateInfo(void)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 2
 *   insn=0x00000000003E344C string=0x00000000003E3450 "u"
 *   insn=0x00000000003E3470 string=0x00000000001FA8B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TargetFrame::SetTargetInfo(__int64 a1, __int64 a2, int a3, char a4)
{
  char v6; // w21

  v6 = a4 & 1;
  sub_56A6A8(a1 + 248);
  *(_DWORD *)(a1 + 256) = a3;
  *(_BYTE *)(a1 + 260) = v6;
  return Caver::TargetFrame::UpdateInfo((Caver::TargetFrame *)a1);
}

