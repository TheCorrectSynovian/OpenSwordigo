/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000495F58
 * Mangled: _ZN5Caver9GUIButton12SetTextColorENS_5ColorE
 * Demangled: Caver::GUIButton::SetTextColor(Caver::Color)
 *
 * Callers: 2
 *   0x00000000001FB2E0  Caver::GUIButton::SetTextColor(Caver::Color)
 *   0x0000000000495E34  Caver::GUIButton::SetFrameTextureForState(Caver::GUIControl::State,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *
 * Referenced strings: 24
 *   insn=0x0000000000495F64 string=0x0000000000495F68 "3"
 *   insn=0x0000000000495F68 string=0x0000000000495F6C "("
 *   insn=0x0000000000495F6C string=0x0000000000495F70 "l"D9+"
 *   insn=0x0000000000495F70 string=0x0000000000495F74 "+"
 *   insn=0x0000000000495F74 string=0x0000000000495F78 "*@9)"
 *   insn=0x0000000000495F78 string=0x0000000000495F7C ")"
 *   insn=0x0000000000495F84 string=0x0000000000495F88 "l&D9"
 *   insn=0x0000000000495F84 string=0x0000000000495FB8 "t"
 *   insn=0x0000000000495F8C string=0x0000000000495F90 "A"
 *   insn=0x0000000000495F90 string=0x0000000000495F94 "l*D9_"
 *   insn=0x0000000000495F94 string=0x0000000000495F98 "_"
 *   insn=0x0000000000495F9C string=0x0000000000495FA0 "l.D9?"
 *   insn=0x0000000000495FA0 string=0x0000000000495FA4 "?"
 *   insn=0x0000000000495FB8 string=0x0000000000495FBC "h"
 *   insn=0x0000000000495FBC string=0x0000000000495FC0 "H"
 *   insn=0x0000000000495FC0 string=0x0000000000495FC4 "("
 *   insn=0x0000000000495FC4 string=0x0000000000495FC8 "h\n"
 *   insn=0x0000000000495FCC string=0x0000000000495FD0 "4"
 *   insn=0x0000000000495FD4 string=0x0000000000495FD8 ""
 *   insn=0x0000000000495FE8 string=0x0000000000495FEC "\t@"
 *   insn=0x0000000000495FF4 string=0x0000000000495FF8 ""
 *   insn=0x0000000000496008 string=0x000000000049600C "@"
 *   insn=0x000000000049601C string=0x0000000000496020 "<"
 *   insn=0x0000000000496020 string=0x00000000001F8510 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIButton::SetTextColor(__int64 result, unsigned __int8 *a2)
{
  __int64 v2; // x19
  int v3; // w9
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8

  v2 = *(_QWORD *)(result + 320);
  if ( v2 )
  {
    v3 = a2[3];
    if ( *a2 != *(unsigned __int8 *)(v2 + 264)
      || a2[1] != *(unsigned __int8 *)(v2 + 265)
      || a2[2] != *(unsigned __int8 *)(v2 + 266)
      || v3 != *(unsigned __int8 *)(v2 + 267) )
    {
      v4 = *(_QWORD **)(v2 + 280);
      *(_DWORD *)(v2 + 264) = *a2
                            | (unsigned __int16)(a2[1] << 8)
                            | (a2[2] << 16) & 0xFFFFFF
                            | ((unsigned __int8)v3 << 24);
      *(_QWORD *)(v2 + 272) = 0;
      *(_QWORD *)(v2 + 280) = 0;
      if ( v4 )
      {
        v5 = v4[1] - 1LL;
        v4[1] = v5;
        if ( !v5 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
          v6 = v4[2] - 1LL;
          v4[2] = v6;
          if ( !v6 )
            (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
        }
      }
      return Caver::GUILabel::UpdateText((Caver::GUILabel *)v2);
    }
  }
  return result;
}

